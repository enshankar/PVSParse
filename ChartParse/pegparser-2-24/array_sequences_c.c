//Code generated using pvs2ir2c
#include "array_sequences_c.h"


array_sequences_array_0_t new_array_sequences_array_0(uint32_t size){
        array_sequences_array_0_t tmp = (array_sequences_array_0_t) safe_malloc(sizeof(struct array_sequences_array_0_s) + (size * sizeof(array_sequences__T_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_array_sequences_array_0(array_sequences_array_0_t x, type_actual_t array_sequences__T){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){array_sequences__T->release_ptr(x->elems[i], array_sequences__T);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_array_sequences_array_0_ptr(pointer_t x, type_actual_t T){
        actual_array_sequences_array_0_t actual = (actual_array_sequences_array_0_t)T;
        type_actual_t array_sequences__T = actual->array_sequences__T;
        release_array_sequences_array_0((array_sequences_array_0_t)x, array_sequences__T);
}

array_sequences_array_0_t copy_array_sequences_array_0(array_sequences_array_0_t x){
        array_sequences_array_0_t tmp = new_array_sequences_array_0(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_array_sequences_array_0(array_sequences_array_0_t x, array_sequences_array_0_t y, type_actual_t array_sequences__T){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = array_sequences__T->equal_ptr(x->elems[i], y->elems[i], array_sequences__T); i++;};
        return tmp;}

char * json_array_sequences_array_0(array_sequences_array_0_t x, type_actual_t array_sequences__T){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = array_sequences__T->json_ptr(x->elems[i], array_sequences__T);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_array_sequences_array_0_ptr(pointer_t x, pointer_t y, type_actual_t T){
        actual_array_sequences_array_0_t actual = (actual_array_sequences_array_0_t)T;
        type_actual_t array_sequences__T = actual->array_sequences__T;
        return equal_array_sequences_array_0((array_sequences_array_0_t)x, (array_sequences_array_0_t)y, array_sequences__T);
}

char * json_array_sequences_array_0_ptr(pointer_t x, type_actual_t T){
        actual_array_sequences_array_0_t actual = (actual_array_sequences_array_0_t)T;
        type_actual_t array_sequences__T = actual->array_sequences__T;
        return json_array_sequences_array_0((array_sequences_array_0_t)x, array_sequences__T);
}

actual_array_sequences_array_0_t actual_array_sequences_array_0(type_actual_t array_sequences__T){
        actual_array_sequences_array_0_t new = (actual_array_sequences_array_0_t)safe_malloc(sizeof(struct actual_array_sequences_array_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_array_sequences_array_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_array_sequences_array_0_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_array_sequences_array_0_ptr);
 

        new->array_sequences__T = array_sequences__T;
 
        return new;
 };

array_sequences_array_0_t update_array_sequences_array_0(array_sequences_array_0_t x, uint32_t i, array_sequences__T_t v, type_actual_t array_sequences__T){
         array_sequences_array_0_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_array_sequences_array_0(x);
                      x->count--;};
        array_sequences__T_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){array_sequences__T->release_ptr(yelems[i], array_sequences__T);};
         yelems[i] = v;
         return y;}

array_sequences_array_0_t upgrade_array_sequences_array_0(array_sequences_array_0_t x, uint32_t i, array_sequences__T_t v, type_actual_t array_sequences__T){
         array_sequences_array_0_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct array_sequences_array_0_s) + (newmax * sizeof(array_sequences__T_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_array_sequences_array_0(x, array_sequences__T);} else {y = copy_array_sequences_array_0(x);
                      x->count--;};
        array_sequences__T_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){array_sequences__T->release_ptr(yelems[i], array_sequences__T);};
         yelems[i] = v;
         return y;}




array_sequences__aseq_t new_array_sequences__aseq(void){
        array_sequences__aseq_t tmp = (array_sequences__aseq_t) safe_malloc(sizeof(struct array_sequences__aseq_s));
        tmp->count = 1;
        return tmp;}

void release_array_sequences__aseq(array_sequences__aseq_t x, type_actual_t array_sequences__T){
        x->count--;
        if (x->count <= 0){
         release_array_sequences_array_0(x->seq, array_sequences__T);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_array_sequences__aseq_ptr(pointer_t x, type_actual_t T){
        actual_array_sequences__aseq_t actual = (actual_array_sequences__aseq_t)T;
        type_actual_t array_sequences__T = actual->array_sequences__T;
        release_array_sequences__aseq((array_sequences__aseq_t)x, array_sequences__T);
}

array_sequences__aseq_t copy_array_sequences__aseq(array_sequences__aseq_t x){
        array_sequences__aseq_t y = new_array_sequences__aseq();
        y->length = (uint32_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_array_sequences__aseq(array_sequences__aseq_t x, array_sequences__aseq_t y, type_actual_t array_sequences__T){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_array_sequences_array_0(x->seq, y->seq, array_sequences__T);
        return tmp;}

char * json_array_sequences__aseq(array_sequences__aseq_t x, type_actual_t array_sequences__T){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_array_sequences_array_0(x->seq, array_sequences__T));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_array_sequences__aseq_ptr(pointer_t x, pointer_t y, actual_array_sequences__aseq_t T){
        actual_array_sequences__aseq_t actual = (actual_array_sequences__aseq_t)T;
        type_actual_t array_sequences__T = actual->array_sequences__T;
        return equal_array_sequences__aseq((array_sequences__aseq_t)x, (array_sequences__aseq_t)y, array_sequences__T);
}

char * json_array_sequences__aseq_ptr(pointer_t x, actual_array_sequences__aseq_t T){
        actual_array_sequences__aseq_t actual = (actual_array_sequences__aseq_t)T;
        type_actual_t array_sequences__T = actual->array_sequences__T;
        return json_array_sequences__aseq((array_sequences__aseq_t)x, array_sequences__T);
}

actual_array_sequences__aseq_t actual_array_sequences__aseq(type_actual_t array_sequences__T){
        actual_array_sequences__aseq_t new = (actual_array_sequences__aseq_t)safe_malloc(sizeof(struct actual_array_sequences__aseq_s));
        new->equal_ptr = (equal_ptr_t)(*equal_array_sequences__aseq_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_array_sequences__aseq_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_array_sequences__aseq_ptr);
 

        new->array_sequences__T = array_sequences__T;
 
        return new;
 };

array_sequences__aseq_t update_array_sequences__aseq_length(array_sequences__aseq_t x, uint32_t v){
        array_sequences__aseq_t y;
        if (x->count == 1){y = x;}
        else {y = copy_array_sequences__aseq(x); x->count--;};
        y->length = (uint32_t)v;
        return y;}

array_sequences__aseq_t update_array_sequences__aseq_seq(array_sequences__aseq_t x, array_sequences_array_0_t v, type_actual_t array_sequences__T){
        array_sequences__aseq_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_array_sequences_array_0(x->seq, array_sequences__T);};}
        else {y = copy_array_sequences__aseq(x); x->count--; y->seq->count--;};
        y->seq = (array_sequences_array_0_t)v;
        return y;}



void release_array_sequences_funtype_2(array_sequences_funtype_2_t x, type_actual_t array_sequences__T){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

array_sequences_funtype_2_t copy_array_sequences_funtype_2(array_sequences_funtype_2_t x){return x->ftbl->cptr(x);}

uint32_t lookup_array_sequences_funtype_2(array_sequences_funtype_2_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        array_sequences_funtype_2_hashentry_t data = htbl->data[hashindex];
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

array_sequences_funtype_2_t dupdate_array_sequences_funtype_2(array_sequences_funtype_2_t a, uint32_t i, array_sequences__T_t v, type_actual_t array_sequences__T){
        array_sequences_funtype_2_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (array_sequences_funtype_2_htbl_t)safe_malloc(sizeof(struct array_sequences_funtype_2_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (array_sequences_funtype_2_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct array_sequences_funtype_2_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        array_sequences_funtype_2_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                array_sequences_funtype_2_hashentry_t * new_data = (array_sequences_funtype_2_hashentry_t *)safe_malloc(new_size * sizeof(struct array_sequences_funtype_2_hashentry_s));
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
                                new_data[new_loc].value = (array_sequences__T_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_array_sequences_funtype_2(htbl, i, ihash);
        array_sequences_funtype_2_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (array_sequences__T_t)v; htbl->num_entries++;}
            else {array_sequences__T_t tempvalue;tempvalue = (array_sequences__T_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (array_sequences__T_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)array_sequences__T->release_ptr(tempvalue, array_sequences__T);};
        return a;

}

array_sequences_funtype_2_t update_array_sequences_funtype_2(array_sequences_funtype_2_t a, uint32_t i, array_sequences__T_t v, type_actual_t array_sequences__T){
        if (a->count == 1){
                return dupdate_array_sequences_funtype_2(a, i, v, array_sequences__T);
            } else {
                array_sequences_funtype_2_t x = copy_array_sequences_funtype_2(a);
                a->count--;
                return dupdate_array_sequences_funtype_2(x, i, v, array_sequences__T);
            }}

bool_t equal_array_sequences_funtype_2(array_sequences_funtype_2_t x, array_sequences_funtype_2_t y, type_actual_t array_sequences__T){
        return false;}

char* json_array_sequences_funtype_2(array_sequences_funtype_2_t x, type_actual_t array_sequences__T){char * result = safe_malloc(35); sprintf(result, "%s", "\"array_sequences_funtype_2\""); return result;}

array_sequences__aseq_t array_sequences__empty_aseq(type_actual_t array_sequences__T){
        array_sequences__aseq_t  result;
        uint8_t ivar_11;
        ivar_11 = (uint8_t)0;
        uint32_t ivar_1;
        //copying to uint32 from uint8;
        ivar_1 = (uint32_t)ivar_11;
        array_sequences_array_0_t ivar_10;
        uint32_t size1943;
        //copying to uint32 from uint32;
        size1943 = (uint32_t)ivar_1;
        size1943 += 0;
        ivar_10 = new_array_sequences_array_0(size1943);
        uint8_t ivar_4;
        for (uint32_t index1942 = 0; index1942 < size1943; index1942++){
             ivar_4 = (uint8_t)index1942;
             pvs2cerror("Non-executable theory: epsilons", PVS2C_EXIT_ERROR);
        };
        array_sequences__aseq_t tmp1944 = new_array_sequences__aseq();;
        result = (array_sequences__aseq_t)tmp1944;
        tmp1944->length = (uint32_t)ivar_1;
        tmp1944->seq = (array_sequences_array_0_t)ivar_10;

        
        return result;
}

array_sequences_funtype_2_t array_sequences__aseq_appl(type_actual_t array_sequences__T, array_sequences__aseq_t ivar_1){
        array_sequences_funtype_2_t  result;
        result = (array_sequences_funtype_2_t)ivar_1->seq;
        result->count++;
        release_array_sequences__aseq(ivar_1, array_sequences__T);

        
        return result;
}