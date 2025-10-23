//Code generated using pvs2ir2c
#include "Rijndael_c.h"


Rijndael_record_0_t new_Rijndael_record_0(void){
        Rijndael_record_0_t tmp = (Rijndael_record_0_t) safe_malloc(sizeof(struct Rijndael_record_0_s));
        tmp->count = 1;
        return tmp;}

void release_Rijndael_record_0(Rijndael_record_0_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_Rijndael_record_0_ptr(pointer_t x, type_actual_t T){
        release_Rijndael_record_0((Rijndael_record_0_t)x);
}

Rijndael_record_0_t copy_Rijndael_record_0(Rijndael_record_0_t x){
        Rijndael_record_0_t y = new_Rijndael_record_0();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_Rijndael_record_0(Rijndael_record_0_t x, Rijndael_record_0_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

bool_t equal_Rijndael_record_0_ptr(pointer_t x, pointer_t y, actual_Rijndael_record_0_t T){
        return equal_Rijndael_record_0((Rijndael_record_0_t)x, (Rijndael_record_0_t)y);
}

actual_Rijndael_record_0_t actual_Rijndael_record_0(){
        actual_Rijndael_record_0_t new = (actual_Rijndael_record_0_t)safe_malloc(sizeof(struct actual_Rijndael_record_0_s));
        new->equal_ptr = (equal_ptr_t)(*equal_Rijndael_record_0_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_Rijndael_record_0_ptr);
 

 
        return new;
 };

Rijndael_record_0_t update_Rijndael_record_0_project_1(Rijndael_record_0_t x, uint8_t v){
        Rijndael_record_0_t y;
        if (x->count == 1){y = x;}
        else {y = copy_Rijndael_record_0(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

Rijndael_record_0_t update_Rijndael_record_0_project_2(Rijndael_record_0_t x, uint8_t v){
        Rijndael_record_0_t y;
        if (x->count == 1){y = x;}
        else {y = copy_Rijndael_record_0(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}



void release_Rijndael_funtype_1(Rijndael_funtype_1_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

Rijndael_funtype_1_t copy_Rijndael_funtype_1(Rijndael_funtype_1_t x){return x->ftbl->cptr(x);}

bool_t equal_Rijndael_funtype_1(Rijndael_funtype_1_t x, Rijndael_funtype_1_t y){
        return false;}


Rijndael_array_2_t new_Rijndael_array_2(uint32_t size){
        Rijndael_array_2_t tmp = (Rijndael_array_2_t) safe_malloc(sizeof(struct Rijndael_array_2_s) + (size * sizeof(uint8_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_Rijndael_array_2(Rijndael_array_2_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_Rijndael_array_2_ptr(pointer_t x, type_actual_t T){
        release_Rijndael_array_2((Rijndael_array_2_t)x);
}

Rijndael_array_2_t copy_Rijndael_array_2(Rijndael_array_2_t x){
        Rijndael_array_2_t tmp = new_Rijndael_array_2(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = (uint8_t)x->elems[i];};
         return tmp;}

bool_t equal_Rijndael_array_2(Rijndael_array_2_t x, Rijndael_array_2_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = (x->elems[i] == y->elems[i]); i++;};
        return tmp;}

bool_t equal_Rijndael_array_2_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_Rijndael_array_2((Rijndael_array_2_t)x, (Rijndael_array_2_t)y);
}

actual_Rijndael_array_2_t actual_Rijndael_array_2(){
        actual_Rijndael_array_2_t new = (actual_Rijndael_array_2_t)safe_malloc(sizeof(struct actual_Rijndael_array_2_s));
        new->equal_ptr = (equal_ptr_t)(*equal_Rijndael_array_2_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_Rijndael_array_2_ptr);
 

 
        return new;
 };

Rijndael_array_2_t update_Rijndael_array_2(Rijndael_array_2_t x, uint32_t i, uint8_t v){
        Rijndael_array_2_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_Rijndael_array_2(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}

Rijndael_array_2_t upgrade_Rijndael_array_2(Rijndael_array_2_t x, uint32_t i, uint8_t v){
        Rijndael_array_2_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct Rijndael_array_2_s) + (newmax * sizeof(uint8_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_Rijndael_array_2(x);}
           else {y = copy_Rijndael_array_2(x );
                x->count--;};
        y->elems[i] = (uint8_t)v;
        return y;}




uint8_t f_Rijndael_closure_3(struct Rijndael_closure_3_s * closure, Rijndael_record_0_t bvar){
        uint8_t bvar_1;
        bvar_1 = (uint8_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_Rijndael_record_0(bvar);
        uint8_t result = h_Rijndael_closure_3(bvar_1, bvar_2, closure->fvar_1); 
        return result;}

uint8_t m_Rijndael_closure_3(struct Rijndael_closure_3_s * closure, uint8_t bvar_1, uint8_t bvar_2){
        return h_Rijndael_closure_3(bvar_1, bvar_2, closure->fvar_1);}

extern uint8_t h_Rijndael_closure_3(uint8_t ivar_6, uint8_t ivar_7, Rijndael_array_2_t ivar_3){
        uint8_t result;
        uint8_t ivar_17;
        uint8_t ivar_10;
        uint8_t ivar_11;
        ivar_11 = (uint8_t)4;
        ivar_10 = (uint8_t)((uint64_t)ivar_11 * (uint64_t)ivar_7);
        ivar_17 = (uint8_t)(ivar_6 + ivar_10);
        result = (uint8_t)ivar_3->elems[ivar_17];

        return result;
}

Rijndael_closure_3_t new_Rijndael_closure_3(void){
        static struct Rijndael_funtype_1_ftbl_s ftbl = {.fptr = (uint8_t (*)(Rijndael_funtype_1_t, Rijndael_record_0_t))&f_Rijndael_closure_3, .mptr = (uint8_t (*)(Rijndael_funtype_1_t, uint8_t, uint8_t))&m_Rijndael_closure_3, .rptr =  (void (*)(Rijndael_funtype_1_t))&release_Rijndael_closure_3, .cptr = (Rijndael_funtype_1_t (*)(Rijndael_funtype_1_t))&copy_Rijndael_closure_3};
        Rijndael_closure_3_t tmp = (Rijndael_closure_3_t) safe_malloc(sizeof(struct Rijndael_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_Rijndael_closure_3(Rijndael_funtype_1_t closure){
        Rijndael_closure_3_t x = (Rijndael_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
         release_Rijndael_array_2(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

Rijndael_closure_3_t copy_Rijndael_closure_3(Rijndael_closure_3_t x){
        Rijndael_closure_3_t y = new_Rijndael_closure_3();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            Rijndael_funtype_1_htbl_t new_htbl = (Rijndael_funtype_1_htbl_t) safe_malloc(sizeof(struct Rijndael_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            Rijndael_funtype_1_hashentry_t * new_data = (Rijndael_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct Rijndael_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct Rijndael_funtype_1_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_Rijndael_funtype_4(Rijndael_funtype_4_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

Rijndael_funtype_4_t copy_Rijndael_funtype_4(Rijndael_funtype_4_t x){return x->ftbl->cptr(x);}

uint32_t lookup_Rijndael_funtype_4(Rijndael_funtype_4_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; Rijndael_funtype_4_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp21363 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp21363 == 0);
        bool_t keymatch;
        int64_t tmp21364 = mpz_cmp(data.key, i);
        keymatch = (tmp21364 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp21363 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp21363 == 0);

        int64_t tmp21364 = mpz_cmp(data.key, i);
        keymatch = (tmp21364 == 0);
                }
        return hashindex;
        }

Rijndael_funtype_4_t dupdate_Rijndael_funtype_4(Rijndael_funtype_4_t a, mpz_ptr_t i, uint32_t v){
        Rijndael_funtype_4_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (Rijndael_funtype_4_htbl_t)safe_malloc(sizeof(struct Rijndael_funtype_4_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (Rijndael_funtype_4_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct Rijndael_funtype_4_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        Rijndael_funtype_4_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                Rijndael_funtype_4_hashentry_t * new_data = (Rijndael_funtype_4_hashentry_t *)safe_malloc(new_size * sizeof(struct Rijndael_funtype_4_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp21365 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp21365 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp21366 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp21366 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp21367 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp21367 == 0);
                                }
                                mpz_set(new_data[new_loc].key, data[j].key);
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (uint32_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = mpz_hash(i);
        uint32_t hashindex = lookup_Rijndael_funtype_4(htbl, i, ihash);
        Rijndael_funtype_4_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp21368 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp21368 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

Rijndael_funtype_4_t update_Rijndael_funtype_4(Rijndael_funtype_4_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_Rijndael_funtype_4(a, i, v);
            } else {
                Rijndael_funtype_4_t x = copy_Rijndael_funtype_4(a);
                a->count--;
                return dupdate_Rijndael_funtype_4(x, i, v);
            }}

bool_t equal_Rijndael_funtype_4(Rijndael_funtype_4_t x, Rijndael_funtype_4_t y){
        return false;}


Rijndael_record_5_t new_Rijndael_record_5(void){
        Rijndael_record_5_t tmp = (Rijndael_record_5_t) safe_malloc(sizeof(struct Rijndael_record_5_s));
        tmp->count = 1;
        return tmp;}

void release_Rijndael_record_5(Rijndael_record_5_t x){
        x->count--;
        if (x->count <= 0){
         release_Rijndael_funtype_4(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_Rijndael_record_5_ptr(pointer_t x, type_actual_t T){
        release_Rijndael_record_5((Rijndael_record_5_t)x);
}

Rijndael_record_5_t copy_Rijndael_record_5(Rijndael_record_5_t x){
        Rijndael_record_5_t y = new_Rijndael_record_5();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_Rijndael_record_5(Rijndael_record_5_t x, Rijndael_record_5_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_Rijndael_funtype_4(x->seq, y->seq);
        return tmp;}

bool_t equal_Rijndael_record_5_ptr(pointer_t x, pointer_t y, actual_Rijndael_record_5_t T){
        return equal_Rijndael_record_5((Rijndael_record_5_t)x, (Rijndael_record_5_t)y);
}

actual_Rijndael_record_5_t actual_Rijndael_record_5(){
        actual_Rijndael_record_5_t new = (actual_Rijndael_record_5_t)safe_malloc(sizeof(struct actual_Rijndael_record_5_s));
        new->equal_ptr = (equal_ptr_t)(*equal_Rijndael_record_5_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_Rijndael_record_5_ptr);
 

 
        return new;
 };

Rijndael_record_5_t update_Rijndael_record_5_length(Rijndael_record_5_t x, mpz_ptr_t v){
        Rijndael_record_5_t y;
        if (x->count == 1){y = x;}
        else {y = copy_Rijndael_record_5(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

Rijndael_record_5_t update_Rijndael_record_5_seq(Rijndael_record_5_t x, Rijndael_funtype_4_t v){
        Rijndael_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_Rijndael_funtype_4(x->seq);};}
        else {y = copy_Rijndael_record_5(x); x->count--; y->seq->count--;};
        y->seq = (Rijndael_funtype_4_t)v;
        return y;}



void release_Rijndael_funtype_6(Rijndael_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

Rijndael_funtype_6_t copy_Rijndael_funtype_6(Rijndael_funtype_6_t x){return x->ftbl->cptr(x);}

uint32_t lookup_Rijndael_funtype_6(Rijndael_funtype_6_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; Rijndael_funtype_6_hashentry_t data = htbl->data[hashindex];
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

Rijndael_funtype_6_t dupdate_Rijndael_funtype_6(Rijndael_funtype_6_t a, uint8_t i, uint8_t v){
        Rijndael_funtype_6_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (Rijndael_funtype_6_htbl_t)safe_malloc(sizeof(struct Rijndael_funtype_6_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (Rijndael_funtype_6_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct Rijndael_funtype_6_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        Rijndael_funtype_6_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                Rijndael_funtype_6_hashentry_t * new_data = (Rijndael_funtype_6_hashentry_t *)safe_malloc(new_size * sizeof(struct Rijndael_funtype_6_hashentry_s));
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
        uint32_t hashindex = lookup_Rijndael_funtype_6(htbl, i, ihash);
        Rijndael_funtype_6_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint8_t)v; htbl->num_entries++;}
            else {uint8_t tempvalue;tempvalue = (uint8_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint8_t)v;};
        return a;

}

Rijndael_funtype_6_t update_Rijndael_funtype_6(Rijndael_funtype_6_t a, uint8_t i, uint8_t v){
        if (a->count == 1){
                return dupdate_Rijndael_funtype_6(a, i, v);
            } else {
                Rijndael_funtype_6_t x = copy_Rijndael_funtype_6(a);
                a->count--;
                return dupdate_Rijndael_funtype_6(x, i, v);
            }}

bool_t equal_Rijndael_funtype_6(Rijndael_funtype_6_t x, Rijndael_funtype_6_t y){
        return false;}


uint8_t f_Rijndael_closure_7(struct Rijndael_closure_7_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        Rijndael_funtype_6_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_Rijndael_funtype_6(htbl, bvar, hash);
        Rijndael_funtype_6_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_Rijndael_closure_7(bvar, closure->fvar_1, closure->fvar_2);};

return h_Rijndael_closure_7(bvar, closure->fvar_1, closure->fvar_2);}

uint8_t m_Rijndael_closure_7(struct Rijndael_closure_7_s * closure, uint8_t bvar){
        return h_Rijndael_closure_7(bvar, closure->fvar_1, closure->fvar_2);}

extern uint8_t h_Rijndael_closure_7(uint8_t ivar_11, Rijndael_array_2_t ivar_2, uint8_t ivar_3){
        uint8_t result;
        bool_t ivar_12;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)0;
        ivar_12 = (ivar_11 == ivar_14);
        if (ivar_12){ 
             uint8_t ivar_50;
             uint8_t ivar_47;
             Rijndael_funtype_1_t ivar_24;
             Rijndael_funtype_1_t ivar_27;
             ivar_2->count++;
             ivar_27 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
             //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
             ivar_24 = (Rijndael_funtype_1_t)ivar_27;
             if (ivar_24 != NULL) ivar_24->count++;
             release_Rijndael_funtype_1(ivar_27);
             uint8_t ivar_29;
             ivar_29 = (uint8_t)0;
             uint8_t ivar_30;
             ivar_30 = (uint8_t)0;
             ivar_47 = (uint8_t)ivar_24->ftbl->mptr(ivar_24, ivar_29, ivar_30);
             ivar_24->ftbl->rptr(ivar_24);
             uint8_t ivar_48;
             uint8_t ivar_44;
             Rijndael_funtype_1_t ivar_36;
             Rijndael_funtype_1_t ivar_39;
             ivar_2->count++;
             ivar_39 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
             //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
             ivar_36 = (Rijndael_funtype_1_t)ivar_39;
             if (ivar_36 != NULL) ivar_36->count++;
             release_Rijndael_funtype_1(ivar_39);
             uint8_t ivar_41;
             ivar_41 = (uint8_t)1;
             uint8_t ivar_42;
             ivar_42 = (uint8_t)3;
             ivar_44 = (uint8_t)ivar_36->ftbl->mptr(ivar_36, ivar_41, ivar_42);
             ivar_36->ftbl->rptr(ivar_36);
             Rijndael_array_2_t ivar_45;
             ivar_45 = (Rijndael_array_2_t)Rijndael__Sbox();
             if (ivar_45 != NULL) ivar_45->count++;
             ivar_48 = (uint8_t)ivar_45->elems[ivar_44];
             release_Rijndael_array_2(ivar_45);
             ivar_50 = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_47, (uint8_t)ivar_48);
             result = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_50, (uint8_t)ivar_3);
} else {
        
             uint8_t ivar_87;
             Rijndael_funtype_1_t ivar_58;
             Rijndael_funtype_1_t ivar_61;
             ivar_2->count++;
             ivar_61 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
             //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
             ivar_58 = (Rijndael_funtype_1_t)ivar_61;
             if (ivar_58 != NULL) ivar_58->count++;
             release_Rijndael_funtype_1(ivar_61);
             uint8_t ivar_64;
             ivar_64 = (uint8_t)0;
             ivar_87 = (uint8_t)ivar_58->ftbl->mptr(ivar_58, ivar_11, ivar_64);
             ivar_58->ftbl->rptr(ivar_58);
             uint8_t ivar_88;
             uint8_t ivar_84;
             Rijndael_funtype_1_t ivar_76;
             Rijndael_funtype_1_t ivar_79;
             ivar_2->count++;
             ivar_79 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
             //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
             ivar_76 = (Rijndael_funtype_1_t)ivar_79;
             if (ivar_76 != NULL) ivar_76->count++;
             release_Rijndael_funtype_1(ivar_79);
             uint8_t ivar_81;
             uint8_t ivar_68;
             uint8_t ivar_71;
             ivar_71 = (uint8_t)1;
             ivar_68 = (uint8_t)(ivar_11 + ivar_71);
             uint8_t ivar_69;
             ivar_69 = (uint8_t)4;
             ivar_81 = (uint8_t)rem_uint32_uint32(ivar_68, ivar_69);
             uint8_t ivar_82;
             ivar_82 = (uint8_t)3;
             ivar_84 = (uint8_t)ivar_76->ftbl->mptr(ivar_76, ivar_81, ivar_82);
             ivar_76->ftbl->rptr(ivar_76);
             Rijndael_array_2_t ivar_85;
             ivar_85 = (Rijndael_array_2_t)Rijndael__Sbox();
             if (ivar_85 != NULL) ivar_85->count++;
             ivar_88 = (uint8_t)ivar_85->elems[ivar_84];
             release_Rijndael_array_2(ivar_85);
             result = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_87, (uint8_t)ivar_88);
};

        return result;
}

Rijndael_closure_7_t new_Rijndael_closure_7(void){
        static struct Rijndael_funtype_6_ftbl_s ftbl = {.fptr = (uint8_t (*)(Rijndael_funtype_6_t, uint8_t))&f_Rijndael_closure_7, .mptr = (uint8_t (*)(Rijndael_funtype_6_t, uint8_t))&m_Rijndael_closure_7, .rptr =  (void (*)(Rijndael_funtype_6_t))&release_Rijndael_closure_7, .cptr = (Rijndael_funtype_6_t (*)(Rijndael_funtype_6_t))&copy_Rijndael_closure_7};
        Rijndael_closure_7_t tmp = (Rijndael_closure_7_t) safe_malloc(sizeof(struct Rijndael_closure_7_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_Rijndael_closure_7(Rijndael_funtype_6_t closure){
        Rijndael_closure_7_t x = (Rijndael_closure_7_t)closure;
        x->count--;
        if (x->count <= 0){
         release_Rijndael_array_2(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

Rijndael_closure_7_t copy_Rijndael_closure_7(Rijndael_closure_7_t x){
        Rijndael_closure_7_t y = new_Rijndael_closure_7();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint8_t)x->fvar_2;
        if (x->htbl != NULL){
            Rijndael_funtype_6_htbl_t new_htbl = (Rijndael_funtype_6_htbl_t) safe_malloc(sizeof(struct Rijndael_funtype_6_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            Rijndael_funtype_6_hashentry_t * new_data = (Rijndael_funtype_6_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct Rijndael_funtype_6_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct Rijndael_funtype_6_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_Rijndael_closure_8(struct Rijndael_closure_8_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        Rijndael_funtype_6_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_Rijndael_funtype_6(htbl, bvar, hash);
        Rijndael_funtype_6_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_Rijndael_closure_8(bvar, closure->fvar_1, closure->fvar_2);};

return h_Rijndael_closure_8(bvar, closure->fvar_1, closure->fvar_2);}

uint8_t m_Rijndael_closure_8(struct Rijndael_closure_8_s * closure, uint8_t bvar){
        return h_Rijndael_closure_8(bvar, closure->fvar_1, closure->fvar_2);}

extern uint8_t h_Rijndael_closure_8(uint8_t ivar_91, Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_9){
        uint8_t result;
        uint8_t ivar_110;
        Rijndael_funtype_1_t ivar_98;
        Rijndael_funtype_1_t ivar_101;
        ivar_2->count++;
        ivar_101 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
        //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
        ivar_98 = (Rijndael_funtype_1_t)ivar_101;
        if (ivar_98 != NULL) ivar_98->count++;
        release_Rijndael_funtype_1(ivar_101);
        uint8_t ivar_104;
        ivar_104 = (uint8_t)1;
        ivar_110 = (uint8_t)ivar_98->ftbl->mptr(ivar_98, ivar_91, ivar_104);
        ivar_98->ftbl->rptr(ivar_98);
        uint8_t ivar_111;
        ivar_111 = (uint8_t)ivar_9->elems[ivar_91];
        result = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_110, (uint8_t)ivar_111);

        return result;
}

Rijndael_closure_8_t new_Rijndael_closure_8(void){
        static struct Rijndael_funtype_6_ftbl_s ftbl = {.fptr = (uint8_t (*)(Rijndael_funtype_6_t, uint8_t))&f_Rijndael_closure_8, .mptr = (uint8_t (*)(Rijndael_funtype_6_t, uint8_t))&m_Rijndael_closure_8, .rptr =  (void (*)(Rijndael_funtype_6_t))&release_Rijndael_closure_8, .cptr = (Rijndael_funtype_6_t (*)(Rijndael_funtype_6_t))&copy_Rijndael_closure_8};
        Rijndael_closure_8_t tmp = (Rijndael_closure_8_t) safe_malloc(sizeof(struct Rijndael_closure_8_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_Rijndael_closure_8(Rijndael_funtype_6_t closure){
        Rijndael_closure_8_t x = (Rijndael_closure_8_t)closure;
        x->count--;
        if (x->count <= 0){
         release_Rijndael_array_2(x->fvar_1);
         release_Rijndael_array_2(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

Rijndael_closure_8_t copy_Rijndael_closure_8(Rijndael_closure_8_t x){
        Rijndael_closure_8_t y = new_Rijndael_closure_8();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            Rijndael_funtype_6_htbl_t new_htbl = (Rijndael_funtype_6_htbl_t) safe_malloc(sizeof(struct Rijndael_funtype_6_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            Rijndael_funtype_6_hashentry_t * new_data = (Rijndael_funtype_6_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct Rijndael_funtype_6_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct Rijndael_funtype_6_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_Rijndael_closure_9(struct Rijndael_closure_9_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        Rijndael_funtype_6_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_Rijndael_funtype_6(htbl, bvar, hash);
        Rijndael_funtype_6_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_Rijndael_closure_9(bvar, closure->fvar_1, closure->fvar_2);};

return h_Rijndael_closure_9(bvar, closure->fvar_1, closure->fvar_2);}

uint8_t m_Rijndael_closure_9(struct Rijndael_closure_9_s * closure, uint8_t bvar){
        return h_Rijndael_closure_9(bvar, closure->fvar_1, closure->fvar_2);}

extern uint8_t h_Rijndael_closure_9(uint8_t ivar_114, Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_89){
        uint8_t result;
        uint8_t ivar_133;
        Rijndael_funtype_1_t ivar_121;
        Rijndael_funtype_1_t ivar_124;
        ivar_2->count++;
        ivar_124 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
        //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
        ivar_121 = (Rijndael_funtype_1_t)ivar_124;
        if (ivar_121 != NULL) ivar_121->count++;
        release_Rijndael_funtype_1(ivar_124);
        uint8_t ivar_127;
        ivar_127 = (uint8_t)2;
        ivar_133 = (uint8_t)ivar_121->ftbl->mptr(ivar_121, ivar_114, ivar_127);
        ivar_121->ftbl->rptr(ivar_121);
        uint8_t ivar_134;
        ivar_134 = (uint8_t)ivar_89->elems[ivar_114];
        result = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_133, (uint8_t)ivar_134);

        return result;
}

Rijndael_closure_9_t new_Rijndael_closure_9(void){
        static struct Rijndael_funtype_6_ftbl_s ftbl = {.fptr = (uint8_t (*)(Rijndael_funtype_6_t, uint8_t))&f_Rijndael_closure_9, .mptr = (uint8_t (*)(Rijndael_funtype_6_t, uint8_t))&m_Rijndael_closure_9, .rptr =  (void (*)(Rijndael_funtype_6_t))&release_Rijndael_closure_9, .cptr = (Rijndael_funtype_6_t (*)(Rijndael_funtype_6_t))&copy_Rijndael_closure_9};
        Rijndael_closure_9_t tmp = (Rijndael_closure_9_t) safe_malloc(sizeof(struct Rijndael_closure_9_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_Rijndael_closure_9(Rijndael_funtype_6_t closure){
        Rijndael_closure_9_t x = (Rijndael_closure_9_t)closure;
        x->count--;
        if (x->count <= 0){
         release_Rijndael_array_2(x->fvar_1);
         release_Rijndael_array_2(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

Rijndael_closure_9_t copy_Rijndael_closure_9(Rijndael_closure_9_t x){
        Rijndael_closure_9_t y = new_Rijndael_closure_9();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            Rijndael_funtype_6_htbl_t new_htbl = (Rijndael_funtype_6_htbl_t) safe_malloc(sizeof(struct Rijndael_funtype_6_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            Rijndael_funtype_6_hashentry_t * new_data = (Rijndael_funtype_6_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct Rijndael_funtype_6_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct Rijndael_funtype_6_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint8_t f_Rijndael_closure_10(struct Rijndael_closure_10_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        Rijndael_funtype_6_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_Rijndael_funtype_6(htbl, bvar, hash);
        Rijndael_funtype_6_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_Rijndael_closure_10(bvar, closure->fvar_1, closure->fvar_2);};

return h_Rijndael_closure_10(bvar, closure->fvar_1, closure->fvar_2);}

uint8_t m_Rijndael_closure_10(struct Rijndael_closure_10_s * closure, uint8_t bvar){
        return h_Rijndael_closure_10(bvar, closure->fvar_1, closure->fvar_2);}

extern uint8_t h_Rijndael_closure_10(uint8_t ivar_137, Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_112){
        uint8_t result;
        uint8_t ivar_156;
        Rijndael_funtype_1_t ivar_144;
        Rijndael_funtype_1_t ivar_147;
        ivar_2->count++;
        ivar_147 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
        //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
        ivar_144 = (Rijndael_funtype_1_t)ivar_147;
        if (ivar_144 != NULL) ivar_144->count++;
        release_Rijndael_funtype_1(ivar_147);
        uint8_t ivar_150;
        ivar_150 = (uint8_t)3;
        ivar_156 = (uint8_t)ivar_144->ftbl->mptr(ivar_144, ivar_137, ivar_150);
        ivar_144->ftbl->rptr(ivar_144);
        uint8_t ivar_157;
        ivar_157 = (uint8_t)ivar_112->elems[ivar_137];
        result = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_156, (uint8_t)ivar_157);

        return result;
}

Rijndael_closure_10_t new_Rijndael_closure_10(void){
        static struct Rijndael_funtype_6_ftbl_s ftbl = {.fptr = (uint8_t (*)(Rijndael_funtype_6_t, uint8_t))&f_Rijndael_closure_10, .mptr = (uint8_t (*)(Rijndael_funtype_6_t, uint8_t))&m_Rijndael_closure_10, .rptr =  (void (*)(Rijndael_funtype_6_t))&release_Rijndael_closure_10, .cptr = (Rijndael_funtype_6_t (*)(Rijndael_funtype_6_t))&copy_Rijndael_closure_10};
        Rijndael_closure_10_t tmp = (Rijndael_closure_10_t) safe_malloc(sizeof(struct Rijndael_closure_10_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_Rijndael_closure_10(Rijndael_funtype_6_t closure){
        Rijndael_closure_10_t x = (Rijndael_closure_10_t)closure;
        x->count--;
        if (x->count <= 0){
         release_Rijndael_array_2(x->fvar_1);
         release_Rijndael_array_2(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

Rijndael_closure_10_t copy_Rijndael_closure_10(Rijndael_closure_10_t x){
        Rijndael_closure_10_t y = new_Rijndael_closure_10();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            Rijndael_funtype_6_htbl_t new_htbl = (Rijndael_funtype_6_htbl_t) safe_malloc(sizeof(struct Rijndael_funtype_6_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            Rijndael_funtype_6_hashentry_t * new_data = (Rijndael_funtype_6_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct Rijndael_funtype_6_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct Rijndael_funtype_6_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


Rijndael_array_11_t new_Rijndael_array_11(uint32_t size){
        Rijndael_array_11_t tmp = (Rijndael_array_11_t) safe_malloc(sizeof(struct Rijndael_array_11_s) + (size * sizeof(Rijndael_array_2_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_Rijndael_array_11(Rijndael_array_11_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_Rijndael_array_2(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_Rijndael_array_11_ptr(pointer_t x, type_actual_t T){
        release_Rijndael_array_11((Rijndael_array_11_t)x);
}

Rijndael_array_11_t copy_Rijndael_array_11(Rijndael_array_11_t x){
        Rijndael_array_11_t tmp = new_Rijndael_array_11(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_Rijndael_array_11(Rijndael_array_11_t x, Rijndael_array_11_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_Rijndael_array_2(x->elems[i], y->elems[i]);};
        return tmp;}

bool_t equal_Rijndael_array_11_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_Rijndael_array_11((Rijndael_array_11_t)x, (Rijndael_array_11_t)y);
}

actual_Rijndael_array_11_t actual_Rijndael_array_11(){
        actual_Rijndael_array_11_t new = (actual_Rijndael_array_11_t)safe_malloc(sizeof(struct actual_Rijndael_array_11_s));
        new->equal_ptr = (equal_ptr_t)(*equal_Rijndael_array_11_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_Rijndael_array_11_ptr);
 

 
        return new;
 };

Rijndael_array_11_t update_Rijndael_array_11(Rijndael_array_11_t x, uint32_t i, Rijndael_array_2_t v){
         Rijndael_array_11_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_Rijndael_array_11(x);
                      x->count--;};
        Rijndael_array_2_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_Rijndael_array_2(yelems[i]);};
         yelems[i] = v;
         return y;}

Rijndael_array_11_t upgrade_Rijndael_array_11(Rijndael_array_11_t x, uint32_t i, Rijndael_array_2_t v){
         Rijndael_array_11_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_malloc(sizeof(struct Rijndael_array_11_s) + (newmax * sizeof(Rijndael_array_2_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_Rijndael_array_11(x);} else {y = copy_Rijndael_array_11(x);
                      x->count--;};
        Rijndael_array_2_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_Rijndael_array_2(yelems[i]);};
         yelems[i] = v;
         return y;}



void release_Rijndael_funtype_12(Rijndael_funtype_12_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

Rijndael_funtype_12_t copy_Rijndael_funtype_12(Rijndael_funtype_12_t x){return x->ftbl->cptr(x);}

uint32_t lookup_Rijndael_funtype_12(Rijndael_funtype_12_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; Rijndael_funtype_12_hashentry_t data = htbl->data[hashindex];
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

Rijndael_funtype_12_t dupdate_Rijndael_funtype_12(Rijndael_funtype_12_t a, uint8_t i, Rijndael_array_2_t v){
        Rijndael_funtype_12_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (Rijndael_funtype_12_htbl_t)safe_malloc(sizeof(struct Rijndael_funtype_12_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (Rijndael_funtype_12_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct Rijndael_funtype_12_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        Rijndael_funtype_12_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                Rijndael_funtype_12_hashentry_t * new_data = (Rijndael_funtype_12_hashentry_t *)safe_malloc(new_size * sizeof(struct Rijndael_funtype_12_hashentry_s));
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
                                new_data[new_loc].value = (Rijndael_array_2_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_Rijndael_funtype_12(htbl, i, ihash);
        Rijndael_funtype_12_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (Rijndael_array_2_t)v; htbl->num_entries++;}
            else {Rijndael_array_2_t tempvalue;tempvalue = (Rijndael_array_2_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (Rijndael_array_2_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_Rijndael_array_2(tempvalue);};
        return a;

}

Rijndael_funtype_12_t update_Rijndael_funtype_12(Rijndael_funtype_12_t a, uint8_t i, Rijndael_array_2_t v){
        if (a->count == 1){
                return dupdate_Rijndael_funtype_12(a, i, v);
            } else {
                Rijndael_funtype_12_t x = copy_Rijndael_funtype_12(a);
                a->count--;
                return dupdate_Rijndael_funtype_12(x, i, v);
            }}

bool_t equal_Rijndael_funtype_12(Rijndael_funtype_12_t x, Rijndael_funtype_12_t y){
        return false;}


Rijndael_record_13_t new_Rijndael_record_13(void){
        Rijndael_record_13_t tmp = (Rijndael_record_13_t) safe_malloc(sizeof(struct Rijndael_record_13_s));
        tmp->count = 1;
        return tmp;}

void release_Rijndael_record_13(Rijndael_record_13_t x){
        x->count--;
        if (x->count <= 0){
         release_Rijndael_array_2(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_Rijndael_record_13_ptr(pointer_t x, type_actual_t T){
        release_Rijndael_record_13((Rijndael_record_13_t)x);
}

Rijndael_record_13_t copy_Rijndael_record_13(Rijndael_record_13_t x){
        Rijndael_record_13_t y = new_Rijndael_record_13();
        y->length = (uint8_t)x->length;
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_Rijndael_record_13(Rijndael_record_13_t x, Rijndael_record_13_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_Rijndael_array_2(x->seq, y->seq);
        return tmp;}

bool_t equal_Rijndael_record_13_ptr(pointer_t x, pointer_t y, actual_Rijndael_record_13_t T){
        return equal_Rijndael_record_13((Rijndael_record_13_t)x, (Rijndael_record_13_t)y);
}

actual_Rijndael_record_13_t actual_Rijndael_record_13(){
        actual_Rijndael_record_13_t new = (actual_Rijndael_record_13_t)safe_malloc(sizeof(struct actual_Rijndael_record_13_s));
        new->equal_ptr = (equal_ptr_t)(*equal_Rijndael_record_13_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_Rijndael_record_13_ptr);
 

 
        return new;
 };

Rijndael_record_13_t update_Rijndael_record_13_length(Rijndael_record_13_t x, uint8_t v){
        Rijndael_record_13_t y;
        if (x->count == 1){y = x;}
        else {y = copy_Rijndael_record_13(x); x->count--;};
        y->length = (uint8_t)v;
        return y;}

Rijndael_record_13_t update_Rijndael_record_13_seq(Rijndael_record_13_t x, Rijndael_array_2_t v){
        Rijndael_record_13_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_Rijndael_array_2(x->seq);};}
        else {y = copy_Rijndael_record_13(x); x->count--; y->seq->count--;};
        y->seq = (Rijndael_array_2_t)v;
        return y;}



extern Rijndael_funtype_1_t Rijndael__get(Rijndael_array_2_t ivar_3){
        Rijndael_funtype_1_t  result;
        Rijndael_closure_3_t cl21361;
        cl21361 = new_Rijndael_closure_3();
        cl21361->fvar_1 = (Rijndael_array_2_t)ivar_3;
        if (cl21361->fvar_1 != NULL) cl21361->fvar_1->count++;
        release_Rijndael_array_2(ivar_3);
        result = (Rijndael_funtype_1_t)cl21361;

        
        return result;
}

extern bytestrings__bytestring_t Rijndael__SboxHex(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    Rijndael_record_5_t ivar_6;
        uint32_t len21370 = 512;
        uint32_t characters21371[512] = {54, 51, 55, 99, 55, 55, 55, 98, 102, 50, 54, 98, 54, 102, 99, 53, 51, 48, 48, 49, 54, 55, 50, 98, 102, 101, 100, 55, 97, 98, 55, 54, 99, 97, 56, 50, 99, 57, 55, 100, 102, 97, 53, 57, 52, 55, 102, 48, 97, 100, 100, 52, 97, 50, 97, 102, 57, 99, 97, 52, 55, 50, 99, 48, 98, 55, 102, 100, 57, 51, 50, 54, 51, 54, 51, 102, 102, 55, 99, 99, 51, 52, 97, 53, 101, 53, 102, 49, 55, 49, 100, 56, 51, 49, 49, 53, 48, 52, 99, 55, 50, 51, 99, 51, 49, 56, 57, 54, 48, 53, 57, 97, 48, 55, 49, 50, 56, 48, 101, 50, 101, 98, 50, 55, 98, 50, 55, 53, 48, 57, 56, 51, 50, 99, 49, 97, 49, 98, 54, 101, 53, 97, 97, 48, 53, 50, 51, 98, 100, 54, 98, 51, 50, 57, 101, 51, 50, 102, 56, 52, 53, 51, 100, 49, 48, 48, 101, 100, 50, 48, 102, 99, 98, 49, 53, 98, 54, 97, 99, 98, 98, 101, 51, 57, 52, 97, 52, 99, 53, 56, 99, 102, 100, 48, 101, 102, 97, 97, 102, 98, 52, 51, 52, 100, 51, 51, 56, 53, 52, 53, 102, 57, 48, 50, 55, 102, 53, 48, 51, 99, 57, 102, 97, 56, 53, 49, 97, 51, 52, 48, 56, 102, 57, 50, 57, 100, 51, 56, 102, 53, 98, 99, 98, 54, 100, 97, 50, 49, 49, 48, 102, 102, 102, 51, 100, 50, 99, 100, 48, 99, 49, 51, 101, 99, 53, 102, 57, 55, 52, 52, 49, 55, 99, 52, 97, 55, 55, 101, 51, 100, 54, 52, 53, 100, 49, 57, 55, 51, 54, 48, 56, 49, 52, 102, 100, 99, 50, 50, 50, 97, 57, 48, 56, 56, 52, 54, 101, 101, 98, 56, 49, 52, 100, 101, 53, 101, 48, 98, 100, 98, 101, 48, 51, 50, 51, 97, 48, 97, 52, 57, 48, 54, 50, 52, 53, 99, 99, 50, 100, 51, 97, 99, 54, 50, 57, 49, 57, 53, 101, 52, 55, 57, 101, 55, 99, 56, 51, 55, 54, 100, 56, 100, 100, 53, 52, 101, 97, 57, 54, 99, 53, 54, 102, 52, 101, 97, 54, 53, 55, 97, 97, 101, 48, 56, 98, 97, 55, 56, 50, 53, 50, 101, 49, 99, 97, 54, 98, 52, 99, 54, 101, 56, 100, 100, 55, 52, 49, 102, 52, 98, 98, 100, 56, 98, 56, 97, 55, 48, 51, 101, 98, 53, 54, 54, 52, 56, 48, 51, 102, 54, 48, 101, 54, 49, 51, 53, 53, 55, 98, 57, 56, 54, 99, 49, 49, 100, 57, 101, 101, 49, 102, 56, 57, 56, 49, 49, 54, 57, 100, 57, 56, 101, 57, 52, 57, 98, 49, 101, 56, 55, 101, 57, 99, 101, 53, 53, 50, 56, 100, 102, 56, 99, 97, 49, 56, 57, 48, 100, 98, 102, 101, 54, 52, 50, 54, 56, 52, 49, 57, 57, 50, 100, 48, 102, 98, 48, 53, 52, 98, 98, 49, 54};
        stringliteral_t string21369 = mk_string(512, characters21371);
        ivar_6 = (Rijndael_record_5_t)strings__make_string(len21370, string21369);
        strings__string_t ivar_4;
        //copying to strings__string from Rijndael_record_5;
        ivar_4 = (strings__string_t)ivar_6;
        if (ivar_4 != NULL) ivar_4->count++;
        release_Rijndael_record_5(ivar_6);
        bytestrings__bytestring_t ivar_3;
        ivar_3 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_4);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_3;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_3);

        defined = true;};
        
        return result;
}

extern Rijndael_array_2_t Rijndael__Sbox(void){
        Rijndael_array_2_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    /* X */ bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_4;
        ivar_4 = (bytestrings__bytestring_t)Rijndael__SboxHex();
        if (ivar_4 != NULL) ivar_4->count++;
        bytestrings__bytestring_t ivar_3;
        ivar_3 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_4);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_1 = (bytestrings__bytestring_t)ivar_3;
        if (ivar_1 != NULL) ivar_1->count++;
        release_bytestrings__bytestring(ivar_3);
        result = (Rijndael_array_2_t)ivar_1->seq;
        result->count++;
        release_bytestrings__bytestring(ivar_1);

        defined = true;};
        
        return result;
}

extern Rijndael_array_2_t Rijndael__byteSubst(Rijndael_array_2_t ivar_2){
        Rijndael_array_2_t  result;
        result = new_Rijndael_array_2(16);
        uint8_t ivar_3;
        for (uint32_t index21372 = 0; index21372 < 16; index21372++){
             ivar_3 = (uint8_t)index21372;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)ivar_2->elems[ivar_3];
             Rijndael_array_2_t ivar_11;
             ivar_11 = (Rijndael_array_2_t)Rijndael__Sbox();
             if (ivar_11 != NULL) ivar_11->count++;
             result->elems[index21372] = (uint8_t)ivar_11->elems[ivar_10];
             release_Rijndael_array_2(ivar_11);
        };
        release_Rijndael_array_2(ivar_2);

        
        return result;
}

extern Rijndael_array_2_t Rijndael__shiftRow(Rijndael_array_2_t ivar_2){
        Rijndael_array_2_t  result;
        result = new_Rijndael_array_2(16);
        uint8_t ivar_3;
        for (uint32_t index21373 = 0; index21373 < 16; index21373++){
             ivar_3 = (uint8_t)index21373;
             /* i */ uint16_t ivar_4;
             uint16_t ivar_9;
             ivar_9 = (uint16_t)4;
             ivar_4 = (uint16_t)integertypes__u16rem((uint16_t)ivar_3, (uint16_t)ivar_9);
             /* j */ uint16_t ivar_10;
             uint16_t ivar_15;
             ivar_15 = (uint16_t)4;
             ivar_10 = (uint16_t)integertypes__u16div((uint16_t)ivar_3, (uint16_t)ivar_15);
             /* ij */ uint8_t ivar_16;
             ivar_16 = (uint8_t)(ivar_10 + ivar_4);
             /* l */ uint16_t ivar_20;
             uint16_t ivar_25;
             ivar_25 = (uint16_t)4;
             ivar_20 = (uint16_t)integertypes__u16rem((uint16_t)ivar_16, (uint16_t)ivar_25);
             Rijndael_funtype_1_t ivar_30;
             Rijndael_funtype_1_t ivar_33;
             ivar_2->count++;
             ivar_33 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
             //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
             ivar_30 = (Rijndael_funtype_1_t)ivar_33;
             if (ivar_30 != NULL) ivar_30->count++;
             release_Rijndael_funtype_1(ivar_33);
             result->elems[index21373] = (uint8_t)ivar_30->ftbl->mptr(ivar_30, ivar_4, ivar_20);
             ivar_30->ftbl->rptr(ivar_30);
        };
        release_Rijndael_array_2(ivar_2);

        
        return result;
}

extern uint8_t Rijndael__T2(uint8_t ivar_2){
        uint8_t  result;
        bool_t ivar_3;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)128;
        ivar_3 = (ivar_2 < ivar_5);
        if (ivar_3){ 
             uint8_t ivar_7;
             ivar_7 = (uint8_t)2;
             result = (uint8_t)((uint64_t)ivar_7 * (uint64_t)ivar_2);
} else {
        
             uint8_t ivar_18;
             ivar_18 = (uint8_t)integertypes__u8plus((uint8_t)ivar_2, (uint8_t)ivar_2);
             uint8_t ivar_19;
             ivar_19 = (uint8_t)27;
             result = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_18, (uint8_t)ivar_19);
};

        
        return result;
}

extern uint8_t Rijndael__T3(uint8_t ivar_2){
        uint8_t  result;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)Rijndael__T2((uint8_t)ivar_2);
        result = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_9, (uint8_t)ivar_2);

        
        return result;
}

extern Rijndael_array_2_t Rijndael__mixColumn(Rijndael_array_2_t ivar_2){
        Rijndael_array_2_t  result;
        result = new_Rijndael_array_2(16);
        uint8_t ivar_3;
        for (uint32_t index21374 = 0; index21374 < 16; index21374++){
             ivar_3 = (uint8_t)index21374;
             /* i */ uint16_t ivar_4;
             uint16_t ivar_9;
             ivar_9 = (uint16_t)4;
             ivar_4 = (uint16_t)integertypes__u16rem((uint16_t)ivar_3, (uint16_t)ivar_9);
             /* j */ uint16_t ivar_10;
             uint16_t ivar_15;
             ivar_15 = (uint16_t)4;
             ivar_10 = (uint16_t)integertypes__u16div((uint16_t)ivar_3, (uint16_t)ivar_15);
             bool_t ivar_16;
             uint8_t ivar_18;
             ivar_18 = (uint8_t)0;
             ivar_16 = (ivar_4 == ivar_18);
             if (ivar_16){  
           uint8_t ivar_83;
           uint8_t ivar_69;
           uint8_t ivar_55;
           uint8_t ivar_39;
           Rijndael_funtype_1_t ivar_31;
           Rijndael_funtype_1_t ivar_34;
           ivar_2->count++;
           ivar_34 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
           //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
           ivar_31 = (Rijndael_funtype_1_t)ivar_34;
           if (ivar_31 != NULL) ivar_31->count++;
           release_Rijndael_funtype_1(ivar_34);
           uint8_t ivar_36;
           ivar_36 = (uint8_t)0;
           ivar_39 = (uint8_t)ivar_31->ftbl->mptr(ivar_31, ivar_36, ivar_10);
           ivar_31->ftbl->rptr(ivar_31);
           ivar_55 = (uint8_t)Rijndael__T2((uint8_t)ivar_39);
           uint8_t ivar_56;
           uint8_t ivar_53;
           Rijndael_funtype_1_t ivar_45;
           Rijndael_funtype_1_t ivar_48;
           ivar_2->count++;
           ivar_48 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
           //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
           ivar_45 = (Rijndael_funtype_1_t)ivar_48;
           if (ivar_45 != NULL) ivar_45->count++;
           release_Rijndael_funtype_1(ivar_48);
           uint8_t ivar_50;
           ivar_50 = (uint8_t)1;
           ivar_53 = (uint8_t)ivar_45->ftbl->mptr(ivar_45, ivar_50, ivar_10);
           ivar_45->ftbl->rptr(ivar_45);
           ivar_56 = (uint8_t)Rijndael__T3((uint8_t)ivar_53);
           ivar_69 = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_55, (uint8_t)ivar_56);
           uint8_t ivar_70;
           Rijndael_funtype_1_t ivar_61;
           Rijndael_funtype_1_t ivar_64;
           ivar_2->count++;
           ivar_64 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
           //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
           ivar_61 = (Rijndael_funtype_1_t)ivar_64;
           if (ivar_61 != NULL) ivar_61->count++;
           release_Rijndael_funtype_1(ivar_64);
           uint8_t ivar_66;
           ivar_66 = (uint8_t)2;
           ivar_70 = (uint8_t)ivar_61->ftbl->mptr(ivar_61, ivar_66, ivar_10);
           ivar_61->ftbl->rptr(ivar_61);
           ivar_83 = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_69, (uint8_t)ivar_70);
           uint8_t ivar_84;
           Rijndael_funtype_1_t ivar_75;
           Rijndael_funtype_1_t ivar_78;
           ivar_2->count++;
           ivar_78 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
           //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
           ivar_75 = (Rijndael_funtype_1_t)ivar_78;
           if (ivar_75 != NULL) ivar_75->count++;
           release_Rijndael_funtype_1(ivar_78);
           uint8_t ivar_80;
           ivar_80 = (uint8_t)3;
           ivar_84 = (uint8_t)ivar_75->ftbl->mptr(ivar_75, ivar_80, ivar_10);
           ivar_75->ftbl->rptr(ivar_75);
           result->elems[index21374] = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_83, (uint8_t)ivar_84);
} else {
             
           bool_t ivar_85;
           uint8_t ivar_87;
           ivar_87 = (uint8_t)1;
           ivar_85 = (ivar_4 == ivar_87);
           if (ivar_85){   
           uint8_t ivar_152;
           uint8_t ivar_138;
           uint8_t ivar_121;
           Rijndael_funtype_1_t ivar_99;
           Rijndael_funtype_1_t ivar_102;
           ivar_2->count++;
           ivar_102 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
           //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
           ivar_99 = (Rijndael_funtype_1_t)ivar_102;
           if (ivar_99 != NULL) ivar_99->count++;
           release_Rijndael_funtype_1(ivar_102);
           uint8_t ivar_104;
           ivar_104 = (uint8_t)0;
           ivar_121 = (uint8_t)ivar_99->ftbl->mptr(ivar_99, ivar_104, ivar_10);
           ivar_99->ftbl->rptr(ivar_99);
           uint8_t ivar_122;
           uint8_t ivar_119;
           Rijndael_funtype_1_t ivar_111;
           Rijndael_funtype_1_t ivar_114;
           ivar_2->count++;
           ivar_114 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
           //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
           ivar_111 = (Rijndael_funtype_1_t)ivar_114;
           if (ivar_111 != NULL) ivar_111->count++;
           release_Rijndael_funtype_1(ivar_114);
           uint8_t ivar_116;
           ivar_116 = (uint8_t)1;
           ivar_119 = (uint8_t)ivar_111->ftbl->mptr(ivar_111, ivar_116, ivar_10);
           ivar_111->ftbl->rptr(ivar_111);
           ivar_122 = (uint8_t)Rijndael__T2((uint8_t)ivar_119);
           ivar_138 = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_121, (uint8_t)ivar_122);
           uint8_t ivar_139;
           uint8_t ivar_136;
           Rijndael_funtype_1_t ivar_128;
           Rijndael_funtype_1_t ivar_131;
           ivar_2->count++;
           ivar_131 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
           //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
           ivar_128 = (Rijndael_funtype_1_t)ivar_131;
           if (ivar_128 != NULL) ivar_128->count++;
           release_Rijndael_funtype_1(ivar_131);
           uint8_t ivar_133;
           ivar_133 = (uint8_t)2;
           ivar_136 = (uint8_t)ivar_128->ftbl->mptr(ivar_128, ivar_133, ivar_10);
           ivar_128->ftbl->rptr(ivar_128);
           ivar_139 = (uint8_t)Rijndael__T3((uint8_t)ivar_136);
           ivar_152 = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_138, (uint8_t)ivar_139);
           uint8_t ivar_153;
           Rijndael_funtype_1_t ivar_144;
           Rijndael_funtype_1_t ivar_147;
           ivar_2->count++;
           ivar_147 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
           //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
           ivar_144 = (Rijndael_funtype_1_t)ivar_147;
           if (ivar_144 != NULL) ivar_144->count++;
           release_Rijndael_funtype_1(ivar_147);
           uint8_t ivar_149;
           ivar_149 = (uint8_t)3;
           ivar_153 = (uint8_t)ivar_144->ftbl->mptr(ivar_144, ivar_149, ivar_10);
           ivar_144->ftbl->rptr(ivar_144);
           result->elems[index21374] = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_152, (uint8_t)ivar_153);
} else {
           
           bool_t ivar_154;
           uint8_t ivar_156;
           ivar_156 = (uint8_t)2;
           ivar_154 = (ivar_4 == ivar_156);
           if (ivar_154){    
            uint8_t ivar_221;
            uint8_t ivar_204;
            uint8_t ivar_187;
            Rijndael_funtype_1_t ivar_168;
            Rijndael_funtype_1_t ivar_171;
            ivar_2->count++;
            ivar_171 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
            //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
            ivar_168 = (Rijndael_funtype_1_t)ivar_171;
            if (ivar_168 != NULL) ivar_168->count++;
            release_Rijndael_funtype_1(ivar_171);
            uint8_t ivar_173;
            ivar_173 = (uint8_t)0;
            ivar_187 = (uint8_t)ivar_168->ftbl->mptr(ivar_168, ivar_173, ivar_10);
            ivar_168->ftbl->rptr(ivar_168);
            uint8_t ivar_188;
            Rijndael_funtype_1_t ivar_179;
            Rijndael_funtype_1_t ivar_182;
            ivar_2->count++;
            ivar_182 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
            //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
            ivar_179 = (Rijndael_funtype_1_t)ivar_182;
            if (ivar_179 != NULL) ivar_179->count++;
            release_Rijndael_funtype_1(ivar_182);
            uint8_t ivar_184;
            ivar_184 = (uint8_t)1;
            ivar_188 = (uint8_t)ivar_179->ftbl->mptr(ivar_179, ivar_184, ivar_10);
            ivar_179->ftbl->rptr(ivar_179);
            ivar_204 = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_187, (uint8_t)ivar_188);
            uint8_t ivar_205;
            uint8_t ivar_202;
            Rijndael_funtype_1_t ivar_194;
            Rijndael_funtype_1_t ivar_197;
            ivar_2->count++;
            ivar_197 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
            //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
            ivar_194 = (Rijndael_funtype_1_t)ivar_197;
            if (ivar_194 != NULL) ivar_194->count++;
            release_Rijndael_funtype_1(ivar_197);
            uint8_t ivar_199;
            ivar_199 = (uint8_t)2;
            ivar_202 = (uint8_t)ivar_194->ftbl->mptr(ivar_194, ivar_199, ivar_10);
            ivar_194->ftbl->rptr(ivar_194);
            ivar_205 = (uint8_t)Rijndael__T2((uint8_t)ivar_202);
            ivar_221 = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_204, (uint8_t)ivar_205);
            uint8_t ivar_222;
            uint8_t ivar_219;
            Rijndael_funtype_1_t ivar_211;
            Rijndael_funtype_1_t ivar_214;
            ivar_2->count++;
            ivar_214 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
            //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
            ivar_211 = (Rijndael_funtype_1_t)ivar_214;
            if (ivar_211 != NULL) ivar_211->count++;
            release_Rijndael_funtype_1(ivar_214);
            uint8_t ivar_216;
            ivar_216 = (uint8_t)3;
            ivar_219 = (uint8_t)ivar_211->ftbl->mptr(ivar_211, ivar_216, ivar_10);
            ivar_211->ftbl->rptr(ivar_211);
            ivar_222 = (uint8_t)Rijndael__T3((uint8_t)ivar_219);
            result->elems[index21374] = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_221, (uint8_t)ivar_222);
} else {
           
            uint8_t ivar_286;
            uint8_t ivar_269;
            uint8_t ivar_255;
            uint8_t ivar_242;
            Rijndael_funtype_1_t ivar_234;
            Rijndael_funtype_1_t ivar_237;
            ivar_2->count++;
            ivar_237 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
            //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
            ivar_234 = (Rijndael_funtype_1_t)ivar_237;
            if (ivar_234 != NULL) ivar_234->count++;
            release_Rijndael_funtype_1(ivar_237);
            uint8_t ivar_239;
            ivar_239 = (uint8_t)0;
            ivar_242 = (uint8_t)ivar_234->ftbl->mptr(ivar_234, ivar_239, ivar_10);
            ivar_234->ftbl->rptr(ivar_234);
            ivar_255 = (uint8_t)Rijndael__T3((uint8_t)ivar_242);
            uint8_t ivar_256;
            Rijndael_funtype_1_t ivar_247;
            Rijndael_funtype_1_t ivar_250;
            ivar_2->count++;
            ivar_250 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
            //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
            ivar_247 = (Rijndael_funtype_1_t)ivar_250;
            if (ivar_247 != NULL) ivar_247->count++;
            release_Rijndael_funtype_1(ivar_250);
            uint8_t ivar_252;
            ivar_252 = (uint8_t)1;
            ivar_256 = (uint8_t)ivar_247->ftbl->mptr(ivar_247, ivar_252, ivar_10);
            ivar_247->ftbl->rptr(ivar_247);
            ivar_269 = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_255, (uint8_t)ivar_256);
            uint8_t ivar_270;
            Rijndael_funtype_1_t ivar_261;
            Rijndael_funtype_1_t ivar_264;
            ivar_2->count++;
            ivar_264 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
            //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
            ivar_261 = (Rijndael_funtype_1_t)ivar_264;
            if (ivar_261 != NULL) ivar_261->count++;
            release_Rijndael_funtype_1(ivar_264);
            uint8_t ivar_266;
            ivar_266 = (uint8_t)2;
            ivar_270 = (uint8_t)ivar_261->ftbl->mptr(ivar_261, ivar_266, ivar_10);
            ivar_261->ftbl->rptr(ivar_261);
            ivar_286 = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_269, (uint8_t)ivar_270);
            uint8_t ivar_287;
            uint8_t ivar_284;
            Rijndael_funtype_1_t ivar_276;
            Rijndael_funtype_1_t ivar_279;
            ivar_2->count++;
            ivar_279 = (Rijndael_funtype_1_t)Rijndael__get((Rijndael_array_2_t)ivar_2);
            //copying to Rijndael_funtype_1 from Rijndael_funtype_1;
            ivar_276 = (Rijndael_funtype_1_t)ivar_279;
            if (ivar_276 != NULL) ivar_276->count++;
            release_Rijndael_funtype_1(ivar_279);
            uint8_t ivar_281;
            ivar_281 = (uint8_t)3;
            ivar_284 = (uint8_t)ivar_276->ftbl->mptr(ivar_276, ivar_281, ivar_10);
            ivar_276->ftbl->rptr(ivar_276);
            ivar_287 = (uint8_t)Rijndael__T2((uint8_t)ivar_284);
            result->elems[index21374] = (uint8_t)integer_bv_ops__u8xor((uint8_t)ivar_286, (uint8_t)ivar_287);
};
};
};
        };
        release_Rijndael_array_2(ivar_2);

        
        return result;
}

extern Rijndael_array_2_t Rijndael__roundkeyXOR(Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_3){
        Rijndael_array_2_t  result;
        /* n */ uint32_t ivar_7;
        ivar_7 = (uint32_t)16;
        Rijndael_array_2_t ivar_6;
        ivar_6 = (Rijndael_array_2_t)bytevectors__byvXOR((uint32_t)ivar_7, (bytevectors__byv_t)ivar_2, (bytevectors__byv_t)ivar_3);
        //copying to Rijndael_array_2 from Rijndael_array_2;
        result = (Rijndael_array_2_t)ivar_6;
        if (result != NULL) result->count++;
        release_Rijndael_array_2(ivar_6);

        
        return result;
}

extern uint8_t Rijndael__roundConst(uint8_t ivar_2){
        uint8_t  result;
        bool_t ivar_3;
        uint8_t ivar_5;
        ivar_5 = (uint8_t)1;
        ivar_3 = (ivar_2 <= ivar_5);
        if (ivar_3){ 
             //copying to uint8 from uint8;
             result = (uint8_t)ivar_2;
} else {
        
             uint8_t ivar_15;
             uint8_t ivar_13;
             uint8_t ivar_10;
             ivar_10 = (uint8_t)1;
             ivar_13 = (uint8_t)(ivar_2 - ivar_10);
             ivar_15 = (uint8_t)Rijndael__roundConst((uint8_t)ivar_13);
             result = (uint8_t)Rijndael__T2((uint8_t)ivar_15);
};

        
        return result;
}

extern Rijndael_array_2_t Rijndael__nextRoundKey(Rijndael_array_2_t ivar_2, uint8_t ivar_3){
        Rijndael_array_2_t  result;
        Rijndael_funtype_6_t ivar_199;
        Rijndael_closure_7_t cl21375;
        cl21375 = new_Rijndael_closure_7();
        cl21375->fvar_1 = (Rijndael_array_2_t)ivar_2;
        if (cl21375->fvar_1 != NULL) cl21375->fvar_1->count++;
        cl21375->fvar_2 = (uint8_t)ivar_3;
        ivar_199 = (Rijndael_funtype_6_t)cl21375;
        /* K0 */ Rijndael_array_2_t ivar_9;
        //copying to Rijndael_array_2 from Rijndael_funtype_6;
        uint32_t tmp21376;
        tmp21376 = (uint32_t)4;
        ivar_9 = new_Rijndael_array_2(tmp21376);
        for (uint32_t index_200 = 0; index_200 < tmp21376; index_200++){
             ivar_9->elems[index_200] = (uint8_t)ivar_199->ftbl->fptr(ivar_199, index_200);
        };
        release_Rijndael_funtype_6(ivar_199);
        Rijndael_funtype_6_t ivar_198;
        Rijndael_closure_8_t cl21377;
        cl21377 = new_Rijndael_closure_8();
        cl21377->fvar_1 = (Rijndael_array_2_t)ivar_2;
        if (cl21377->fvar_1 != NULL) cl21377->fvar_1->count++;
        cl21377->fvar_2 = (Rijndael_array_2_t)ivar_9;
        if (cl21377->fvar_2 != NULL) cl21377->fvar_2->count++;
        ivar_198 = (Rijndael_funtype_6_t)cl21377;
        /* K1 */ Rijndael_array_2_t ivar_89;
        //copying to Rijndael_array_2 from Rijndael_funtype_6;
        uint32_t tmp21378;
        tmp21378 = (uint32_t)4;
        ivar_89 = new_Rijndael_array_2(tmp21378);
        for (uint32_t index_201 = 0; index_201 < tmp21378; index_201++){
             ivar_89->elems[index_201] = (uint8_t)ivar_198->ftbl->fptr(ivar_198, index_201);
        };
        release_Rijndael_funtype_6(ivar_198);
        Rijndael_funtype_6_t ivar_197;
        Rijndael_closure_9_t cl21379;
        cl21379 = new_Rijndael_closure_9();
        cl21379->fvar_1 = (Rijndael_array_2_t)ivar_2;
        if (cl21379->fvar_1 != NULL) cl21379->fvar_1->count++;
        cl21379->fvar_2 = (Rijndael_array_2_t)ivar_89;
        if (cl21379->fvar_2 != NULL) cl21379->fvar_2->count++;
        ivar_197 = (Rijndael_funtype_6_t)cl21379;
        /* K2 */ Rijndael_array_2_t ivar_112;
        //copying to Rijndael_array_2 from Rijndael_funtype_6;
        uint32_t tmp21380;
        tmp21380 = (uint32_t)4;
        ivar_112 = new_Rijndael_array_2(tmp21380);
        for (uint32_t index_202 = 0; index_202 < tmp21380; index_202++){
             ivar_112->elems[index_202] = (uint8_t)ivar_197->ftbl->fptr(ivar_197, index_202);
        };
        release_Rijndael_funtype_6(ivar_197);
        Rijndael_funtype_6_t ivar_196;
        Rijndael_closure_10_t cl21381;
        cl21381 = new_Rijndael_closure_10();
        cl21381->fvar_1 = (Rijndael_array_2_t)ivar_2;
        if (cl21381->fvar_1 != NULL) cl21381->fvar_1->count++;
        cl21381->fvar_2 = (Rijndael_array_2_t)ivar_112;
        if (cl21381->fvar_2 != NULL) cl21381->fvar_2->count++;
        release_Rijndael_array_2(ivar_2);
        ivar_196 = (Rijndael_funtype_6_t)cl21381;
        /* K3 */ Rijndael_array_2_t ivar_135;
        //copying to Rijndael_array_2 from Rijndael_funtype_6;
        uint32_t tmp21382;
        tmp21382 = (uint32_t)4;
        ivar_135 = new_Rijndael_array_2(tmp21382);
        for (uint32_t index_203 = 0; index_203 < tmp21382; index_203++){
             ivar_135->elems[index_203] = (uint8_t)ivar_196->ftbl->fptr(ivar_196, index_203);
        };
        release_Rijndael_funtype_6(ivar_196);
        result = new_Rijndael_array_2(16);
        uint8_t ivar_158;
        for (uint32_t index21383 = 0; index21383 < 16; index21383++){
             ivar_158 = (uint8_t)index21383;
             bool_t ivar_159;
             uint8_t ivar_161;
             ivar_161 = (uint8_t)4;
             ivar_159 = (ivar_158 < ivar_161);
             if (ivar_159){  
           result->elems[index21383] = (uint8_t)ivar_9->elems[ivar_158];
} else {
             
           bool_t ivar_167;
           uint8_t ivar_169;
           ivar_169 = (uint8_t)8;
           ivar_167 = (ivar_158 < ivar_169);
           if (ivar_167){   
           uint8_t ivar_177;
           uint8_t ivar_173;
           ivar_173 = (uint8_t)4;
           ivar_177 = (uint8_t)(ivar_158 - ivar_173);
           result->elems[index21383] = (uint8_t)ivar_89->elems[ivar_177];
} else {
           
           bool_t ivar_178;
           uint8_t ivar_180;
           ivar_180 = (uint8_t)12;
           ivar_178 = (ivar_158 < ivar_180);
           if (ivar_178){    
            uint8_t ivar_188;
            uint8_t ivar_184;
            ivar_184 = (uint8_t)8;
            ivar_188 = (uint8_t)(ivar_158 - ivar_184);
            result->elems[index21383] = (uint8_t)ivar_112->elems[ivar_188];
} else {
           
            uint8_t ivar_195;
            uint8_t ivar_191;
            ivar_191 = (uint8_t)12;
            ivar_195 = (uint8_t)(ivar_158 - ivar_191);
            result->elems[index21383] = (uint8_t)ivar_135->elems[ivar_195];
};
};
};
        };
        release_Rijndael_array_2(ivar_112);
        release_Rijndael_array_2(ivar_135);
        release_Rijndael_array_2(ivar_89);
        release_Rijndael_array_2(ivar_9);

        
        return result;
}

extern Rijndael_array_11_t Rijndael__allKeys(Rijndael_array_11_t ivar_2, uint8_t ivar_3, uint8_t ivar_4){
        Rijndael_array_11_t  result;
        bool_t ivar_5;
        uint8_t ivar_7;
        ivar_7 = (uint8_t)10;
        ivar_5 = (ivar_4 == ivar_7);
        if (ivar_5){ 
             //copying to Rijndael_array_11 from Rijndael_array_11;
             result = (Rijndael_array_11_t)ivar_2;
             if (result != NULL) result->count++;
             release_Rijndael_array_11(ivar_2);
} else {
        
             Rijndael_array_11_t ivar_39;
             Rijndael_array_2_t ivar_12;
             Rijndael_array_2_t ivar_20;
             Rijndael_array_2_t ivar_16;
             ivar_16 = (Rijndael_array_2_t)ivar_2->elems[ivar_4];
             ivar_16->count++;
             //copying to Rijndael_array_2 from Rijndael_array_2;
             ivar_20 = (Rijndael_array_2_t)ivar_16;
             if (ivar_20 != NULL) ivar_20->count++;
             release_Rijndael_array_2(ivar_16);
             Rijndael_array_2_t ivar_19;
             ivar_19 = (Rijndael_array_2_t)Rijndael__nextRoundKey((Rijndael_array_2_t)ivar_20, (uint8_t)ivar_3);
             //copying to Rijndael_array_2 from Rijndael_array_2;
             ivar_12 = (Rijndael_array_2_t)ivar_19;
             if (ivar_12 != NULL) ivar_12->count++;
             release_Rijndael_array_2(ivar_19);
             Rijndael_array_11_t ivar_31;
             uint8_t ivar_24;
             uint8_t ivar_26;
             ivar_26 = (uint8_t)1;
             ivar_24 = (uint8_t)(ivar_4 + ivar_26);
             Rijndael_array_11_t ivar_28;
             Rijndael_array_2_t ivar_30;
             ivar_30 = NULL;
             ivar_28 = (Rijndael_array_11_t)update_Rijndael_array_11(ivar_2, ivar_24, ivar_30);
             if (ivar_30 != NULL) ivar_30->count--;
             ivar_31 = (Rijndael_array_11_t)update_Rijndael_array_11(ivar_28, ivar_24, ivar_12);
             if (ivar_12 != NULL) ivar_12->count--;
             //copying to Rijndael_array_11 from Rijndael_array_11;
             ivar_39 = (Rijndael_array_11_t)ivar_31;
             if (ivar_39 != NULL) ivar_39->count++;
             release_Rijndael_array_11(ivar_31);
             uint8_t ivar_40;
             ivar_40 = (uint8_t)Rijndael__T2((uint8_t)ivar_3);
             uint8_t ivar_41;
             uint8_t ivar_36;
             ivar_36 = (uint8_t)1;
             ivar_41 = (uint8_t)(ivar_4 + ivar_36);
             Rijndael_array_11_t ivar_38;
             ivar_38 = (Rijndael_array_11_t)Rijndael__allKeys((Rijndael_array_11_t)ivar_39, (uint8_t)ivar_40, (uint8_t)ivar_41);
             //copying to Rijndael_array_11 from Rijndael_array_11;
             result = (Rijndael_array_11_t)ivar_38;
             if (result != NULL) result->count++;
             release_Rijndael_array_11(ivar_38);
};

        
        return result;
}

extern Rijndael_array_2_t Rijndael__Rijndael_step(Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_3){
        Rijndael_array_2_t  result;
        /* A1 */ Rijndael_array_2_t ivar_4;
        Rijndael_array_2_t ivar_6;
        ivar_6 = (Rijndael_array_2_t)Rijndael__byteSubst((Rijndael_array_2_t)ivar_2);
        //copying to Rijndael_array_2 from Rijndael_array_2;
        ivar_4 = (Rijndael_array_2_t)ivar_6;
        if (ivar_4 != NULL) ivar_4->count++;
        release_Rijndael_array_2(ivar_6);
        /* A2 */ Rijndael_array_2_t ivar_8;
        Rijndael_array_2_t ivar_10;
        ivar_10 = (Rijndael_array_2_t)Rijndael__shiftRow((Rijndael_array_2_t)ivar_4);
        //copying to Rijndael_array_2 from Rijndael_array_2;
        ivar_8 = (Rijndael_array_2_t)ivar_10;
        if (ivar_8 != NULL) ivar_8->count++;
        release_Rijndael_array_2(ivar_10);
        /* A3 */ Rijndael_array_2_t ivar_12;
        Rijndael_array_2_t ivar_14;
        ivar_14 = (Rijndael_array_2_t)Rijndael__mixColumn((Rijndael_array_2_t)ivar_8);
        //copying to Rijndael_array_2 from Rijndael_array_2;
        ivar_12 = (Rijndael_array_2_t)ivar_14;
        if (ivar_12 != NULL) ivar_12->count++;
        release_Rijndael_array_2(ivar_14);
        Rijndael_array_2_t ivar_18;
        ivar_18 = (Rijndael_array_2_t)Rijndael__roundkeyXOR((Rijndael_array_2_t)ivar_12, (Rijndael_array_2_t)ivar_3);
        //copying to Rijndael_array_2 from Rijndael_array_2;
        result = (Rijndael_array_2_t)ivar_18;
        if (result != NULL) result->count++;
        release_Rijndael_array_2(ivar_18);

        
        return result;
}

extern Rijndael_array_2_t Rijndael__Rijndael_rec(Rijndael_array_2_t ivar_3, Rijndael_funtype_12_t ivar_4, uint8_t ivar_6){
        Rijndael_array_2_t  result;
        bool_t ivar_7;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)10;
        ivar_7 = (ivar_6 >= ivar_9);
        if (ivar_7){ 
             Rijndael_array_2_t ivar_25;
             Rijndael_array_2_t ivar_18;
             Rijndael_array_2_t ivar_15;
             ivar_15 = (Rijndael_array_2_t)Rijndael__byteSubst((Rijndael_array_2_t)ivar_3);
             //copying to Rijndael_array_2 from Rijndael_array_2;
             ivar_18 = (Rijndael_array_2_t)ivar_15;
             if (ivar_18 != NULL) ivar_18->count++;
             release_Rijndael_array_2(ivar_15);
             Rijndael_array_2_t ivar_17;
             ivar_17 = (Rijndael_array_2_t)Rijndael__shiftRow((Rijndael_array_2_t)ivar_18);
             //copying to Rijndael_array_2 from Rijndael_array_2;
             ivar_25 = (Rijndael_array_2_t)ivar_17;
             if (ivar_25 != NULL) ivar_25->count++;
             release_Rijndael_array_2(ivar_17);
             Rijndael_array_2_t ivar_26;
             Rijndael_array_2_t ivar_20;
             ivar_20 = (Rijndael_array_2_t)ivar_4->ftbl->fptr(ivar_4, ivar_6);
             ivar_4->ftbl->rptr(ivar_4);
             //copying to Rijndael_array_2 from Rijndael_array_2;
             ivar_26 = (Rijndael_array_2_t)ivar_20;
             if (ivar_26 != NULL) ivar_26->count++;
             release_Rijndael_array_2(ivar_20);
             Rijndael_array_2_t ivar_24;
             ivar_24 = (Rijndael_array_2_t)Rijndael__roundkeyXOR((Rijndael_array_2_t)ivar_25, (Rijndael_array_2_t)ivar_26);
             //copying to Rijndael_array_2 from Rijndael_array_2;
             result = (Rijndael_array_2_t)ivar_24;
             if (result != NULL) result->count++;
             release_Rijndael_array_2(ivar_24);
} else {
        
             bool_t ivar_27;
             uint8_t ivar_29;
             ivar_29 = (uint8_t)0;
             ivar_27 = (ivar_6 == ivar_29);
             if (ivar_27){  
           Rijndael_array_2_t ivar_48;
           Rijndael_array_2_t ivar_43;
           Rijndael_array_2_t ivar_37;
           ivar_37 = (Rijndael_array_2_t)ivar_4->ftbl->fptr(ivar_4, ivar_6);
           //copying to Rijndael_array_2 from Rijndael_array_2;
           ivar_43 = (Rijndael_array_2_t)ivar_37;
           if (ivar_43 != NULL) ivar_43->count++;
           release_Rijndael_array_2(ivar_37);
           Rijndael_array_2_t ivar_41;
           ivar_41 = (Rijndael_array_2_t)Rijndael__roundkeyXOR((Rijndael_array_2_t)ivar_3, (Rijndael_array_2_t)ivar_43);
           //copying to Rijndael_array_2 from Rijndael_array_2;
           ivar_48 = (Rijndael_array_2_t)ivar_41;
           if (ivar_48 != NULL) ivar_48->count++;
           release_Rijndael_array_2(ivar_41);
           uint8_t ivar_51;
           uint8_t ivar_45;
           ivar_45 = (uint8_t)1;
           ivar_51 = (uint8_t)(ivar_6 + ivar_45);
           Rijndael_array_2_t ivar_47;
           ivar_47 = (Rijndael_array_2_t)Rijndael__Rijndael_rec((Rijndael_array_2_t)ivar_48, (Rijndael_funtype_12_t)ivar_4, (uint8_t)ivar_51);
           //copying to Rijndael_array_2 from Rijndael_array_2;
           result = (Rijndael_array_2_t)ivar_47;
           if (result != NULL) result->count++;
           release_Rijndael_array_2(ivar_47);
} else {
             
           /* A4 */ Rijndael_array_2_t ivar_52;
           Rijndael_array_2_t ivar_62;
           Rijndael_array_2_t ivar_56;
           ivar_56 = (Rijndael_array_2_t)ivar_4->ftbl->fptr(ivar_4, ivar_6);
           //copying to Rijndael_array_2 from Rijndael_array_2;
           ivar_62 = (Rijndael_array_2_t)ivar_56;
           if (ivar_62 != NULL) ivar_62->count++;
           release_Rijndael_array_2(ivar_56);
           Rijndael_array_2_t ivar_60;
           ivar_60 = (Rijndael_array_2_t)Rijndael__Rijndael_step((Rijndael_array_2_t)ivar_3, (Rijndael_array_2_t)ivar_62);
           //copying to Rijndael_array_2 from Rijndael_array_2;
           ivar_52 = (Rijndael_array_2_t)ivar_60;
           if (ivar_52 != NULL) ivar_52->count++;
           release_Rijndael_array_2(ivar_60);
           uint8_t ivar_73;
           uint8_t ivar_67;
           ivar_67 = (uint8_t)1;
           ivar_73 = (uint8_t)(ivar_6 + ivar_67);
           Rijndael_array_2_t ivar_69;
           ivar_69 = (Rijndael_array_2_t)Rijndael__Rijndael_rec((Rijndael_array_2_t)ivar_52, (Rijndael_funtype_12_t)ivar_4, (uint8_t)ivar_73);
           //copying to Rijndael_array_2 from Rijndael_array_2;
           result = (Rijndael_array_2_t)ivar_69;
           if (result != NULL) result->count++;
           release_Rijndael_array_2(ivar_69);
};
};

        
        return result;
}

extern Rijndael_array_2_t Rijndael__Rijndael(Rijndael_array_2_t ivar_2, Rijndael_array_2_t ivar_3){
        Rijndael_array_2_t  result;
        Rijndael_funtype_12_t ivar_19;
        Rijndael_array_11_t ivar_14;
        ivar_14 = new_Rijndael_array_11(11);
        uint8_t ivar_10;
        for (uint32_t index21384 = 0; index21384 < 11; index21384++){
             ivar_10 = (uint8_t)index21384;
             //copying to Rijndael_array_2 from Rijndael_array_2;
             ivar_14->elems[index21384] = (Rijndael_array_2_t)ivar_3;
             if (ivar_14->elems[index21384] != NULL) ivar_14->elems[index21384]->count++;
        };
        release_Rijndael_array_2(ivar_3);
        uint8_t ivar_15;
        ivar_15 = (uint8_t)1;
        uint8_t ivar_16;
        ivar_16 = (uint8_t)0;
        Rijndael_array_11_t ivar_13;
        ivar_13 = (Rijndael_array_11_t)Rijndael__allKeys((Rijndael_array_11_t)ivar_14, (uint8_t)ivar_15, (uint8_t)ivar_16);
        //copying to Rijndael_funtype_12 from Rijndael_array_11;
        ivar_19 = (Rijndael_funtype_12_t)ivar_13;
        if (ivar_19 != NULL) ivar_19->count++;
        release_Rijndael_array_11(ivar_13);
        uint8_t ivar_20;
        ivar_20 = (uint8_t)0;
        Rijndael_array_2_t ivar_17;
        ivar_17 = (Rijndael_array_2_t)Rijndael__Rijndael_rec((Rijndael_array_2_t)ivar_2, (Rijndael_funtype_12_t)ivar_19, (uint8_t)ivar_20);
        //copying to Rijndael_array_2 from Rijndael_array_2;
        result = (Rijndael_array_2_t)ivar_17;
        if (result != NULL) result->count++;
        release_Rijndael_array_2(ivar_17);

        
        return result;
}

extern bytestrings__bytestring_t Rijndael__hex16(Rijndael_array_2_t ivar_2){
        bytestrings__bytestring_t  result;
        bytestrings__bytestring_t ivar_7;
        uint8_t ivar_4;
        ivar_4 = (uint8_t)16;
        ivar_7 = (bytestrings__bytestring_t)new_Rijndael_record_13();;
        ivar_7->length = (uint32_t)ivar_4;
        ivar_7->seq = (Rijndael_array_2_t)ivar_2;
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_6;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_6);

        
        return result;
}

extern bytestrings__bytestring_t Rijndael__test0RD(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    /* Input */ bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_10;
        Rijndael_record_5_t ivar_8;
        uint32_t len21392 = 32;
        uint32_t characters21393[32] = {51, 50, 52, 51, 102, 54, 97, 56, 56, 56, 53, 97, 51, 48, 56, 100, 51, 49, 51, 49, 57, 56, 97, 50, 101, 48, 51, 55, 48, 55, 51, 52};
        stringliteral_t string21391 = mk_string(32, characters21393);
        ivar_8 = (Rijndael_record_5_t)strings__make_string(len21392, string21391);
        strings__string_t ivar_6;
        //copying to strings__string from Rijndael_record_5;
        ivar_6 = (strings__string_t)ivar_8;
        if (ivar_6 != NULL) ivar_6->count++;
        release_Rijndael_record_5(ivar_8);
        bytestrings__bytestring_t ivar_5;
        ivar_5 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_6);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_10 = (bytestrings__bytestring_t)ivar_5;
        if (ivar_10 != NULL) ivar_10->count++;
        release_bytestrings__bytestring(ivar_5);
        bytestrings__bytestring_t ivar_9;
        ivar_9 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_10);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_1 = (bytestrings__bytestring_t)ivar_9;
        if (ivar_1 != NULL) ivar_1->count++;
        release_bytestrings__bytestring(ivar_9);
        /* Cipher */ bytestrings__bytestring_t ivar_11;
        bytestrings__bytestring_t ivar_20;
        Rijndael_record_5_t ivar_18;
        uint32_t len21395 = 32;
        uint32_t characters21396[32] = {50, 98, 55, 101, 49, 53, 49, 54, 50, 56, 97, 101, 100, 50, 97, 54, 97, 98, 102, 55, 49, 53, 56, 56, 48, 57, 99, 102, 52, 102, 51, 99};
        stringliteral_t string21394 = mk_string(32, characters21396);
        ivar_18 = (Rijndael_record_5_t)strings__make_string(len21395, string21394);
        strings__string_t ivar_16;
        //copying to strings__string from Rijndael_record_5;
        ivar_16 = (strings__string_t)ivar_18;
        if (ivar_16 != NULL) ivar_16->count++;
        release_Rijndael_record_5(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_15;
        if (ivar_20 != NULL) ivar_20->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_20);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_19;
        if (ivar_11 != NULL) ivar_11->count++;
        release_bytestrings__bytestring(ivar_19);
        /* Output */ Rijndael_array_2_t ivar_21;
        Rijndael_array_2_t ivar_31;
        ivar_31 = (Rijndael_array_2_t)ivar_1->seq;
        ivar_31->count++;
        release_bytestrings__bytestring(ivar_1);
        Rijndael_array_2_t ivar_32;
        ivar_32 = (Rijndael_array_2_t)ivar_11->seq;
        ivar_32->count++;
        release_bytestrings__bytestring(ivar_11);
        Rijndael_array_2_t ivar_30;
        ivar_30 = (Rijndael_array_2_t)Rijndael__roundkeyXOR((Rijndael_array_2_t)ivar_31, (Rijndael_array_2_t)ivar_32);
        //copying to Rijndael_array_2 from Rijndael_array_2;
        ivar_21 = (Rijndael_array_2_t)ivar_30;
        if (ivar_21 != NULL) ivar_21->count++;
        release_Rijndael_array_2(ivar_30);
        /* Outputbytestring */ Rijndael_record_13_t ivar_33;
        uint8_t ivar_34;
        ivar_34 = (uint8_t)16;
        ivar_33 = (Rijndael_record_13_t)new_Rijndael_record_13();;
        ivar_33->length = (uint8_t)ivar_34;
        ivar_33->seq = (Rijndael_array_2_t)ivar_21;
        bytestrings__bytestring_t ivar_37;
        ivar_37 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_33);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_37;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_37);

        defined = true;};
        
        return result;
}

extern bytestrings__bytestring_t Rijndael__testRijndael1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    /* Input */ bytestrings__bytestring_t ivar_1;
        bytestrings__bytestring_t ivar_10;
        Rijndael_record_5_t ivar_8;
        uint32_t len21404 = 32;
        uint32_t characters21405[32] = {51, 50, 52, 51, 102, 54, 97, 56, 56, 56, 53, 97, 51, 48, 56, 100, 51, 49, 51, 49, 57, 56, 97, 50, 101, 48, 51, 55, 48, 55, 51, 52};
        stringliteral_t string21403 = mk_string(32, characters21405);
        ivar_8 = (Rijndael_record_5_t)strings__make_string(len21404, string21403);
        strings__string_t ivar_6;
        //copying to strings__string from Rijndael_record_5;
        ivar_6 = (strings__string_t)ivar_8;
        if (ivar_6 != NULL) ivar_6->count++;
        release_Rijndael_record_5(ivar_8);
        bytestrings__bytestring_t ivar_5;
        ivar_5 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_6);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_10 = (bytestrings__bytestring_t)ivar_5;
        if (ivar_10 != NULL) ivar_10->count++;
        release_bytestrings__bytestring(ivar_5);
        bytestrings__bytestring_t ivar_9;
        ivar_9 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_10);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_1 = (bytestrings__bytestring_t)ivar_9;
        if (ivar_1 != NULL) ivar_1->count++;
        release_bytestrings__bytestring(ivar_9);
        /* Cipher */ bytestrings__bytestring_t ivar_11;
        bytestrings__bytestring_t ivar_20;
        Rijndael_record_5_t ivar_18;
        uint32_t len21407 = 32;
        uint32_t characters21408[32] = {50, 98, 55, 101, 49, 53, 49, 54, 50, 56, 97, 101, 100, 50, 97, 54, 97, 98, 102, 55, 49, 53, 56, 56, 48, 57, 99, 102, 52, 102, 51, 99};
        stringliteral_t string21406 = mk_string(32, characters21408);
        ivar_18 = (Rijndael_record_5_t)strings__make_string(len21407, string21406);
        strings__string_t ivar_16;
        //copying to strings__string from Rijndael_record_5;
        ivar_16 = (strings__string_t)ivar_18;
        if (ivar_16 != NULL) ivar_16->count++;
        release_Rijndael_record_5(ivar_18);
        bytestrings__bytestring_t ivar_15;
        ivar_15 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_16);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_20 = (bytestrings__bytestring_t)ivar_15;
        if (ivar_20 != NULL) ivar_20->count++;
        release_bytestrings__bytestring(ivar_15);
        bytestrings__bytestring_t ivar_19;
        ivar_19 = (bytestrings__bytestring_t)hex__hex2bytestring((bytestrings__bytestring_t)ivar_20);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_11 = (bytestrings__bytestring_t)ivar_19;
        if (ivar_11 != NULL) ivar_11->count++;
        release_bytestrings__bytestring(ivar_19);
        /* Output */ Rijndael_array_2_t ivar_21;
        Rijndael_array_2_t ivar_31;
        ivar_31 = (Rijndael_array_2_t)ivar_1->seq;
        ivar_31->count++;
        release_bytestrings__bytestring(ivar_1);
        Rijndael_array_2_t ivar_32;
        ivar_32 = (Rijndael_array_2_t)ivar_11->seq;
        ivar_32->count++;
        release_bytestrings__bytestring(ivar_11);
        Rijndael_array_2_t ivar_30;
        ivar_30 = (Rijndael_array_2_t)Rijndael__Rijndael((Rijndael_array_2_t)ivar_31, (Rijndael_array_2_t)ivar_32);
        //copying to Rijndael_array_2 from Rijndael_array_2;
        ivar_21 = (Rijndael_array_2_t)ivar_30;
        if (ivar_21 != NULL) ivar_21->count++;
        release_Rijndael_array_2(ivar_30);
        /* Outputbytestring */ Rijndael_record_13_t ivar_33;
        uint8_t ivar_34;
        ivar_34 = (uint8_t)16;
        ivar_33 = (Rijndael_record_13_t)new_Rijndael_record_13();;
        ivar_33->length = (uint8_t)ivar_34;
        ivar_33->seq = (Rijndael_array_2_t)ivar_21;
        bytestrings__bytestring_t ivar_37;
        ivar_37 = (bytestrings__bytestring_t)hex__bytestring2hexstring((bytestrings__bytestring_t)ivar_33);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_37;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_37);

        defined = true;};
        
        return result;
}