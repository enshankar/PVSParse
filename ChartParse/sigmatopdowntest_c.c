//Code generated using pvs2ir2c
#include "sigmatopdowntest_c.h"

void release_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdowntest_funtype_0_t copy_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdowntest_funtype_0_hashentry_t data = htbl->data[hashindex];
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

sigmatopdowntest_funtype_0_t dupdate_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t a, uint8_t i, bool_t v){
        sigmatopdowntest_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdowntest_funtype_0_htbl_t)safe_malloc(sizeof(struct sigmatopdowntest_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdowntest_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdowntest_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdowntest_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdowntest_funtype_0_hashentry_t * new_data = (sigmatopdowntest_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdowntest_funtype_0_hashentry_s));
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
        uint32_t hashindex = lookup_sigmatopdowntest_funtype_0(htbl, i, ihash);
        sigmatopdowntest_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

sigmatopdowntest_funtype_0_t update_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_sigmatopdowntest_funtype_0(a, i, v);
            } else {
                sigmatopdowntest_funtype_0_t x = copy_sigmatopdowntest_funtype_0(a);
                a->count--;
                return dupdate_sigmatopdowntest_funtype_0(x, i, v);
            }}

bool_t equal_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t x, sigmatopdowntest_funtype_0_t y){
        return false;}

char* json_sigmatopdowntest_funtype_0(sigmatopdowntest_funtype_0_t x){char * result = safe_malloc(36); sprintf(result, "%s", "\"sigmatopdowntest_funtype_0\""); return result;}


bool_t f_sigmatopdowntest_closure_1(struct sigmatopdowntest_closure_1_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatopdowntest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatopdowntest_funtype_0(htbl, bvar, hash);
        sigmatopdowntest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_sigmatopdowntest_closure_1(bvar);};

return h_sigmatopdowntest_closure_1(bvar);}

bool_t m_sigmatopdowntest_closure_1(struct sigmatopdowntest_closure_1_s * closure, uint8_t bvar){
        return h_sigmatopdowntest_closure_1(bvar);}

extern bool_t h_sigmatopdowntest_closure_1(uint8_t ivar_26){
        bool_t result;
        result = (bool_t)sigmatopdowntest__digit((uint8_t)ivar_26);

        return result;
}

