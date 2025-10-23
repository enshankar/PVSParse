//Code generated using pvs2ir2c
#include "ltedfapegtest_c.h"


ltedfapegtest_array_0_t new_ltedfapegtest_array_0(uint32_t size){
        ltedfapegtest_array_0_t tmp = (ltedfapegtest_array_0_t) safe_malloc(sizeof(struct ltedfapegtest_array_0_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_ltedfapegtest_array_0(ltedfapegtest_array_0_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_ltedfapegtest_array_0_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegtest_array_0((ltedfapegtest_array_0_t)x);
}

ltedfapegtest_array_0_t copy_ltedfapegtest_array_0(ltedfapegtest_array_0_t x){
        ltedfapegtest_array_0_t tmp = new_ltedfapegtest_array_0(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_ltedfapegtest_array_0(ltedfapegtest_array_0_t x, ltedfapegtest_array_0_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

char * json_ltedfapegtest_array_0(ltedfapegtest_array_0_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_uint8(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltedfapegtest_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltedfapegtest_array_0((ltedfapegtest_array_0_t)x, (ltedfapegtest_array_0_t)y);
}

char * json_ltedfapegtest_array_0_ptr(pointer_t x, type_actual_t T){
        return json_ltedfapegtest_array_0((ltedfapegtest_array_0_t)x);
}

actual_ltedfapegtest_array_0_t actual_ltedfapegtest_array_0(){
        actual_ltedfapegtest_array_0_t new = (actual_ltedfapegtest_array_0_t)safe_malloc(sizeof(struct actual_ltedfapegtest_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegtest_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegtest_array_0_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegtest_array_0_ptr);
 

 
        return new;
 };

ltedfapegtest_array_0_t update_ltedfapegtest_array_0(ltedfapegtest_array_0_t x, uint32_t i, uint8_t v){
        ltedfapegtest_array_0_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_ltedfapegtest_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

ltedfapegtest_array_0_t upgrade_ltedfapegtest_array_0(ltedfapegtest_array_0_t x, uint32_t i, uint8_t v){
        ltedfapegtest_array_0_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltedfapegtest_array_0_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltedfapegtest_array_0(x);}
           else {y = copy_ltedfapegtest_array_0(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}



void release_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegtest_funtype_1_t copy_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltedfapegtest_funtype_1_hashentry_t data = htbl->data[hashindex];
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

ltedfapegtest_funtype_1_t dupdate_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t a, uint8_t i, ltedfapeg__ent_adt_t v){
        ltedfapegtest_funtype_1_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltedfapegtest_funtype_1_htbl_t)safe_malloc(sizeof(struct ltedfapegtest_funtype_1_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltedfapegtest_funtype_1_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltedfapegtest_funtype_1_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltedfapegtest_funtype_1_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltedfapegtest_funtype_1_hashentry_t * new_data = (ltedfapegtest_funtype_1_hashentry_t *)safe_malloc(new_size * sizeof(struct ltedfapegtest_funtype_1_hashentry_s));
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
        uint32_t hashindex = lookup_ltedfapegtest_funtype_1(htbl, i, ihash);
        ltedfapegtest_funtype_1_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltedfapeg__ent_adt_t)v; htbl->num_entries++;}
            else {ltedfapeg__ent_adt_t tempvalue;tempvalue = (ltedfapeg__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltedfapeg__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltedfapeg__ent_adt(tempvalue);};
        return a;

}

ltedfapegtest_funtype_1_t update_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t a, uint8_t i, ltedfapeg__ent_adt_t v){
        if (a->count == 1){
                return dupdate_ltedfapegtest_funtype_1(a, i, v);
            } else {
                ltedfapegtest_funtype_1_t x = copy_ltedfapegtest_funtype_1(a);
                a->count--;
                return dupdate_ltedfapegtest_funtype_1(x, i, v);
            }}

bool_t equal_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t x, ltedfapegtest_funtype_1_t y){
        return false;}

char* json_ltedfapegtest_funtype_1(ltedfapegtest_funtype_1_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"ltedfapegtest_funtype_1\""); return result;}


ltedfapeg__ent_adt_t f_ltedfapegtest_closure_2(struct ltedfapegtest_closure_2_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        ltedfapegtest_funtype_1_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_ltedfapegtest_funtype_1(htbl, bvar, hash);
        ltedfapegtest_funtype_1_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            ltedfapeg__ent_adt_t result;
            result = (ltedfapeg__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_ltedfapegtest_closure_2(bvar);};

return h_ltedfapegtest_closure_2(bvar);}

ltedfapeg__ent_adt_t m_ltedfapegtest_closure_2(struct ltedfapegtest_closure_2_s * closure, uint8_t bvar){
        return h_ltedfapegtest_closure_2(bvar);}

ltedfapeg__ent_adt_t h_ltedfapegtest_closure_2(uint8_t ivar_10){
        ltedfapeg__ent_adt_t result;
        result = (ltedfapeg__ent_adt_t)ltedfapeg__pending();
        if (result != NULL) result->count++;

        return result;
}

ltedfapegtest_closure_2_t new_ltedfapegtest_closure_2(void){
        static struct ltedfapegtest_funtype_1_ftbl_s ftbl = {.fptr = (ltedfapeg__ent_adt_t (*)(ltedfapegtest_funtype_1_t, uint8_t))&f_ltedfapegtest_closure_2, .mptr = (ltedfapeg__ent_adt_t (*)(ltedfapegtest_funtype_1_t, uint8_t))&m_ltedfapegtest_closure_2, .rptr =  (void (*)(ltedfapegtest_funtype_1_t))&release_ltedfapegtest_closure_2, .cptr = (ltedfapegtest_funtype_1_t (*)(ltedfapegtest_funtype_1_t))&copy_ltedfapegtest_closure_2};
        ltedfapegtest_closure_2_t tmp = (ltedfapegtest_closure_2_t) safe_malloc(sizeof(struct ltedfapegtest_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_ltedfapegtest_closure_2(ltedfapegtest_funtype_1_t closure){
        ltedfapegtest_closure_2_t x = (ltedfapegtest_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

ltedfapegtest_closure_2_t copy_ltedfapegtest_closure_2(ltedfapegtest_closure_2_t x){
        ltedfapegtest_closure_2_t y = new_ltedfapegtest_closure_2();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            ltedfapegtest_funtype_1_htbl_t new_htbl = (ltedfapegtest_funtype_1_htbl_t) safe_malloc(sizeof(struct ltedfapegtest_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            ltedfapegtest_funtype_1_hashentry_t * new_data = (ltedfapegtest_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct ltedfapegtest_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct ltedfapegtest_funtype_1_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


ltedfapegtest_array_3_t new_ltedfapegtest_array_3(uint32_t size){
        ltedfapegtest_array_3_t tmp = (ltedfapegtest_array_3_t) safe_malloc(sizeof(struct ltedfapegtest_array_3_s) + (size * sizeof(ltedfapeg__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltedfapegtest_array_3(ltedfapegtest_array_3_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltedfapeg__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltedfapegtest_array_3_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegtest_array_3((ltedfapegtest_array_3_t)x);
}

ltedfapegtest_array_3_t copy_ltedfapegtest_array_3(ltedfapegtest_array_3_t x){
        ltedfapegtest_array_3_t tmp = new_ltedfapegtest_array_3(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltedfapegtest_array_3(ltedfapegtest_array_3_t x, ltedfapegtest_array_3_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltedfapeg__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltedfapegtest_array_3(ltedfapegtest_array_3_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltedfapeg__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltedfapegtest_array_3_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltedfapegtest_array_3((ltedfapegtest_array_3_t)x, (ltedfapegtest_array_3_t)y);
}

char * json_ltedfapegtest_array_3_ptr(pointer_t x, type_actual_t T){
        return json_ltedfapegtest_array_3((ltedfapegtest_array_3_t)x);
}

actual_ltedfapegtest_array_3_t actual_ltedfapegtest_array_3(){
        actual_ltedfapegtest_array_3_t new = (actual_ltedfapegtest_array_3_t)safe_malloc(sizeof(struct actual_ltedfapegtest_array_3_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegtest_array_3_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegtest_array_3_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegtest_array_3_ptr);
 

 
        return new;
 };

ltedfapegtest_array_3_t update_ltedfapegtest_array_3(ltedfapegtest_array_3_t x, uint32_t i, ltedfapeg__ent_adt_t v){
         ltedfapegtest_array_3_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltedfapegtest_array_3(x);
                      x->count--;};
        ltedfapeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

ltedfapegtest_array_3_t upgrade_ltedfapegtest_array_3(ltedfapegtest_array_3_t x, uint32_t i, ltedfapeg__ent_adt_t v){
         ltedfapegtest_array_3_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltedfapegtest_array_3_s) + (newmax * sizeof(ltedfapeg__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltedfapegtest_array_3(x);} else {y = copy_ltedfapegtest_array_3(x);
                      x->count--;};
        ltedfapeg__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapeg__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}




ltedfapegtest_array_4_t new_ltedfapegtest_array_4(uint32_t size){
        ltedfapegtest_array_4_t tmp = (ltedfapegtest_array_4_t) safe_malloc(sizeof(struct ltedfapegtest_array_4_s) + (size * sizeof(ltedfapegtest_array_3_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_ltedfapegtest_array_4(ltedfapegtest_array_4_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_ltedfapegtest_array_3(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_ltedfapegtest_array_4_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegtest_array_4((ltedfapegtest_array_4_t)x);
}

ltedfapegtest_array_4_t copy_ltedfapegtest_array_4(ltedfapegtest_array_4_t x){
        ltedfapegtest_array_4_t tmp = new_ltedfapegtest_array_4(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_ltedfapegtest_array_4(ltedfapegtest_array_4_t x, ltedfapegtest_array_4_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_ltedfapegtest_array_3(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_ltedfapegtest_array_4(ltedfapegtest_array_4_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_ltedfapegtest_array_3(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_ltedfapegtest_array_4_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_ltedfapegtest_array_4((ltedfapegtest_array_4_t)x, (ltedfapegtest_array_4_t)y);
}

char * json_ltedfapegtest_array_4_ptr(pointer_t x, type_actual_t T){
        return json_ltedfapegtest_array_4((ltedfapegtest_array_4_t)x);
}

actual_ltedfapegtest_array_4_t actual_ltedfapegtest_array_4(){
        actual_ltedfapegtest_array_4_t new = (actual_ltedfapegtest_array_4_t)safe_malloc(sizeof(struct actual_ltedfapegtest_array_4_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegtest_array_4_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegtest_array_4_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegtest_array_4_ptr);
 

 
        return new;
 };

ltedfapegtest_array_4_t update_ltedfapegtest_array_4(ltedfapegtest_array_4_t x, uint32_t i, ltedfapegtest_array_3_t v){
         ltedfapegtest_array_4_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_ltedfapegtest_array_4(x);
                      x->count--;};
        ltedfapegtest_array_3_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapegtest_array_3(yelems[i]);};
         yelems[i] = v;
         return y;}

ltedfapegtest_array_4_t upgrade_ltedfapegtest_array_4(ltedfapegtest_array_4_t x, uint32_t i, ltedfapegtest_array_3_t v){
         ltedfapegtest_array_4_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct ltedfapegtest_array_4_s) + (newmax * sizeof(ltedfapegtest_array_3_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_ltedfapegtest_array_4(x);} else {y = copy_ltedfapegtest_array_4(x);
                      x->count--;};
        ltedfapegtest_array_3_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_ltedfapegtest_array_3(yelems[i]);};
         yelems[i] = v;
         return y;}




ltedfapegtest_record_5_t new_ltedfapegtest_record_5(void){
        ltedfapegtest_record_5_t tmp = (ltedfapegtest_record_5_t) safe_malloc(sizeof(struct ltedfapegtest_record_5_s));
        tmp->count = 1;
        return tmp;}

void release_ltedfapegtest_record_5(ltedfapegtest_record_5_t x){
        x->count--;
        if (x->count <= 0){
         release_ltedfapegtest_array_4(x->scaf);
         release_ltedfapeg__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_ltedfapegtest_record_5_ptr(pointer_t x, type_actual_t T){
        release_ltedfapegtest_record_5((ltedfapegtest_record_5_t)x);
}

ltedfapegtest_record_5_t copy_ltedfapegtest_record_5(ltedfapegtest_record_5_t x){
        ltedfapegtest_record_5_t y = new_ltedfapegtest_record_5();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_ltedfapegtest_record_5(ltedfapegtest_record_5_t x, ltedfapegtest_record_5_t y){
        bool_t tmp = true;
        tmp = tmp && equal_ltedfapegtest_array_4(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_ltedfapeg__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_ltedfapegtest_record_5(ltedfapegtest_record_5_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_ltedfapegtest_array_4(x->scaf));
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

bool_t equal_ltedfapegtest_record_5_ptr(pointer_t x, pointer_t y, actual_ltedfapegtest_record_5_t T){
        return equal_ltedfapegtest_record_5((ltedfapegtest_record_5_t)x, (ltedfapegtest_record_5_t)y);
}

char * json_ltedfapegtest_record_5_ptr(pointer_t x, actual_ltedfapegtest_record_5_t T){
        return json_ltedfapegtest_record_5((ltedfapegtest_record_5_t)x);
}

actual_ltedfapegtest_record_5_t actual_ltedfapegtest_record_5(){
        actual_ltedfapegtest_record_5_t new = (actual_ltedfapegtest_record_5_t)safe_malloc(sizeof(struct actual_ltedfapegtest_record_5_s));
        new->equal_ptr = (equal_ptr_t)(*equal_ltedfapegtest_record_5_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_ltedfapegtest_record_5_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_ltedfapegtest_record_5_ptr);
 

 
        return new;
 };

ltedfapegtest_record_5_t update_ltedfapegtest_record_5_scaf(ltedfapegtest_record_5_t x, ltedfapegtest_array_4_t v){
        ltedfapegtest_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_ltedfapegtest_array_4(x->scaf);};}
        else {y = copy_ltedfapegtest_record_5(x); x->count--; y->scaf->count--;};
        y->scaf = (ltedfapegtest_array_4_t)v;
        return y;}

ltedfapegtest_record_5_t update_ltedfapegtest_record_5_depth(ltedfapegtest_record_5_t x, uint64_t v){
        ltedfapegtest_record_5_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegtest_record_5(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

ltedfapegtest_record_5_t update_ltedfapegtest_record_5_stack(ltedfapegtest_record_5_t x, ltedfapeg__ent_adt_t v){
        ltedfapegtest_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_ltedfapeg__ent_adt(x->stack);};}
        else {y = copy_ltedfapegtest_record_5(x); x->count--; y->stack->count--;};
        y->stack = (ltedfapeg__ent_adt_t)v;
        return y;}

ltedfapegtest_record_5_t update_ltedfapegtest_record_5_lflag(ltedfapegtest_record_5_t x, bool_t v){
        ltedfapegtest_record_5_t y;
        if (x->count == 1){y = x;}
        else {y = copy_ltedfapegtest_record_5(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}



void release_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

ltedfapegtest_funtype_6_t copy_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t x){return x->ftbl->cptr(x);}

uint32_t lookup_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        ltedfapegtest_funtype_6_hashentry_t data = htbl->data[hashindex];
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

ltedfapegtest_funtype_6_t dupdate_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t a, uint8_t i, ltedfapegtest_funtype_1_t v){
        ltedfapegtest_funtype_6_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (ltedfapegtest_funtype_6_htbl_t)safe_malloc(sizeof(struct ltedfapegtest_funtype_6_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (ltedfapegtest_funtype_6_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct ltedfapegtest_funtype_6_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        ltedfapegtest_funtype_6_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                ltedfapegtest_funtype_6_hashentry_t * new_data = (ltedfapegtest_funtype_6_hashentry_t *)safe_malloc(new_size * sizeof(struct ltedfapegtest_funtype_6_hashentry_s));
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
                                new_data[new_loc].value = (ltedfapegtest_funtype_1_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_ltedfapegtest_funtype_6(htbl, i, ihash);
        ltedfapegtest_funtype_6_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ltedfapegtest_funtype_1_t)v; htbl->num_entries++;}
            else {ltedfapegtest_funtype_1_t tempvalue;tempvalue = (ltedfapegtest_funtype_1_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ltedfapegtest_funtype_1_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ltedfapegtest_funtype_1(tempvalue);};
        return a;

}

ltedfapegtest_funtype_6_t update_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t a, uint8_t i, ltedfapegtest_funtype_1_t v){
        if (a->count == 1){
                return dupdate_ltedfapegtest_funtype_6(a, i, v);
            } else {
                ltedfapegtest_funtype_6_t x = copy_ltedfapegtest_funtype_6(a);
                a->count--;
                return dupdate_ltedfapegtest_funtype_6(x, i, v);
            }}

bool_t equal_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t x, ltedfapegtest_funtype_6_t y){
        return false;}

char* json_ltedfapegtest_funtype_6(ltedfapegtest_funtype_6_t x){char * result = safe_malloc(33); sprintf(result, "%s", "\"ltedfapegtest_funtype_6\""); return result;}

ltedfapeg__prepeg_adt_t ltedfapegtest__djson(uint8_t ivar_1){
        ltedfapeg__prepeg_adt_t  result;
        bool_t ivar_2;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)0;
        ivar_2 = (ivar_1 == ivar_4);
        if (ivar_2){ 
             uint8_t ivar_10;
             ivar_10 = (uint8_t)3;
             uint8_t ivar_11;
             ivar_11 = (uint8_t)1;
             uint8_t ivar_12;
             ivar_12 = (uint8_t)31;
             result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_10, (uint8_t)ivar_11, (uint8_t)ivar_12);
} else {
        
             bool_t ivar_13;
             uint8_t ivar_15;
             ivar_15 = (uint8_t)1;
             ivar_13 = (ivar_1 == ivar_15);
             if (ivar_13){  
           uint8_t ivar_21;
           ivar_21 = (uint8_t)16;
           uint8_t ivar_22;
           ivar_22 = (uint8_t)31;
           uint8_t ivar_23;
           ivar_23 = (uint8_t)2;
           result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_21, (uint8_t)ivar_22, (uint8_t)ivar_23);
} else {
             
           bool_t ivar_24;
           uint8_t ivar_26;
           ivar_26 = (uint8_t)2;
           ivar_24 = (ivar_1 == ivar_26);
           if (ivar_24){   
           uint8_t ivar_32;
           ivar_32 = (uint8_t)24;
           uint8_t ivar_33;
           ivar_33 = (uint8_t)5;
           uint8_t ivar_34;
           ivar_34 = (uint8_t)7;
           result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_32, (uint8_t)ivar_33, (uint8_t)ivar_34);
} else {
           
           bool_t ivar_35;
           uint8_t ivar_37;
           ivar_37 = (uint8_t)3;
           ivar_35 = (ivar_1 == ivar_37);
           if (ivar_35){    
            uint8_t ivar_43;
            ivar_43 = (uint8_t)4;
            uint8_t ivar_44;
            ivar_44 = (uint8_t)31;
            uint8_t ivar_45;
            ivar_45 = (uint8_t)31;
            result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_43, (uint8_t)ivar_44, (uint8_t)ivar_45);
} else {
           
            bool_t ivar_46;
            uint8_t ivar_48;
            ivar_48 = (uint8_t)4;
            ivar_46 = (ivar_1 == ivar_48);
            if (ivar_46){     
             dfa__dfa_t ivar_52;
             ivar_52 = (dfa__dfa_t)dfa__wspaceDfa();
             if (ivar_52 != NULL) ivar_52->count++;
             result = (ltedfapeg__prepeg_adt_t)ltedfapeg__any((dfa__dfa_t)ivar_52);
} else {
            
             bool_t ivar_53;
             uint8_t ivar_55;
             ivar_55 = (uint8_t)5;
             ivar_53 = (ivar_1 == ivar_55);
             if (ivar_53){      
              uint8_t ivar_61;
              ivar_61 = (uint8_t)25;
              uint8_t ivar_62;
              ivar_62 = (uint8_t)31;
              uint8_t ivar_63;
              ivar_63 = (uint8_t)6;
              result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_61, (uint8_t)ivar_62, (uint8_t)ivar_63);
} else {
             
              bool_t ivar_64;
              uint8_t ivar_66;
              ivar_66 = (uint8_t)6;
              ivar_64 = (ivar_1 == ivar_66);
              if (ivar_64){       
               uint8_t ivar_72;
               ivar_72 = (uint8_t)8;
               uint8_t ivar_73;
               ivar_73 = (uint8_t)10;
               uint8_t ivar_74;
               ivar_74 = (uint8_t)30;
               result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_72, (uint8_t)ivar_73, (uint8_t)ivar_74);
} else {
              
               bool_t ivar_75;
               uint8_t ivar_77;
               ivar_77 = (uint8_t)7;
               ivar_75 = (ivar_1 == ivar_77);
               if (ivar_75){        
                uint8_t ivar_83;
                ivar_83 = (uint8_t)8;
                uint8_t ivar_84;
                ivar_84 = (uint8_t)31;
                uint8_t ivar_85;
                ivar_85 = (uint8_t)9;
                result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_83, (uint8_t)ivar_84, (uint8_t)ivar_85);
} else {
               
                bool_t ivar_86;
                uint8_t ivar_88;
                ivar_88 = (uint8_t)8;
                ivar_86 = (ivar_1 == ivar_88);
                if (ivar_86){         
                 dfa__dfa_t ivar_92;
                 ivar_92 = (dfa__dfa_t)dfa__tokenDfa();
                 if (ivar_92 != NULL) ivar_92->count++;
                 result = (ltedfapeg__prepeg_adt_t)ltedfapeg__any((dfa__dfa_t)ivar_92);
} else {
                
                 bool_t ivar_93;
                 uint8_t ivar_95;
                 ivar_95 = (uint8_t)9;
                 ivar_93 = (ivar_1 == ivar_95);
                 if (ivar_93){          
                  uint8_t ivar_101;
                  ivar_101 = (uint8_t)26;
                  uint8_t ivar_102;
                  ivar_102 = (uint8_t)13;
                  uint8_t ivar_103;
                  ivar_103 = (uint8_t)33;
                  result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_101, (uint8_t)ivar_102, (uint8_t)ivar_103);
} else {
                 
                  bool_t ivar_104;
                  uint8_t ivar_106;
                  ivar_106 = (uint8_t)10;
                  ivar_104 = (ivar_1 == ivar_106);
                  if (ivar_104){           
                   uint8_t ivar_112;
                   ivar_112 = (uint8_t)29;
                   uint8_t ivar_113;
                   ivar_113 = (uint8_t)11;
                   uint8_t ivar_114;
                   ivar_114 = (uint8_t)30;
                   result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_112, (uint8_t)ivar_113, (uint8_t)ivar_114);
} else {
                  
                   bool_t ivar_115;
                   uint8_t ivar_117;
                   ivar_117 = (uint8_t)11;
                   ivar_115 = (ivar_1 == ivar_117);
                   if (ivar_115){            
                    uint8_t ivar_123;
                    ivar_123 = (uint8_t)1;
                    uint8_t ivar_124;
                    ivar_124 = (uint8_t)12;
                    uint8_t ivar_125;
                    ivar_125 = (uint8_t)30;
                    result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_123, (uint8_t)ivar_124, (uint8_t)ivar_125);
} else {
                   
                    bool_t ivar_126;
                    uint8_t ivar_128;
                    ivar_128 = (uint8_t)12;
                    ivar_126 = (ivar_1 == ivar_128);
                    if (ivar_126){             
                     uint8_t ivar_134;
                     ivar_134 = (uint8_t)28;
                     uint8_t ivar_135;
                     ivar_135 = (uint8_t)5;
                     uint8_t ivar_136;
                     ivar_136 = (uint8_t)25;
                     result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_134, (uint8_t)ivar_135, (uint8_t)ivar_136);
} else {
                    
                     bool_t ivar_137;
                     uint8_t ivar_139;
                     ivar_139 = (uint8_t)13;
                     ivar_137 = (ivar_1 == ivar_139);
                     if (ivar_137){              
                      uint8_t ivar_145;
                      ivar_145 = (uint8_t)27;
                      uint8_t ivar_146;
                      ivar_146 = (uint8_t)31;
                      uint8_t ivar_147;
                      ivar_147 = (uint8_t)15;
                      result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_145, (uint8_t)ivar_146, (uint8_t)ivar_147);
} else {
                     
                      bool_t ivar_148;
                      uint8_t ivar_150;
                      ivar_150 = (uint8_t)14;
                      ivar_148 = (ivar_1 == ivar_150);
                      if (ivar_148){               
                       uint8_t ivar_156;
                       ivar_156 = (uint8_t)28;
                       uint8_t ivar_157;
                       ivar_157 = (uint8_t)15;
                       uint8_t ivar_158;
                       ivar_158 = (uint8_t)27;
                       result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_156, (uint8_t)ivar_157, (uint8_t)ivar_158);
} else {
                      
                       bool_t ivar_159;
                       uint8_t ivar_161;
                       ivar_161 = (uint8_t)15;
                       ivar_159 = (ivar_1 == ivar_161);
                       if (ivar_159){                
                        uint8_t ivar_167;
                        ivar_167 = (uint8_t)1;
                        uint8_t ivar_168;
                        ivar_168 = (uint8_t)14;
                        uint8_t ivar_169;
                        ivar_169 = (uint8_t)30;
                        result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_167, (uint8_t)ivar_168, (uint8_t)ivar_169);
} else {
                       
                        bool_t ivar_170;
                        uint8_t ivar_172;
                        ivar_172 = (uint8_t)16;
                        ivar_170 = (ivar_1 == ivar_172);
                        if (ivar_170){                 
                         dfa__dfa_t ivar_176;
                         ivar_176 = (dfa__dfa_t)dfa__digitDfa();
                         if (ivar_176 != NULL) ivar_176->count++;
                         result = (ltedfapeg__prepeg_adt_t)ltedfapeg__any((dfa__dfa_t)ivar_176);
} else {
                        
                         bool_t ivar_177;
                         uint8_t ivar_179;
                         ivar_179 = (uint8_t)17;
                         ivar_177 = (ivar_1 == ivar_179);
                         if (ivar_177){                  
                          uint8_t ivar_183;
                          ivar_183 = (uint8_t)123;
                          result = (ltedfapeg__prepeg_adt_t)ltedfapeg__terminal((uint8_t)ivar_183);
} else {
                         
                          bool_t ivar_184;
                          uint8_t ivar_186;
                          ivar_186 = (uint8_t)18;
                          ivar_184 = (ivar_1 == ivar_186);
                          if (ivar_184){                   
                           uint8_t ivar_190;
                           ivar_190 = (uint8_t)125;
                           result = (ltedfapeg__prepeg_adt_t)ltedfapeg__terminal((uint8_t)ivar_190);
} else {
                          
                           bool_t ivar_191;
                           uint8_t ivar_193;
                           ivar_193 = (uint8_t)19;
                           ivar_191 = (ivar_1 == ivar_193);
                           if (ivar_191){                    
                            uint8_t ivar_197;
                            ivar_197 = (uint8_t)91;
                            result = (ltedfapeg__prepeg_adt_t)ltedfapeg__terminal((uint8_t)ivar_197);
} else {
                           
                            bool_t ivar_198;
                            uint8_t ivar_200;
                            ivar_200 = (uint8_t)20;
                            ivar_198 = (ivar_1 == ivar_200);
                            if (ivar_198){                     
                             uint8_t ivar_204;
                             ivar_204 = (uint8_t)93;
                             result = (ltedfapeg__prepeg_adt_t)ltedfapeg__terminal((uint8_t)ivar_204);
} else {
                            
                             bool_t ivar_205;
                             uint8_t ivar_207;
                             ivar_207 = (uint8_t)21;
                             ivar_205 = (ivar_1 == ivar_207);
                             if (ivar_205){                      
                              uint8_t ivar_211;
                              ivar_211 = (uint8_t)34;
                              result = (ltedfapeg__prepeg_adt_t)ltedfapeg__terminal((uint8_t)ivar_211);
} else {
                             
                              bool_t ivar_212;
                              uint8_t ivar_214;
                              ivar_214 = (uint8_t)22;
                              ivar_212 = (ivar_1 == ivar_214);
                              if (ivar_212){                       
                               uint8_t ivar_218;
                               ivar_218 = (uint8_t)44;
                               result = (ltedfapeg__prepeg_adt_t)ltedfapeg__terminal((uint8_t)ivar_218);
} else {
                              
                               bool_t ivar_219;
                               uint8_t ivar_221;
                               ivar_221 = (uint8_t)23;
                               ivar_219 = (ivar_1 == ivar_221);
                               if (ivar_219){                        
                                uint8_t ivar_225;
                                ivar_225 = (uint8_t)58;
                                result = (ltedfapeg__prepeg_adt_t)ltedfapeg__terminal((uint8_t)ivar_225);
} else {
                               
                                bool_t ivar_226;
                                uint8_t ivar_228;
                                ivar_228 = (uint8_t)24;
                                ivar_226 = (ivar_1 == ivar_228);
                                if (ivar_226){                         
                                 uint8_t ivar_234;
                                 ivar_234 = (uint8_t)17;
                                 uint8_t ivar_235;
                                 ivar_235 = (uint8_t)3;
                                 uint8_t ivar_236;
                                 ivar_236 = (uint8_t)30;
                                 result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_234, (uint8_t)ivar_235, (uint8_t)ivar_236);
} else {
                                
                                 bool_t ivar_237;
                                 uint8_t ivar_239;
                                 ivar_239 = (uint8_t)25;
                                 ivar_237 = (ivar_1 == ivar_239);
                                 if (ivar_237){                          
                                  uint8_t ivar_245;
                                  ivar_245 = (uint8_t)18;
                                  uint8_t ivar_246;
                                  ivar_246 = (uint8_t)3;
                                  uint8_t ivar_247;
                                  ivar_247 = (uint8_t)30;
                                  result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_245, (uint8_t)ivar_246, (uint8_t)ivar_247);
} else {
                                 
                                  bool_t ivar_248;
                                  uint8_t ivar_250;
                                  ivar_250 = (uint8_t)26;
                                  ivar_248 = (ivar_1 == ivar_250);
                                  if (ivar_248){                           
                                   uint8_t ivar_256;
                                   ivar_256 = (uint8_t)19;
                                   uint8_t ivar_257;
                                   ivar_257 = (uint8_t)3;
                                   uint8_t ivar_258;
                                   ivar_258 = (uint8_t)30;
                                   result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_256, (uint8_t)ivar_257, (uint8_t)ivar_258);
} else {
                                  
                                   bool_t ivar_259;
                                   uint8_t ivar_261;
                                   ivar_261 = (uint8_t)27;
                                   ivar_259 = (ivar_1 == ivar_261);
                                   if (ivar_259){                            
                                    uint8_t ivar_267;
                                    ivar_267 = (uint8_t)20;
                                    uint8_t ivar_268;
                                    ivar_268 = (uint8_t)3;
                                    uint8_t ivar_269;
                                    ivar_269 = (uint8_t)30;
                                    result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_267, (uint8_t)ivar_268, (uint8_t)ivar_269);
} else {
                                   
                                    bool_t ivar_270;
                                    uint8_t ivar_272;
                                    ivar_272 = (uint8_t)28;
                                    ivar_270 = (ivar_1 == ivar_272);
                                    if (ivar_270){                             
                                     uint8_t ivar_278;
                                     ivar_278 = (uint8_t)22;
                                     uint8_t ivar_279;
                                     ivar_279 = (uint8_t)3;
                                     uint8_t ivar_280;
                                     ivar_280 = (uint8_t)30;
                                     result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_278, (uint8_t)ivar_279, (uint8_t)ivar_280);
} else {
                                    
                                     bool_t ivar_281;
                                     uint8_t ivar_283;
                                     ivar_283 = (uint8_t)29;
                                     ivar_281 = (ivar_1 == ivar_283);
                                     if (ivar_281){                              
                                      uint8_t ivar_289;
                                      ivar_289 = (uint8_t)23;
                                      uint8_t ivar_290;
                                      ivar_290 = (uint8_t)3;
                                      uint8_t ivar_291;
                                      ivar_291 = (uint8_t)30;
                                      result = (ltedfapeg__prepeg_adt_t)ltedfapeg__lte((uint8_t)ivar_289, (uint8_t)ivar_290, (uint8_t)ivar_291);
} else {
                                     
                                      bool_t ivar_292;
                                      uint8_t ivar_294;
                                      ivar_294 = (uint8_t)30;
                                      ivar_292 = (ivar_1 == ivar_294);
                                      if (ivar_292){                               
                                       result = (ltedfapeg__prepeg_adt_t)ltedfapeg__failure();
                                       if (result != NULL) result->count++;
} else {
                                      
                                       result = (ltedfapeg__prepeg_adt_t)ltedfapeg__epsilon();
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

        
        return result;
}

ltedfapeg__prepeg_adt_t ltedfapegtest__djsontable(uint8_t ivar_5){
        ltedfapeg__prepeg_adt_t  result;
        result = (ltedfapeg__prepeg_adt_t)ltedfapegtest__djson((uint8_t)ivar_5);

        
        return result;
}

ltedfapegtest_array_0_t ltedfapegtest__empty(uint8_t ivar_1){
        ltedfapegtest_array_0_t  result;
        uint32_t size42732;
        //copying to uint32 from uint8;
        size42732 = (uint32_t)ivar_1;
        size42732 += 0;
        result = new_ltedfapegtest_array_0(size42732);
        uint8_t ivar_2;
        for (uint32_t index42731 = 0; index42731 < size42732; index42731++){
             ivar_2 = (uint8_t)index42731;
             result->elems[ivar_2] = (uint8_t)32;
        };

        
        return result;
}

ltedfapegtest_funtype_2_t ltedfapegtest__cat(uint8_t ivar_1, uint8_t ivar_2){
        ltedfapegtest_funtype_2_t  result;
        ltedfapegtest_closure_3_t cl42754;
        cl42754 = new_ltedfapegtest_closure_3();
        cl42754->fvar_1 = (uint8_t)ivar_2;
        cl42754->fvar_2 = (uint8_t)ivar_1;
        result = (ltedfapegtest_funtype_2_t)cl42754;

        
        return result;
}

uint8_t ltedfapegtest__tok0(uint8_t ivar_1){
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

uint8_t ltedfapegtest__tok1(uint8_t ivar_1){
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

uint8_t ltedfapegtest__emptydict(uint8_t ivar_1){
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

uint8_t ltedfapegtest__obrace(uint8_t ivar_1){
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

uint8_t ltedfapegtest__cbrace(uint8_t ivar_1){
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

uint8_t ltedfapegtest__colon(uint8_t ivar_1){
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

ltedfapegtest_array_0_t ltedfapegtest__emptydict2(void){
        ltedfapegtest_array_0_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    ltedfapegtest_funtype_2_t ivar_7;
        uint8_t ivar_12;
        ivar_12 = (uint8_t)3;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)3;
        ivar_7 = (ltedfapegtest_funtype_2_t)ltedfapegtest__cat((uint8_t)ivar_12, (uint8_t)ivar_13);
        ltedfapegtest_array_0_t ivar_29;
        ivar_29 = new_ltedfapegtest_array_0(3);
        uint8_t ivar_3;
        for (uint32_t index42760 = 0; index42760 < 3; index42760++){
             ivar_3 = (uint8_t)index42760;
             ivar_29->elems[ivar_3] = (uint8_t)ltedfapegtest__obrace((uint8_t)ivar_3);
        };
        ltedfapegtest_array_0_t ivar_30;
        ivar_30 = new_ltedfapegtest_array_0(3);
        uint8_t ivar_4;
        for (uint32_t index42761 = 0; index42761 < 3; index42761++){
             ivar_4 = (uint8_t)index42761;
             ivar_30->elems[ivar_4] = (uint8_t)ltedfapegtest__cbrace((uint8_t)ivar_4);
        };
        result = (ltedfapegtest_array_0_t)ivar_7->ftbl->mptr(ivar_7, ivar_29, ivar_30);
        ivar_7->ftbl->rptr(ivar_7);

        defined = true;};
        
        return result;
}

ltedfapegtest_array_0_t ltedfapegtest__dict1(void){
        ltedfapegtest_array_0_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    ltedfapegtest_funtype_2_t ivar_93;
        uint8_t ivar_98;
        ivar_98 = (uint8_t)3;
        uint8_t ivar_99;
        ivar_99 = (uint8_t)19;
        ivar_93 = (ltedfapegtest_funtype_2_t)ltedfapegtest__cat((uint8_t)ivar_98, (uint8_t)ivar_99);
        ltedfapegtest_array_0_t ivar_115;
        ivar_115 = new_ltedfapegtest_array_0(3);
        uint8_t ivar_3;
        for (uint32_t index42782 = 0; index42782 < 3; index42782++){
             ivar_3 = (uint8_t)index42782;
             ivar_115->elems[ivar_3] = (uint8_t)ltedfapegtest__obrace((uint8_t)ivar_3);
        };
        ltedfapegtest_array_0_t ivar_116;
        ltedfapegtest_funtype_2_t ivar_67;
        uint8_t ivar_72;
        ivar_72 = (uint8_t)7;
        uint8_t ivar_73;
        ivar_73 = (uint8_t)12;
        ivar_67 = (ltedfapegtest_funtype_2_t)ltedfapegtest__cat((uint8_t)ivar_72, (uint8_t)ivar_73);
        ltedfapegtest_array_0_t ivar_89;
        ivar_89 = new_ltedfapegtest_array_0(7);
        uint8_t ivar_6;
        for (uint32_t index42783 = 0; index42783 < 7; index42783++){
             ivar_6 = (uint8_t)index42783;
             ivar_89->elems[ivar_6] = (uint8_t)ltedfapegtest__tok0((uint8_t)ivar_6);
        };
        ltedfapegtest_array_0_t ivar_90;
        ltedfapegtest_funtype_2_t ivar_41;
        uint8_t ivar_46;
        ivar_46 = (uint8_t)3;
        uint8_t ivar_47;
        ivar_47 = (uint8_t)9;
        ivar_41 = (ltedfapegtest_funtype_2_t)ltedfapegtest__cat((uint8_t)ivar_46, (uint8_t)ivar_47);
        ltedfapegtest_array_0_t ivar_63;
        ivar_63 = new_ltedfapegtest_array_0(3);
        uint8_t ivar_9;
        for (uint32_t index42784 = 0; index42784 < 3; index42784++){
             ivar_9 = (uint8_t)index42784;
             ivar_63->elems[ivar_9] = (uint8_t)ltedfapegtest__colon((uint8_t)ivar_9);
        };
        ltedfapegtest_array_0_t ivar_64;
        ltedfapegtest_funtype_2_t ivar_15;
        uint8_t ivar_20;
        ivar_20 = (uint8_t)6;
        uint8_t ivar_21;
        ivar_21 = (uint8_t)3;
        ivar_15 = (ltedfapegtest_funtype_2_t)ltedfapegtest__cat((uint8_t)ivar_20, (uint8_t)ivar_21);
        ltedfapegtest_array_0_t ivar_37;
        ivar_37 = (ltedfapegtest_array_0_t)ltedfapegtest__emptydict2();
        if (ivar_37 != NULL) ivar_37->count++;
        ltedfapegtest_array_0_t ivar_38;
        ivar_38 = new_ltedfapegtest_array_0(3);
        uint8_t ivar_12;
        for (uint32_t index42785 = 0; index42785 < 3; index42785++){
             ivar_12 = (uint8_t)index42785;
             ivar_38->elems[ivar_12] = (uint8_t)ltedfapegtest__cbrace((uint8_t)ivar_12);
        };
        ivar_64 = (ltedfapegtest_array_0_t)ivar_15->ftbl->mptr(ivar_15, ivar_37, ivar_38);
        ivar_15->ftbl->rptr(ivar_15);
        ivar_90 = (ltedfapegtest_array_0_t)ivar_41->ftbl->mptr(ivar_41, ivar_63, ivar_64);
        ivar_41->ftbl->rptr(ivar_41);
        ivar_116 = (ltedfapegtest_array_0_t)ivar_67->ftbl->mptr(ivar_67, ivar_89, ivar_90);
        ivar_67->ftbl->rptr(ivar_67);
        result = (ltedfapegtest_array_0_t)ivar_93->ftbl->mptr(ivar_93, ivar_115, ivar_116);
        ivar_93->ftbl->rptr(ivar_93);

        defined = true;};
        
        return result;
}

ltedfapeg__ent_adt_t ltedfapegtest__iparse(uint8_t ivar_1, ltedfapeg__lang_spec_t ivar_2, ltedfapegtest_array_0_t ivar_3, uint8_t ivar_4, uint8_t ivar_5){
        ltedfapeg__ent_adt_t  result;
        /* pend */ ltedfapegtest_funtype_1_t ivar_6;
        ltedfapegtest_closure_2_t cl43359;
        cl43359 = new_ltedfapegtest_closure_2();
        ivar_6 = (ltedfapegtest_funtype_1_t)cl43359;
        /* St */ ltedfapegtest_record_5_t ivar_11;
        ltedfapegtest_funtype_6_t ivar_108;
        ltedfapeg__ent_adt_t ivar_51;
        uint8_t ivar_58;
        ivar_58 = (uint8_t)0;
        uint32_t ivar_55;
        //copying to uint32 from uint8;
        ivar_55 = (uint32_t)ivar_58;
        uint8_t ivar_56;
        ivar_56 = (uint8_t)ltedfapeg__num_non_terminals();
        ivar_51 = (ltedfapeg__ent_adt_t)ltedfapeg__push((uint32_t)ivar_55, (uint8_t)ivar_56);
        ltedfapegtest_array_4_t ivar_59;
        uint32_t size43362;
        //copying to uint32 from uint8;
        size43362 = (uint32_t)ivar_1;
        size43362 += 1;
        ivar_59 = new_ltedfapegtest_array_4(size43362);
        uint8_t ivar_48;
        for (uint32_t index43360 = 0; index43360 < size43362; index43360++){
             ivar_48 = (uint8_t)index43360;
             //copying to ltedfapegtest_array_3 from ltedfapegtest_funtype_1;
             uint32_t tmp43361;
             tmp43361 = (uint32_t)255;
             ivar_59->elems[ivar_48] = new_ltedfapegtest_array_3(tmp43361);
             for (uint32_t index_109 = 0; index_109 < tmp43361; index_109++){
           ivar_59->elems[ivar_48]->elems[index_109] = (ltedfapeg__ent_adt_t)ivar_6->ftbl->fptr(ivar_6, index_109);
           if (ivar_59->elems[ivar_48]->elems[index_109] != NULL) ivar_59->elems[ivar_48]->elems[index_109]->count++;
             };
        };
        release_ltedfapegtest_funtype_1(ivar_6);
        ltedfapegtest_array_3_t ivar_60;
        ivar_60 = (ltedfapegtest_array_3_t)ivar_59->elems[ivar_4];
        ivar_60->count++;
        ltedfapegtest_array_4_t ivar_67;
        ltedfapegtest_array_3_t ivar_69;
        ivar_69 = NULL;
        ivar_67 = (ltedfapegtest_array_4_t)update_ltedfapegtest_array_4(ivar_59, ivar_4, ivar_69);
        if (ivar_69 != NULL) ivar_69->count--;
        ltedfapegtest_array_3_t ivar_68;
        ltedfapegtest_array_3_t ivar_63;
        ltedfapeg__ent_adt_t ivar_65;
        ivar_65 = NULL;
        ivar_63 = (ltedfapegtest_array_3_t)update_ltedfapegtest_array_3(ivar_60, ivar_5, ivar_65);
        if (ivar_65 != NULL) ivar_65->count--;
        ivar_68 = (ltedfapegtest_array_3_t)update_ltedfapegtest_array_3(ivar_63, ivar_5, ivar_51);
        if (ivar_51 != NULL) ivar_51->count--;
        ivar_108 = (ltedfapegtest_funtype_6_t)update_ltedfapegtest_array_4(ivar_67, ivar_4, ivar_68);
        if (ivar_68 != NULL) ivar_68->count--;
        ltedfapegtest_array_4_t ivar_71;
        //copying to ltedfapegtest_array_4 from ltedfapegtest_funtype_6;
        uint32_t tmp43363;
        //copying to uint32 from uint8;
        tmp43363 = (uint32_t)ivar_1;
        tmp43363 += 1;
        ivar_71 = new_ltedfapegtest_array_4(tmp43363);
        for (uint32_t index_110 = 0; index_110 < tmp43363; index_110++){
             uint32_t tmp43364;
             tmp43364 = (uint32_t)255;
             ivar_71->elems[index_110] = new_ltedfapegtest_array_3(tmp43364);
             for (uint32_t index_111 = 0; index_111 < tmp43364; index_111++){
           ivar_71->elems[index_110]->elems[index_111] = (ltedfapeg__ent_adt_t)ivar_108->ftbl->fptr(ivar_108, index_110)->ftbl->fptr(ivar_108->ftbl->fptr(ivar_108, index_110), index_111);
           if (ivar_71->elems[index_110]->elems[index_111] != NULL) ivar_71->elems[index_110]->elems[index_111]->count++;
             };
        };
        release_ltedfapegtest_funtype_6(ivar_108);
        uint8_t ivar_107;
        ivar_107 = (uint8_t)1;
        uint64_t ivar_73;
        //copying to uint64 from uint8;
        ivar_73 = (uint64_t)ivar_107;
        ltedfapeg__ent_adt_t ivar_79;
        uint32_t ivar_77;
        //copying to uint32 from uint8;
        ivar_77 = (uint32_t)ivar_4;
        ivar_79 = (ltedfapeg__ent_adt_t)ltedfapeg__push((uint32_t)ivar_77, (uint8_t)ivar_5);
        bool_t ivar_80;
        ivar_80 = (bool_t) false;
        ltedfapegtest_record_5_t tmp43365 = new_ltedfapegtest_record_5();;
        ivar_11 = (ltedfapegtest_record_5_t)tmp43365;
        tmp43365->scaf = (ltedfapegtest_array_4_t)ivar_71;
        tmp43365->depth = (uint64_t)ivar_73;
        tmp43365->stack = (ltedfapeg__ent_adt_t)ivar_79;
        tmp43365->lflag = (bool_t)ivar_80;
        ltedfapegtest_array_3_t ivar_83;
        ltedfapegtest_array_4_t ivar_87;
        ltedfapegtest_record_5_t ivar_103;
        uint32_t ivar_96;
        //copying to uint32 from uint8;
        ivar_96 = (uint32_t)ivar_1;
        uint32_t ivar_99;
        //copying to uint32 from uint8;
        ivar_99 = (uint32_t)ivar_4;
        ivar_103 = (ltedfapegtest_record_5_t)ltedfapeg__parse((uint32_t)ivar_96, (ltedfapeg__lang_spec_t)ivar_2, (ltedfapeg_array_82_t)ivar_3, (uint32_t)ivar_99, (uint8_t)ivar_5, (ltedfapeg_record_100_t)ivar_11);
        ivar_87 = (ltedfapegtest_array_4_t)ivar_103->scaf;
        ivar_87->count++;
        release_ltedfapegtest_record_5(ivar_103);
        ivar_83 = (ltedfapegtest_array_3_t)ivar_87->elems[ivar_4];
        ivar_83->count++;
        release_ltedfapegtest_array_4(ivar_87);
        result = (ltedfapeg__ent_adt_t)ivar_83->elems[ivar_5];
        result->count++;
        release_ltedfapegtest_array_3(ivar_83);

        
        return result;
}

bool_t ltedfapegtest__jsonreadfile(bytestrings__bytestring_t ivar_1){
        bool_t  result;
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
             result = (bool_t) true;
} else {
        
             release_file__lifted_file_adt(ivar_2);
             result = (bool_t) false;
};

        
        return result;
}

bool_t ltedfapegtest__jsonreadfileinit(bytestrings__bytestring_t ivar_1){
        bool_t  result;
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
             /* pend */ ltedfapegtest_funtype_4_t ivar_37;
             ltedfapegtest_closure_11_t cl42861;
             cl42861 = new_ltedfapegtest_closure_11();
             ivar_37 = (ltedfapegtest_funtype_4_t)cl42861;
             result = (bool_t) true;
} else {
        
             release_file__lifted_file_adt(ivar_2);
             result = (bool_t) false;
};

        
        return result;
}

bool_t ltedfapegtest__jsonparsecheckfile(bytestrings__bytestring_t ivar_1){
        bool_t  result;
        /* lf */ file__lifted_file_adt_t ivar_2;
        ivar_2 = (file__lifted_file_adt_t)file__open((bytestrings__bytestring_t)ivar_1);
        bool_t ivar_6;
        ivar_2->count++;
        ivar_6 = (bool_t)r_file__passp((file__lifted_file_adt_t)ivar_2);
        if (ivar_6){ 
             /* f */ file__file_t ivar_11;
             ivar_11 = (file__file_t)file__lifted_file_adt_contents((file__lifted_file_adt_t)ivar_2);
             /* fs */ uint32_t ivar_15;
             ivar_11->count++;
             ivar_15 = (uint32_t)file__file_size((file__file_t)ivar_11);
             /* fstr */ bytestrings__bytestring_t ivar_19;
             uint8_t ivar_37;
             ivar_37 = (uint8_t)0;
             uint32_t ivar_25;
             //copying to uint32 from uint8;
             ivar_25 = (uint32_t)ivar_37;
             ivar_19 = (bytestrings__bytestring_t)file__getbytestring((file__file_t)ivar_11, (uint32_t)ivar_25, (uint32_t)ivar_15);
             /* pend */ ltedfapegtest_funtype_4_t ivar_38;
             ltedfapegtest_closure_12_t cl42951;
             cl42951 = new_ltedfapegtest_closure_12();
             ivar_38 = (ltedfapegtest_funtype_4_t)cl42951;
             /* St */ ltedfapegtest_record_8_t ivar_43;
             ltedfapegtest_array_7_t ivar_76;
             ltedfapeg__ent_adt_t ivar_56;
             uint8_t ivar_63;
             ivar_63 = (uint8_t)0;
             uint32_t ivar_60;
             //copying to uint32 from uint8;
             ivar_60 = (uint32_t)ivar_63;
             uint8_t ivar_61;
             ivar_61 = (uint8_t)ltedfapeg__num_non_terminals();
             ivar_56 = (ltedfapeg__ent_adt_t)ltedfapeg__push((uint32_t)ivar_60, (uint8_t)ivar_61);
             ltedfapegtest_funtype_13_t ivar_64;
             ltedfapegtest_closure_14_t cl42952;
             cl42952 = new_ltedfapegtest_closure_14();
             cl42952->fvar_1 = (uint32_t)ivar_15;
             cl42952->fvar_2 = (ltedfapegtest_funtype_4_t)ivar_38;
             if (cl42952->fvar_2 != NULL) cl42952->fvar_2->count++;
             release_ltedfapegtest_funtype_4(ivar_38);
             ivar_64 = (ltedfapegtest_funtype_13_t)cl42952;
             uint32_t ivar_71;
             ivar_71 = (uint32_t)0;
             ltedfapegtest_funtype_4_t ivar_65;
             ivar_65 = (ltedfapegtest_funtype_4_t)ivar_64->ftbl->fptr(ivar_64, ivar_71);
             ltedfapegtest_funtype_13_t ivar_72;
             ltedfapegtest_funtype_4_t ivar_74;
             ivar_74 = NULL;
             ivar_72 = (ltedfapegtest_funtype_13_t)update_ltedfapegtest_funtype_13(ivar_64, ivar_71, ivar_74);
             if (ivar_74 != NULL) ivar_74->count--;
             ltedfapegtest_funtype_4_t ivar_73;
             uint8_t ivar_67;
             ivar_67 = (uint8_t)0;
             ltedfapegtest_funtype_4_t ivar_68;
             ltedfapeg__ent_adt_t ivar_70;
             ivar_70 = NULL;
             ivar_68 = (ltedfapegtest_funtype_4_t)update_ltedfapegtest_funtype_4(ivar_65, ivar_67, ivar_70);
             if (ivar_70 != NULL) ivar_70->count--;
             ivar_73 = (ltedfapegtest_funtype_4_t)update_ltedfapegtest_funtype_4(ivar_68, ivar_67, ivar_56);
             if (ivar_56 != NULL) ivar_56->count--;
             ivar_76 = (ltedfapegtest_array_7_t)update_ltedfapegtest_funtype_13(ivar_72, ivar_71, ivar_73);
             if (ivar_73 != NULL) ivar_73->count--;
             uint8_t ivar_199;
             ivar_199 = (uint8_t)1;
             uint64_t ivar_78;
             //copying to uint64 from uint8;
             ivar_78 = (uint64_t)ivar_199;
             ltedfapeg__ent_adt_t ivar_86;
             uint8_t ivar_85;
             ivar_85 = (uint8_t)0;
             uint32_t ivar_82;
             //copying to uint32 from uint8;
             ivar_82 = (uint32_t)ivar_85;
             uint8_t ivar_83;
             ivar_83 = (uint8_t)0;
             ivar_86 = (ltedfapeg__ent_adt_t)ltedfapeg__push((uint32_t)ivar_82, (uint8_t)ivar_83);
             bool_t ivar_87;
             ivar_87 = (bool_t) false;
             ltedfapegtest_record_8_t tmp42953 = new_ltedfapegtest_record_8();;
             ivar_43 = (ltedfapegtest_record_8_t)tmp42953;
             tmp42953->scaf = (ltedfapegtest_array_7_t)ivar_76;
             tmp42953->depth = (uint64_t)ivar_78;
             tmp42953->stack = (ltedfapeg__ent_adt_t)ivar_86;
             tmp42953->lflag = (bool_t)ivar_87;
             /* endSt */ ltedfapegtest_record_8_t ivar_88;
             ltedfapegtest_funtype_15_t ivar_116;
             ltedfapegtest_closure_16_t cl42954;
             cl42954 = new_ltedfapegtest_closure_16();
             ivar_116 = (ltedfapegtest_funtype_15_t)cl42954;
             ltedfapeg__lang_spec_t ivar_107;
             //copying to ltedfapeg__lang_spec from ltedfapegtest_funtype_15;
             uint32_t tmp42955;
             tmp42955 = (uint32_t)255;
             ivar_107 = new_ltedfapegtest_array_17(tmp42955);
             for (uint32_t index_200 = 0; index_200 < tmp42955; index_200++){
           ivar_107->elems[index_200] = (ltedfapeg__prepeg_adt_t)ivar_116->ftbl->fptr(ivar_116, index_200);
           if (ivar_107->elems[index_200] != NULL) ivar_107->elems[index_200]->count++;
             };
             release_ltedfapegtest_funtype_15(ivar_116);
             ltedfapegtest_array_0_t ivar_108;
             ivar_108 = (ltedfapegtest_array_0_t)ivar_19->seq;
             ivar_108->count++;
             uint8_t ivar_115;
             ivar_115 = (uint8_t)0;
             uint32_t ivar_109;
             //copying to uint32 from uint8;
             ivar_109 = (uint32_t)ivar_115;
             uint8_t ivar_110;
             ivar_110 = (uint8_t)0;
             ivar_88 = (ltedfapegtest_record_8_t)ltedfapeg__parse((uint32_t)ivar_15, (ltedfapeg__lang_spec_t)ivar_107, (ltedfapeg_array_82_t)ivar_108, (uint32_t)ivar_109, (uint8_t)ivar_110, (ltedfapeg_record_100_t)ivar_43);
             bool_t ivar_117;
             ltedfapeg__ent_adt_t ivar_131;
             ltedfapegtest_array_6_t ivar_121;
             ltedfapegtest_array_7_t ivar_125;
             ivar_125 = (ltedfapegtest_array_7_t)ivar_88->scaf;
             ivar_125->count++;
             uint32_t ivar_128;
             ivar_128 = (uint32_t)0;
             ivar_121 = (ltedfapegtest_array_6_t)ivar_125->elems[ivar_128];
             ivar_121->count++;
             release_ltedfapegtest_array_7(ivar_125);
             uint8_t ivar_129;
             ivar_129 = (uint8_t)0;
             ivar_131 = (ltedfapeg__ent_adt_t)ivar_121->elems[ivar_129];
             ivar_131->count++;
             release_ltedfapegtest_array_6(ivar_121);
             ivar_117 = (bool_t)ltedfapegproof__defentp((ltedfapeg__ent_adt_t)ivar_131);
             if (ivar_117){  
           /* proof */ ltedfapegproof__parsetree_adt_t ivar_132;
           ltedfapegtest_funtype_19_t ivar_139;
           ltedfapegtest_funtype_15_t ivar_163;
           ltedfapegtest_closure_20_t cl42956;
           cl42956 = new_ltedfapegtest_closure_20();
           ivar_163 = (ltedfapegtest_funtype_15_t)cl42956;
           ltedfapeg__lang_spec_t ivar_156;
           //copying to ltedfapeg__lang_spec from ltedfapegtest_funtype_15;
           uint32_t tmp42957;
           tmp42957 = (uint32_t)255;
           ivar_156 = new_ltedfapegtest_array_17(tmp42957);
           for (uint32_t index_201 = 0; index_201 < tmp42957; index_201++){
           ivar_156->elems[index_201] = (ltedfapeg__prepeg_adt_t)ivar_163->ftbl->fptr(ivar_163, index_201);
           if (ivar_156->elems[index_201] != NULL) ivar_156->elems[index_201]->count++;
           };
           release_ltedfapegtest_funtype_15(ivar_163);
           ltedfapegtest_array_0_t ivar_157;
           ivar_157 = (ltedfapegtest_array_0_t)ivar_19->seq;
           ivar_157->count++;
           uint8_t ivar_162;
           ivar_162 = (uint8_t)0;
           uint32_t ivar_158;
           //copying to uint32 from uint8;
           ivar_158 = (uint32_t)ivar_162;
           uint8_t ivar_159;
           ivar_159 = (uint8_t)0;
           ivar_139 = (ltedfapegtest_funtype_19_t)ltedfapegproof__buildproof((uint32_t)ivar_15, (ltedfapeg__lang_spec_t)ivar_156, (ltedfapegproof_array_51_t)ivar_157, (uint32_t)ivar_158, (uint8_t)ivar_159);
           uint8_t ivar_165;
           ivar_165 = (uint8_t)0;
           uint8_t ivar_167;
           ivar_167 = (uint8_t)0;
           uint32_t ivar_166;
           //copying to uint32 from uint8;
           ivar_166 = (uint32_t)ivar_167;
           ivar_132 = (ltedfapegproof__parsetree_adt_t)ivar_139->ftbl->mptr(ivar_139, ivar_88, ivar_165, ivar_166);
           ivar_139->ftbl->rptr(ivar_139);
           ltedfapegtest_funtype_22_t ivar_174;
           uint32_t ivar_188;
           ivar_188 = (uint32_t)ivar_19->length;
           ltedfapegtest_funtype_15_t ivar_192;
           ltedfapegtest_closure_23_t cl42958;
           cl42958 = new_ltedfapegtest_closure_23();
           ivar_192 = (ltedfapegtest_funtype_15_t)cl42958;
           ltedfapeg__lang_spec_t ivar_189;
           //copying to ltedfapeg__lang_spec from ltedfapegtest_funtype_15;
           uint32_t tmp42959;
           tmp42959 = (uint32_t)255;
           ivar_189 = new_ltedfapegtest_array_17(tmp42959);
           for (uint32_t index_202 = 0; index_202 < tmp42959; index_202++){
           ivar_189->elems[index_202] = (ltedfapeg__prepeg_adt_t)ivar_192->ftbl->fptr(ivar_192, index_202);
           if (ivar_189->elems[index_202] != NULL) ivar_189->elems[index_202]->count++;
           };
           release_ltedfapegtest_funtype_15(ivar_192);
           ltedfapegtest_array_0_t ivar_190;
           ivar_190 = (ltedfapegtest_array_0_t)ivar_19->seq;
           ivar_190->count++;
           release_bytestrings__bytestring(ivar_19);
           ivar_174 = (ltedfapegtest_funtype_22_t)ltedfapegproof__good_parsetreep((uint32_t)ivar_188, (ltedfapeg__lang_spec_t)ivar_189, (ltedfapegproof_array_51_t)ivar_190);
           ltedfapegproof__qstack_adt_t ivar_193;
           ivar_193 = (ltedfapegproof__qstack_adt_t)ltedfapegproof__qempty();
           if (ivar_193 != NULL) ivar_193->count++;
           uint8_t ivar_194;
           ivar_194 = (uint8_t)0;
           uint8_t ivar_197;
           ivar_197 = (uint8_t)0;
           uint32_t ivar_195;
           //copying to uint32 from uint8;
           ivar_195 = (uint32_t)ivar_197;
           result = (bool_t)ivar_174->ftbl->mptr(ivar_174, ivar_193, ivar_194, ivar_195, ivar_132);
           ivar_174->ftbl->rptr(ivar_174);
} else {
             
           release_ltedfapegtest_record_8(ivar_88);
           release_bytestrings__bytestring(ivar_19);
           result = (bool_t) false;
};
} else {
        
             release_file__lifted_file_adt(ivar_2);
             result = (bool_t) false;
};

        
        return result;
}

ltedfapegproof__parsetree_adt_t ltedfapegtest__jsonparsefile(bytestrings__bytestring_t ivar_1){
        ltedfapegproof__parsetree_adt_t  result;
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
             ivar_18 = (bytestrings__bytestring_t)file__getbytestring((file__file_t)ivar_10, (uint32_t)ivar_24, (uint32_t)ivar_14);
             /* pend */ ltedfapegtest_funtype_4_t ivar_37;
             ltedfapegtest_closure_24_t cl43027;
             cl43027 = new_ltedfapegtest_closure_24();
             ivar_37 = (ltedfapegtest_funtype_4_t)cl43027;
             /* St */ ltedfapegtest_record_8_t ivar_42;
             ltedfapegtest_array_7_t ivar_75;
             ltedfapeg__ent_adt_t ivar_55;
             uint8_t ivar_62;
             ivar_62 = (uint8_t)0;
             uint32_t ivar_59;
             //copying to uint32 from uint8;
             ivar_59 = (uint32_t)ivar_62;
             uint8_t ivar_60;
             ivar_60 = (uint8_t)ltedfapeg__num_non_terminals();
             ivar_55 = (ltedfapeg__ent_adt_t)ltedfapeg__push((uint32_t)ivar_59, (uint8_t)ivar_60);
             ltedfapegtest_funtype_13_t ivar_63;
             ltedfapegtest_closure_25_t cl43028;
             cl43028 = new_ltedfapegtest_closure_25();
             cl43028->fvar_1 = (uint32_t)ivar_14;
             cl43028->fvar_2 = (ltedfapegtest_funtype_4_t)ivar_37;
             if (cl43028->fvar_2 != NULL) cl43028->fvar_2->count++;
             release_ltedfapegtest_funtype_4(ivar_37);
             ivar_63 = (ltedfapegtest_funtype_13_t)cl43028;
             uint32_t ivar_70;
             ivar_70 = (uint32_t)0;
             ltedfapegtest_funtype_4_t ivar_64;
             ivar_64 = (ltedfapegtest_funtype_4_t)ivar_63->ftbl->fptr(ivar_63, ivar_70);
             ltedfapegtest_funtype_13_t ivar_71;
             ltedfapegtest_funtype_4_t ivar_73;
             ivar_73 = NULL;
             ivar_71 = (ltedfapegtest_funtype_13_t)update_ltedfapegtest_funtype_13(ivar_63, ivar_70, ivar_73);
             if (ivar_73 != NULL) ivar_73->count--;
             ltedfapegtest_funtype_4_t ivar_72;
             uint8_t ivar_66;
             ivar_66 = (uint8_t)0;
             ltedfapegtest_funtype_4_t ivar_67;
             ltedfapeg__ent_adt_t ivar_69;
             ivar_69 = NULL;
             ivar_67 = (ltedfapegtest_funtype_4_t)update_ltedfapegtest_funtype_4(ivar_64, ivar_66, ivar_69);
             if (ivar_69 != NULL) ivar_69->count--;
             ivar_72 = (ltedfapegtest_funtype_4_t)update_ltedfapegtest_funtype_4(ivar_67, ivar_66, ivar_55);
             if (ivar_55 != NULL) ivar_55->count--;
             ivar_75 = (ltedfapegtest_array_7_t)update_ltedfapegtest_funtype_13(ivar_71, ivar_70, ivar_72);
             if (ivar_72 != NULL) ivar_72->count--;
             uint8_t ivar_159;
             ivar_159 = (uint8_t)1;
             uint64_t ivar_77;
             //copying to uint64 from uint8;
             ivar_77 = (uint64_t)ivar_159;
             ltedfapeg__ent_adt_t ivar_85;
             uint8_t ivar_84;
             ivar_84 = (uint8_t)0;
             uint32_t ivar_81;
             //copying to uint32 from uint8;
             ivar_81 = (uint32_t)ivar_84;
             uint8_t ivar_82;
             ivar_82 = (uint8_t)0;
             ivar_85 = (ltedfapeg__ent_adt_t)ltedfapeg__push((uint32_t)ivar_81, (uint8_t)ivar_82);
             bool_t ivar_86;
             ivar_86 = (bool_t) false;
             ltedfapegtest_record_8_t tmp43029 = new_ltedfapegtest_record_8();;
             ivar_42 = (ltedfapegtest_record_8_t)tmp43029;
             tmp43029->scaf = (ltedfapegtest_array_7_t)ivar_75;
             tmp43029->depth = (uint64_t)ivar_77;
             tmp43029->stack = (ltedfapeg__ent_adt_t)ivar_85;
             tmp43029->lflag = (bool_t)ivar_86;
             ltedfapegtest_funtype_19_t ivar_120;
             ltedfapegtest_funtype_15_t ivar_144;
             ltedfapegtest_closure_26_t cl43030;
             cl43030 = new_ltedfapegtest_closure_26();
             ivar_144 = (ltedfapegtest_funtype_15_t)cl43030;
             ltedfapeg__lang_spec_t ivar_137;
             //copying to ltedfapeg__lang_spec from ltedfapegtest_funtype_15;
             uint32_t tmp43031;
             tmp43031 = (uint32_t)255;
             ivar_137 = new_ltedfapegtest_array_17(tmp43031);
             for (uint32_t index_160 = 0; index_160 < tmp43031; index_160++){
           ivar_137->elems[index_160] = (ltedfapeg__prepeg_adt_t)ivar_144->ftbl->fptr(ivar_144, index_160);
           if (ivar_137->elems[index_160] != NULL) ivar_137->elems[index_160]->count++;
             };
             release_ltedfapegtest_funtype_15(ivar_144);
             ltedfapegtest_array_0_t ivar_138;
             ivar_138 = (ltedfapegtest_array_0_t)ivar_18->seq;
             ivar_138->count++;
             uint8_t ivar_143;
             ivar_143 = (uint8_t)0;
             uint32_t ivar_139;
             //copying to uint32 from uint8;
             ivar_139 = (uint32_t)ivar_143;
             uint8_t ivar_140;
             ivar_140 = (uint8_t)0;
             ivar_120 = (ltedfapegtest_funtype_19_t)ltedfapegproof__buildproof((uint32_t)ivar_14, (ltedfapeg__lang_spec_t)ivar_137, (ltedfapegproof_array_51_t)ivar_138, (uint32_t)ivar_139, (uint8_t)ivar_140);
             ltedfapegtest_record_8_t ivar_145;
             ltedfapegtest_funtype_15_t ivar_115;
             ltedfapegtest_closure_27_t cl43032;
             cl43032 = new_ltedfapegtest_closure_27();
             ivar_115 = (ltedfapegtest_funtype_15_t)cl43032;
             ltedfapeg__lang_spec_t ivar_106;
             //copying to ltedfapeg__lang_spec from ltedfapegtest_funtype_15;
             uint32_t tmp43033;
             tmp43033 = (uint32_t)255;
             ivar_106 = new_ltedfapegtest_array_17(tmp43033);
             for (uint32_t index_161 = 0; index_161 < tmp43033; index_161++){
           ivar_106->elems[index_161] = (ltedfapeg__prepeg_adt_t)ivar_115->ftbl->fptr(ivar_115, index_161);
           if (ivar_106->elems[index_161] != NULL) ivar_106->elems[index_161]->count++;
             };
             release_ltedfapegtest_funtype_15(ivar_115);
             ltedfapegtest_array_0_t ivar_107;
             ivar_107 = (ltedfapegtest_array_0_t)ivar_18->seq;
             ivar_107->count++;
             release_bytestrings__bytestring(ivar_18);
             uint8_t ivar_114;
             ivar_114 = (uint8_t)0;
             uint32_t ivar_108;
             //copying to uint32 from uint8;
             ivar_108 = (uint32_t)ivar_114;
             uint8_t ivar_109;
             ivar_109 = (uint8_t)0;
             ivar_145 = (ltedfapegtest_record_8_t)ltedfapeg__parse((uint32_t)ivar_14, (ltedfapeg__lang_spec_t)ivar_106, (ltedfapeg_array_82_t)ivar_107, (uint32_t)ivar_108, (uint8_t)ivar_109, (ltedfapeg_record_100_t)ivar_42);
             uint8_t ivar_146;
             ivar_146 = (uint8_t)0;
             uint8_t ivar_148;
             ivar_148 = (uint8_t)0;
             uint32_t ivar_147;
             //copying to uint32 from uint8;
             ivar_147 = (uint32_t)ivar_148;
             result = (ltedfapegproof__parsetree_adt_t)ivar_120->ftbl->mptr(ivar_120, ivar_145, ivar_146, ivar_147);
             ivar_120->ftbl->rptr(ivar_120);
} else {
        
             release_file__lifted_file_adt(ivar_2);
             uint8_t ivar_157;
             ivar_157 = (uint8_t)0;
             ltedfapeg__ent_adt_t ivar_158;
             uint8_t ivar_155;
             ivar_155 = (uint8_t)0;
             uint64_t ivar_153;
             //copying to uint64 from uint8;
             ivar_153 = (uint64_t)ivar_155;
             ivar_158 = (ltedfapeg__ent_adt_t)ltedfapeg__fail((uint64_t)ivar_153);
             result = (ltedfapegproof__parsetree_adt_t)ltedfapegproof__zero((uint8_t)ivar_157, (ltedfapeg__ent_adt_t)ivar_158);
};

        
        return result;
}

ltedfapeg__ent_adt_t ltedfapegtest__jsonpureparsefile(bytestrings__bytestring_t ivar_1){
        ltedfapeg__ent_adt_t  result;
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
             ivar_18 = (bytestrings__bytestring_t)file__getbytestring((file__file_t)ivar_10, (uint32_t)ivar_24, (uint32_t)ivar_14);
             /* pend */ ltedfapegtest_funtype_4_t ivar_37;
             ltedfapegtest_closure_28_t cl43080;
             cl43080 = new_ltedfapegtest_closure_28();
             ivar_37 = (ltedfapegtest_funtype_4_t)cl43080;
             /* St */ ltedfapegtest_record_8_t ivar_42;
             ltedfapegtest_array_7_t ivar_75;
             ltedfapeg__ent_adt_t ivar_55;
             uint8_t ivar_62;
             ivar_62 = (uint8_t)0;
             uint32_t ivar_59;
             //copying to uint32 from uint8;
             ivar_59 = (uint32_t)ivar_62;
             uint8_t ivar_60;
             ivar_60 = (uint8_t)ltedfapeg__num_non_terminals();
             ivar_55 = (ltedfapeg__ent_adt_t)ltedfapeg__push((uint32_t)ivar_59, (uint8_t)ivar_60);
             ltedfapegtest_funtype_13_t ivar_63;
             ltedfapegtest_closure_29_t cl43081;
             cl43081 = new_ltedfapegtest_closure_29();
             cl43081->fvar_1 = (uint32_t)ivar_14;
             cl43081->fvar_2 = (ltedfapegtest_funtype_4_t)ivar_37;
             if (cl43081->fvar_2 != NULL) cl43081->fvar_2->count++;
             release_ltedfapegtest_funtype_4(ivar_37);
             ivar_63 = (ltedfapegtest_funtype_13_t)cl43081;
             uint32_t ivar_70;
             ivar_70 = (uint32_t)0;
             ltedfapegtest_funtype_4_t ivar_64;
             ivar_64 = (ltedfapegtest_funtype_4_t)ivar_63->ftbl->fptr(ivar_63, ivar_70);
             ltedfapegtest_funtype_13_t ivar_71;
             ltedfapegtest_funtype_4_t ivar_73;
             ivar_73 = NULL;
             ivar_71 = (ltedfapegtest_funtype_13_t)update_ltedfapegtest_funtype_13(ivar_63, ivar_70, ivar_73);
             if (ivar_73 != NULL) ivar_73->count--;
             ltedfapegtest_funtype_4_t ivar_72;
             uint8_t ivar_66;
             ivar_66 = (uint8_t)0;
             ltedfapegtest_funtype_4_t ivar_67;
             ltedfapeg__ent_adt_t ivar_69;
             ivar_69 = NULL;
             ivar_67 = (ltedfapegtest_funtype_4_t)update_ltedfapegtest_funtype_4(ivar_64, ivar_66, ivar_69);
             if (ivar_69 != NULL) ivar_69->count--;
             ivar_72 = (ltedfapegtest_funtype_4_t)update_ltedfapegtest_funtype_4(ivar_67, ivar_66, ivar_55);
             if (ivar_55 != NULL) ivar_55->count--;
             ivar_75 = (ltedfapegtest_array_7_t)update_ltedfapegtest_funtype_13(ivar_71, ivar_70, ivar_72);
             if (ivar_72 != NULL) ivar_72->count--;
             uint8_t ivar_123;
             ivar_123 = (uint8_t)1;
             uint64_t ivar_77;
             //copying to uint64 from uint8;
             ivar_77 = (uint64_t)ivar_123;
             ltedfapeg__ent_adt_t ivar_85;
             uint8_t ivar_84;
             ivar_84 = (uint8_t)0;
             uint32_t ivar_81;
             //copying to uint32 from uint8;
             ivar_81 = (uint32_t)ivar_84;
             uint8_t ivar_82;
             ivar_82 = (uint8_t)0;
             ivar_85 = (ltedfapeg__ent_adt_t)ltedfapeg__push((uint32_t)ivar_81, (uint8_t)ivar_82);
             bool_t ivar_86;
             ivar_86 = (bool_t) false;
             ltedfapegtest_record_8_t tmp43082 = new_ltedfapegtest_record_8();;
             ivar_42 = (ltedfapegtest_record_8_t)tmp43082;
             tmp43082->scaf = (ltedfapegtest_array_7_t)ivar_75;
             tmp43082->depth = (uint64_t)ivar_77;
             tmp43082->stack = (ltedfapeg__ent_adt_t)ivar_85;
             tmp43082->lflag = (bool_t)ivar_86;
             ltedfapegtest_array_6_t ivar_89;
             ltedfapegtest_array_7_t ivar_93;
             ltedfapegtest_record_8_t ivar_114;
             ltedfapeg__lang_spec_t ivar_106;
             ivar_106 = (ltedfapeg__lang_spec_t)ltedfapegtest__djsontable();
             if (ivar_106 != NULL) ivar_106->count++;
             ltedfapegtest_array_0_t ivar_107;
             ivar_107 = (ltedfapegtest_array_0_t)ivar_18->seq;
             ivar_107->count++;
             release_bytestrings__bytestring(ivar_18);
             uint8_t ivar_113;
             ivar_113 = (uint8_t)0;
             uint32_t ivar_108;
             //copying to uint32 from uint8;
             ivar_108 = (uint32_t)ivar_113;
             uint8_t ivar_109;
             ivar_109 = (uint8_t)0;
             ivar_114 = (ltedfapegtest_record_8_t)ltedfapeg__parse((uint32_t)ivar_14, (ltedfapeg__lang_spec_t)ivar_106, (ltedfapeg_array_82_t)ivar_107, (uint32_t)ivar_108, (uint8_t)ivar_109, (ltedfapeg_record_100_t)ivar_42);
             ivar_93 = (ltedfapegtest_array_7_t)ivar_114->scaf;
             ivar_93->count++;
             release_ltedfapegtest_record_8(ivar_114);
             uint32_t ivar_116;
             ivar_116 = (uint32_t)0;
             ivar_89 = (ltedfapegtest_array_6_t)ivar_93->elems[ivar_116];
             ivar_89->count++;
             release_ltedfapegtest_array_7(ivar_93);
             uint8_t ivar_117;
             //copying to uint8 from uint32;
             ivar_117 = (uint8_t)ivar_14;
             result = (ltedfapeg__ent_adt_t)ivar_89->elems[ivar_117];
             result->count++;
             release_ltedfapegtest_array_6(ivar_89);
} else {
        
             release_file__lifted_file_adt(ivar_2);
             uint8_t ivar_122;
             ivar_122 = (uint8_t)0;
             uint64_t ivar_120;
             //copying to uint64 from uint8;
             ivar_120 = (uint64_t)ivar_122;
             result = (ltedfapeg__ent_adt_t)ltedfapeg__fail((uint64_t)ivar_120);
};

        
        return result;
}