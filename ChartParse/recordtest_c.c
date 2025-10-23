//Code generated using pvs2ir2c
#include "recordtest_c.h"


recordtest__rec_t new_recordtest__rec(void){
        recordtest__rec_t tmp = (recordtest__rec_t) safe_malloc(sizeof(struct recordtest__rec_s));
        tmp->count = 1;
        return tmp;}

void release_recordtest__rec(recordtest__rec_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_recordtest__rec_ptr(pointer_t x, type_actual_t T){
        release_recordtest__rec((recordtest__rec_t)x);
}

recordtest__rec_t copy_recordtest__rec(recordtest__rec_t x){
        recordtest__rec_t y = new_recordtest__rec();
        y->a = (uint8_t)x->a;
        y->b = (uint8_t)x->b;
        mpz_set(y->c, x->c);
        y->count = 1;
        return y;}

bool_t equal_recordtest__rec(recordtest__rec_t x, recordtest__rec_t y){
        bool_t tmp = true;
        tmp = tmp && x->a == y->a;
        tmp = tmp && x->b == y->b;tmp = tmp && (mpz_cmp(x->c, y->c) == 0);
        return tmp;}

char * json_recordtest__rec(recordtest__rec_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(13);
         sprintf(fld0, "\"a\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->a));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"b\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->b));
        char * fld2 = safe_malloc(13);
         sprintf(fld2, "\"c\" : ");
        tmp[2] = safe_strcat(fld2, json_mpz(x->c));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_recordtest__rec_ptr(pointer_t x, pointer_t y, actual_recordtest__rec_t T){
        return equal_recordtest__rec((recordtest__rec_t)x, (recordtest__rec_t)y);
}

char * json_recordtest__rec_ptr(pointer_t x, actual_recordtest__rec_t T){
        return json_recordtest__rec((recordtest__rec_t)x);
}

actual_recordtest__rec_t actual_recordtest__rec(){
        actual_recordtest__rec_t new = (actual_recordtest__rec_t)safe_malloc(sizeof(struct actual_recordtest__rec_s));
        new->equal_ptr = (equal_ptr_t)(*equal_recordtest__rec_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_recordtest__rec_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_recordtest__rec_ptr);
 

 
        return new;
 };

recordtest__rec_t update_recordtest__rec_a(recordtest__rec_t x, uint8_t v){
        recordtest__rec_t y;
        if (x->count == 1){y = x;}
        else {y = copy_recordtest__rec(x); x->count--;};
        y->a = (uint8_t)v;
        return y;}

recordtest__rec_t update_recordtest__rec_b(recordtest__rec_t x, uint8_t v){
        recordtest__rec_t y;
        if (x->count == 1){y = x;}
        else {y = copy_recordtest__rec(x); x->count--;};
        y->b = (uint8_t)v;
        return y;}

recordtest__rec_t update_recordtest__rec_c(recordtest__rec_t x, mpz_ptr_t v){
        recordtest__rec_t y;
        if (x->count == 1){y = x;}
        else {y = copy_recordtest__rec(x); x->count--;};
        mpz_set(y->c, v);
        return y;}




recordtest_array_1_t new_recordtest_array_1(uint32_t size){
        recordtest_array_1_t tmp = (recordtest_array_1_t) safe_malloc(sizeof(struct recordtest_array_1_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_recordtest_array_1(recordtest_array_1_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_recordtest_array_1_ptr(pointer_t x, type_actual_t T){
        release_recordtest_array_1((recordtest_array_1_t)x);
}

recordtest_array_1_t copy_recordtest_array_1(recordtest_array_1_t x){
        recordtest_array_1_t tmp = new_recordtest_array_1(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_recordtest_array_1(recordtest_array_1_t x, recordtest_array_1_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_recordtest_array_1(recordtest_array_1_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_recordtest_array_1_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_recordtest_array_1((recordtest_array_1_t)x, (recordtest_array_1_t)y);
}

char * json_recordtest_array_1_ptr(pointer_t x, type_actual_t T){
        return json_recordtest_array_1((recordtest_array_1_t)x);
}

actual_recordtest_array_1_t actual_recordtest_array_1(){
        actual_recordtest_array_1_t new = (actual_recordtest_array_1_t)safe_malloc(sizeof(struct actual_recordtest_array_1_s));
        new->equal_ptr = (equal_ptr_t)(*equal_recordtest_array_1_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_recordtest_array_1_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_recordtest_array_1_ptr);
 

 
        return new;
 };

recordtest_array_1_t update_recordtest_array_1(recordtest_array_1_t x, uint32_t i, uint8_t v){
        recordtest_array_1_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_recordtest_array_1(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

recordtest_array_1_t upgrade_recordtest_array_1(recordtest_array_1_t x, uint32_t i, uint8_t v){
        recordtest_array_1_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct recordtest_array_1_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_recordtest_array_1(x);}
           else {y = copy_recordtest_array_1(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




recordtest__rec2_t new_recordtest__rec2(void){
        recordtest__rec2_t tmp = (recordtest__rec2_t) safe_malloc(sizeof(struct recordtest__rec2_s));
        tmp->count = 1;
        return tmp;}

void release_recordtest__rec2(recordtest__rec2_t x){
        x->count--;
        if (x->count <= 0){
         release_recordtest_array_1(x->c);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_recordtest__rec2_ptr(pointer_t x, type_actual_t T){
        release_recordtest__rec2((recordtest__rec2_t)x);
}

recordtest__rec2_t copy_recordtest__rec2(recordtest__rec2_t x){
        recordtest__rec2_t y = new_recordtest__rec2();
        y->a = (uint8_t)x->a;
        y->b = (uint8_t)x->b;
        y->c = x->c;
        if (y->c != NULL){y->c->count++;};
        y->d = (uint8_t)x->d;
        y->count = 1;
        return y;}

bool_t equal_recordtest__rec2(recordtest__rec2_t x, recordtest__rec2_t y){
        bool_t tmp = true;
        tmp = tmp && x->a == y->a;
        tmp = tmp && x->b == y->b;
        tmp = tmp && equal_recordtest_array_1(x->c, y->c);
        tmp = tmp && x->d == y->d;
        return tmp;}

char * json_recordtest__rec2(recordtest__rec2_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(13);
         sprintf(fld0, "\"a\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->a));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"b\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->b));
        char * fld2 = safe_malloc(13);
         sprintf(fld2, "\"c\" : ");
        tmp[2] = safe_strcat(fld2, json_recordtest_array_1(x->c));
        char * fld3 = safe_malloc(13);
         sprintf(fld3, "\"d\" : ");
        tmp[3] = safe_strcat(fld3, json_uint8(x->d));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_recordtest__rec2_ptr(pointer_t x, pointer_t y, actual_recordtest__rec2_t T){
        return equal_recordtest__rec2((recordtest__rec2_t)x, (recordtest__rec2_t)y);
}

char * json_recordtest__rec2_ptr(pointer_t x, actual_recordtest__rec2_t T){
        return json_recordtest__rec2((recordtest__rec2_t)x);
}

actual_recordtest__rec2_t actual_recordtest__rec2(){
        actual_recordtest__rec2_t new = (actual_recordtest__rec2_t)safe_malloc(sizeof(struct actual_recordtest__rec2_s));
        new->equal_ptr = (equal_ptr_t)(*equal_recordtest__rec2_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_recordtest__rec2_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_recordtest__rec2_ptr);
 

 
        return new;
 };

recordtest__rec2_t update_recordtest__rec2_a(recordtest__rec2_t x, uint8_t v){
        recordtest__rec2_t y;
        if (x->count == 1){y = x;}
        else {y = copy_recordtest__rec2(x); x->count--;};
        y->a = (uint8_t)v;
        return y;}

recordtest__rec2_t update_recordtest__rec2_b(recordtest__rec2_t x, uint8_t v){
        recordtest__rec2_t y;
        if (x->count == 1){y = x;}
        else {y = copy_recordtest__rec2(x); x->count--;};
        y->b = (uint8_t)v;
        return y;}

recordtest__rec2_t update_recordtest__rec2_c(recordtest__rec2_t x, recordtest_array_1_t v){
        recordtest__rec2_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->c != NULL){release_recordtest_array_1(x->c);};}
        else {y = copy_recordtest__rec2(x); x->count--; y->c->count--;};
        y->c = (recordtest_array_1_t)v;
        return y;}

recordtest__rec2_t update_recordtest__rec2_d(recordtest__rec2_t x, uint8_t v){
        recordtest__rec2_t y;
        if (x->count == 1){y = x;}
        else {y = copy_recordtest__rec2(x); x->count--;};
        y->d = (uint8_t)v;
        return y;}



void release_recordtest_funtype_3(recordtest_funtype_3_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

recordtest_funtype_3_t copy_recordtest_funtype_3(recordtest_funtype_3_t x){return x->ftbl->cptr(x);}

uint32_t lookup_recordtest_funtype_3(recordtest_funtype_3_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        recordtest_funtype_3_hashentry_t data = htbl->data[hashindex];
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

recordtest_funtype_3_t dupdate_recordtest_funtype_3(recordtest_funtype_3_t a, uint8_t i, mpz_ptr_t v){
        recordtest_funtype_3_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (recordtest_funtype_3_htbl_t)safe_malloc(sizeof(struct recordtest_funtype_3_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (recordtest_funtype_3_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct recordtest_funtype_3_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        recordtest_funtype_3_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                recordtest_funtype_3_hashentry_t * new_data = (recordtest_funtype_3_hashentry_t *)safe_malloc(new_size * sizeof(struct recordtest_funtype_3_hashentry_s));
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
                                mpz_set(new_data[new_loc].value, data[j].value);
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_recordtest_funtype_3(htbl, i, ihash);
        recordtest_funtype_3_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

recordtest_funtype_3_t update_recordtest_funtype_3(recordtest_funtype_3_t a, uint8_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_recordtest_funtype_3(a, i, v);
            } else {
                recordtest_funtype_3_t x = copy_recordtest_funtype_3(a);
                a->count--;
                return dupdate_recordtest_funtype_3(x, i, v);
            }}

bool_t equal_recordtest_funtype_3(recordtest_funtype_3_t x, recordtest_funtype_3_t y){
        return false;}

char* json_recordtest_funtype_3(recordtest_funtype_3_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"recordtest_funtype_3\""); return result;}


uint8_t f_recordtest_closure_4(struct recordtest_closure_4_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        recordtest_funtype_3_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_recordtest_funtype_3(htbl, bvar, hash);
        recordtest_funtype_3_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_recordtest_closure_4(bvar, closure->fvar_1, closure->fvar_2);};

return h_recordtest_closure_4(bvar, closure->fvar_1, closure->fvar_2);}

uint8_t m_recordtest_closure_4(struct recordtest_closure_4_s * closure, uint8_t bvar){
        return h_recordtest_closure_4(bvar, closure->fvar_1, closure->fvar_2);}

uint8_t h_recordtest_closure_4(uint8_t ivar_12, uint8_t ivar_1, uint8_t ivar_8){
        uint8_t result;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)1;
        result = (uint8_t)(ivar_12 + ivar_14);

        return result;
}

recordtest_closure_4_t new_recordtest_closure_4(void){
        static struct recordtest_funtype_3_ftbl_s ftbl = {.fptr = (uint8_t (*)(recordtest_funtype_3_t, uint8_t))&f_recordtest_closure_4, .mptr = (uint8_t (*)(recordtest_funtype_3_t, uint8_t))&m_recordtest_closure_4, .rptr =  (void (*)(recordtest_funtype_3_t))&release_recordtest_closure_4, .cptr = (recordtest_funtype_3_t (*)(recordtest_funtype_3_t))&copy_recordtest_closure_4};
        recordtest_closure_4_t tmp = (recordtest_closure_4_t) safe_malloc(sizeof(struct recordtest_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_recordtest_closure_4(recordtest_funtype_3_t closure){
        recordtest_closure_4_t x = (recordtest_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

recordtest_closure_4_t copy_recordtest_closure_4(recordtest_closure_4_t x){
        recordtest_closure_4_t y = new_recordtest_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        y->fvar_2 = (uint8_t)x->fvar_2;
        if (x->htbl != NULL){
            recordtest_funtype_3_htbl_t new_htbl = (recordtest_funtype_3_htbl_t) safe_malloc(sizeof(struct recordtest_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            recordtest_funtype_3_hashentry_t * new_data = (recordtest_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct recordtest_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct recordtest_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


recordtest_array_5_t new_recordtest_array_5(uint32_t size){
        recordtest_array_5_t tmp = (recordtest_array_5_t) safe_malloc(sizeof(struct recordtest_array_5_s) + (size * sizeof(recordtest_array_1_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_recordtest_array_5(recordtest_array_5_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_recordtest_array_1(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_recordtest_array_5_ptr(pointer_t x, type_actual_t T){
        release_recordtest_array_5((recordtest_array_5_t)x);
}

recordtest_array_5_t copy_recordtest_array_5(recordtest_array_5_t x){
        recordtest_array_5_t tmp = new_recordtest_array_5(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_recordtest_array_5(recordtest_array_5_t x, recordtest_array_5_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_recordtest_array_1(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_recordtest_array_5(recordtest_array_5_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_recordtest_array_1(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_recordtest_array_5_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_recordtest_array_5((recordtest_array_5_t)x, (recordtest_array_5_t)y);
}

char * json_recordtest_array_5_ptr(pointer_t x, type_actual_t T){
        return json_recordtest_array_5((recordtest_array_5_t)x);
}

actual_recordtest_array_5_t actual_recordtest_array_5(){
        actual_recordtest_array_5_t new = (actual_recordtest_array_5_t)safe_malloc(sizeof(struct actual_recordtest_array_5_s));
        new->equal_ptr = (equal_ptr_t)(*equal_recordtest_array_5_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_recordtest_array_5_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_recordtest_array_5_ptr);
 

 
        return new;
 };

recordtest_array_5_t update_recordtest_array_5(recordtest_array_5_t x, uint32_t i, recordtest_array_1_t v){
         recordtest_array_5_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_recordtest_array_5(x);
                      x->count--;};
        recordtest_array_1_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_recordtest_array_1(yelems[i]);};
         yelems[i] = v;
         return y;}

recordtest_array_5_t upgrade_recordtest_array_5(recordtest_array_5_t x, uint32_t i, recordtest_array_1_t v){
         recordtest_array_5_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct recordtest_array_5_s) + (newmax * sizeof(recordtest_array_1_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_recordtest_array_5(x);} else {y = copy_recordtest_array_5(x);
                      x->count--;};
        recordtest_array_1_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_recordtest_array_1(yelems[i]);};
         yelems[i] = v;
         return y;}




recordtest__rec3_t new_recordtest__rec3(void){
        recordtest__rec3_t tmp = (recordtest__rec3_t) safe_malloc(sizeof(struct recordtest__rec3_s));
        tmp->count = 1;
        return tmp;}

void release_recordtest__rec3(recordtest__rec3_t x){
        x->count--;
        if (x->count <= 0){
         release_recordtest_array_1(x->b);
         release_recordtest_array_5(x->c);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_recordtest__rec3_ptr(pointer_t x, type_actual_t T){
        release_recordtest__rec3((recordtest__rec3_t)x);
}

recordtest__rec3_t copy_recordtest__rec3(recordtest__rec3_t x){
        recordtest__rec3_t y = new_recordtest__rec3();
        y->a = (uint8_t)x->a;
        y->b = x->b;
        if (y->b != NULL){y->b->count++;};
        y->c = x->c;
        if (y->c != NULL){y->c->count++;};
        y->count = 1;
        return y;}

bool_t equal_recordtest__rec3(recordtest__rec3_t x, recordtest__rec3_t y){
        bool_t tmp = true;
        tmp = tmp && x->a == y->a;
        tmp = tmp && equal_recordtest_array_1(x->b, y->b);
        tmp = tmp && equal_recordtest_array_5(x->c, y->c);
        return tmp;}

char * json_recordtest__rec3(recordtest__rec3_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(13);
         sprintf(fld0, "\"a\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->a));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"b\" : ");
        tmp[1] = safe_strcat(fld1, json_recordtest_array_1(x->b));
        char * fld2 = safe_malloc(13);
         sprintf(fld2, "\"c\" : ");
        tmp[2] = safe_strcat(fld2, json_recordtest_array_5(x->c));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_recordtest__rec3_ptr(pointer_t x, pointer_t y, actual_recordtest__rec3_t T){
        return equal_recordtest__rec3((recordtest__rec3_t)x, (recordtest__rec3_t)y);
}

char * json_recordtest__rec3_ptr(pointer_t x, actual_recordtest__rec3_t T){
        return json_recordtest__rec3((recordtest__rec3_t)x);
}

actual_recordtest__rec3_t actual_recordtest__rec3(){
        actual_recordtest__rec3_t new = (actual_recordtest__rec3_t)safe_malloc(sizeof(struct actual_recordtest__rec3_s));
        new->equal_ptr = (equal_ptr_t)(*equal_recordtest__rec3_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_recordtest__rec3_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_recordtest__rec3_ptr);
 

 
        return new;
 };

recordtest__rec3_t update_recordtest__rec3_a(recordtest__rec3_t x, uint8_t v){
        recordtest__rec3_t y;
        if (x->count == 1){y = x;}
        else {y = copy_recordtest__rec3(x); x->count--;};
        y->a = (uint8_t)v;
        return y;}

recordtest__rec3_t update_recordtest__rec3_b(recordtest__rec3_t x, recordtest_array_1_t v){
        recordtest__rec3_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->b != NULL){release_recordtest_array_1(x->b);};}
        else {y = copy_recordtest__rec3(x); x->count--; y->b->count--;};
        y->b = (recordtest_array_1_t)v;
        return y;}

recordtest__rec3_t update_recordtest__rec3_c(recordtest__rec3_t x, recordtest_array_5_t v){
        recordtest__rec3_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->c != NULL){release_recordtest_array_5(x->c);};}
        else {y = copy_recordtest__rec3(x); x->count--; y->c->count--;};
        y->c = (recordtest_array_5_t)v;
        return y;}



void release_recordtest_funtype_7(recordtest_funtype_7_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

recordtest_funtype_7_t copy_recordtest_funtype_7(recordtest_funtype_7_t x){return x->ftbl->cptr(x);}

uint32_t lookup_recordtest_funtype_7(recordtest_funtype_7_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        recordtest_funtype_7_hashentry_t data = htbl->data[hashindex];
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

recordtest_funtype_7_t dupdate_recordtest_funtype_7(recordtest_funtype_7_t a, uint8_t i, uint8_t v){
        recordtest_funtype_7_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (recordtest_funtype_7_htbl_t)safe_malloc(sizeof(struct recordtest_funtype_7_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (recordtest_funtype_7_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct recordtest_funtype_7_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        recordtest_funtype_7_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                recordtest_funtype_7_hashentry_t * new_data = (recordtest_funtype_7_hashentry_t *)safe_malloc(new_size * sizeof(struct recordtest_funtype_7_hashentry_s));
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
                                new_data[new_loc].value = (uint8_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_recordtest_funtype_7(htbl, i, ihash);
        recordtest_funtype_7_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint8_t)v; htbl->num_entries++;}
            else {htbl->data[hashindex].value = (uint8_t)v;};
        return a;

}

recordtest_funtype_7_t update_recordtest_funtype_7(recordtest_funtype_7_t a, uint8_t i, uint8_t v){
        if (a->count == 1){
                return dupdate_recordtest_funtype_7(a, i, v);
            } else {
                recordtest_funtype_7_t x = copy_recordtest_funtype_7(a);
                a->count--;
                return dupdate_recordtest_funtype_7(x, i, v);
            }}

bool_t equal_recordtest_funtype_7(recordtest_funtype_7_t x, recordtest_funtype_7_t y){
        return false;}

char* json_recordtest_funtype_7(recordtest_funtype_7_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"recordtest_funtype_7\""); return result;}

void release_recordtest_funtype_8(recordtest_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

recordtest_funtype_8_t copy_recordtest_funtype_8(recordtest_funtype_8_t x){return x->ftbl->cptr(x);}

uint32_t lookup_recordtest_funtype_8(recordtest_funtype_8_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        recordtest_funtype_8_hashentry_t data = htbl->data[hashindex];
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

recordtest_funtype_8_t dupdate_recordtest_funtype_8(recordtest_funtype_8_t a, uint8_t i, recordtest_funtype_7_t v){
        recordtest_funtype_8_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (recordtest_funtype_8_htbl_t)safe_malloc(sizeof(struct recordtest_funtype_8_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (recordtest_funtype_8_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct recordtest_funtype_8_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        recordtest_funtype_8_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                recordtest_funtype_8_hashentry_t * new_data = (recordtest_funtype_8_hashentry_t *)safe_malloc(new_size * sizeof(struct recordtest_funtype_8_hashentry_s));
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
                                new_data[new_loc].value = (recordtest_funtype_7_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_recordtest_funtype_8(htbl, i, ihash);
        recordtest_funtype_8_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (recordtest_funtype_7_t)v; htbl->num_entries++;}
            else {recordtest_funtype_7_t tempvalue;tempvalue = (recordtest_funtype_7_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (recordtest_funtype_7_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_recordtest_funtype_7(tempvalue);};
        return a;

}

recordtest_funtype_8_t update_recordtest_funtype_8(recordtest_funtype_8_t a, uint8_t i, recordtest_funtype_7_t v){
        if (a->count == 1){
                return dupdate_recordtest_funtype_8(a, i, v);
            } else {
                recordtest_funtype_8_t x = copy_recordtest_funtype_8(a);
                a->count--;
                return dupdate_recordtest_funtype_8(x, i, v);
            }}

bool_t equal_recordtest_funtype_8(recordtest_funtype_8_t x, recordtest_funtype_8_t y){
        return false;}

char* json_recordtest_funtype_8(recordtest_funtype_8_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"recordtest_funtype_8\""); return result;}


recordtest_array_1_t f_recordtest_closure_9(struct recordtest_closure_9_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        recordtest_funtype_8_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_recordtest_funtype_8(htbl, bvar, hash);
        recordtest_funtype_8_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            recordtest_array_1_t result;
            result = (recordtest_array_1_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_recordtest_closure_9(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);};

return h_recordtest_closure_9(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

recordtest_array_1_t m_recordtest_closure_9(struct recordtest_closure_9_s * closure, uint8_t bvar){
        return h_recordtest_closure_9(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

recordtest_array_1_t h_recordtest_closure_9(uint8_t ivar_49, uint8_t ivar_27, recordtest_array_1_t ivar_2, uint8_t ivar_1, recordtest_array_1_t ivar_28){
        recordtest_array_1_t result;
        uint32_t size44710;
        recordtest_array_1_t ivar_52;
        //copying to recordtest_array_1 from recordtest_array_1;
        ivar_52 = (recordtest_array_1_t)ivar_28;
        if (ivar_52 != NULL) ivar_52->count++;
        uint8_t ivar_53;
        //copying to uint8 from uint8;
        ivar_53 = (uint8_t)ivar_49;
        uint8_t ivar_51;
        ivar_51 = (uint8_t)ivar_52->elems[ivar_53];
        //copying to uint32 from uint8;
        size44710 = (uint32_t)ivar_51;
        size44710 += 0;
        result = new_recordtest_array_1(size44710);
        uint8_t ivar_54;
        for (uint32_t index44709 = 0; index44709 < size44710; index44709++){
             ivar_54 = (uint8_t)index44709;
             //copying to uint8 from uint8;
             result->elems[ivar_54] = (uint8_t)ivar_54;
        };

        return result;
}

recordtest_closure_9_t new_recordtest_closure_9(void){
        static struct recordtest_funtype_8_ftbl_s ftbl = {.fptr = (recordtest_array_1_t (*)(recordtest_funtype_8_t, uint8_t))&f_recordtest_closure_9, .mptr = (recordtest_array_1_t (*)(recordtest_funtype_8_t, uint8_t))&m_recordtest_closure_9, .rptr =  (void (*)(recordtest_funtype_8_t))&release_recordtest_closure_9, .cptr = (recordtest_funtype_8_t (*)(recordtest_funtype_8_t))&copy_recordtest_closure_9};
        recordtest_closure_9_t tmp = (recordtest_closure_9_t) safe_malloc(sizeof(struct recordtest_closure_9_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_recordtest_closure_9(recordtest_funtype_8_t closure){
        recordtest_closure_9_t x = (recordtest_closure_9_t)closure;
        x->count--;
        if (x->count <= 0){
         release_recordtest_array_1(x->fvar_2);
         release_recordtest_array_1(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

recordtest_closure_9_t copy_recordtest_closure_9(recordtest_closure_9_t x){
        recordtest_closure_9_t y = new_recordtest_closure_9();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint8_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = (uint8_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        if (x->htbl != NULL){
            recordtest_funtype_8_htbl_t new_htbl = (recordtest_funtype_8_htbl_t) safe_malloc(sizeof(struct recordtest_funtype_8_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            recordtest_funtype_8_hashentry_t * new_data = (recordtest_funtype_8_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct recordtest_funtype_8_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct recordtest_funtype_8_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

recordtest__rec_t recordtest__mkrec(uint8_t ivar_1){
        recordtest__rec_t  result;
        mpz_ptr_t ivar_13;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)1;
        mpz_mk_set_ui(ivar_13, (uint64_t)ivar_1);
        mpz_add_ui(ivar_13, ivar_13, (uint64_t)ivar_4);
        uint8_t ivar_6;
        //copying to uint8 from mpz;
        ivar_6 = (uint8_t)mpz_get_ui(ivar_13);
        mpz_clear(ivar_13);
        mpz_ptr_t ivar_9;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_9, ivar_1);
        recordtest__rec_t tmp44552 = new_recordtest__rec();;
        result = (recordtest__rec_t)tmp44552;
        tmp44552->a = (uint8_t)ivar_6;
        tmp44552->b = (uint8_t)ivar_1;
        mpz_init(tmp44552->c);
        mpz_set(tmp44552->c, ivar_9);
        mpz_clear(ivar_9);

        
        return result;
}

recordtest__rec2_t recordtest__mkrec2(uint8_t ivar_1){
        recordtest__rec2_t  result;
        mpz_ptr_t ivar_19;
        uint8_t ivar_6;
        ivar_6 = (uint8_t)1;
        mpz_mk_set_ui(ivar_19, (uint64_t)ivar_1);
        mpz_add_ui(ivar_19, ivar_19, (uint64_t)ivar_6);
        uint8_t ivar_8;
        //copying to uint8 from mpz;
        ivar_8 = (uint8_t)mpz_get_ui(ivar_19);
        mpz_clear(ivar_19);
        recordtest_funtype_3_t ivar_18;
        recordtest_closure_4_t cl44580;
        cl44580 = new_recordtest_closure_4();
        cl44580->fvar_1 = (uint8_t)ivar_1;
        cl44580->fvar_2 = (uint8_t)ivar_8;
        ivar_18 = (recordtest_funtype_3_t)cl44580;
        recordtest_array_1_t ivar_16;
        //copying to recordtest_array_1 from recordtest_funtype_3;
        uint32_t tmp44581;
        //copying to uint32 from uint8;
        tmp44581 = (uint32_t)ivar_1;
        tmp44581 += 0;
        ivar_16 = new_recordtest_array_1(tmp44581);
        for (uint32_t index_20 = 0; index_20 < tmp44581; index_20++){
             ivar_16->elems[index_20] = (uint8_t)mpz_get_ui(ivar_18->ftbl->fptr(ivar_18, index_20));
        };
        release_recordtest_funtype_3(ivar_18);
        recordtest__rec2_t tmp44582 = new_recordtest__rec2();;
        result = (recordtest__rec2_t)tmp44582;
        tmp44582->a = (uint8_t)ivar_8;
        tmp44582->b = (uint8_t)ivar_1;
        tmp44582->c = (recordtest_array_1_t)ivar_16;
        tmp44582->d = (uint8_t)ivar_1;

        
        return result;
}

recordtest__rec3_t recordtest__mkrec3(uint8_t ivar_1){
        recordtest__rec3_t  result;
        /* bf */ recordtest_array_1_t ivar_2;
        uint32_t size44708;
        //copying to uint32 from uint8;
        size44708 = (uint32_t)ivar_1;
        size44708 += 0;
        ivar_2 = new_recordtest_array_1(size44708);
        uint8_t ivar_5;
        for (uint32_t index44707 = 0; index44707 < size44708; index44707++){
             ivar_5 = (uint8_t)index44707;
             //copying to uint8 from uint8;
             ivar_2->elems[ivar_5] = (uint8_t)ivar_5;
        };
        recordtest_funtype_8_t ivar_65;
        recordtest_closure_9_t cl44711;
        cl44711 = new_recordtest_closure_9();
        cl44711->fvar_1 = (uint8_t)ivar_27;
        cl44711->fvar_2 = (recordtest_array_1_t)ivar_2;
        if (cl44711->fvar_2 != NULL) cl44711->fvar_2->count++;
        cl44711->fvar_3 = (uint8_t)ivar_1;
        cl44711->fvar_4 = (recordtest_array_1_t)ivar_28;
        if (cl44711->fvar_4 != NULL) cl44711->fvar_4->count++;
        ivar_65 = (recordtest_funtype_8_t)cl44711;
        recordtest_array_5_t ivar_59;
        //copying to recordtest_array_5 from recordtest_funtype_8;
        uint32_t tmp44712;
        //copying to uint32 from uint8;
        tmp44712 = (uint32_t)ivar_1;
        tmp44712 += 0;
        ivar_59 = new_recordtest_array_5(tmp44712);
        for (uint32_t index_66 = 0; index_66 < tmp44712; index_66++){
             uint32_t tmp44713;
             tmp44713 = (uint32_t)ivar_2->elems[ivar_60];
             release_recordtest_array_1(ivar_2);
             tmp44713 += 0;
             ivar_59->elems[index_66] = new_recordtest_array_1(tmp44713);
             for (uint32_t index_67 = 0; index_67 < tmp44713; index_67++){
           ivar_59->elems[index_66]->elems[index_67] = (uint8_t)ivar_65->ftbl->fptr(ivar_65, index_66)->ftbl->fptr(ivar_65->ftbl->fptr(ivar_65, index_66), index_67);
             };
        };
        release_recordtest_funtype_8(ivar_65);
        recordtest__rec3_t tmp44714 = new_recordtest__rec3();;
        result = (recordtest__rec3_t)tmp44714;
        tmp44714->a = (uint8_t)ivar_1;
        tmp44714->b = (recordtest_array_1_t)ivar_2;
        tmp44714->c = (recordtest_array_5_t)ivar_59;

        
        return result;
}