sigmatopdowntest_closure_1_t new_sigmatopdowntest_closure_1(void){
        static struct sigmatopdowntest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdowntest_funtype_0_t, uint8_t))&f_sigmatopdowntest_closure_1, .mptr = (bool_t (*)(sigmatopdowntest_funtype_0_t, uint8_t))&m_sigmatopdowntest_closure_1, .rptr =  (void (*)(sigmatopdowntest_funtype_0_t))&release_sigmatopdowntest_closure_1, .cptr = (sigmatopdowntest_funtype_0_t (*)(sigmatopdowntest_funtype_0_t))&copy_sigmatopdowntest_closure_1};
        sigmatopdowntest_closure_1_t tmp = (sigmatopdowntest_closure_1_t) safe_malloc(sizeof(struct sigmatopdowntest_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdowntest_closure_1(sigmatopdowntest_funtype_0_t closure){
        sigmatopdowntest_closure_1_t x = (sigmatopdowntest_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdowntest_closure_1_t copy_sigmatopdowntest_closure_1(sigmatopdowntest_closure_1_t x){
        sigmatopdowntest_closure_1_t y = new_sigmatopdowntest_closure_1();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatopdowntest_funtype_0_htbl_t new_htbl = (sigmatopdowntest_funtype_0_htbl_t) safe_malloc(sizeof(struct sigmatopdowntest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdowntest_funtype_0_hashentry_t * new_data = (sigmatopdowntest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdowntest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdowntest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdowntest_closure_2(struct sigmatopdowntest_closure_2_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatopdowntest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatopdowntest_funtype_0(htbl, bvar, hash);
        sigmatopdowntest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_sigmatopdowntest_closure_2(bvar);};

return h_sigmatopdowntest_closure_2(bvar);}

bool_t m_sigmatopdowntest_closure_2(struct sigmatopdowntest_closure_2_s * closure, uint8_t bvar){
        return h_sigmatopdowntest_closure_2(bvar);}

extern bool_t h_sigmatopdowntest_closure_2(uint8_t ivar_239){
        bool_t result;
        result = (bool_t)sigmatopdowntest__any((uint8_t)ivar_239);

        return result;
}

sigmatopdowntest_closure_2_t new_sigmatopdowntest_closure_2(void){
        static struct sigmatopdowntest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdowntest_funtype_0_t, uint8_t))&f_sigmatopdowntest_closure_2, .mptr = (bool_t (*)(sigmatopdowntest_funtype_0_t, uint8_t))&m_sigmatopdowntest_closure_2, .rptr =  (void (*)(sigmatopdowntest_funtype_0_t))&release_sigmatopdowntest_closure_2, .cptr = (sigmatopdowntest_funtype_0_t (*)(sigmatopdowntest_funtype_0_t))&copy_sigmatopdowntest_closure_2};
        sigmatopdowntest_closure_2_t tmp = (sigmatopdowntest_closure_2_t) safe_malloc(sizeof(struct sigmatopdowntest_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdowntest_closure_2(sigmatopdowntest_funtype_0_t closure){
        sigmatopdowntest_closure_2_t x = (sigmatopdowntest_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdowntest_closure_2_t copy_sigmatopdowntest_closure_2(sigmatopdowntest_closure_2_t x){
        sigmatopdowntest_closure_2_t y = new_sigmatopdowntest_closure_2();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatopdowntest_funtype_0_htbl_t new_htbl = (sigmatopdowntest_funtype_0_htbl_t) safe_malloc(sizeof(struct sigmatopdowntest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdowntest_funtype_0_hashentry_t * new_data = (sigmatopdowntest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdowntest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdowntest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdowntest_closure_3(struct sigmatopdowntest_closure_3_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatopdowntest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatopdowntest_funtype_0(htbl, bvar, hash);
        sigmatopdowntest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_sigmatopdowntest_closure_3(bvar);};

return h_sigmatopdowntest_closure_3(bvar);}

bool_t m_sigmatopdowntest_closure_3(struct sigmatopdowntest_closure_3_s * closure, uint8_t bvar){
        return h_sigmatopdowntest_closure_3(bvar);}

extern bool_t h_sigmatopdowntest_closure_3(uint8_t ivar_236){
        bool_t result;
        result = (bool_t)sigmatopdowntest__any((uint8_t)ivar_236);

        return result;
}

sigmatopdowntest_closure_3_t new_sigmatopdowntest_closure_3(void){
        static struct sigmatopdowntest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdowntest_funtype_0_t, uint8_t))&f_sigmatopdowntest_closure_3, .mptr = (bool_t (*)(sigmatopdowntest_funtype_0_t, uint8_t))&m_sigmatopdowntest_closure_3, .rptr =  (void (*)(sigmatopdowntest_funtype_0_t))&release_sigmatopdowntest_closure_3, .cptr = (sigmatopdowntest_funtype_0_t (*)(sigmatopdowntest_funtype_0_t))&copy_sigmatopdowntest_closure_3};
        sigmatopdowntest_closure_3_t tmp = (sigmatopdowntest_closure_3_t) safe_malloc(sizeof(struct sigmatopdowntest_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdowntest_closure_3(sigmatopdowntest_funtype_0_t closure){
        sigmatopdowntest_closure_3_t x = (sigmatopdowntest_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdowntest_closure_3_t copy_sigmatopdowntest_closure_3(sigmatopdowntest_closure_3_t x){
        sigmatopdowntest_closure_3_t y = new_sigmatopdowntest_closure_3();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatopdowntest_funtype_0_htbl_t new_htbl = (sigmatopdowntest_funtype_0_htbl_t) safe_malloc(sizeof(struct sigmatopdowntest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdowntest_funtype_0_hashentry_t * new_data = (sigmatopdowntest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdowntest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdowntest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_sigmatopdowntest_closure_4(struct sigmatopdowntest_closure_4_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatopdowntest_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatopdowntest_funtype_0(htbl, bvar, hash);
        sigmatopdowntest_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_sigmatopdowntest_closure_4(bvar);};

return h_sigmatopdowntest_closure_4(bvar);}

bool_t m_sigmatopdowntest_closure_4(struct sigmatopdowntest_closure_4_s * closure, uint8_t bvar){
        return h_sigmatopdowntest_closure_4(bvar);}

extern bool_t h_sigmatopdowntest_closure_4(uint8_t ivar_402){
        bool_t result;
        result = (bool_t)sigmatopdowntest__digit((uint8_t)ivar_402);

        return result;
}

sigmatopdowntest_closure_4_t new_sigmatopdowntest_closure_4(void){
        static struct sigmatopdowntest_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(sigmatopdowntest_funtype_0_t, uint8_t))&f_sigmatopdowntest_closure_4, .mptr = (bool_t (*)(sigmatopdowntest_funtype_0_t, uint8_t))&m_sigmatopdowntest_closure_4, .rptr =  (void (*)(sigmatopdowntest_funtype_0_t))&release_sigmatopdowntest_closure_4, .cptr = (sigmatopdowntest_funtype_0_t (*)(sigmatopdowntest_funtype_0_t))&copy_sigmatopdowntest_closure_4};
        sigmatopdowntest_closure_4_t tmp = (sigmatopdowntest_closure_4_t) safe_malloc(sizeof(struct sigmatopdowntest_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdowntest_closure_4(sigmatopdowntest_funtype_0_t closure){
        sigmatopdowntest_closure_4_t x = (sigmatopdowntest_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdowntest_closure_4_t copy_sigmatopdowntest_closure_4(sigmatopdowntest_closure_4_t x){
        sigmatopdowntest_closure_4_t y = new_sigmatopdowntest_closure_4();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatopdowntest_funtype_0_htbl_t new_htbl = (sigmatopdowntest_funtype_0_htbl_t) safe_malloc(sizeof(struct sigmatopdowntest_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdowntest_funtype_0_hashentry_t * new_data = (sigmatopdowntest_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdowntest_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdowntest_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdowntest_array_5_t new_sigmatopdowntest_array_5(uint32_t size){
        sigmatopdowntest_array_5_t tmp = (sigmatopdowntest_array_5_t) safe_malloc(sizeof(struct sigmatopdowntest_array_5_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_sigmatopdowntest_array_5_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdowntest_array_5((sigmatopdowntest_array_5_t)x);
}

sigmatopdowntest_array_5_t copy_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x){
        sigmatopdowntest_array_5_t tmp = new_sigmatopdowntest_array_5(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x, sigmatopdowntest_array_5_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatopdowntest_array_5_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatopdowntest_array_5((sigmatopdowntest_array_5_t)x, (sigmatopdowntest_array_5_t)y);
}

char * json_sigmatopdowntest_array_5_ptr(pointer_t x, type_actual_t T){
        return json_sigmatopdowntest_array_5((sigmatopdowntest_array_5_t)x);
}

actual_sigmatopdowntest_array_5_t actual_sigmatopdowntest_array_5(){
        actual_sigmatopdowntest_array_5_t new = (actual_sigmatopdowntest_array_5_t)safe_malloc(sizeof(struct actual_sigmatopdowntest_array_5_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdowntest_array_5_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdowntest_array_5_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdowntest_array_5_ptr);
 

 
        return new;
 };

sigmatopdowntest_array_5_t update_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x, uint32_t i, uint8_t v){
        sigmatopdowntest_array_5_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_sigmatopdowntest_array_5(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

sigmatopdowntest_array_5_t upgrade_sigmatopdowntest_array_5(sigmatopdowntest_array_5_t x, uint32_t i, uint8_t v){
        sigmatopdowntest_array_5_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatopdowntest_array_5_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatopdowntest_array_5(x);}
           else {y = copy_sigmatopdowntest_array_5(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




sigmatopdowntest_record_6_t new_sigmatopdowntest_record_6(void){
        sigmatopdowntest_record_6_t tmp = (sigmatopdowntest_record_6_t) safe_malloc(sizeof(struct sigmatopdowntest_record_6_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdowntest_record_6(sigmatopdowntest_record_6_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdowntest_array_5(x->project_1);
         release_sigmatopdowntest_array_5(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdowntest_record_6_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdowntest_record_6((sigmatopdowntest_record_6_t)x);
}

sigmatopdowntest_record_6_t copy_sigmatopdowntest_record_6(sigmatopdowntest_record_6_t x){
        sigmatopdowntest_record_6_t y = new_sigmatopdowntest_record_6();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdowntest_record_6(sigmatopdowntest_record_6_t x, sigmatopdowntest_record_6_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdowntest_array_5(x->project_1, y->project_1);
        tmp = tmp && equal_sigmatopdowntest_array_5(x->project_2, y->project_2);
        return tmp;}

char * json_sigmatopdowntest_record_6(sigmatopdowntest_record_6_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdowntest_array_5(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_sigmatopdowntest_array_5(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdowntest_record_6_ptr(pointer_t x, pointer_t y, actual_sigmatopdowntest_record_6_t T){
        return equal_sigmatopdowntest_record_6((sigmatopdowntest_record_6_t)x, (sigmatopdowntest_record_6_t)y);
}

char * json_sigmatopdowntest_record_6_ptr(pointer_t x, actual_sigmatopdowntest_record_6_t T){
        return json_sigmatopdowntest_record_6((sigmatopdowntest_record_6_t)x);
}

actual_sigmatopdowntest_record_6_t actual_sigmatopdowntest_record_6(){
        actual_sigmatopdowntest_record_6_t new = (actual_sigmatopdowntest_record_6_t)safe_malloc(sizeof(struct actual_sigmatopdowntest_record_6_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdowntest_record_6_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdowntest_record_6_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdowntest_record_6_ptr);
 

 
        return new;
 };

sigmatopdowntest_record_6_t update_sigmatopdowntest_record_6_project_1(sigmatopdowntest_record_6_t x, sigmatopdowntest_array_5_t v){
        sigmatopdowntest_record_6_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_sigmatopdowntest_array_5(x->project_1);};}
        else {y = copy_sigmatopdowntest_record_6(x); x->count--; y->project_1->count--;};
        y->project_1 = (sigmatopdowntest_array_5_t)v;
        return y;}

sigmatopdowntest_record_6_t update_sigmatopdowntest_record_6_project_2(sigmatopdowntest_record_6_t x, sigmatopdowntest_array_5_t v){
        sigmatopdowntest_record_6_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_sigmatopdowntest_array_5(x->project_2);};}
        else {y = copy_sigmatopdowntest_record_6(x); x->count--; y->project_2->count--;};
        y->project_2 = (sigmatopdowntest_array_5_t)v;
        return y;}



void release_sigmatopdowntest_funtype_7(sigmatopdowntest_funtype_7_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdowntest_funtype_7_t copy_sigmatopdowntest_funtype_7(sigmatopdowntest_funtype_7_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdowntest_funtype_7(sigmatopdowntest_funtype_7_t x, sigmatopdowntest_funtype_7_t y){
        return false;}

char* json_sigmatopdowntest_funtype_7(sigmatopdowntest_funtype_7_t x){char * result = safe_malloc(36); sprintf(result, "%s", "\"sigmatopdowntest_funtype_7\""); return result;}


sigmatopdowntest_array_5_t f_sigmatopdowntest_closure_8(struct sigmatopdowntest_closure_8_s * closure, sigmatopdowntest_record_6_t bvar){
        sigmatopdowntest_array_5_t bvar_1;
        bvar_1 = (sigmatopdowntest_array_5_t)bvar->project_1;
        bvar->project_1->count++;
        sigmatopdowntest_array_5_t bvar_2;
        bvar_2 = (sigmatopdowntest_array_5_t)bvar->project_2;
        bvar->project_2->count++;
        release_sigmatopdowntest_record_6(bvar);
        sigmatopdowntest_array_5_t result = h_sigmatopdowntest_closure_8(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2); 
        release_sigmatopdowntest_array_5(bvar_1);
        release_sigmatopdowntest_array_5(bvar_2);
        return result;}

sigmatopdowntest_array_5_t m_sigmatopdowntest_closure_8(struct sigmatopdowntest_closure_8_s * closure, sigmatopdowntest_array_5_t bvar_1, sigmatopdowntest_array_5_t bvar_2){
        return h_sigmatopdowntest_closure_8(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2);}

extern sigmatopdowntest_array_5_t h_sigmatopdowntest_closure_8(sigmatopdowntest_array_5_t ivar_26, sigmatopdowntest_array_5_t ivar_27, uint8_t ivar_1, uint8_t ivar_2){
        sigmatopdowntest_array_5_t result;
        mpz_t ivar_38;
        mpz_init(ivar_38);
        uint32_t size487919;
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
        size487919 = (uint32_t)ivar_35;
        size487919 += 0;
        result = new_sigmatopdowntest_array_5(size487919);
        for (uint32_t index487916 = 0; index487916 < size487919; index487916++){
             mpz_t ivar_38;
             mpz_init(ivar_38);
             mpz_set_ui(ivar_38, index487916);
             bool_t ivar_42;
             int64_t tmp487917 = mpz_cmp_ui(ivar_38, ivar_1);
             ivar_42 = (tmp487917 < 0);
             if (ivar_42){  
           uint8_t ivar_49;
           //copying to uint8 from mpz;
           ivar_49 = (uint8_t)mpz_get_ui(ivar_38);
           mpz_clear(ivar_38);
           result->elems[index487916] = (uint8_t)ivar_26->elems[ivar_49];
} else {
             
           uint8_t ivar_59;
           mpz_t tmp487918;
           mpz_init(tmp487918);
           mpz_sub_ui(tmp487918, ivar_38, ivar_1);
           ivar_59 = (uint8_t) mpz_get_ui(tmp487918);
           mpz_clear(tmp487918);
           result->elems[index487916] = (uint8_t)ivar_27->elems[ivar_59];
};
        };
        release_sigmatopdowntest_array_5(ivar_27);
        release_sigmatopdowntest_array_5(ivar_26);

        return result;
}

sigmatopdowntest_closure_8_t new_sigmatopdowntest_closure_8(void){
        static struct sigmatopdowntest_funtype_7_ftbl_s ftbl = {.fptr = (sigmatopdowntest_array_5_t (*)(sigmatopdowntest_funtype_7_t, sigmatopdowntest_record_6_t))&f_sigmatopdowntest_closure_8, .mptr = (sigmatopdowntest_array_5_t (*)(sigmatopdowntest_funtype_7_t, sigmatopdowntest_array_5_t, sigmatopdowntest_array_5_t))&m_sigmatopdowntest_closure_8, .rptr =  (void (*)(sigmatopdowntest_funtype_7_t))&release_sigmatopdowntest_closure_8, .cptr = (sigmatopdowntest_funtype_7_t (*)(sigmatopdowntest_funtype_7_t))&copy_sigmatopdowntest_closure_8};
        sigmatopdowntest_closure_8_t tmp = (sigmatopdowntest_closure_8_t) safe_malloc(sizeof(struct sigmatopdowntest_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdowntest_closure_8(sigmatopdowntest_funtype_7_t closure){
        sigmatopdowntest_closure_8_t x = (sigmatopdowntest_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdowntest_closure_8_t copy_sigmatopdowntest_closure_8(sigmatopdowntest_closure_8_t x){
        sigmatopdowntest_closure_8_t y = new_sigmatopdowntest_closure_8();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        y->fvar_2 = (uint8_t)x->fvar_2;
        if (x->htbl != NULL){
            sigmatopdowntest_funtype_7_htbl_t new_htbl = (sigmatopdowntest_funtype_7_htbl_t) safe_malloc(sizeof(struct sigmatopdowntest_funtype_7_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdowntest_funtype_7_hashentry_t * new_data = (sigmatopdowntest_funtype_7_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdowntest_funtype_7_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdowntest_funtype_7_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdowntest_array_9_t new_sigmatopdowntest_array_9(uint32_t size){
        sigmatopdowntest_array_9_t tmp = (sigmatopdowntest_array_9_t) safe_malloc(sizeof(struct sigmatopdowntest_array_9_s) + (size * sizeof(sigmatopdown__peg_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatopdown__peg_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatopdowntest_array_9_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdowntest_array_9((sigmatopdowntest_array_9_t)x);
}

sigmatopdowntest_array_9_t copy_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x){
        sigmatopdowntest_array_9_t tmp = new_sigmatopdowntest_array_9(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x, sigmatopdowntest_array_9_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatopdown__peg_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatopdown__peg_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatopdowntest_array_9_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatopdowntest_array_9((sigmatopdowntest_array_9_t)x, (sigmatopdowntest_array_9_t)y);
}

char * json_sigmatopdowntest_array_9_ptr(pointer_t x, type_actual_t T){
        return json_sigmatopdowntest_array_9((sigmatopdowntest_array_9_t)x);
}

actual_sigmatopdowntest_array_9_t actual_sigmatopdowntest_array_9(){
        actual_sigmatopdowntest_array_9_t new = (actual_sigmatopdowntest_array_9_t)safe_malloc(sizeof(struct actual_sigmatopdowntest_array_9_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdowntest_array_9_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdowntest_array_9_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdowntest_array_9_ptr);
 

 
        return new;
 };

sigmatopdowntest_array_9_t update_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x, uint32_t i, sigmatopdown__peg_adt_t v){
         sigmatopdowntest_array_9_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatopdowntest_array_9(x);
                      x->count--;};
        sigmatopdown__peg_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__peg_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatopdowntest_array_9_t upgrade_sigmatopdowntest_array_9(sigmatopdowntest_array_9_t x, uint32_t i, sigmatopdown__peg_adt_t v){
         sigmatopdowntest_array_9_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatopdowntest_array_9_s) + (newmax * sizeof(sigmatopdown__peg_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatopdowntest_array_9(x);} else {y = copy_sigmatopdowntest_array_9(x);
                      x->count--;};
        sigmatopdown__peg_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__peg_adt(yelems[i]);};
         yelems[i] = v;
         return y;}



void release_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdowntest_funtype_10_t copy_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdowntest_funtype_10_hashentry_t data = htbl->data[hashindex];
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

sigmatopdowntest_funtype_10_t dupdate_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t a, uint8_t i, sigmatopdown__ent_adt_t v){
        sigmatopdowntest_funtype_10_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdowntest_funtype_10_htbl_t)safe_malloc(sizeof(struct sigmatopdowntest_funtype_10_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdowntest_funtype_10_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdowntest_funtype_10_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdowntest_funtype_10_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdowntest_funtype_10_hashentry_t * new_data = (sigmatopdowntest_funtype_10_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdowntest_funtype_10_hashentry_s));
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
        uint32_t hashindex = lookup_sigmatopdowntest_funtype_10(htbl, i, ihash);
        sigmatopdowntest_funtype_10_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (sigmatopdown__ent_adt_t)v; htbl->num_entries++;}
            else {sigmatopdown__ent_adt_t tempvalue;tempvalue = (sigmatopdown__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (sigmatopdown__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_sigmatopdown__ent_adt(tempvalue);};
        return a;

}

sigmatopdowntest_funtype_10_t update_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t a, uint8_t i, sigmatopdown__ent_adt_t v){
        if (a->count == 1){
                return dupdate_sigmatopdowntest_funtype_10(a, i, v);
            } else {
                sigmatopdowntest_funtype_10_t x = copy_sigmatopdowntest_funtype_10(a);
                a->count--;
                return dupdate_sigmatopdowntest_funtype_10(x, i, v);
            }}

bool_t equal_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t x, sigmatopdowntest_funtype_10_t y){
        return false;}

char* json_sigmatopdowntest_funtype_10(sigmatopdowntest_funtype_10_t x){char * result = safe_malloc(37); sprintf(result, "%s", "\"sigmatopdowntest_funtype_10\""); return result;}


sigmatopdown__ent_adt_t f_sigmatopdowntest_closure_11(struct sigmatopdowntest_closure_11_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatopdowntest_funtype_10_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatopdowntest_funtype_10(htbl, bvar, hash);
        sigmatopdowntest_funtype_10_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            sigmatopdown__ent_adt_t result;
            result = (sigmatopdown__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_sigmatopdowntest_closure_11(bvar);};

return h_sigmatopdowntest_closure_11(bvar);}

sigmatopdown__ent_adt_t m_sigmatopdowntest_closure_11(struct sigmatopdowntest_closure_11_s * closure, uint8_t bvar){
        return h_sigmatopdowntest_closure_11(bvar);}

extern sigmatopdown__ent_adt_t h_sigmatopdowntest_closure_11(uint8_t ivar_9){
        sigmatopdown__ent_adt_t result;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__pending();
        if (result != NULL) result->count++;

        return result;
}

sigmatopdowntest_closure_11_t new_sigmatopdowntest_closure_11(void){
        static struct sigmatopdowntest_funtype_10_ftbl_s ftbl = {.fptr = (sigmatopdown__ent_adt_t (*)(sigmatopdowntest_funtype_10_t, uint8_t))&f_sigmatopdowntest_closure_11, .mptr = (sigmatopdown__ent_adt_t (*)(sigmatopdowntest_funtype_10_t, uint8_t))&m_sigmatopdowntest_closure_11, .rptr =  (void (*)(sigmatopdowntest_funtype_10_t))&release_sigmatopdowntest_closure_11, .cptr = (sigmatopdowntest_funtype_10_t (*)(sigmatopdowntest_funtype_10_t))&copy_sigmatopdowntest_closure_11};
        sigmatopdowntest_closure_11_t tmp = (sigmatopdowntest_closure_11_t) safe_malloc(sizeof(struct sigmatopdowntest_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdowntest_closure_11(sigmatopdowntest_funtype_10_t closure){
        sigmatopdowntest_closure_11_t x = (sigmatopdowntest_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdowntest_closure_11_t copy_sigmatopdowntest_closure_11(sigmatopdowntest_closure_11_t x){
        sigmatopdowntest_closure_11_t y = new_sigmatopdowntest_closure_11();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            sigmatopdowntest_funtype_10_htbl_t new_htbl = (sigmatopdowntest_funtype_10_htbl_t) safe_malloc(sizeof(struct sigmatopdowntest_funtype_10_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdowntest_funtype_10_hashentry_t * new_data = (sigmatopdowntest_funtype_10_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdowntest_funtype_10_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdowntest_funtype_10_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdowntest_funtype_12_t copy_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t x){return x->ftbl->cptr(x);}

uint32_t lookup_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        sigmatopdowntest_funtype_12_hashentry_t data = htbl->data[hashindex];
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

sigmatopdowntest_funtype_12_t dupdate_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t a, uint8_t i, sigmatopdowntest_funtype_10_t v){
        sigmatopdowntest_funtype_12_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (sigmatopdowntest_funtype_12_htbl_t)safe_malloc(sizeof(struct sigmatopdowntest_funtype_12_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (sigmatopdowntest_funtype_12_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct sigmatopdowntest_funtype_12_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        sigmatopdowntest_funtype_12_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                sigmatopdowntest_funtype_12_hashentry_t * new_data = (sigmatopdowntest_funtype_12_hashentry_t *)safe_malloc(new_size * sizeof(struct sigmatopdowntest_funtype_12_hashentry_s));
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
                                new_data[new_loc].value = (sigmatopdowntest_funtype_10_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_sigmatopdowntest_funtype_12(htbl, i, ihash);
        sigmatopdowntest_funtype_12_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (sigmatopdowntest_funtype_10_t)v; htbl->num_entries++;}
            else {sigmatopdowntest_funtype_10_t tempvalue;tempvalue = (sigmatopdowntest_funtype_10_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (sigmatopdowntest_funtype_10_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_sigmatopdowntest_funtype_10(tempvalue);};
        return a;

}

sigmatopdowntest_funtype_12_t update_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t a, uint8_t i, sigmatopdowntest_funtype_10_t v){
        if (a->count == 1){
                return dupdate_sigmatopdowntest_funtype_12(a, i, v);
            } else {
                sigmatopdowntest_funtype_12_t x = copy_sigmatopdowntest_funtype_12(a);
                a->count--;
                return dupdate_sigmatopdowntest_funtype_12(x, i, v);
            }}

bool_t equal_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t x, sigmatopdowntest_funtype_12_t y){
        return false;}

char* json_sigmatopdowntest_funtype_12(sigmatopdowntest_funtype_12_t x){char * result = safe_malloc(37); sprintf(result, "%s", "\"sigmatopdowntest_funtype_12\""); return result;}


sigmatopdowntest_record_13_t new_sigmatopdowntest_record_13(void){
        sigmatopdowntest_record_13_t tmp = (sigmatopdowntest_record_13_t) safe_malloc(sizeof(struct sigmatopdowntest_record_13_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdowntest_record_13(sigmatopdowntest_record_13_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdowntest_funtype_12(x->scaf);
         release_sigmatopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdowntest_record_13_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdowntest_record_13((sigmatopdowntest_record_13_t)x);
}

sigmatopdowntest_record_13_t copy_sigmatopdowntest_record_13(sigmatopdowntest_record_13_t x){
        sigmatopdowntest_record_13_t y = new_sigmatopdowntest_record_13();
        y->depth = (uint8_t)x->depth;
        y->lflag = (bool_t)x->lflag;
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_sigmatopdowntest_record_13(sigmatopdowntest_record_13_t x, sigmatopdowntest_record_13_t y){
        bool_t tmp = true;
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && x->lflag == y->lflag;
        tmp = tmp && equal_sigmatopdowntest_funtype_12(x->scaf, y->scaf);
        tmp = tmp && equal_sigmatopdown__ent_adt(x->stack, y->stack);
        return tmp;}

char * json_sigmatopdowntest_record_13(sigmatopdowntest_record_13_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(17);
         sprintf(fld0, "\"depth\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->depth));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"lflag\" : ");
        tmp[1] = safe_strcat(fld1, json_bool(x->lflag));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"scaf\" : ");
        tmp[2] = safe_strcat(fld2, json_sigmatopdowntest_funtype_12(x->scaf));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"stack\" : ");
        tmp[3] = safe_strcat(fld3, json_sigmatopdown__ent_adt(x->stack));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_sigmatopdowntest_record_13_ptr(pointer_t x, pointer_t y, actual_sigmatopdowntest_record_13_t T){
        return equal_sigmatopdowntest_record_13((sigmatopdowntest_record_13_t)x, (sigmatopdowntest_record_13_t)y);
}

char * json_sigmatopdowntest_record_13_ptr(pointer_t x, actual_sigmatopdowntest_record_13_t T){
        return json_sigmatopdowntest_record_13((sigmatopdowntest_record_13_t)x);
}

actual_sigmatopdowntest_record_13_t actual_sigmatopdowntest_record_13(){
        actual_sigmatopdowntest_record_13_t new = (actual_sigmatopdowntest_record_13_t)safe_malloc(sizeof(struct actual_sigmatopdowntest_record_13_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdowntest_record_13_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdowntest_record_13_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdowntest_record_13_ptr);
 

 
        return new;
 };

sigmatopdowntest_record_13_t update_sigmatopdowntest_record_13_depth(sigmatopdowntest_record_13_t x, uint8_t v){
        sigmatopdowntest_record_13_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdowntest_record_13(x); x->count--;};
        y->depth = (uint8_t)v;
        return y;}

sigmatopdowntest_record_13_t update_sigmatopdowntest_record_13_lflag(sigmatopdowntest_record_13_t x, bool_t v){
        sigmatopdowntest_record_13_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdowntest_record_13(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}

sigmatopdowntest_record_13_t update_sigmatopdowntest_record_13_scaf(sigmatopdowntest_record_13_t x, sigmatopdowntest_funtype_12_t v){
        sigmatopdowntest_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_sigmatopdowntest_funtype_12(x->scaf);};}
        else {y = copy_sigmatopdowntest_record_13(x); x->count--; y->scaf->count--;};
        y->scaf = (sigmatopdowntest_funtype_12_t)v;
        return y;}

sigmatopdowntest_record_13_t update_sigmatopdowntest_record_13_stack(sigmatopdowntest_record_13_t x, sigmatopdown__ent_adt_t v){
        sigmatopdowntest_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_sigmatopdown__ent_adt(x->stack);};}
        else {y = copy_sigmatopdowntest_record_13(x); x->count--; y->stack->count--;};
        y->stack = (sigmatopdown__ent_adt_t)v;
        return y;}




sigmatopdowntest_funtype_10_t f_sigmatopdowntest_closure_14(struct sigmatopdowntest_closure_14_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        sigmatopdowntest_funtype_12_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_sigmatopdowntest_funtype_12(htbl, bvar, hash);
        sigmatopdowntest_funtype_12_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            sigmatopdowntest_funtype_10_t result;
            result = (sigmatopdowntest_funtype_10_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_sigmatopdowntest_closure_14(bvar, closure->fvar_1, closure->fvar_2);};

return h_sigmatopdowntest_closure_14(bvar, closure->fvar_1, closure->fvar_2);}

sigmatopdowntest_funtype_10_t m_sigmatopdowntest_closure_14(struct sigmatopdowntest_closure_14_s * closure, uint8_t bvar){
        return h_sigmatopdowntest_closure_14(bvar, closure->fvar_1, closure->fvar_2);}

extern sigmatopdowntest_funtype_10_t h_sigmatopdowntest_closure_14(uint8_t ivar_20, uint8_t ivar_1, sigmatopdowntest_funtype_10_t ivar_6){
        sigmatopdowntest_funtype_10_t result;
        //copying to sigmatopdowntest_funtype_10 from sigmatopdowntest_funtype_10;
        result = (sigmatopdowntest_funtype_10_t)ivar_6;
        if (result != NULL) result->count++;

        return result;
}

sigmatopdowntest_closure_14_t new_sigmatopdowntest_closure_14(void){
        static struct sigmatopdowntest_funtype_12_ftbl_s ftbl = {.fptr = (sigmatopdowntest_funtype_10_t (*)(sigmatopdowntest_funtype_12_t, uint8_t))&f_sigmatopdowntest_closure_14, .mptr = (sigmatopdowntest_funtype_10_t (*)(sigmatopdowntest_funtype_12_t, uint8_t))&m_sigmatopdowntest_closure_14, .rptr =  (void (*)(sigmatopdowntest_funtype_12_t))&release_sigmatopdowntest_closure_14, .cptr = (sigmatopdowntest_funtype_12_t (*)(sigmatopdowntest_funtype_12_t))&copy_sigmatopdowntest_closure_14};
        sigmatopdowntest_closure_14_t tmp = (sigmatopdowntest_closure_14_t) safe_malloc(sizeof(struct sigmatopdowntest_closure_14_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_sigmatopdowntest_closure_14(sigmatopdowntest_funtype_12_t closure){
        sigmatopdowntest_closure_14_t x = (sigmatopdowntest_closure_14_t)closure;
        x->count--;
        if (x->count <= 0){
         release_sigmatopdowntest_funtype_10(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

sigmatopdowntest_closure_14_t copy_sigmatopdowntest_closure_14(sigmatopdowntest_closure_14_t x){
        sigmatopdowntest_closure_14_t y = new_sigmatopdowntest_closure_14();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            sigmatopdowntest_funtype_12_htbl_t new_htbl = (sigmatopdowntest_funtype_12_htbl_t) safe_malloc(sizeof(struct sigmatopdowntest_funtype_12_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            sigmatopdowntest_funtype_12_hashentry_t * new_data = (sigmatopdowntest_funtype_12_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct sigmatopdowntest_funtype_12_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct sigmatopdowntest_funtype_12_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


sigmatopdowntest_array_15_t new_sigmatopdowntest_array_15(uint32_t size){
        sigmatopdowntest_array_15_t tmp = (sigmatopdowntest_array_15_t) safe_malloc(sizeof(struct sigmatopdowntest_array_15_s) + (size * sizeof(sigmatopdown__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatopdown__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatopdowntest_array_15_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdowntest_array_15((sigmatopdowntest_array_15_t)x);
}

sigmatopdowntest_array_15_t copy_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x){
        sigmatopdowntest_array_15_t tmp = new_sigmatopdowntest_array_15(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x, sigmatopdowntest_array_15_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatopdown__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatopdown__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatopdowntest_array_15_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatopdowntest_array_15((sigmatopdowntest_array_15_t)x, (sigmatopdowntest_array_15_t)y);
}

char * json_sigmatopdowntest_array_15_ptr(pointer_t x, type_actual_t T){
        return json_sigmatopdowntest_array_15((sigmatopdowntest_array_15_t)x);
}

actual_sigmatopdowntest_array_15_t actual_sigmatopdowntest_array_15(){
        actual_sigmatopdowntest_array_15_t new = (actual_sigmatopdowntest_array_15_t)safe_malloc(sizeof(struct actual_sigmatopdowntest_array_15_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdowntest_array_15_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdowntest_array_15_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdowntest_array_15_ptr);
 

 
        return new;
 };

sigmatopdowntest_array_15_t update_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatopdowntest_array_15_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatopdowntest_array_15(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatopdowntest_array_15_t upgrade_sigmatopdowntest_array_15(sigmatopdowntest_array_15_t x, uint32_t i, sigmatopdown__ent_adt_t v){
         sigmatopdowntest_array_15_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatopdowntest_array_15_s) + (newmax * sizeof(sigmatopdown__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatopdowntest_array_15(x);} else {y = copy_sigmatopdowntest_array_15(x);
                      x->count--;};
        sigmatopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




sigmatopdowntest_array_16_t new_sigmatopdowntest_array_16(uint32_t size){
        sigmatopdowntest_array_16_t tmp = (sigmatopdowntest_array_16_t) safe_malloc(sizeof(struct sigmatopdowntest_array_16_s) + (size * sizeof(sigmatopdowntest_array_15_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_sigmatopdowntest_array_15(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_sigmatopdowntest_array_16_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdowntest_array_16((sigmatopdowntest_array_16_t)x);
}

sigmatopdowntest_array_16_t copy_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x){
        sigmatopdowntest_array_16_t tmp = new_sigmatopdowntest_array_16(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x, sigmatopdowntest_array_16_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_sigmatopdowntest_array_15(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_sigmatopdowntest_array_15(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_sigmatopdowntest_array_16_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_sigmatopdowntest_array_16((sigmatopdowntest_array_16_t)x, (sigmatopdowntest_array_16_t)y);
}

char * json_sigmatopdowntest_array_16_ptr(pointer_t x, type_actual_t T){
        return json_sigmatopdowntest_array_16((sigmatopdowntest_array_16_t)x);
}

actual_sigmatopdowntest_array_16_t actual_sigmatopdowntest_array_16(){
        actual_sigmatopdowntest_array_16_t new = (actual_sigmatopdowntest_array_16_t)safe_malloc(sizeof(struct actual_sigmatopdowntest_array_16_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdowntest_array_16_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdowntest_array_16_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdowntest_array_16_ptr);
 

 
        return new;
 };

sigmatopdowntest_array_16_t update_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x, uint32_t i, sigmatopdowntest_array_15_t v){
         sigmatopdowntest_array_16_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_sigmatopdowntest_array_16(x);
                      x->count--;};
        sigmatopdowntest_array_15_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdowntest_array_15(yelems[i]);};
         yelems[i] = v;
         return y;}

sigmatopdowntest_array_16_t upgrade_sigmatopdowntest_array_16(sigmatopdowntest_array_16_t x, uint32_t i, sigmatopdowntest_array_15_t v){
         sigmatopdowntest_array_16_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct sigmatopdowntest_array_16_s) + (newmax * sizeof(sigmatopdowntest_array_15_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_sigmatopdowntest_array_16(x);} else {y = copy_sigmatopdowntest_array_16(x);
                      x->count--;};
        sigmatopdowntest_array_15_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_sigmatopdowntest_array_15(yelems[i]);};
         yelems[i] = v;
         return y;}




sigmatopdowntest_record_17_t new_sigmatopdowntest_record_17(void){
        sigmatopdowntest_record_17_t tmp = (sigmatopdowntest_record_17_t) safe_malloc(sizeof(struct sigmatopdowntest_record_17_s));
        tmp->count = 1;
        return tmp;}

void release_sigmatopdowntest_record_17(sigmatopdowntest_record_17_t x){
        x->count--;
        if (x->count <= 0){
         release_sigmatopdowntest_array_16(x->scaf);
         release_sigmatopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_sigmatopdowntest_record_17_ptr(pointer_t x, type_actual_t T){
        release_sigmatopdowntest_record_17((sigmatopdowntest_record_17_t)x);
}

sigmatopdowntest_record_17_t copy_sigmatopdowntest_record_17(sigmatopdowntest_record_17_t x){
        sigmatopdowntest_record_17_t y = new_sigmatopdowntest_record_17();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_sigmatopdowntest_record_17(sigmatopdowntest_record_17_t x, sigmatopdowntest_record_17_t y){
        bool_t tmp = true;
        tmp = tmp && equal_sigmatopdowntest_array_16(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_sigmatopdown__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_sigmatopdowntest_record_17(sigmatopdowntest_record_17_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_sigmatopdowntest_array_16(x->scaf));
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

bool_t equal_sigmatopdowntest_record_17_ptr(pointer_t x, pointer_t y, actual_sigmatopdowntest_record_17_t T){
        return equal_sigmatopdowntest_record_17((sigmatopdowntest_record_17_t)x, (sigmatopdowntest_record_17_t)y);
}

char * json_sigmatopdowntest_record_17_ptr(pointer_t x, actual_sigmatopdowntest_record_17_t T){
        return json_sigmatopdowntest_record_17((sigmatopdowntest_record_17_t)x);
}

actual_sigmatopdowntest_record_17_t actual_sigmatopdowntest_record_17(){
        actual_sigmatopdowntest_record_17_t new = (actual_sigmatopdowntest_record_17_t)safe_malloc(sizeof(struct actual_sigmatopdowntest_record_17_s));
        new->equal_ptr = (equal_ptr_t)(*equal_sigmatopdowntest_record_17_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_sigmatopdowntest_record_17_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_sigmatopdowntest_record_17_ptr);
 

 
        return new;
 };

sigmatopdowntest_record_17_t update_sigmatopdowntest_record_17_scaf(sigmatopdowntest_record_17_t x, sigmatopdowntest_array_16_t v){
        sigmatopdowntest_record_17_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_sigmatopdowntest_array_16(x->scaf);};}
        else {y = copy_sigmatopdowntest_record_17(x); x->count--; y->scaf->count--;};
        y->scaf = (sigmatopdowntest_array_16_t)v;
        return y;}

sigmatopdowntest_record_17_t update_sigmatopdowntest_record_17_depth(sigmatopdowntest_record_17_t x, uint64_t v){
        sigmatopdowntest_record_17_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdowntest_record_17(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

sigmatopdowntest_record_17_t update_sigmatopdowntest_record_17_stack(sigmatopdowntest_record_17_t x, sigmatopdown__ent_adt_t v){
        sigmatopdowntest_record_17_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_sigmatopdown__ent_adt(x->stack);};}
        else {y = copy_sigmatopdowntest_record_17(x); x->count--; y->stack->count--;};
        y->stack = (sigmatopdown__ent_adt_t)v;
        return y;}

sigmatopdowntest_record_17_t update_sigmatopdowntest_record_17_lflag(sigmatopdowntest_record_17_t x, bool_t v){
        sigmatopdowntest_record_17_t y;
        if (x->count == 1){y = x;}
        else {y = copy_sigmatopdowntest_record_17(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}



void release_sigmatopdowntest_funtype_18(sigmatopdowntest_funtype_18_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

sigmatopdowntest_funtype_18_t copy_sigmatopdowntest_funtype_18(sigmatopdowntest_funtype_18_t x){return x->ftbl->cptr(x);}

bool_t equal_sigmatopdowntest_funtype_18(sigmatopdowntest_funtype_18_t x, sigmatopdowntest_funtype_18_t y){
        return false;}

char* json_sigmatopdowntest_funtype_18(sigmatopdowntest_funtype_18_t x){char * result = safe_malloc(37); sprintf(result, "%s", "\"sigmatopdowntest_funtype_18\""); return result;}

extern bool_t sigmatopdowntest__digit(uint8_t ivar_1){
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

extern bool_t sigmatopdowntest__any(uint8_t ivar_1){
        bool_t  result;
        result = (bool_t) true;

        
        return result;
}

extern sigmatopdown__peg_adt_t sigmatopdowntest__pyaml(uint8_t ivar_1){
        sigmatopdown__peg_adt_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             uint8_t ivar_9;
             ivar_9 = (uint8_t)1;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)3;
             result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_9, (uint8_t)ivar_10);
} else {
        
             bool_t ivar_11;
             uint8_t ivar_13;
             ivar_13 = (uint8_t)1;
             ivar_11 = (ivar_1 == ivar_13);
             if (ivar_11){  
           uint8_t ivar_18;
           ivar_18 = (uint8_t)2;
           uint8_t ivar_19;
           ivar_19 = (uint8_t)1;
           result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_18, (uint8_t)ivar_19);
} else {
             
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)2;
           ivar_20 = (ivar_1 == ivar_22);
           if (ivar_20){   
           sigmatopdowntest_funtype_0_t ivar_30;
           sigmatopdowntest_closure_1_t cl487783;
           cl487783 = new_sigmatopdowntest_closure_1();
           ivar_30 = (sigmatopdowntest_funtype_0_t)cl487783;
           result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_30);
} else {
           
           bool_t ivar_32;
           uint8_t ivar_34;
           ivar_34 = (uint8_t)3;
           ivar_32 = (ivar_1 == ivar_34);
           if (ivar_32){    
            uint8_t ivar_39;
            ivar_39 = (uint8_t)4;
            uint8_t ivar_40;
            ivar_40 = (uint8_t)35;
            result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_39, (uint8_t)ivar_40);
} else {
           
            bool_t ivar_41;
            uint8_t ivar_43;
            ivar_43 = (uint8_t)4;
            ivar_41 = (ivar_1 == ivar_43);
            if (ivar_41){     
             uint8_t ivar_48;
             ivar_48 = (uint8_t)5;
             uint8_t ivar_49;
             ivar_49 = (uint8_t)11;
             result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_48, (uint8_t)ivar_49);
} else {
            
             bool_t ivar_50;
             uint8_t ivar_52;
             ivar_52 = (uint8_t)5;
             ivar_50 = (ivar_1 == ivar_52);
             if (ivar_50){      
              uint8_t ivar_57;
              ivar_57 = (uint8_t)6;
              uint8_t ivar_58;
              ivar_58 = (uint8_t)7;
              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_57, (uint8_t)ivar_58);
} else {
             
              bool_t ivar_59;
              uint8_t ivar_61;
              ivar_61 = (uint8_t)6;
              ivar_59 = (ivar_1 == ivar_61);
              if (ivar_59){       
               uint8_t ivar_65;
               ivar_65 = (uint8_t)123;
               result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_65);
} else {
              
               bool_t ivar_66;
               uint8_t ivar_68;
               ivar_68 = (uint8_t)7;
               ivar_66 = (ivar_1 == ivar_68);
               if (ivar_66){        
                uint8_t ivar_73;
                ivar_73 = (uint8_t)8;
                uint8_t ivar_74;
                ivar_74 = (uint8_t)10;
                result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_73, (uint8_t)ivar_74);
} else {
               
                bool_t ivar_75;
                uint8_t ivar_77;
                ivar_77 = (uint8_t)8;
                ivar_75 = (ivar_1 == ivar_77);
                if (ivar_75){         
                 uint8_t ivar_82;
                 ivar_82 = (uint8_t)9;
                 uint8_t ivar_83;
                 ivar_83 = (uint8_t)7;
                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_82, (uint8_t)ivar_83);
} else {
                
                 bool_t ivar_84;
                 uint8_t ivar_86;
                 ivar_86 = (uint8_t)9;
                 ivar_84 = (ivar_1 == ivar_86);
                 if (ivar_84){          
                  uint8_t ivar_90;
                  ivar_90 = (uint8_t)32;
                  result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_90);
} else {
                 
                  bool_t ivar_91;
                  uint8_t ivar_93;
                  ivar_93 = (uint8_t)10;
                  ivar_91 = (ivar_1 == ivar_93);
                  if (ivar_91){           
                   result = (sigmatopdown__peg_adt_t)sigmatopdown__epsilon();
                   if (result != NULL) result->count++;
} else {
                  
                   bool_t ivar_95;
                   uint8_t ivar_97;
                   ivar_97 = (uint8_t)11;
                   ivar_95 = (ivar_1 == ivar_97);
                   if (ivar_95){            
                    uint8_t ivar_102;
                    ivar_102 = (uint8_t)12;
                    uint8_t ivar_103;
                    ivar_103 = (uint8_t)14;
                    result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_102, (uint8_t)ivar_103);
} else {
                   
                    bool_t ivar_104;
                    uint8_t ivar_106;
                    ivar_106 = (uint8_t)12;
                    ivar_104 = (ivar_1 == ivar_106);
                    if (ivar_104){             
                     uint8_t ivar_111;
                     ivar_111 = (uint8_t)13;
                     uint8_t ivar_112;
                     ivar_112 = (uint8_t)7;
                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_111, (uint8_t)ivar_112);
} else {
                    
                     bool_t ivar_113;
                     uint8_t ivar_115;
                     ivar_115 = (uint8_t)13;
                     ivar_113 = (ivar_1 == ivar_115);
                     if (ivar_113){              
                      uint8_t ivar_119;
                      ivar_119 = (uint8_t)125;
                      result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_119);
} else {
                     
                      bool_t ivar_120;
                      uint8_t ivar_122;
                      ivar_122 = (uint8_t)14;
                      ivar_120 = (ivar_1 == ivar_122);
                      if (ivar_120){               
                       uint8_t ivar_127;
                       ivar_127 = (uint8_t)15;
                       uint8_t ivar_128;
                       ivar_128 = (uint8_t)31;
                       result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_127, (uint8_t)ivar_128);
} else {
                      
                       bool_t ivar_129;
                       uint8_t ivar_131;
                       ivar_131 = (uint8_t)15;
                       ivar_129 = (ivar_1 == ivar_131);
                       if (ivar_129){                
                        uint8_t ivar_136;
                        ivar_136 = (uint8_t)16;
                        uint8_t ivar_137;
                        ivar_137 = (uint8_t)28;
                        result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_136, (uint8_t)ivar_137);
} else {
                       
                        bool_t ivar_138;
                        uint8_t ivar_140;
                        ivar_140 = (uint8_t)16;
                        ivar_138 = (ivar_1 == ivar_140);
                        if (ivar_138){                 
                         uint8_t ivar_145;
                         ivar_145 = (uint8_t)1;
                         uint8_t ivar_146;
                         ivar_146 = (uint8_t)17;
                         result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_145, (uint8_t)ivar_146);
} else {
                        
                         bool_t ivar_147;
                         uint8_t ivar_149;
                         ivar_149 = (uint8_t)17;
                         ivar_147 = (ivar_1 == ivar_149);
                         if (ivar_147){                  
                          uint8_t ivar_154;
                          ivar_154 = (uint8_t)18;
                          uint8_t ivar_155;
                          ivar_155 = (uint8_t)7;
                          result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_154, (uint8_t)ivar_155);
} else {
                         
                          bool_t ivar_156;
                          uint8_t ivar_158;
                          ivar_158 = (uint8_t)18;
                          ivar_156 = (ivar_1 == ivar_158);
                          if (ivar_156){                   
                           uint8_t ivar_163;
                           ivar_163 = (uint8_t)19;
                           uint8_t ivar_164;
                           ivar_164 = (uint8_t)25;
                           result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_163, (uint8_t)ivar_164);
} else {
                          
                           bool_t ivar_165;
                           uint8_t ivar_167;
                           ivar_167 = (uint8_t)19;
                           ivar_165 = (ivar_1 == ivar_167);
                           if (ivar_165){                    
                            uint8_t ivar_171;
                            ivar_171 = (uint8_t)39;
                            result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_171);
} else {
                           
                            bool_t ivar_172;
                            uint8_t ivar_174;
                            ivar_174 = (uint8_t)20;
                            ivar_172 = (ivar_1 == ivar_174);
                            if (ivar_172){                     
                             uint8_t ivar_179;
                             ivar_179 = (uint8_t)21;
                             uint8_t ivar_180;
                             ivar_180 = (uint8_t)25;
                             result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_179, (uint8_t)ivar_180);
} else {
                            
                             bool_t ivar_181;
                             uint8_t ivar_183;
                             ivar_183 = (uint8_t)21;
                             ivar_181 = (ivar_1 == ivar_183);
                             if (ivar_181){                      
                              uint8_t ivar_188;
                              ivar_188 = (uint8_t)22;
                              uint8_t ivar_189;
                              ivar_189 = (uint8_t)20;
                              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_188, (uint8_t)ivar_189);
} else {
                             
                              bool_t ivar_190;
                              uint8_t ivar_192;
                              ivar_192 = (uint8_t)22;
                              ivar_190 = (ivar_1 == ivar_192);
                              if (ivar_190){                       
                               uint8_t ivar_197;
                               ivar_197 = (uint8_t)23;
                               uint8_t ivar_198;
                               ivar_198 = (uint8_t)19;
                               result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_197, (uint8_t)ivar_198);
} else {
                              
                               bool_t ivar_199;
                               uint8_t ivar_201;
                               ivar_201 = (uint8_t)23;
                               ivar_199 = (ivar_1 == ivar_201);
                               if (ivar_199){                        
                                uint8_t ivar_205;
                                ivar_205 = (uint8_t)92;
                                result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_205);
} else {
                               
                                bool_t ivar_206;
                                uint8_t ivar_208;
                                ivar_208 = (uint8_t)24;
                                ivar_206 = (ivar_1 == ivar_208);
                                if (ivar_206){                         
                                 uint8_t ivar_213;
                                 ivar_213 = (uint8_t)19;
                                 uint8_t ivar_214;
                                 ivar_214 = (uint8_t)7;
                                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_213, (uint8_t)ivar_214);
} else {
                                
                                 bool_t ivar_215;
                                 uint8_t ivar_217;
                                 ivar_217 = (uint8_t)25;
                                 ivar_215 = (ivar_1 == ivar_217);
                                 if (ivar_215){                          
                                  uint8_t ivar_222;
                                  ivar_222 = (uint8_t)24;
                                  uint8_t ivar_223;
                                  ivar_223 = (uint8_t)26;
                                  result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_222, (uint8_t)ivar_223);
} else {
                                 
                                  bool_t ivar_224;
                                  uint8_t ivar_226;
                                  ivar_226 = (uint8_t)26;
                                  ivar_224 = (ivar_1 == ivar_226);
                                  if (ivar_224){                           
                                   uint8_t ivar_231;
                                   ivar_231 = (uint8_t)27;
                                   uint8_t ivar_232;
                                   ivar_232 = (uint8_t)20;
                                   result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_231, (uint8_t)ivar_232);
} else {
                                  
                                   bool_t ivar_233;
                                   uint8_t ivar_235;
                                   ivar_235 = (uint8_t)27;
                                   ivar_233 = (ivar_1 == ivar_235);
                                   if (ivar_233){                            
                                    sigmatopdowntest_funtype_0_t ivar_243;
                                    sigmatopdowntest_closure_2_t cl487810;
                                    cl487810 = new_sigmatopdowntest_closure_2();
                                    ivar_243 = (sigmatopdowntest_funtype_0_t)cl487810;
                                    result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_243);
} else {
                                   
                                    bool_t ivar_245;
                                    uint8_t ivar_247;
                                    ivar_247 = (uint8_t)28;
                                    ivar_245 = (ivar_1 == ivar_247);
                                    if (ivar_245){                             
                                     uint8_t ivar_252;
                                     ivar_252 = (uint8_t)29;
                                     uint8_t ivar_253;
                                     ivar_253 = (uint8_t)0;
                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_252, (uint8_t)ivar_253);
} else {
                                    
                                     bool_t ivar_254;
                                     uint8_t ivar_256;
                                     ivar_256 = (uint8_t)29;
                                     ivar_254 = (ivar_1 == ivar_256);
                                     if (ivar_254){                              
                                      uint8_t ivar_261;
                                      ivar_261 = (uint8_t)30;
                                      uint8_t ivar_262;
                                      ivar_262 = (uint8_t)7;
                                      result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_261, (uint8_t)ivar_262);
} else {
                                     
                                      bool_t ivar_263;
                                      uint8_t ivar_265;
                                      ivar_265 = (uint8_t)30;
                                      ivar_263 = (ivar_1 == ivar_265);
                                      if (ivar_263){                               
                                       uint8_t ivar_269;
                                       ivar_269 = (uint8_t)58;
                                       result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_269);
} else {
                                      
                                       bool_t ivar_270;
                                       uint8_t ivar_272;
                                       ivar_272 = (uint8_t)31;
                                       ivar_270 = (ivar_1 == ivar_272);
                                       if (ivar_270){                                
                                        uint8_t ivar_277;
                                        ivar_277 = (uint8_t)32;
                                        uint8_t ivar_278;
                                        ivar_278 = (uint8_t)12;
                                        result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_277, (uint8_t)ivar_278);
} else {
                                       
                                        bool_t ivar_279;
                                        uint8_t ivar_281;
                                        ivar_281 = (uint8_t)32;
                                        ivar_279 = (ivar_1 == ivar_281);
                                        if (ivar_279){                                 
                                         uint8_t ivar_286;
                                         ivar_286 = (uint8_t)33;
                                         uint8_t ivar_287;
                                         ivar_287 = (uint8_t)14;
                                         result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_286, (uint8_t)ivar_287);
} else {
                                        
                                         bool_t ivar_288;
                                         uint8_t ivar_290;
                                         ivar_290 = (uint8_t)33;
                                         ivar_288 = (ivar_1 == ivar_290);
                                         if (ivar_288){                                  
                                          uint8_t ivar_295;
                                          ivar_295 = (uint8_t)34;
                                          uint8_t ivar_296;
                                          ivar_296 = (uint8_t)7;
                                          result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_295, (uint8_t)ivar_296);
} else {
                                         
                                          bool_t ivar_297;
                                          uint8_t ivar_299;
                                          ivar_299 = (uint8_t)34;
                                          ivar_297 = (ivar_1 == ivar_299);
                                          if (ivar_297){                                   
                                           uint8_t ivar_303;
                                           ivar_303 = (uint8_t)44;
                                           result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_303);
} else {
                                          
                                           bool_t ivar_304;
                                           uint8_t ivar_306;
                                           ivar_306 = (uint8_t)35;
                                           ivar_304 = (ivar_1 == ivar_306);
                                           if (ivar_304){                                    
                                            uint8_t ivar_311;
                                            ivar_311 = (uint8_t)36;
                                            uint8_t ivar_312;
                                            ivar_312 = (uint8_t)38;
                                            result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_311, (uint8_t)ivar_312);
} else {
                                           
                                            bool_t ivar_313;
                                            uint8_t ivar_315;
                                            ivar_315 = (uint8_t)36;
                                            ivar_313 = (ivar_1 == ivar_315);
                                            if (ivar_313){                                     
                                             uint8_t ivar_320;
                                             ivar_320 = (uint8_t)37;
                                             uint8_t ivar_321;
                                             ivar_321 = (uint8_t)7;
                                             result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_320, (uint8_t)ivar_321);
} else {
                                            
                                             bool_t ivar_322;
                                             uint8_t ivar_324;
                                             ivar_324 = (uint8_t)37;
                                             ivar_322 = (ivar_1 == ivar_324);
                                             if (ivar_322){                                      
                                              uint8_t ivar_328;
                                              ivar_328 = (uint8_t)91;
                                              result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_328);
} else {
                                             
                                              bool_t ivar_329;
                                              uint8_t ivar_331;
                                              ivar_331 = (uint8_t)38;
                                              ivar_329 = (ivar_1 == ivar_331);
                                              if (ivar_329){                                       
                                               uint8_t ivar_336;
                                               ivar_336 = (uint8_t)39;
                                               uint8_t ivar_337;
                                               ivar_337 = (uint8_t)43;
                                               result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_336, (uint8_t)ivar_337);
} else {
                                              
                                               bool_t ivar_338;
                                               uint8_t ivar_340;
                                               ivar_340 = (uint8_t)39;
                                               ivar_338 = (ivar_1 == ivar_340);
                                               if (ivar_338){                                        
                                                uint8_t ivar_345;
                                                ivar_345 = (uint8_t)40;
                                                uint8_t ivar_346;
                                                ivar_346 = (uint8_t)10;
                                                result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_345, (uint8_t)ivar_346);
} else {
                                               
                                                bool_t ivar_347;
                                                uint8_t ivar_349;
                                                ivar_349 = (uint8_t)40;
                                                ivar_347 = (ivar_1 == ivar_349);
                                                if (ivar_347){                                         
                                                 uint8_t ivar_354;
                                                 ivar_354 = (uint8_t)0;
                                                 uint8_t ivar_355;
                                                 ivar_355 = (uint8_t)41;
                                                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_354, (uint8_t)ivar_355);
} else {
                                                
                                                 bool_t ivar_356;
                                                 uint8_t ivar_358;
                                                 ivar_358 = (uint8_t)41;
                                                 ivar_356 = (ivar_1 == ivar_358);
                                                 if (ivar_356){                                          
                                                  uint8_t ivar_363;
                                                  ivar_363 = (uint8_t)42;
                                                  uint8_t ivar_364;
                                                  ivar_364 = (uint8_t)10;
                                                  result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_363, (uint8_t)ivar_364);
} else {
                                                 
                                                  bool_t ivar_365;
                                                  uint8_t ivar_367;
                                                  ivar_367 = (uint8_t)42;
                                                  ivar_365 = (ivar_1 == ivar_367);
                                                  if (ivar_365){                                           
                                                   uint8_t ivar_372;
                                                   ivar_372 = (uint8_t)33;
                                                   uint8_t ivar_373;
                                                   ivar_373 = (uint8_t)40;
                                                   result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_372, (uint8_t)ivar_373);
} else {
                                                  
                                                   bool_t ivar_374;
                                                   uint8_t ivar_376;
                                                   ivar_376 = (uint8_t)43;
                                                   ivar_374 = (ivar_1 == ivar_376);
                                                   if (ivar_374){                                            
                                                    uint8_t ivar_381;
                                                    ivar_381 = (uint8_t)44;
                                                    uint8_t ivar_382;
                                                    ivar_382 = (uint8_t)7;
                                                    result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_381, (uint8_t)ivar_382);
} else {
                                                   
                                                    bool_t ivar_383;
                                                    uint8_t ivar_385;
                                                    ivar_385 = (uint8_t)44;
                                                    ivar_383 = (ivar_1 == ivar_385);
                                                    if (ivar_383){                                             
                                                     uint8_t ivar_389;
                                                     ivar_389 = (uint8_t)93;
                                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_389);
} else {
                                                    
                                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__epsilon();
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

extern sigmatopdown__peg_adt_t sigmatopdowntest__pjson(uint8_t ivar_1){
        sigmatopdown__peg_adt_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             uint8_t ivar_9;
             ivar_9 = (uint8_t)1;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)3;
             result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_9, (uint8_t)ivar_10);
} else {
        
             bool_t ivar_11;
             uint8_t ivar_13;
             ivar_13 = (uint8_t)1;
             ivar_11 = (ivar_1 == ivar_13);
             if (ivar_11){  
           uint8_t ivar_18;
           ivar_18 = (uint8_t)2;
           uint8_t ivar_19;
           ivar_19 = (uint8_t)10;
           result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_18, (uint8_t)ivar_19);
} else {
             
           bool_t ivar_20;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)2;
           ivar_20 = (ivar_1 == ivar_22);
           if (ivar_20){   
           uint8_t ivar_27;
           ivar_27 = (uint8_t)46;
           uint8_t ivar_28;
           ivar_28 = (uint8_t)1;
           result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_27, (uint8_t)ivar_28);
} else {
           
           bool_t ivar_29;
           uint8_t ivar_31;
           ivar_31 = (uint8_t)3;
           ivar_29 = (ivar_1 == ivar_31);
           if (ivar_29){    
            uint8_t ivar_36;
            ivar_36 = (uint8_t)4;
            uint8_t ivar_37;
            ivar_37 = (uint8_t)35;
            result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_36, (uint8_t)ivar_37);
} else {
           
            bool_t ivar_38;
            uint8_t ivar_40;
            ivar_40 = (uint8_t)4;
            ivar_38 = (ivar_1 == ivar_40);
            if (ivar_38){     
             uint8_t ivar_45;
             ivar_45 = (uint8_t)5;
             uint8_t ivar_46;
             ivar_46 = (uint8_t)11;
             result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_45, (uint8_t)ivar_46);
} else {
            
             bool_t ivar_47;
             uint8_t ivar_49;
             ivar_49 = (uint8_t)5;
             ivar_47 = (ivar_1 == ivar_49);
             if (ivar_47){      
              uint8_t ivar_54;
              ivar_54 = (uint8_t)6;
              uint8_t ivar_55;
              ivar_55 = (uint8_t)7;
              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_54, (uint8_t)ivar_55);
} else {
             
              bool_t ivar_56;
              uint8_t ivar_58;
              ivar_58 = (uint8_t)6;
              ivar_56 = (ivar_1 == ivar_58);
              if (ivar_56){       
               uint8_t ivar_62;
               ivar_62 = (uint8_t)123;
               result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_62);
} else {
              
               bool_t ivar_63;
               uint8_t ivar_65;
               ivar_65 = (uint8_t)7;
               ivar_63 = (ivar_1 == ivar_65);
               if (ivar_63){        
                uint8_t ivar_70;
                ivar_70 = (uint8_t)8;
                uint8_t ivar_71;
                ivar_71 = (uint8_t)10;
                result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_70, (uint8_t)ivar_71);
} else {
               
                bool_t ivar_72;
                uint8_t ivar_74;
                ivar_74 = (uint8_t)8;
                ivar_72 = (ivar_1 == ivar_74);
                if (ivar_72){         
                 uint8_t ivar_79;
                 ivar_79 = (uint8_t)9;
                 uint8_t ivar_80;
                 ivar_80 = (uint8_t)7;
                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_79, (uint8_t)ivar_80);
} else {
                
                 bool_t ivar_81;
                 uint8_t ivar_83;
                 ivar_83 = (uint8_t)9;
                 ivar_81 = (ivar_1 == ivar_83);
                 if (ivar_81){          
                  uint8_t ivar_87;
                  ivar_87 = (uint8_t)32;
                  result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_87);
} else {
                 
                  bool_t ivar_88;
                  uint8_t ivar_90;
                  ivar_90 = (uint8_t)10;
                  ivar_88 = (ivar_1 == ivar_90);
                  if (ivar_88){           
                   result = (sigmatopdown__peg_adt_t)sigmatopdown__epsilon();
                   if (result != NULL) result->count++;
} else {
                  
                   bool_t ivar_92;
                   uint8_t ivar_94;
                   ivar_94 = (uint8_t)11;
                   ivar_92 = (ivar_1 == ivar_94);
                   if (ivar_92){            
                    uint8_t ivar_99;
                    ivar_99 = (uint8_t)12;
                    uint8_t ivar_100;
                    ivar_100 = (uint8_t)14;
                    result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_99, (uint8_t)ivar_100);
} else {
                   
                    bool_t ivar_101;
                    uint8_t ivar_103;
                    ivar_103 = (uint8_t)12;
                    ivar_101 = (ivar_1 == ivar_103);
                    if (ivar_101){             
                     uint8_t ivar_108;
                     ivar_108 = (uint8_t)13;
                     uint8_t ivar_109;
                     ivar_109 = (uint8_t)7;
                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_108, (uint8_t)ivar_109);
} else {
                    
                     bool_t ivar_110;
                     uint8_t ivar_112;
                     ivar_112 = (uint8_t)13;
                     ivar_110 = (ivar_1 == ivar_112);
                     if (ivar_110){              
                      uint8_t ivar_116;
                      ivar_116 = (uint8_t)125;
                      result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_116);
} else {
                     
                      bool_t ivar_117;
                      uint8_t ivar_119;
                      ivar_119 = (uint8_t)14;
                      ivar_117 = (ivar_1 == ivar_119);
                      if (ivar_117){               
                       uint8_t ivar_124;
                       ivar_124 = (uint8_t)15;
                       uint8_t ivar_125;
                       ivar_125 = (uint8_t)31;
                       result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_124, (uint8_t)ivar_125);
} else {
                      
                       bool_t ivar_126;
                       uint8_t ivar_128;
                       ivar_128 = (uint8_t)15;
                       ivar_126 = (ivar_1 == ivar_128);
                       if (ivar_126){                
                        uint8_t ivar_133;
                        ivar_133 = (uint8_t)16;
                        uint8_t ivar_134;
                        ivar_134 = (uint8_t)28;
                        result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_133, (uint8_t)ivar_134);
} else {
                       
                        bool_t ivar_135;
                        uint8_t ivar_137;
                        ivar_137 = (uint8_t)16;
                        ivar_135 = (ivar_1 == ivar_137);
                        if (ivar_135){                 
                         uint8_t ivar_142;
                         ivar_142 = (uint8_t)1;
                         uint8_t ivar_143;
                         ivar_143 = (uint8_t)17;
                         result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_142, (uint8_t)ivar_143);
} else {
                        
                         bool_t ivar_144;
                         uint8_t ivar_146;
                         ivar_146 = (uint8_t)17;
                         ivar_144 = (ivar_1 == ivar_146);
                         if (ivar_144){                  
                          uint8_t ivar_151;
                          ivar_151 = (uint8_t)18;
                          uint8_t ivar_152;
                          ivar_152 = (uint8_t)7;
                          result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_151, (uint8_t)ivar_152);
} else {
                         
                          bool_t ivar_153;
                          uint8_t ivar_155;
                          ivar_155 = (uint8_t)18;
                          ivar_153 = (ivar_1 == ivar_155);
                          if (ivar_153){                   
                           uint8_t ivar_160;
                           ivar_160 = (uint8_t)19;
                           uint8_t ivar_161;
                           ivar_161 = (uint8_t)25;
                           result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_160, (uint8_t)ivar_161);
} else {
                          
                           bool_t ivar_162;
                           uint8_t ivar_164;
                           ivar_164 = (uint8_t)19;
                           ivar_162 = (ivar_1 == ivar_164);
                           if (ivar_162){                    
                            uint8_t ivar_168;
                            ivar_168 = (uint8_t)34;
                            result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_168);
} else {
                           
                            bool_t ivar_169;
                            uint8_t ivar_171;
                            ivar_171 = (uint8_t)20;
                            ivar_169 = (ivar_1 == ivar_171);
                            if (ivar_169){                     
                             uint8_t ivar_176;
                             ivar_176 = (uint8_t)21;
                             uint8_t ivar_177;
                             ivar_177 = (uint8_t)25;
                             result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_176, (uint8_t)ivar_177);
} else {
                            
                             bool_t ivar_178;
                             uint8_t ivar_180;
                             ivar_180 = (uint8_t)21;
                             ivar_178 = (ivar_1 == ivar_180);
                             if (ivar_178){                      
                              uint8_t ivar_185;
                              ivar_185 = (uint8_t)22;
                              uint8_t ivar_186;
                              ivar_186 = (uint8_t)20;
                              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_185, (uint8_t)ivar_186);
} else {
                             
                              bool_t ivar_187;
                              uint8_t ivar_189;
                              ivar_189 = (uint8_t)22;
                              ivar_187 = (ivar_1 == ivar_189);
                              if (ivar_187){                       
                               uint8_t ivar_194;
                               ivar_194 = (uint8_t)23;
                               uint8_t ivar_195;
                               ivar_195 = (uint8_t)19;
                               result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_194, (uint8_t)ivar_195);
} else {
                              
                               bool_t ivar_196;
                               uint8_t ivar_198;
                               ivar_198 = (uint8_t)23;
                               ivar_196 = (ivar_1 == ivar_198);
                               if (ivar_196){                        
                                uint8_t ivar_202;
                                ivar_202 = (uint8_t)92;
                                result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_202);
} else {
                               
                                bool_t ivar_203;
                                uint8_t ivar_205;
                                ivar_205 = (uint8_t)24;
                                ivar_203 = (ivar_1 == ivar_205);
                                if (ivar_203){                         
                                 uint8_t ivar_210;
                                 ivar_210 = (uint8_t)19;
                                 uint8_t ivar_211;
                                 ivar_211 = (uint8_t)7;
                                 result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_210, (uint8_t)ivar_211);
} else {
                                
                                 bool_t ivar_212;
                                 uint8_t ivar_214;
                                 ivar_214 = (uint8_t)25;
                                 ivar_212 = (ivar_1 == ivar_214);
                                 if (ivar_212){                          
                                  uint8_t ivar_219;
                                  ivar_219 = (uint8_t)24;
                                  uint8_t ivar_220;
                                  ivar_220 = (uint8_t)26;
                                  result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_219, (uint8_t)ivar_220);
} else {
                                 
                                  bool_t ivar_221;
                                  uint8_t ivar_223;
                                  ivar_223 = (uint8_t)26;
                                  ivar_221 = (ivar_1 == ivar_223);
                                  if (ivar_221){                           
                                   uint8_t ivar_228;
                                   ivar_228 = (uint8_t)27;
                                   uint8_t ivar_229;
                                   ivar_229 = (uint8_t)20;
                                   result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_228, (uint8_t)ivar_229);
} else {
                                  
                                   bool_t ivar_230;
                                   uint8_t ivar_232;
                                   ivar_232 = (uint8_t)27;
                                   ivar_230 = (ivar_1 == ivar_232);
                                   if (ivar_230){                            
                                    sigmatopdowntest_funtype_0_t ivar_240;
                                    sigmatopdowntest_closure_3_t cl487861;
                                    cl487861 = new_sigmatopdowntest_closure_3();
                                    ivar_240 = (sigmatopdowntest_funtype_0_t)cl487861;
                                    result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_240);
} else {
                                   
                                    bool_t ivar_242;
                                    uint8_t ivar_244;
                                    ivar_244 = (uint8_t)28;
                                    ivar_242 = (ivar_1 == ivar_244);
                                    if (ivar_242){                             
                                     uint8_t ivar_249;
                                     ivar_249 = (uint8_t)29;
                                     uint8_t ivar_250;
                                     ivar_250 = (uint8_t)0;
                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_249, (uint8_t)ivar_250);
} else {
                                    
                                     bool_t ivar_251;
                                     uint8_t ivar_253;
                                     ivar_253 = (uint8_t)29;
                                     ivar_251 = (ivar_1 == ivar_253);
                                     if (ivar_251){                              
                                      uint8_t ivar_258;
                                      ivar_258 = (uint8_t)30;
                                      uint8_t ivar_259;
                                      ivar_259 = (uint8_t)7;
                                      result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_258, (uint8_t)ivar_259);
} else {
                                     
                                      bool_t ivar_260;
                                      uint8_t ivar_262;
                                      ivar_262 = (uint8_t)30;
                                      ivar_260 = (ivar_1 == ivar_262);
                                      if (ivar_260){                               
                                       uint8_t ivar_266;
                                       ivar_266 = (uint8_t)58;
                                       result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_266);
} else {
                                      
                                       bool_t ivar_267;
                                       uint8_t ivar_269;
                                       ivar_269 = (uint8_t)31;
                                       ivar_267 = (ivar_1 == ivar_269);
                                       if (ivar_267){                                
                                        uint8_t ivar_274;
                                        ivar_274 = (uint8_t)32;
                                        uint8_t ivar_275;
                                        ivar_275 = (uint8_t)12;
                                        result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_274, (uint8_t)ivar_275);
} else {
                                       
                                        bool_t ivar_276;
                                        uint8_t ivar_278;
                                        ivar_278 = (uint8_t)32;
                                        ivar_276 = (ivar_1 == ivar_278);
                                        if (ivar_276){                                 
                                         uint8_t ivar_283;
                                         ivar_283 = (uint8_t)33;
                                         uint8_t ivar_284;
                                         ivar_284 = (uint8_t)14;
                                         result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_283, (uint8_t)ivar_284);
} else {
                                        
                                         bool_t ivar_285;
                                         uint8_t ivar_287;
                                         ivar_287 = (uint8_t)33;
                                         ivar_285 = (ivar_1 == ivar_287);
                                         if (ivar_285){                                  
                                          uint8_t ivar_292;
                                          ivar_292 = (uint8_t)34;
                                          uint8_t ivar_293;
                                          ivar_293 = (uint8_t)7;
                                          result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_292, (uint8_t)ivar_293);
} else {
                                         
                                          bool_t ivar_294;
                                          uint8_t ivar_296;
                                          ivar_296 = (uint8_t)34;
                                          ivar_294 = (ivar_1 == ivar_296);
                                          if (ivar_294){                                   
                                           uint8_t ivar_300;
                                           ivar_300 = (uint8_t)44;
                                           result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_300);
} else {
                                          
                                           bool_t ivar_301;
                                           uint8_t ivar_303;
                                           ivar_303 = (uint8_t)35;
                                           ivar_301 = (ivar_1 == ivar_303);
                                           if (ivar_301){                                    
                                            uint8_t ivar_308;
                                            ivar_308 = (uint8_t)17;
                                            uint8_t ivar_309;
                                            ivar_309 = (uint8_t)36;
                                            result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_308, (uint8_t)ivar_309);
} else {
                                           
                                            bool_t ivar_310;
                                            uint8_t ivar_312;
                                            ivar_312 = (uint8_t)36;
                                            ivar_310 = (ivar_1 == ivar_312);
                                            if (ivar_310){                                     
                                             uint8_t ivar_317;
                                             ivar_317 = (uint8_t)37;
                                             uint8_t ivar_318;
                                             ivar_318 = (uint8_t)39;
                                             result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_317, (uint8_t)ivar_318);
} else {
                                            
                                             bool_t ivar_319;
                                             uint8_t ivar_321;
                                             ivar_321 = (uint8_t)37;
                                             ivar_319 = (ivar_1 == ivar_321);
                                             if (ivar_319){                                      
                                              uint8_t ivar_326;
                                              ivar_326 = (uint8_t)38;
                                              uint8_t ivar_327;
                                              ivar_327 = (uint8_t)7;
                                              result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_326, (uint8_t)ivar_327);
} else {
                                             
                                              bool_t ivar_328;
                                              uint8_t ivar_330;
                                              ivar_330 = (uint8_t)38;
                                              ivar_328 = (ivar_1 == ivar_330);
                                              if (ivar_328){                                       
                                               uint8_t ivar_334;
                                               ivar_334 = (uint8_t)91;
                                               result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_334);
} else {
                                              
                                               bool_t ivar_335;
                                               uint8_t ivar_337;
                                               ivar_337 = (uint8_t)39;
                                               ivar_335 = (ivar_1 == ivar_337);
                                               if (ivar_335){                                        
                                                uint8_t ivar_342;
                                                ivar_342 = (uint8_t)40;
                                                uint8_t ivar_343;
                                                ivar_343 = (uint8_t)44;
                                                result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_342, (uint8_t)ivar_343);
} else {
                                               
                                                bool_t ivar_344;
                                                uint8_t ivar_346;
                                                ivar_346 = (uint8_t)40;
                                                ivar_344 = (ivar_1 == ivar_346);
                                                if (ivar_344){                                         
                                                 uint8_t ivar_351;
                                                 ivar_351 = (uint8_t)41;
                                                 uint8_t ivar_352;
                                                 ivar_352 = (uint8_t)10;
                                                 result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_351, (uint8_t)ivar_352);
} else {
                                                
                                                 bool_t ivar_353;
                                                 uint8_t ivar_355;
                                                 ivar_355 = (uint8_t)41;
                                                 ivar_353 = (ivar_1 == ivar_355);
                                                 if (ivar_353){                                          
                                                  uint8_t ivar_360;
                                                  ivar_360 = (uint8_t)0;
                                                  uint8_t ivar_361;
                                                  ivar_361 = (uint8_t)42;
                                                  result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_360, (uint8_t)ivar_361);
} else {
                                                 
                                                  bool_t ivar_362;
                                                  uint8_t ivar_364;
                                                  ivar_364 = (uint8_t)42;
                                                  ivar_362 = (ivar_1 == ivar_364);
                                                  if (ivar_362){                                           
                                                   uint8_t ivar_369;
                                                   ivar_369 = (uint8_t)43;
                                                   uint8_t ivar_370;
                                                   ivar_370 = (uint8_t)10;
                                                   result = (sigmatopdown__peg_adt_t)sigmatopdown__choice((uint8_t)ivar_369, (uint8_t)ivar_370);
} else {
                                                  
                                                   bool_t ivar_371;
                                                   uint8_t ivar_373;
                                                   ivar_373 = (uint8_t)43;
                                                   ivar_371 = (ivar_1 == ivar_373);
                                                   if (ivar_371){                                            
                                                    uint8_t ivar_378;
                                                    ivar_378 = (uint8_t)33;
                                                    uint8_t ivar_379;
                                                    ivar_379 = (uint8_t)41;
                                                    result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_378, (uint8_t)ivar_379);
} else {
                                                   
                                                    bool_t ivar_380;
                                                    uint8_t ivar_382;
                                                    ivar_382 = (uint8_t)44;
                                                    ivar_380 = (ivar_1 == ivar_382);
                                                    if (ivar_380){                                             
                                                     uint8_t ivar_387;
                                                     ivar_387 = (uint8_t)45;
                                                     uint8_t ivar_388;
                                                     ivar_388 = (uint8_t)7;
                                                     result = (sigmatopdown__peg_adt_t)sigmatopdown__concat((uint8_t)ivar_387, (uint8_t)ivar_388);
} else {
                                                    
                                                     bool_t ivar_389;
                                                     uint8_t ivar_391;
                                                     ivar_391 = (uint8_t)45;
                                                     ivar_389 = (ivar_1 == ivar_391);
                                                     if (ivar_389){                                              
                                                      uint8_t ivar_395;
                                                      ivar_395 = (uint8_t)93;
                                                      result = (sigmatopdown__peg_adt_t)sigmatopdown__terminal((uint8_t)ivar_395);
} else {
                                                     
                                                      bool_t ivar_396;
                                                      uint8_t ivar_398;
                                                      ivar_398 = (uint8_t)46;
                                                      ivar_396 = (ivar_1 == ivar_398);
                                                      if (ivar_396){                                               
                                                       sigmatopdowntest_funtype_0_t ivar_406;
                                                       sigmatopdowntest_closure_4_t cl487881;
                                                       cl487881 = new_sigmatopdowntest_closure_4();
                                                       ivar_406 = (sigmatopdowntest_funtype_0_t)cl487881;
                                                       result = (sigmatopdown__peg_adt_t)sigmatopdown__any((sigmatopdown_funtype_29_t)ivar_406);
} else {
                                                      
                                                       result = (sigmatopdown__peg_adt_t)sigmatopdown__epsilon();
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

extern sigmatopdowntest_array_5_t sigmatopdowntest__empty(uint8_t ivar_1){
        sigmatopdowntest_array_5_t  result;
        uint32_t size487888;
        //copying to uint32 from uint8;
        size487888 = (uint32_t)ivar_1;
        size487888 += 0;
        result = new_sigmatopdowntest_array_5(size487888);
        uint8_t ivar_2;
        for (uint32_t index487887 = 0; index487887 < size487888; index487887++){
             ivar_2 = (uint8_t)index487887;
             result->elems[index487887] = (uint8_t)32;
        };

        
        return result;
}

extern sigmatopdowntest_funtype_7_t sigmatopdowntest__cat(uint8_t ivar_1, uint8_t ivar_2){
        sigmatopdowntest_funtype_7_t  result;
        sigmatopdowntest_closure_8_t cl487920;
        cl487920 = new_sigmatopdowntest_closure_8();
        cl487920->fvar_1 = (uint8_t)ivar_1;
        cl487920->fvar_2 = (uint8_t)ivar_2;
        result = (sigmatopdowntest_funtype_7_t)cl487920;

        
        return result;
}

extern uint8_t sigmatopdowntest__tok0(uint8_t ivar_1){
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

extern uint8_t sigmatopdowntest__tok1(uint8_t ivar_1){
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

extern uint8_t sigmatopdowntest__emptydict(uint8_t ivar_1){
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

extern uint8_t sigmatopdowntest__obrace(uint8_t ivar_1){
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

extern uint8_t sigmatopdowntest__cbrace(uint8_t ivar_1){
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

extern uint8_t sigmatopdowntest__colon(uint8_t ivar_1){
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

extern sigmatopdowntest_array_5_t sigmatopdowntest__emptydict2(void){
        sigmatopdowntest_array_5_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    sigmatopdowntest_funtype_7_t ivar_7;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)3;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)3;
        ivar_7 = (sigmatopdowntest_funtype_7_t)sigmatopdowntest__cat((uint8_t)ivar_12, (uint8_t)ivar_13);
        sigmatopdowntest_array_5_t ivar_26;
        ivar_26 = new_sigmatopdowntest_array_5(3);
        uint8_t ivar_3;
        for (uint32_t index487930 = 0; index487930 < 3; index487930++){
             ivar_3 = (uint8_t)index487930;
             ivar_26->elems[index487930] = (uint8_t)sigmatopdowntest__obrace((uint8_t)ivar_3);
        };
        sigmatopdowntest_array_5_t ivar_27;
        ivar_27 = new_sigmatopdowntest_array_5(3);
        uint8_t ivar_4;
        for (uint32_t index487931 = 0; index487931 < 3; index487931++){
             ivar_4 = (uint8_t)index487931;
             ivar_27->elems[index487931] = (uint8_t)sigmatopdowntest__cbrace((uint8_t)ivar_4);
        };
        result = (sigmatopdowntest_array_5_t)ivar_7->ftbl->mptr(ivar_7, ivar_26, ivar_27);
        ivar_7->ftbl->rptr(ivar_7);

        defined = true;};
        
        return result;
}

extern sigmatopdowntest_array_5_t sigmatopdowntest__dict1(void){
        sigmatopdowntest_array_5_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    sigmatopdowntest_funtype_7_t ivar_84;
        uint8_t ivar_89;
        ivar_89 = (uint8_t)3;
        uint8_t ivar_90;
        ivar_90 = (uint8_t)19;
        ivar_84 = (sigmatopdowntest_funtype_7_t)sigmatopdowntest__cat((uint8_t)ivar_89, (uint8_t)ivar_90);
        sigmatopdowntest_array_5_t ivar_103;
        ivar_103 = new_sigmatopdowntest_array_5(3);
        uint8_t ivar_3;
        for (uint32_t index487956 = 0; index487956 < 3; index487956++){
             ivar_3 = (uint8_t)index487956;
             ivar_103->elems[index487956] = (uint8_t)sigmatopdowntest__obrace((uint8_t)ivar_3);
        };
        sigmatopdowntest_array_5_t ivar_104;
        sigmatopdowntest_funtype_7_t ivar_61;
        uint8_t ivar_66;
        ivar_66 = (uint8_t)7;
        uint8_t ivar_67;
        ivar_67 = (uint8_t)12;
        ivar_61 = (sigmatopdowntest_funtype_7_t)sigmatopdowntest__cat((uint8_t)ivar_66, (uint8_t)ivar_67);
        sigmatopdowntest_array_5_t ivar_80;
        ivar_80 = new_sigmatopdowntest_array_5(7);
        uint8_t ivar_6;
        for (uint32_t index487961 = 0; index487961 < 7; index487961++){
             ivar_6 = (uint8_t)index487961;
             ivar_80->elems[index487961] = (uint8_t)sigmatopdowntest__tok0((uint8_t)ivar_6);
        };
        sigmatopdowntest_array_5_t ivar_81;
        sigmatopdowntest_funtype_7_t ivar_38;
        uint8_t ivar_43;
        ivar_43 = (uint8_t)3;
        uint8_t ivar_44;
        ivar_44 = (uint8_t)9;
        ivar_38 = (sigmatopdowntest_funtype_7_t)sigmatopdowntest__cat((uint8_t)ivar_43, (uint8_t)ivar_44);
        sigmatopdowntest_array_5_t ivar_57;
        ivar_57 = new_sigmatopdowntest_array_5(3);
        uint8_t ivar_9;
        for (uint32_t index487966 = 0; index487966 < 3; index487966++){
             ivar_9 = (uint8_t)index487966;
             ivar_57->elems[index487966] = (uint8_t)sigmatopdowntest__colon((uint8_t)ivar_9);
        };
        sigmatopdowntest_array_5_t ivar_58;
        sigmatopdowntest_funtype_7_t ivar_15;
        uint8_t ivar_20;
        ivar_20 = (uint8_t)6;
        uint8_t ivar_21;
        ivar_21 = (uint8_t)3;
        ivar_15 = (sigmatopdowntest_funtype_7_t)sigmatopdowntest__cat((uint8_t)ivar_20, (uint8_t)ivar_21);
        sigmatopdowntest_array_5_t ivar_34;
        ivar_34 = (sigmatopdowntest_array_5_t)sigmatopdowntest__emptydict2();
        if (ivar_34 != NULL) ivar_34->count++;
        sigmatopdowntest_array_5_t ivar_35;
        ivar_35 = new_sigmatopdowntest_array_5(3);
        uint8_t ivar_12;
        for (uint32_t index487971 = 0; index487971 < 3; index487971++){
             ivar_12 = (uint8_t)index487971;
             ivar_35->elems[index487971] = (uint8_t)sigmatopdowntest__cbrace((uint8_t)ivar_12);
        };
        ivar_58 = (sigmatopdowntest_array_5_t)ivar_15->ftbl->mptr(ivar_15, ivar_34, ivar_35);
        ivar_15->ftbl->rptr(ivar_15);
        ivar_81 = (sigmatopdowntest_array_5_t)ivar_38->ftbl->mptr(ivar_38, ivar_57, ivar_58);
        ivar_38->ftbl->rptr(ivar_38);
        ivar_104 = (sigmatopdowntest_array_5_t)ivar_61->ftbl->mptr(ivar_61, ivar_80, ivar_81);
        ivar_61->ftbl->rptr(ivar_61);
        result = (sigmatopdowntest_array_5_t)ivar_84->ftbl->mptr(ivar_84, ivar_103, ivar_104);
        ivar_84->ftbl->rptr(ivar_84);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdowntest__test0(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_15;
        ivar_15 = (uint8_t)2;
        uint32_t ivar_10;
        //copying to uint32 from uint8;
        ivar_10 = (uint32_t)ivar_15;
        sigmatopdown__lang_spec_t ivar_11;
        ivar_11 = new_sigmatopdowntest_array_9(255);
        uint8_t ivar_5;
        for (uint32_t index487979 = 0; index487979 < 255; index487979++){
             ivar_5 = (uint8_t)index487979;
             ivar_11->elems[index487979] = (sigmatopdown__peg_adt_t)sigmatopdowntest__pyaml((uint8_t)ivar_5);
        };
        sigmatopdowntest_array_5_t ivar_12;
        uint8_t ivar_8;
        ivar_8 = (uint8_t)2;
        ivar_12 = (sigmatopdowntest_array_5_t)sigmatopdowntest__empty((uint8_t)ivar_8);
        uint8_t ivar_13;
        ivar_13 = (uint8_t)7;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_10, (sigmatopdown__lang_spec_t)ivar_11, (sigmatopdown_array_86_t)ivar_12, (uint8_t)ivar_13);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdowntest__test1(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_13;
        ivar_13 = (uint8_t)7;
        uint32_t ivar_8;
        //copying to uint32 from uint8;
        ivar_8 = (uint32_t)ivar_13;
        sigmatopdown__lang_spec_t ivar_9;
        ivar_9 = new_sigmatopdowntest_array_9(255);
        uint8_t ivar_5;
        for (uint32_t index487988 = 0; index487988 < 255; index487988++){
             ivar_5 = (uint8_t)index487988;
             ivar_9->elems[index487988] = (sigmatopdown__peg_adt_t)sigmatopdowntest__pyaml((uint8_t)ivar_5);
        };
        sigmatopdowntest_array_5_t ivar_10;
        uint32_t size487992;
        //copying to uint32 from uint32;
        size487992 = (uint32_t)ivar_8;
        size487992 += 0;
        ivar_10 = new_sigmatopdowntest_array_5(size487992);
        uint8_t ivar_6;
        for (uint32_t index487991 = 0; index487991 < size487992; index487991++){
             ivar_6 = (uint8_t)index487991;
             ivar_10->elems[index487991] = (uint8_t)sigmatopdowntest__tok0((uint8_t)ivar_6);
        };
        uint8_t ivar_11;
        ivar_11 = (uint8_t)17;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_8, (sigmatopdown__lang_spec_t)ivar_9, (sigmatopdown_array_86_t)ivar_10, (uint8_t)ivar_11);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdowntest__test11(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_13;
        ivar_13 = (uint8_t)9;
        uint32_t ivar_8;
        //copying to uint32 from uint8;
        ivar_8 = (uint32_t)ivar_13;
        sigmatopdown__lang_spec_t ivar_9;
        ivar_9 = new_sigmatopdowntest_array_9(255);
        uint8_t ivar_5;
        for (uint32_t index487999 = 0; index487999 < 255; index487999++){
             ivar_5 = (uint8_t)index487999;
             ivar_9->elems[index487999] = (sigmatopdown__peg_adt_t)sigmatopdowntest__pyaml((uint8_t)ivar_5);
        };
        sigmatopdowntest_array_5_t ivar_10;
        uint32_t size488003;
        //copying to uint32 from uint32;
        size488003 = (uint32_t)ivar_8;
        size488003 += 0;
        ivar_10 = new_sigmatopdowntest_array_5(size488003);
        uint8_t ivar_6;
        for (uint32_t index488002 = 0; index488002 < size488003; index488002++){
             ivar_6 = (uint8_t)index488002;
             ivar_10->elems[index488002] = (uint8_t)sigmatopdowntest__tok1((uint8_t)ivar_6);
        };
        uint8_t ivar_11;
        ivar_11 = (uint8_t)17;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_8, (sigmatopdown__lang_spec_t)ivar_9, (sigmatopdown_array_86_t)ivar_10, (uint8_t)ivar_11);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdowntest__test2(void){
        sigmatopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_12;
        ivar_12 = (uint8_t)22;
        uint32_t ivar_7;
        //copying to uint32 from uint8;
        ivar_7 = (uint32_t)ivar_12;
        sigmatopdown__lang_spec_t ivar_8;
        ivar_8 = new_sigmatopdowntest_array_9(255);
        uint8_t ivar_5;
        for (uint32_t index488010 = 0; index488010 < 255; index488010++){
             ivar_5 = (uint8_t)index488010;
             ivar_8->elems[index488010] = (sigmatopdown__peg_adt_t)sigmatopdowntest__pyaml((uint8_t)ivar_5);
        };
        sigmatopdowntest_array_5_t ivar_9;
        ivar_9 = (sigmatopdowntest_array_5_t)sigmatopdowntest__dict1();
        if (ivar_9 != NULL) ivar_9->count++;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)0;
        result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_7, (sigmatopdown__lang_spec_t)ivar_8, (sigmatopdown_array_86_t)ivar_9, (uint8_t)ivar_10);

        defined = true;};
        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdowntest__iparse(uint8_t ivar_1, sigmatopdown__lang_spec_t ivar_2, sigmatopdowntest_array_5_t ivar_3, uint8_t ivar_4, uint8_t ivar_5){
        sigmatopdown__ent_adt_t  result;
        /* pend */ sigmatopdowntest_funtype_10_t ivar_6;
        sigmatopdowntest_closure_11_t cl488078;
        cl488078 = new_sigmatopdowntest_closure_11();
        ivar_6 = (sigmatopdowntest_funtype_10_t)cl488078;
        sigmatopdowntest_record_13_t ivar_83;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)1;
        bool_t ivar_15;
        ivar_15 = (bool_t) false;
        sigmatopdowntest_funtype_12_t ivar_43;
        sigmatopdown__ent_adt_t ivar_23;
        uint8_t ivar_30;
        ivar_30 = (uint8_t)0;
        uint32_t ivar_27;
        //copying to uint32 from uint8;
        ivar_27 = (uint32_t)ivar_30;
        uint8_t ivar_28;
        ivar_28 = (uint8_t)sigmatopdown__num_non_terminals();
        ivar_23 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_27, (uint8_t)ivar_28);
        sigmatopdowntest_funtype_12_t ivar_31;
        sigmatopdowntest_closure_14_t cl488100;
        cl488100 = new_sigmatopdowntest_closure_14();
        cl488100->fvar_1 = (uint8_t)ivar_1;
        cl488100->fvar_2 = (sigmatopdowntest_funtype_10_t)ivar_6;
        if (cl488100->fvar_2 != NULL) cl488100->fvar_2->count++;
        release_sigmatopdowntest_funtype_10(ivar_6);
        ivar_31 = (sigmatopdowntest_funtype_12_t)cl488100;
        sigmatopdowntest_funtype_10_t ivar_32;
        ivar_32 = (sigmatopdowntest_funtype_10_t)ivar_31->ftbl->fptr(ivar_31, ivar_4);
        sigmatopdowntest_funtype_12_t ivar_39;
        sigmatopdowntest_funtype_10_t ivar_41;
        ivar_41 = NULL;
        ivar_39 = (sigmatopdowntest_funtype_12_t)update_sigmatopdowntest_funtype_12(ivar_31, ivar_4, ivar_41);
        if (ivar_41 != NULL) ivar_41->count--;
        sigmatopdowntest_funtype_10_t ivar_40;
        sigmatopdowntest_funtype_10_t ivar_35;
        sigmatopdown__ent_adt_t ivar_37;
        ivar_37 = NULL;
        ivar_35 = (sigmatopdowntest_funtype_10_t)update_sigmatopdowntest_funtype_10(ivar_32, ivar_5, ivar_37);
        if (ivar_37 != NULL) ivar_37->count--;
        ivar_40 = (sigmatopdowntest_funtype_10_t)update_sigmatopdowntest_funtype_10(ivar_35, ivar_5, ivar_23);
        if (ivar_23 != NULL) ivar_23->count--;
        ivar_43 = (sigmatopdowntest_funtype_12_t)update_sigmatopdowntest_funtype_12(ivar_39, ivar_4, ivar_40);
        if (ivar_40 != NULL) ivar_40->count--;
        sigmatopdown__ent_adt_t ivar_49;
        uint32_t ivar_47;
        //copying to uint32 from uint8;
        ivar_47 = (uint32_t)ivar_4;
        ivar_49 = (sigmatopdown__ent_adt_t)sigmatopdown__push((uint32_t)ivar_47, (uint8_t)ivar_5);
        sigmatopdowntest_record_13_t tmp488134 = new_sigmatopdowntest_record_13();;
        ivar_83 = (sigmatopdowntest_record_13_t)tmp488134;
        tmp488134->depth = (uint8_t)ivar_14;
        tmp488134->lflag = (bool_t)ivar_15;
        tmp488134->scaf = (sigmatopdowntest_funtype_12_t)ivar_43;
        tmp488134->stack = (sigmatopdown__ent_adt_t)ivar_49;
        /* St */ sigmatopdowntest_record_17_t ivar_10;
        //copying to sigmatopdowntest_record_17 from sigmatopdowntest_record_13;
        {
         ivar_10 = new_sigmatopdowntest_record_17();
         uint32_t tmp488155;
         //copying to uint32 from uint8;
         tmp488155 = (uint32_t)ivar_1;
         tmp488155 += 1;
         ivar_10->scaf = new_sigmatopdowntest_array_16(tmp488155);
         for (uint32_t index_84 = 0; index_84 < tmp488155; index_84++){
                 uint32_t tmp488157;
                 tmp488157 = (uint32_t)255;
                 ivar_10->scaf->elems[index_84] = new_sigmatopdowntest_array_15(tmp488157);
                 for (uint32_t index_85 = 0; index_85 < tmp488157; index_85++){
                  ivar_10->scaf->elems[index_84]->elems[index_85] = (sigmatopdown__ent_adt_t)ivar_83->scaf->ftbl->fptr(ivar_83->scaf, index_84)->ftbl->fptr(ivar_83->scaf->ftbl->fptr(ivar_83->scaf, index_84), index_85);
                  if (ivar_10->scaf->elems[index_84]->elems[index_85] != NULL) ivar_10->scaf->elems[index_84]->elems[index_85]->count++;
                 };
         };
         ivar_10->depth = (uint64_t)ivar_83->depth;
         ivar_10->stack = (sigmatopdown__ent_adt_t)ivar_83->stack;
         if (ivar_10->stack != NULL) ivar_10->stack->count++;
         ivar_10->lflag = (bool_t)ivar_83->lflag;
        };
        release_sigmatopdowntest_record_13(ivar_83);
        sigmatopdowntest_array_15_t ivar_52;
        sigmatopdowntest_array_16_t ivar_56;
        sigmatopdowntest_record_17_t ivar_79;
        sigmatopdowntest_funtype_18_t ivar_63;
        uint32_t ivar_73;
        //copying to uint32 from uint8;
        ivar_73 = (uint32_t)ivar_1;
        uint32_t ivar_76;
        //copying to uint32 from uint8;
        ivar_76 = (uint32_t)ivar_4;
        ivar_63 = (sigmatopdowntest_funtype_18_t)sigmatopdown__parse((uint32_t)ivar_73, (sigmatopdown__lang_spec_t)ivar_2, (sigmatopdown_array_86_t)ivar_3, (uint32_t)ivar_76, (uint8_t)ivar_5);
        ivar_79 = (sigmatopdowntest_record_17_t)ivar_63->ftbl->fptr(ivar_63, ivar_10);
        ivar_63->ftbl->rptr(ivar_63);
        ivar_56 = (sigmatopdowntest_array_16_t)ivar_79->scaf;
        ivar_56->count++;
        release_sigmatopdowntest_record_17(ivar_79);
        ivar_52 = (sigmatopdowntest_array_15_t)ivar_56->elems[ivar_4];
        ivar_52->count++;
        release_sigmatopdowntest_array_16(ivar_56);
        result = (sigmatopdown__ent_adt_t)ivar_52->elems[ivar_5];
        result->count++;
        release_sigmatopdowntest_array_15(ivar_52);

        
        return result;
}

extern sigmatopdown__ent_adt_t sigmatopdowntest__jsonparsefile(bytestrings__bytestring_t ivar_1){
        sigmatopdown__ent_adt_t  result;
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
             sigmatopdown__lang_spec_t ivar_47;
             ivar_47 = new_sigmatopdowntest_array_9(255);
             uint8_t ivar_41;
             for (uint32_t index488260 = 0; index488260 < 255; index488260++){
           ivar_41 = (uint8_t)index488260;
           ivar_47->elems[index488260] = (sigmatopdown__peg_adt_t)sigmatopdowntest__pjson((uint8_t)ivar_41);
             };
             sigmatopdowntest_array_5_t ivar_48;
             ivar_48 = (sigmatopdowntest_array_5_t)ivar_18->seq;
             ivar_48->count++;
             release_bytestrings__bytestring(ivar_18);
             uint8_t ivar_49;
             ivar_49 = (uint8_t)0;
             result = (sigmatopdown__ent_adt_t)sigmatopdown__doparse((uint32_t)ivar_14, (sigmatopdown__lang_spec_t)ivar_47, (sigmatopdown_array_86_t)ivar_48, (uint8_t)ivar_49);
} else {
        
             release_file__lifted_file_adt(ivar_2);
             uint8_t ivar_54;
             ivar_54 = (uint8_t)0;
             uint64_t ivar_52;
             //copying to uint64 from uint8;
             ivar_52 = (uint64_t)ivar_54;
             result = (sigmatopdown__ent_adt_t)sigmatopdown__fail((uint64_t)ivar_52);
};

        
        return result;
}