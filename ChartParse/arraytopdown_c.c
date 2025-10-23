//Code generated using pvs2ir2c
#include "arraytopdown_c.h"


arraytopdown__ent_adt_t new_arraytopdown__ent_adt(void){
        arraytopdown__ent_adt_t tmp = (arraytopdown__ent_adt_t) safe_malloc(sizeof(struct arraytopdown__ent_adt_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown__ent_adt(arraytopdown__ent_adt_t x){
switch (x->arraytopdown__ent_adt_index) {
case 0:  release_arraytopdown__fail((arraytopdown__fail_t) x); break;
case 3:  release_arraytopdown__good((arraytopdown__good_t) x); break;
case 4:  release_arraytopdown__push((arraytopdown__push_t) x); break;
}}

void release_arraytopdown__ent_adt_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown__ent_adt((arraytopdown__ent_adt_t)x);
}

arraytopdown__ent_adt_t copy_arraytopdown__ent_adt(arraytopdown__ent_adt_t x){
        arraytopdown__ent_adt_t y = new_arraytopdown__ent_adt();
        y->arraytopdown__ent_adt_index = (uint8_t)x->arraytopdown__ent_adt_index;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown__ent_adt(arraytopdown__ent_adt_t x, arraytopdown__ent_adt_t y){
        bool_t tmp = x->arraytopdown__ent_adt_index == y->arraytopdown__ent_adt_index;
        switch  (x->arraytopdown__ent_adt_index) {
                case 0: tmp = tmp && equal_arraytopdown__fail((arraytopdown__fail_t) x, (arraytopdown__fail_t) y); break;
                case 3: tmp = tmp && equal_arraytopdown__good((arraytopdown__good_t) x, (arraytopdown__good_t) y); break;
                case 4: tmp = tmp && equal_arraytopdown__push((arraytopdown__push_t) x, (arraytopdown__push_t) y); break;
        }
        return tmp;
}

bool_t equal_arraytopdown__ent_adt_ptr(pointer_t x, pointer_t y, actual_arraytopdown__ent_adt_t T){
        return equal_arraytopdown__ent_adt((arraytopdown__ent_adt_t)x, (arraytopdown__ent_adt_t)y);
}

actual_arraytopdown__ent_adt_t actual_arraytopdown__ent_adt(){
        actual_arraytopdown__ent_adt_t new = (actual_arraytopdown__ent_adt_t)safe_malloc(sizeof(struct actual_arraytopdown__ent_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown__ent_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown__ent_adt_ptr);
 

 
        return new;
 };

arraytopdown__ent_adt_t update_arraytopdown__ent_adt_arraytopdown__ent_adt_index(arraytopdown__ent_adt_t x, uint8_t v){
        arraytopdown__ent_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__ent_adt(x); x->count--;};
        y->arraytopdown__ent_adt_index = (uint8_t)v;
        return y;}




arraytopdown__fail_t new_arraytopdown__fail(void){
        arraytopdown__fail_t tmp = (arraytopdown__fail_t) safe_malloc(sizeof(struct arraytopdown__fail_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown__fail(arraytopdown__fail_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown__fail_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown__fail((arraytopdown__fail_t)x);
}

arraytopdown__fail_t copy_arraytopdown__fail(arraytopdown__fail_t x){
        arraytopdown__fail_t y = new_arraytopdown__fail();
        y->arraytopdown__ent_adt_index = (uint8_t)x->arraytopdown__ent_adt_index;
        y->dep = (uint64_t)x->dep;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown__fail(arraytopdown__fail_t x, arraytopdown__fail_t y){
        bool_t tmp = true;
        tmp = tmp && x->arraytopdown__ent_adt_index == y->arraytopdown__ent_adt_index;
        tmp = tmp && x->dep == y->dep;
        return tmp;}

bool_t equal_arraytopdown__fail_ptr(pointer_t x, pointer_t y, actual_arraytopdown__fail_t T){
        return equal_arraytopdown__fail((arraytopdown__fail_t)x, (arraytopdown__fail_t)y);
}

actual_arraytopdown__fail_t actual_arraytopdown__fail(){
        actual_arraytopdown__fail_t new = (actual_arraytopdown__fail_t)safe_malloc(sizeof(struct actual_arraytopdown__fail_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown__fail_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown__fail_ptr);
 

 
        return new;
 };

arraytopdown__fail_t update_arraytopdown__fail_arraytopdown__ent_adt_index(arraytopdown__fail_t x, uint8_t v){
        arraytopdown__fail_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__fail(x); x->count--;};
        y->arraytopdown__ent_adt_index = (uint8_t)v;
        return y;}

arraytopdown__fail_t update_arraytopdown__fail_dep(arraytopdown__fail_t x, uint64_t v){
        arraytopdown__fail_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__fail(x); x->count--;};
        y->dep = (uint64_t)v;
        return y;}




arraytopdown__good_t new_arraytopdown__good(void){
        arraytopdown__good_t tmp = (arraytopdown__good_t) safe_malloc(sizeof(struct arraytopdown__good_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown__good(arraytopdown__good_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown__good_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown__good((arraytopdown__good_t)x);
}

arraytopdown__good_t copy_arraytopdown__good(arraytopdown__good_t x){
        arraytopdown__good_t y = new_arraytopdown__good();
        y->arraytopdown__ent_adt_index = (uint8_t)x->arraytopdown__ent_adt_index;
        y->dep = (uint64_t)x->dep;
        y->span = (uint32_t)x->span;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown__good(arraytopdown__good_t x, arraytopdown__good_t y){
        bool_t tmp = true;
        tmp = tmp && x->arraytopdown__ent_adt_index == y->arraytopdown__ent_adt_index;
        tmp = tmp && x->dep == y->dep;
        tmp = tmp && x->span == y->span;
        return tmp;}

bool_t equal_arraytopdown__good_ptr(pointer_t x, pointer_t y, actual_arraytopdown__good_t T){
        return equal_arraytopdown__good((arraytopdown__good_t)x, (arraytopdown__good_t)y);
}

actual_arraytopdown__good_t actual_arraytopdown__good(){
        actual_arraytopdown__good_t new = (actual_arraytopdown__good_t)safe_malloc(sizeof(struct actual_arraytopdown__good_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown__good_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown__good_ptr);
 

 
        return new;
 };

arraytopdown__good_t update_arraytopdown__good_arraytopdown__ent_adt_index(arraytopdown__good_t x, uint8_t v){
        arraytopdown__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__good(x); x->count--;};
        y->arraytopdown__ent_adt_index = (uint8_t)v;
        return y;}

arraytopdown__good_t update_arraytopdown__good_dep(arraytopdown__good_t x, uint64_t v){
        arraytopdown__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__good(x); x->count--;};
        y->dep = (uint64_t)v;
        return y;}

arraytopdown__good_t update_arraytopdown__good_span(arraytopdown__good_t x, uint32_t v){
        arraytopdown__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__good(x); x->count--;};
        y->span = (uint32_t)v;
        return y;}




arraytopdown__push_t new_arraytopdown__push(void){
        arraytopdown__push_t tmp = (arraytopdown__push_t) safe_malloc(sizeof(struct arraytopdown__push_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown__push(arraytopdown__push_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown__push_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown__push((arraytopdown__push_t)x);
}

arraytopdown__push_t copy_arraytopdown__push(arraytopdown__push_t x){
        arraytopdown__push_t y = new_arraytopdown__push();
        y->arraytopdown__ent_adt_index = (uint8_t)x->arraytopdown__ent_adt_index;
        y->pos = (uint32_t)x->pos;
        y->nt = (uint8_t)x->nt;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown__push(arraytopdown__push_t x, arraytopdown__push_t y){
        bool_t tmp = true;
        tmp = tmp && x->arraytopdown__ent_adt_index == y->arraytopdown__ent_adt_index;
        tmp = tmp && x->pos == y->pos;
        tmp = tmp && x->nt == y->nt;
        return tmp;}

bool_t equal_arraytopdown__push_ptr(pointer_t x, pointer_t y, actual_arraytopdown__push_t T){
        return equal_arraytopdown__push((arraytopdown__push_t)x, (arraytopdown__push_t)y);
}

actual_arraytopdown__push_t actual_arraytopdown__push(){
        actual_arraytopdown__push_t new = (actual_arraytopdown__push_t)safe_malloc(sizeof(struct actual_arraytopdown__push_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown__push_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown__push_ptr);
 

 
        return new;
 };

arraytopdown__push_t update_arraytopdown__push_arraytopdown__ent_adt_index(arraytopdown__push_t x, uint8_t v){
        arraytopdown__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__push(x); x->count--;};
        y->arraytopdown__ent_adt_index = (uint8_t)v;
        return y;}

arraytopdown__push_t update_arraytopdown__push_pos(arraytopdown__push_t x, uint32_t v){
        arraytopdown__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__push(x); x->count--;};
        y->pos = (uint32_t)v;
        return y;}

arraytopdown__push_t update_arraytopdown__push_nt(arraytopdown__push_t x, uint8_t v){
        arraytopdown__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__push(x); x->count--;};
        y->nt = (uint8_t)v;
        return y;}



void release_arraytopdown_funtype_4(arraytopdown_funtype_4_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_4_t copy_arraytopdown_funtype_4(arraytopdown_funtype_4_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_4(arraytopdown_funtype_4_t x, arraytopdown_funtype_4_t y){
        return false;}

void release_arraytopdown_funtype_5(arraytopdown_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_5_t copy_arraytopdown_funtype_5(arraytopdown_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_5(arraytopdown_funtype_5_t x, arraytopdown_funtype_5_t y){
        return false;}

void release_arraytopdown_funtype_6(arraytopdown_funtype_6_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_6_t copy_arraytopdown_funtype_6(arraytopdown_funtype_6_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdown_funtype_6(arraytopdown_funtype_6_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdown_funtype_6_hashentry_t data = htbl->data[hashindex];
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

arraytopdown_funtype_6_t dupdate_arraytopdown_funtype_6(arraytopdown_funtype_6_t a, uint64_t i, mpz_ptr_t v){
        arraytopdown_funtype_6_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdown_funtype_6_htbl_t)safe_malloc(sizeof(struct arraytopdown_funtype_6_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdown_funtype_6_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdown_funtype_6_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdown_funtype_6_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdown_funtype_6_hashentry_t * new_data = (arraytopdown_funtype_6_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdown_funtype_6_hashentry_s));
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
                                new_data[new_loc].key = (uint64_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                mpz_set(new_data[new_loc].value, data[j].value);
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint64_hash(i);
        uint32_t hashindex = lookup_arraytopdown_funtype_6(htbl, i, ihash);
        arraytopdown_funtype_6_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

arraytopdown_funtype_6_t update_arraytopdown_funtype_6(arraytopdown_funtype_6_t a, uint64_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_arraytopdown_funtype_6(a, i, v);
            } else {
                arraytopdown_funtype_6_t x = copy_arraytopdown_funtype_6(a);
                a->count--;
                return dupdate_arraytopdown_funtype_6(x, i, v);
            }}

bool_t equal_arraytopdown_funtype_6(arraytopdown_funtype_6_t x, arraytopdown_funtype_6_t y){
        return false;}


arraytopdown_record_7_t new_arraytopdown_record_7(void){
        arraytopdown_record_7_t tmp = (arraytopdown_record_7_t) safe_malloc(sizeof(struct arraytopdown_record_7_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_7(arraytopdown_record_7_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_7_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_7((arraytopdown_record_7_t)x);
}

arraytopdown_record_7_t copy_arraytopdown_record_7(arraytopdown_record_7_t x){
        arraytopdown_record_7_t y = new_arraytopdown_record_7();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_7(arraytopdown_record_7_t x, arraytopdown_record_7_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

bool_t equal_arraytopdown_record_7_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_7_t T){
        return equal_arraytopdown_record_7((arraytopdown_record_7_t)x, (arraytopdown_record_7_t)y);
}

actual_arraytopdown_record_7_t actual_arraytopdown_record_7(){
        actual_arraytopdown_record_7_t new = (actual_arraytopdown_record_7_t)safe_malloc(sizeof(struct actual_arraytopdown_record_7_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_7_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_7_ptr);
 

 
        return new;
 };

arraytopdown_record_7_t update_arraytopdown_record_7_project_1(arraytopdown_record_7_t x, uint64_t v){
        arraytopdown_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_7(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

arraytopdown_record_7_t update_arraytopdown_record_7_project_2(arraytopdown_record_7_t x, uint32_t v){
        arraytopdown_record_7_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_7(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}



void release_arraytopdown_funtype_8(arraytopdown_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_8_t copy_arraytopdown_funtype_8(arraytopdown_funtype_8_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_8(arraytopdown_funtype_8_t x, arraytopdown_funtype_8_t y){
        return false;}


arraytopdown_record_9_t new_arraytopdown_record_9(void){
        arraytopdown_record_9_t tmp = (arraytopdown_record_9_t) safe_malloc(sizeof(struct arraytopdown_record_9_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_9(arraytopdown_record_9_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_9_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_9((arraytopdown_record_9_t)x);
}

arraytopdown_record_9_t copy_arraytopdown_record_9(arraytopdown_record_9_t x){
        arraytopdown_record_9_t y = new_arraytopdown_record_9();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_9(arraytopdown_record_9_t x, arraytopdown_record_9_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

bool_t equal_arraytopdown_record_9_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_9_t T){
        return equal_arraytopdown_record_9((arraytopdown_record_9_t)x, (arraytopdown_record_9_t)y);
}

actual_arraytopdown_record_9_t actual_arraytopdown_record_9(){
        actual_arraytopdown_record_9_t new = (actual_arraytopdown_record_9_t)safe_malloc(sizeof(struct actual_arraytopdown_record_9_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_9_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_9_ptr);
 

 
        return new;
 };

arraytopdown_record_9_t update_arraytopdown_record_9_project_1(arraytopdown_record_9_t x, uint32_t v){
        arraytopdown_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_9(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

arraytopdown_record_9_t update_arraytopdown_record_9_project_2(arraytopdown_record_9_t x, uint8_t v){
        arraytopdown_record_9_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_9(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}



void release_arraytopdown_funtype_10(arraytopdown_funtype_10_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_10_t copy_arraytopdown_funtype_10(arraytopdown_funtype_10_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_10(arraytopdown_funtype_10_t x, arraytopdown_funtype_10_t y){
        return false;}


mpz_ptr_t f_arraytopdown_closure_11(struct arraytopdown_closure_11_s * closure, arraytopdown__ent_adt_t bvar){
        mpz_ptr_t result = h_arraytopdown_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

mpz_ptr_t m_arraytopdown_closure_11(struct arraytopdown_closure_11_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_11(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern mpz_ptr_t h_arraytopdown_closure_11(arraytopdown__ent_adt_t ivar_16, arraytopdown_funtype_8_t ivar_10, arraytopdown_funtype_10_t ivar_12, mpz_ptr_t ivar_9, mpz_ptr_t ivar_8, arraytopdown_funtype_6_t ivar_6){
        mpz_ptr_t result;
        bool_t ivar_45;
        ivar_16->count++;
        ivar_45 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_16);
        if (ivar_45){ 
             uint64_t ivar_36;
             ivar_36 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_16);
             mpz_mk_set(result, ivar_6->ftbl->fptr(ivar_6, ivar_36));
} else {
        
             bool_t ivar_49;
             ivar_16->count++;
             ivar_49 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_16);
             if (ivar_49){  
           release_arraytopdown__ent_adt(ivar_16);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_8);
} else {
             
           bool_t ivar_53;
           ivar_16->count++;
           ivar_53 = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_16);
           if (ivar_53){   
           release_arraytopdown__ent_adt(ivar_16);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_9);
} else {
           
           bool_t ivar_72;
           ivar_16->count++;
           ivar_72 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_16);
           if (ivar_72){    
            uint64_t ivar_57;
            ivar_16->count++;
            ivar_57 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_16);
            uint32_t ivar_58;
            ivar_58 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_16);
            mpz_mk_set(result, ivar_10->ftbl->mptr(ivar_10, ivar_57, ivar_58));
} else {
           
            uint32_t ivar_76;
            ivar_16->count++;
            ivar_76 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_16);
            uint8_t ivar_77;
            ivar_77 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_16);
            mpz_mk_set(result, ivar_12->ftbl->mptr(ivar_12, ivar_76, ivar_77));
};
};
};
};

        return result;
}

arraytopdown_closure_11_t new_arraytopdown_closure_11(void){
        static struct arraytopdown_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(arraytopdown_funtype_5_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_11, .mptr = (mpz_ptr_t (*)(arraytopdown_funtype_5_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_11, .rptr =  (void (*)(arraytopdown_funtype_5_t))&release_arraytopdown_closure_11, .cptr = (arraytopdown_funtype_5_t (*)(arraytopdown_funtype_5_t))&copy_arraytopdown_closure_11};
        arraytopdown_closure_11_t tmp = (arraytopdown_closure_11_t) safe_malloc(sizeof(struct arraytopdown_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_3);
        mpz_init(tmp->fvar_4);
        return tmp;}

void release_arraytopdown_closure_11(arraytopdown_funtype_5_t closure){
        arraytopdown_closure_11_t x = (arraytopdown_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_8(x->fvar_1);
         release_arraytopdown_funtype_10(x->fvar_2);
         release_arraytopdown_funtype_6(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_11_t copy_arraytopdown_closure_11(arraytopdown_closure_11_t x){
        arraytopdown_closure_11_t y = new_arraytopdown_closure_11();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        mpz_set(y->fvar_3, x->fvar_3);
        mpz_set(y->fvar_4, x->fvar_4);
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_5_htbl_t new_htbl = (arraytopdown_funtype_5_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_5_hashentry_t * new_data = (arraytopdown_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown_record_12_t new_arraytopdown_record_12(void){
        arraytopdown_record_12_t tmp = (arraytopdown_record_12_t) safe_malloc(sizeof(struct arraytopdown_record_12_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_12(arraytopdown_record_12_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown__ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_12_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_12((arraytopdown_record_12_t)x);
}

arraytopdown_record_12_t copy_arraytopdown_record_12(arraytopdown_record_12_t x){
        arraytopdown_record_12_t y = new_arraytopdown_record_12();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_12(arraytopdown_record_12_t x, arraytopdown_record_12_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_arraytopdown__ent_adt(x->project_2, y->project_2);
        return tmp;}

bool_t equal_arraytopdown_record_12_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_12_t T){
        return equal_arraytopdown_record_12((arraytopdown_record_12_t)x, (arraytopdown_record_12_t)y);
}

actual_arraytopdown_record_12_t actual_arraytopdown_record_12(){
        actual_arraytopdown_record_12_t new = (actual_arraytopdown_record_12_t)safe_malloc(sizeof(struct actual_arraytopdown_record_12_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_12_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_12_ptr);
 

 
        return new;
 };

arraytopdown_record_12_t update_arraytopdown_record_12_project_1(arraytopdown_record_12_t x, uint64_t v){
        arraytopdown_record_12_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_12(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

arraytopdown_record_12_t update_arraytopdown_record_12_project_2(arraytopdown_record_12_t x, arraytopdown__ent_adt_t v){
        arraytopdown_record_12_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_arraytopdown__ent_adt(x->project_2);};}
        else {y = copy_arraytopdown_record_12(x); x->count--; y->project_2->count--;};
        y->project_2 = (arraytopdown__ent_adt_t)v;
        return y;}



void release_arraytopdown_funtype_13(arraytopdown_funtype_13_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_13_t copy_arraytopdown_funtype_13(arraytopdown_funtype_13_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_13(arraytopdown_funtype_13_t x, arraytopdown_funtype_13_t y){
        return false;}


arraytopdown_record_14_t new_arraytopdown_record_14(void){
        arraytopdown_record_14_t tmp = (arraytopdown_record_14_t) safe_malloc(sizeof(struct arraytopdown_record_14_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_14(arraytopdown_record_14_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown__ent_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_14_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_14((arraytopdown_record_14_t)x);
}

arraytopdown_record_14_t copy_arraytopdown_record_14(arraytopdown_record_14_t x){
        arraytopdown_record_14_t y = new_arraytopdown_record_14();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_14(arraytopdown_record_14_t x, arraytopdown_record_14_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_arraytopdown__ent_adt(x->project_3, y->project_3);
        return tmp;}

bool_t equal_arraytopdown_record_14_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_14_t T){
        return equal_arraytopdown_record_14((arraytopdown_record_14_t)x, (arraytopdown_record_14_t)y);
}

actual_arraytopdown_record_14_t actual_arraytopdown_record_14(){
        actual_arraytopdown_record_14_t new = (actual_arraytopdown_record_14_t)safe_malloc(sizeof(struct actual_arraytopdown_record_14_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_14_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_14_ptr);
 

 
        return new;
 };

arraytopdown_record_14_t update_arraytopdown_record_14_project_1(arraytopdown_record_14_t x, uint64_t v){
        arraytopdown_record_14_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_14(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

arraytopdown_record_14_t update_arraytopdown_record_14_project_2(arraytopdown_record_14_t x, uint32_t v){
        arraytopdown_record_14_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_14(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

arraytopdown_record_14_t update_arraytopdown_record_14_project_3(arraytopdown_record_14_t x, arraytopdown__ent_adt_t v){
        arraytopdown_record_14_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_arraytopdown__ent_adt(x->project_3);};}
        else {y = copy_arraytopdown_record_14(x); x->count--; y->project_3->count--;};
        y->project_3 = (arraytopdown__ent_adt_t)v;
        return y;}



void release_arraytopdown_funtype_15(arraytopdown_funtype_15_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_15_t copy_arraytopdown_funtype_15(arraytopdown_funtype_15_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_15(arraytopdown_funtype_15_t x, arraytopdown_funtype_15_t y){
        return false;}


arraytopdown_record_16_t new_arraytopdown_record_16(void){
        arraytopdown_record_16_t tmp = (arraytopdown_record_16_t) safe_malloc(sizeof(struct arraytopdown_record_16_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_16(arraytopdown_record_16_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown__ent_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_16_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_16((arraytopdown_record_16_t)x);
}

arraytopdown_record_16_t copy_arraytopdown_record_16(arraytopdown_record_16_t x){
        arraytopdown_record_16_t y = new_arraytopdown_record_16();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_16(arraytopdown_record_16_t x, arraytopdown_record_16_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_arraytopdown__ent_adt(x->project_3, y->project_3);
        return tmp;}

bool_t equal_arraytopdown_record_16_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_16_t T){
        return equal_arraytopdown_record_16((arraytopdown_record_16_t)x, (arraytopdown_record_16_t)y);
}

actual_arraytopdown_record_16_t actual_arraytopdown_record_16(){
        actual_arraytopdown_record_16_t new = (actual_arraytopdown_record_16_t)safe_malloc(sizeof(struct actual_arraytopdown_record_16_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_16_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_16_ptr);
 

 
        return new;
 };

arraytopdown_record_16_t update_arraytopdown_record_16_project_1(arraytopdown_record_16_t x, uint32_t v){
        arraytopdown_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_16(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

arraytopdown_record_16_t update_arraytopdown_record_16_project_2(arraytopdown_record_16_t x, uint8_t v){
        arraytopdown_record_16_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_16(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

arraytopdown_record_16_t update_arraytopdown_record_16_project_3(arraytopdown_record_16_t x, arraytopdown__ent_adt_t v){
        arraytopdown_record_16_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_arraytopdown__ent_adt(x->project_3);};}
        else {y = copy_arraytopdown_record_16(x); x->count--; y->project_3->count--;};
        y->project_3 = (arraytopdown__ent_adt_t)v;
        return y;}



void release_arraytopdown_funtype_17(arraytopdown_funtype_17_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_17_t copy_arraytopdown_funtype_17(arraytopdown_funtype_17_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_17(arraytopdown_funtype_17_t x, arraytopdown_funtype_17_t y){
        return false;}


mpz_ptr_t f_arraytopdown_closure_18(struct arraytopdown_closure_18_s * closure, arraytopdown__ent_adt_t bvar){
        mpz_ptr_t result = h_arraytopdown_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

mpz_ptr_t m_arraytopdown_closure_18(struct arraytopdown_closure_18_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_18(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern mpz_ptr_t h_arraytopdown_closure_18(arraytopdown__ent_adt_t ivar_20, arraytopdown_funtype_15_t ivar_14, arraytopdown_funtype_17_t ivar_16, arraytopdown_funtype_5_t ivar_12, arraytopdown_funtype_5_t ivar_10, arraytopdown_funtype_13_t ivar_8){
        mpz_ptr_t result;
        bool_t ivar_53;
        ivar_20->count++;
        ivar_53 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_20);
        if (ivar_53){ 
             uint64_t ivar_42;
             ivar_20->count++;
             ivar_42 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_20);
             mpz_mk_set(result, ivar_8->ftbl->mptr(ivar_8, ivar_42, ivar_20));
} else {
        
             bool_t ivar_62;
             ivar_20->count++;
             ivar_62 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_20);
             if (ivar_62){  
           mpz_mk_set(result, ivar_10->ftbl->fptr(ivar_10, ivar_20));
} else {
             
           bool_t ivar_71;
           ivar_20->count++;
           ivar_71 = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_20);
           if (ivar_71){   
           mpz_mk_set(result, ivar_12->ftbl->fptr(ivar_12, ivar_20));
} else {
           
           bool_t ivar_92;
           ivar_20->count++;
           ivar_92 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_20);
           if (ivar_92){    
            uint64_t ivar_75;
            ivar_20->count++;
            ivar_75 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_20);
            uint32_t ivar_76;
            ivar_20->count++;
            ivar_76 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_20);
            mpz_mk_set(result, ivar_14->ftbl->mptr(ivar_14, ivar_75, ivar_76, ivar_20));
} else {
           
            uint32_t ivar_96;
            ivar_20->count++;
            ivar_96 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_20);
            uint8_t ivar_97;
            ivar_20->count++;
            ivar_97 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_20);
            mpz_mk_set(result, ivar_16->ftbl->mptr(ivar_16, ivar_96, ivar_97, ivar_20));
};
};
};
};

        return result;
}

arraytopdown_closure_18_t new_arraytopdown_closure_18(void){
        static struct arraytopdown_funtype_5_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(arraytopdown_funtype_5_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_18, .mptr = (mpz_ptr_t (*)(arraytopdown_funtype_5_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_18, .rptr =  (void (*)(arraytopdown_funtype_5_t))&release_arraytopdown_closure_18, .cptr = (arraytopdown_funtype_5_t (*)(arraytopdown_funtype_5_t))&copy_arraytopdown_closure_18};
        arraytopdown_closure_18_t tmp = (arraytopdown_closure_18_t) safe_malloc(sizeof(struct arraytopdown_closure_18_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_18(arraytopdown_funtype_5_t closure){
        arraytopdown_closure_18_t x = (arraytopdown_closure_18_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_15(x->fvar_1);
         release_arraytopdown_funtype_17(x->fvar_2);
         release_arraytopdown_funtype_5(x->fvar_3);
         release_arraytopdown_funtype_5(x->fvar_4);
         release_arraytopdown_funtype_13(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_18_t copy_arraytopdown_closure_18(arraytopdown_closure_18_t x){
        arraytopdown_closure_18_t y = new_arraytopdown_closure_18();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_5_htbl_t new_htbl = (arraytopdown_funtype_5_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_5_hashentry_t * new_data = (arraytopdown_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_19(arraytopdown_funtype_19_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_19_t copy_arraytopdown_funtype_19(arraytopdown_funtype_19_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_19(arraytopdown_funtype_19_t x, arraytopdown_funtype_19_t y){
        return false;}

void release_arraytopdown_funtype_20(arraytopdown_funtype_20_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_20_t copy_arraytopdown_funtype_20(arraytopdown_funtype_20_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdown_funtype_20(arraytopdown_funtype_20_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdown_funtype_20_hashentry_t data = htbl->data[hashindex];
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

arraytopdown_funtype_20_t dupdate_arraytopdown_funtype_20(arraytopdown_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v){
        arraytopdown_funtype_20_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdown_funtype_20_htbl_t)safe_malloc(sizeof(struct arraytopdown_funtype_20_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdown_funtype_20_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdown_funtype_20_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdown_funtype_20_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdown_funtype_20_hashentry_t * new_data = (arraytopdown_funtype_20_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdown_funtype_20_hashentry_s));
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
                                new_data[new_loc].key = (uint64_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (ordstruct_adt__ordstruct_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint64_hash(i);
        uint32_t hashindex = lookup_arraytopdown_funtype_20(htbl, i, ihash);
        arraytopdown_funtype_20_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v; htbl->num_entries++;}
            else {ordstruct_adt__ordstruct_adt_t tempvalue;tempvalue = (ordstruct_adt__ordstruct_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ordstruct_adt__ordstruct_adt(tempvalue);};
        return a;

}

arraytopdown_funtype_20_t update_arraytopdown_funtype_20(arraytopdown_funtype_20_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v){
        if (a->count == 1){
                return dupdate_arraytopdown_funtype_20(a, i, v);
            } else {
                arraytopdown_funtype_20_t x = copy_arraytopdown_funtype_20(a);
                a->count--;
                return dupdate_arraytopdown_funtype_20(x, i, v);
            }}

bool_t equal_arraytopdown_funtype_20(arraytopdown_funtype_20_t x, arraytopdown_funtype_20_t y){
        return false;}

void release_arraytopdown_funtype_21(arraytopdown_funtype_21_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_21_t copy_arraytopdown_funtype_21(arraytopdown_funtype_21_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_21(arraytopdown_funtype_21_t x, arraytopdown_funtype_21_t y){
        return false;}

void release_arraytopdown_funtype_22(arraytopdown_funtype_22_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_22_t copy_arraytopdown_funtype_22(arraytopdown_funtype_22_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_22(arraytopdown_funtype_22_t x, arraytopdown_funtype_22_t y){
        return false;}


ordstruct_adt__ordstruct_adt_t f_arraytopdown_closure_23(struct arraytopdown_closure_23_s * closure, arraytopdown__ent_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_arraytopdown_closure_23(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_arraytopdown_closure_23(struct arraytopdown_closure_23_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_23(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ordstruct_adt__ordstruct_adt_t h_arraytopdown_closure_23(arraytopdown__ent_adt_t ivar_16, arraytopdown_funtype_21_t ivar_10, arraytopdown_funtype_22_t ivar_12, ordstruct_adt__ordstruct_adt_t ivar_9, ordstruct_adt__ordstruct_adt_t ivar_8, arraytopdown_funtype_20_t ivar_6){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_45;
        ivar_16->count++;
        ivar_45 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_16);
        if (ivar_45){ 
             uint64_t ivar_36;
             ivar_36 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_16);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_6->ftbl->fptr(ivar_6, ivar_36);
} else {
        
             bool_t ivar_49;
             ivar_16->count++;
             ivar_49 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_16);
             if (ivar_49){  
           release_arraytopdown__ent_adt(ivar_16);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_8;
           if (result != NULL) result->count++;
} else {
             
           bool_t ivar_53;
           ivar_16->count++;
           ivar_53 = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_16);
           if (ivar_53){   
           release_arraytopdown__ent_adt(ivar_16);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_9;
           if (result != NULL) result->count++;
} else {
           
           bool_t ivar_72;
           ivar_16->count++;
           ivar_72 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_16);
           if (ivar_72){    
            uint64_t ivar_57;
            ivar_16->count++;
            ivar_57 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_16);
            uint32_t ivar_58;
            ivar_58 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_16);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_10->ftbl->mptr(ivar_10, ivar_57, ivar_58);
} else {
           
            uint32_t ivar_76;
            ivar_16->count++;
            ivar_76 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_16);
            uint8_t ivar_77;
            ivar_77 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_16);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_12->ftbl->mptr(ivar_12, ivar_76, ivar_77);
};
};
};
};

        return result;
}

arraytopdown_closure_23_t new_arraytopdown_closure_23(void){
        static struct arraytopdown_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(arraytopdown_funtype_19_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_23, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(arraytopdown_funtype_19_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_23, .rptr =  (void (*)(arraytopdown_funtype_19_t))&release_arraytopdown_closure_23, .cptr = (arraytopdown_funtype_19_t (*)(arraytopdown_funtype_19_t))&copy_arraytopdown_closure_23};
        arraytopdown_closure_23_t tmp = (arraytopdown_closure_23_t) safe_malloc(sizeof(struct arraytopdown_closure_23_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_23(arraytopdown_funtype_19_t closure){
        arraytopdown_closure_23_t x = (arraytopdown_closure_23_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_21(x->fvar_1);
         release_arraytopdown_funtype_22(x->fvar_2);
         release_ordstruct_adt__ordstruct_adt(x->fvar_3);
         release_ordstruct_adt__ordstruct_adt(x->fvar_4);
         release_arraytopdown_funtype_20(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_23_t copy_arraytopdown_closure_23(arraytopdown_closure_23_t x){
        arraytopdown_closure_23_t y = new_arraytopdown_closure_23();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_19_htbl_t new_htbl = (arraytopdown_funtype_19_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_19_hashentry_t * new_data = (arraytopdown_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_24(arraytopdown_funtype_24_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_24_t copy_arraytopdown_funtype_24(arraytopdown_funtype_24_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_24(arraytopdown_funtype_24_t x, arraytopdown_funtype_24_t y){
        return false;}

void release_arraytopdown_funtype_25(arraytopdown_funtype_25_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_25_t copy_arraytopdown_funtype_25(arraytopdown_funtype_25_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_25(arraytopdown_funtype_25_t x, arraytopdown_funtype_25_t y){
        return false;}

void release_arraytopdown_funtype_26(arraytopdown_funtype_26_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_26_t copy_arraytopdown_funtype_26(arraytopdown_funtype_26_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_26(arraytopdown_funtype_26_t x, arraytopdown_funtype_26_t y){
        return false;}


ordstruct_adt__ordstruct_adt_t f_arraytopdown_closure_27(struct arraytopdown_closure_27_s * closure, arraytopdown__ent_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_arraytopdown_closure_27(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_arraytopdown_closure_27(struct arraytopdown_closure_27_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_27(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ordstruct_adt__ordstruct_adt_t h_arraytopdown_closure_27(arraytopdown__ent_adt_t ivar_20, arraytopdown_funtype_25_t ivar_14, arraytopdown_funtype_26_t ivar_16, arraytopdown_funtype_19_t ivar_12, arraytopdown_funtype_19_t ivar_10, arraytopdown_funtype_24_t ivar_8){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_53;
        ivar_20->count++;
        ivar_53 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_20);
        if (ivar_53){ 
             uint64_t ivar_42;
             ivar_20->count++;
             ivar_42 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_20);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_8->ftbl->mptr(ivar_8, ivar_42, ivar_20);
} else {
        
             bool_t ivar_62;
             ivar_20->count++;
             ivar_62 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_20);
             if (ivar_62){  
           result = (ordstruct_adt__ordstruct_adt_t)ivar_10->ftbl->fptr(ivar_10, ivar_20);
} else {
             
           bool_t ivar_71;
           ivar_20->count++;
           ivar_71 = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_20);
           if (ivar_71){   
           result = (ordstruct_adt__ordstruct_adt_t)ivar_12->ftbl->fptr(ivar_12, ivar_20);
} else {
           
           bool_t ivar_92;
           ivar_20->count++;
           ivar_92 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_20);
           if (ivar_92){    
            uint64_t ivar_75;
            ivar_20->count++;
            ivar_75 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_20);
            uint32_t ivar_76;
            ivar_20->count++;
            ivar_76 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_20);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_14->ftbl->mptr(ivar_14, ivar_75, ivar_76, ivar_20);
} else {
           
            uint32_t ivar_96;
            ivar_20->count++;
            ivar_96 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_20);
            uint8_t ivar_97;
            ivar_20->count++;
            ivar_97 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_20);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_16->ftbl->mptr(ivar_16, ivar_96, ivar_97, ivar_20);
};
};
};
};

        return result;
}

arraytopdown_closure_27_t new_arraytopdown_closure_27(void){
        static struct arraytopdown_funtype_19_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(arraytopdown_funtype_19_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_27, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(arraytopdown_funtype_19_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_27, .rptr =  (void (*)(arraytopdown_funtype_19_t))&release_arraytopdown_closure_27, .cptr = (arraytopdown_funtype_19_t (*)(arraytopdown_funtype_19_t))&copy_arraytopdown_closure_27};
        arraytopdown_closure_27_t tmp = (arraytopdown_closure_27_t) safe_malloc(sizeof(struct arraytopdown_closure_27_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_27(arraytopdown_funtype_19_t closure){
        arraytopdown_closure_27_t x = (arraytopdown_closure_27_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_25(x->fvar_1);
         release_arraytopdown_funtype_26(x->fvar_2);
         release_arraytopdown_funtype_19(x->fvar_3);
         release_arraytopdown_funtype_19(x->fvar_4);
         release_arraytopdown_funtype_24(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_27_t copy_arraytopdown_closure_27(arraytopdown_closure_27_t x){
        arraytopdown_closure_27_t y = new_arraytopdown_closure_27();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_19_htbl_t new_htbl = (arraytopdown_funtype_19_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_19_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_19_hashentry_t * new_data = (arraytopdown_funtype_19_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_19_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_19_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown__peg_adt_t new_arraytopdown__peg_adt(void){
        arraytopdown__peg_adt_t tmp = (arraytopdown__peg_adt_t) safe_malloc(sizeof(struct arraytopdown__peg_adt_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown__peg_adt(arraytopdown__peg_adt_t x){
switch (x->arraytopdown__peg_adt_index) {
case 2:  release_arraytopdown__any((arraytopdown__any_t) x); break;
case 3:  release_arraytopdown__terminal((arraytopdown__terminal_t) x); break;
case 4:  release_arraytopdown__concat((arraytopdown__concat_t) x); break;
case 5:  release_arraytopdown__choice((arraytopdown__choice_t) x); break;
case 6:  release_arraytopdown__check((arraytopdown__check_t) x); break;
case 7:  release_arraytopdown__neg((arraytopdown__neg_t) x); break;
}}

void release_arraytopdown__peg_adt_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown__peg_adt((arraytopdown__peg_adt_t)x);
}

arraytopdown__peg_adt_t copy_arraytopdown__peg_adt(arraytopdown__peg_adt_t x){
        arraytopdown__peg_adt_t y = new_arraytopdown__peg_adt();
        y->arraytopdown__peg_adt_index = (uint8_t)x->arraytopdown__peg_adt_index;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown__peg_adt(arraytopdown__peg_adt_t x, arraytopdown__peg_adt_t y){
        bool_t tmp = x->arraytopdown__peg_adt_index == y->arraytopdown__peg_adt_index;
        switch  (x->arraytopdown__peg_adt_index) {
                case 2: tmp = tmp && equal_arraytopdown__any((arraytopdown__any_t) x, (arraytopdown__any_t) y); break;
                case 3: tmp = tmp && equal_arraytopdown__terminal((arraytopdown__terminal_t) x, (arraytopdown__terminal_t) y); break;
                case 4: tmp = tmp && equal_arraytopdown__concat((arraytopdown__concat_t) x, (arraytopdown__concat_t) y); break;
                case 5: tmp = tmp && equal_arraytopdown__choice((arraytopdown__choice_t) x, (arraytopdown__choice_t) y); break;
                case 6: tmp = tmp && equal_arraytopdown__check((arraytopdown__check_t) x, (arraytopdown__check_t) y); break;
                case 7: tmp = tmp && equal_arraytopdown__neg((arraytopdown__neg_t) x, (arraytopdown__neg_t) y); break;
        }
        return tmp;
}

bool_t equal_arraytopdown__peg_adt_ptr(pointer_t x, pointer_t y, actual_arraytopdown__peg_adt_t T){
        return equal_arraytopdown__peg_adt((arraytopdown__peg_adt_t)x, (arraytopdown__peg_adt_t)y);
}

actual_arraytopdown__peg_adt_t actual_arraytopdown__peg_adt(){
        actual_arraytopdown__peg_adt_t new = (actual_arraytopdown__peg_adt_t)safe_malloc(sizeof(struct actual_arraytopdown__peg_adt_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown__peg_adt_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown__peg_adt_ptr);
 

 
        return new;
 };

arraytopdown__peg_adt_t update_arraytopdown__peg_adt_arraytopdown__peg_adt_index(arraytopdown__peg_adt_t x, uint8_t v){
        arraytopdown__peg_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__peg_adt(x); x->count--;};
        y->arraytopdown__peg_adt_index = (uint8_t)v;
        return y;}



void release_arraytopdown_funtype_29(arraytopdown_funtype_29_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_29_t copy_arraytopdown_funtype_29(arraytopdown_funtype_29_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdown_funtype_29(arraytopdown_funtype_29_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdown_funtype_29_hashentry_t data = htbl->data[hashindex];
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

arraytopdown_funtype_29_t dupdate_arraytopdown_funtype_29(arraytopdown_funtype_29_t a, uint8_t i, bool_t v){
        arraytopdown_funtype_29_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdown_funtype_29_htbl_t)safe_malloc(sizeof(struct arraytopdown_funtype_29_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdown_funtype_29_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdown_funtype_29_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdown_funtype_29_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdown_funtype_29_hashentry_t * new_data = (arraytopdown_funtype_29_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdown_funtype_29_hashentry_s));
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
        uint32_t hashindex = lookup_arraytopdown_funtype_29(htbl, i, ihash);
        arraytopdown_funtype_29_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

arraytopdown_funtype_29_t update_arraytopdown_funtype_29(arraytopdown_funtype_29_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_arraytopdown_funtype_29(a, i, v);
            } else {
                arraytopdown_funtype_29_t x = copy_arraytopdown_funtype_29(a);
                a->count--;
                return dupdate_arraytopdown_funtype_29(x, i, v);
            }}

bool_t equal_arraytopdown_funtype_29(arraytopdown_funtype_29_t x, arraytopdown_funtype_29_t y){
        return false;}


arraytopdown__any_t new_arraytopdown__any(void){
        arraytopdown__any_t tmp = (arraytopdown__any_t) safe_malloc(sizeof(struct arraytopdown__any_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown__any(arraytopdown__any_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_29(x->p);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown__any_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown__any((arraytopdown__any_t)x);
}

arraytopdown__any_t copy_arraytopdown__any(arraytopdown__any_t x){
        arraytopdown__any_t y = new_arraytopdown__any();
        y->arraytopdown__peg_adt_index = (uint8_t)x->arraytopdown__peg_adt_index;
        y->p = x->p;
        if (y->p != NULL){y->p->count++;};
        y->count = 1;
        return y;}

bool_t equal_arraytopdown__any(arraytopdown__any_t x, arraytopdown__any_t y){
        bool_t tmp = true;
        tmp = tmp && x->arraytopdown__peg_adt_index == y->arraytopdown__peg_adt_index;
        tmp = tmp && equal_arraytopdown_funtype_29(x->p, y->p);
        return tmp;}

bool_t equal_arraytopdown__any_ptr(pointer_t x, pointer_t y, actual_arraytopdown__any_t T){
        return equal_arraytopdown__any((arraytopdown__any_t)x, (arraytopdown__any_t)y);
}

actual_arraytopdown__any_t actual_arraytopdown__any(){
        actual_arraytopdown__any_t new = (actual_arraytopdown__any_t)safe_malloc(sizeof(struct actual_arraytopdown__any_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown__any_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown__any_ptr);
 

 
        return new;
 };

arraytopdown__any_t update_arraytopdown__any_arraytopdown__peg_adt_index(arraytopdown__any_t x, uint8_t v){
        arraytopdown__any_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__any(x); x->count--;};
        y->arraytopdown__peg_adt_index = (uint8_t)v;
        return y;}

arraytopdown__any_t update_arraytopdown__any_p(arraytopdown__any_t x, arraytopdown_funtype_29_t v){
        arraytopdown__any_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->p != NULL){release_arraytopdown_funtype_29(x->p);};}
        else {y = copy_arraytopdown__any(x); x->count--; y->p->count--;};
        y->p = (arraytopdown_funtype_29_t)v;
        return y;}




arraytopdown__terminal_t new_arraytopdown__terminal(void){
        arraytopdown__terminal_t tmp = (arraytopdown__terminal_t) safe_malloc(sizeof(struct arraytopdown__terminal_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown__terminal(arraytopdown__terminal_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown__terminal_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown__terminal((arraytopdown__terminal_t)x);
}

arraytopdown__terminal_t copy_arraytopdown__terminal(arraytopdown__terminal_t x){
        arraytopdown__terminal_t y = new_arraytopdown__terminal();
        y->arraytopdown__peg_adt_index = (uint8_t)x->arraytopdown__peg_adt_index;
        y->a = (uint8_t)x->a;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown__terminal(arraytopdown__terminal_t x, arraytopdown__terminal_t y){
        bool_t tmp = true;
        tmp = tmp && x->arraytopdown__peg_adt_index == y->arraytopdown__peg_adt_index;
        tmp = tmp && x->a == y->a;
        return tmp;}

bool_t equal_arraytopdown__terminal_ptr(pointer_t x, pointer_t y, actual_arraytopdown__terminal_t T){
        return equal_arraytopdown__terminal((arraytopdown__terminal_t)x, (arraytopdown__terminal_t)y);
}

actual_arraytopdown__terminal_t actual_arraytopdown__terminal(){
        actual_arraytopdown__terminal_t new = (actual_arraytopdown__terminal_t)safe_malloc(sizeof(struct actual_arraytopdown__terminal_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown__terminal_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown__terminal_ptr);
 

 
        return new;
 };

arraytopdown__terminal_t update_arraytopdown__terminal_arraytopdown__peg_adt_index(arraytopdown__terminal_t x, uint8_t v){
        arraytopdown__terminal_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__terminal(x); x->count--;};
        y->arraytopdown__peg_adt_index = (uint8_t)v;
        return y;}

arraytopdown__terminal_t update_arraytopdown__terminal_a(arraytopdown__terminal_t x, uint8_t v){
        arraytopdown__terminal_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__terminal(x); x->count--;};
        y->a = (uint8_t)v;
        return y;}




arraytopdown__concat_t new_arraytopdown__concat(void){
        arraytopdown__concat_t tmp = (arraytopdown__concat_t) safe_malloc(sizeof(struct arraytopdown__concat_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown__concat(arraytopdown__concat_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown__concat_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown__concat((arraytopdown__concat_t)x);
}

arraytopdown__concat_t copy_arraytopdown__concat(arraytopdown__concat_t x){
        arraytopdown__concat_t y = new_arraytopdown__concat();
        y->arraytopdown__peg_adt_index = (uint8_t)x->arraytopdown__peg_adt_index;
        y->e1 = (uint8_t)x->e1;
        y->e2 = (uint8_t)x->e2;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown__concat(arraytopdown__concat_t x, arraytopdown__concat_t y){
        bool_t tmp = true;
        tmp = tmp && x->arraytopdown__peg_adt_index == y->arraytopdown__peg_adt_index;
        tmp = tmp && x->e1 == y->e1;
        tmp = tmp && x->e2 == y->e2;
        return tmp;}

bool_t equal_arraytopdown__concat_ptr(pointer_t x, pointer_t y, actual_arraytopdown__concat_t T){
        return equal_arraytopdown__concat((arraytopdown__concat_t)x, (arraytopdown__concat_t)y);
}

actual_arraytopdown__concat_t actual_arraytopdown__concat(){
        actual_arraytopdown__concat_t new = (actual_arraytopdown__concat_t)safe_malloc(sizeof(struct actual_arraytopdown__concat_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown__concat_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown__concat_ptr);
 

 
        return new;
 };

arraytopdown__concat_t update_arraytopdown__concat_arraytopdown__peg_adt_index(arraytopdown__concat_t x, uint8_t v){
        arraytopdown__concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__concat(x); x->count--;};
        y->arraytopdown__peg_adt_index = (uint8_t)v;
        return y;}

arraytopdown__concat_t update_arraytopdown__concat_e1(arraytopdown__concat_t x, uint8_t v){
        arraytopdown__concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__concat(x); x->count--;};
        y->e1 = (uint8_t)v;
        return y;}

arraytopdown__concat_t update_arraytopdown__concat_e2(arraytopdown__concat_t x, uint8_t v){
        arraytopdown__concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__concat(x); x->count--;};
        y->e2 = (uint8_t)v;
        return y;}




arraytopdown__choice_t new_arraytopdown__choice(void){
        arraytopdown__choice_t tmp = (arraytopdown__choice_t) safe_malloc(sizeof(struct arraytopdown__choice_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown__choice(arraytopdown__choice_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown__choice_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown__choice((arraytopdown__choice_t)x);
}

arraytopdown__choice_t copy_arraytopdown__choice(arraytopdown__choice_t x){
        arraytopdown__choice_t y = new_arraytopdown__choice();
        y->arraytopdown__peg_adt_index = (uint8_t)x->arraytopdown__peg_adt_index;
        y->e1 = (uint8_t)x->e1;
        y->e2 = (uint8_t)x->e2;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown__choice(arraytopdown__choice_t x, arraytopdown__choice_t y){
        bool_t tmp = true;
        tmp = tmp && x->arraytopdown__peg_adt_index == y->arraytopdown__peg_adt_index;
        tmp = tmp && x->e1 == y->e1;
        tmp = tmp && x->e2 == y->e2;
        return tmp;}

bool_t equal_arraytopdown__choice_ptr(pointer_t x, pointer_t y, actual_arraytopdown__choice_t T){
        return equal_arraytopdown__choice((arraytopdown__choice_t)x, (arraytopdown__choice_t)y);
}

actual_arraytopdown__choice_t actual_arraytopdown__choice(){
        actual_arraytopdown__choice_t new = (actual_arraytopdown__choice_t)safe_malloc(sizeof(struct actual_arraytopdown__choice_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown__choice_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown__choice_ptr);
 

 
        return new;
 };

arraytopdown__choice_t update_arraytopdown__choice_arraytopdown__peg_adt_index(arraytopdown__choice_t x, uint8_t v){
        arraytopdown__choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__choice(x); x->count--;};
        y->arraytopdown__peg_adt_index = (uint8_t)v;
        return y;}

arraytopdown__choice_t update_arraytopdown__choice_e1(arraytopdown__choice_t x, uint8_t v){
        arraytopdown__choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__choice(x); x->count--;};
        y->e1 = (uint8_t)v;
        return y;}

arraytopdown__choice_t update_arraytopdown__choice_e2(arraytopdown__choice_t x, uint8_t v){
        arraytopdown__choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__choice(x); x->count--;};
        y->e2 = (uint8_t)v;
        return y;}




arraytopdown__check_t new_arraytopdown__check(void){
        arraytopdown__check_t tmp = (arraytopdown__check_t) safe_malloc(sizeof(struct arraytopdown__check_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown__check(arraytopdown__check_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown__check_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown__check((arraytopdown__check_t)x);
}

arraytopdown__check_t copy_arraytopdown__check(arraytopdown__check_t x){
        arraytopdown__check_t y = new_arraytopdown__check();
        y->arraytopdown__peg_adt_index = (uint8_t)x->arraytopdown__peg_adt_index;
        y->e = (uint8_t)x->e;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown__check(arraytopdown__check_t x, arraytopdown__check_t y){
        bool_t tmp = true;
        tmp = tmp && x->arraytopdown__peg_adt_index == y->arraytopdown__peg_adt_index;
        tmp = tmp && x->e == y->e;
        return tmp;}

bool_t equal_arraytopdown__check_ptr(pointer_t x, pointer_t y, actual_arraytopdown__check_t T){
        return equal_arraytopdown__check((arraytopdown__check_t)x, (arraytopdown__check_t)y);
}

actual_arraytopdown__check_t actual_arraytopdown__check(){
        actual_arraytopdown__check_t new = (actual_arraytopdown__check_t)safe_malloc(sizeof(struct actual_arraytopdown__check_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown__check_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown__check_ptr);
 

 
        return new;
 };

arraytopdown__check_t update_arraytopdown__check_arraytopdown__peg_adt_index(arraytopdown__check_t x, uint8_t v){
        arraytopdown__check_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__check(x); x->count--;};
        y->arraytopdown__peg_adt_index = (uint8_t)v;
        return y;}

arraytopdown__check_t update_arraytopdown__check_e(arraytopdown__check_t x, uint8_t v){
        arraytopdown__check_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__check(x); x->count--;};
        y->e = (uint8_t)v;
        return y;}




arraytopdown__neg_t new_arraytopdown__neg(void){
        arraytopdown__neg_t tmp = (arraytopdown__neg_t) safe_malloc(sizeof(struct arraytopdown__neg_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown__neg(arraytopdown__neg_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown__neg_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown__neg((arraytopdown__neg_t)x);
}

arraytopdown__neg_t copy_arraytopdown__neg(arraytopdown__neg_t x){
        arraytopdown__neg_t y = new_arraytopdown__neg();
        y->arraytopdown__peg_adt_index = (uint8_t)x->arraytopdown__peg_adt_index;
        y->e = (uint8_t)x->e;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown__neg(arraytopdown__neg_t x, arraytopdown__neg_t y){
        bool_t tmp = true;
        tmp = tmp && x->arraytopdown__peg_adt_index == y->arraytopdown__peg_adt_index;
        tmp = tmp && x->e == y->e;
        return tmp;}

bool_t equal_arraytopdown__neg_ptr(pointer_t x, pointer_t y, actual_arraytopdown__neg_t T){
        return equal_arraytopdown__neg((arraytopdown__neg_t)x, (arraytopdown__neg_t)y);
}

actual_arraytopdown__neg_t actual_arraytopdown__neg(){
        actual_arraytopdown__neg_t new = (actual_arraytopdown__neg_t)safe_malloc(sizeof(struct actual_arraytopdown__neg_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown__neg_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown__neg_ptr);
 

 
        return new;
 };

arraytopdown__neg_t update_arraytopdown__neg_arraytopdown__peg_adt_index(arraytopdown__neg_t x, uint8_t v){
        arraytopdown__neg_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__neg(x); x->count--;};
        y->arraytopdown__peg_adt_index = (uint8_t)v;
        return y;}

arraytopdown__neg_t update_arraytopdown__neg_e(arraytopdown__neg_t x, uint8_t v){
        arraytopdown__neg_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown__neg(x); x->count--;};
        y->e = (uint8_t)v;
        return y;}



void release_arraytopdown_funtype_36(arraytopdown_funtype_36_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_36_t copy_arraytopdown_funtype_36(arraytopdown_funtype_36_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_36(arraytopdown_funtype_36_t x, arraytopdown_funtype_36_t y){
        return false;}

void release_arraytopdown_funtype_37(arraytopdown_funtype_37_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_37_t copy_arraytopdown_funtype_37(arraytopdown_funtype_37_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_37(arraytopdown_funtype_37_t x, arraytopdown_funtype_37_t y){
        return false;}

void release_arraytopdown_funtype_38(arraytopdown_funtype_38_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_38_t copy_arraytopdown_funtype_38(arraytopdown_funtype_38_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_38(arraytopdown_funtype_38_t x, arraytopdown_funtype_38_t y){
        return false;}

void release_arraytopdown_funtype_39(arraytopdown_funtype_39_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_39_t copy_arraytopdown_funtype_39(arraytopdown_funtype_39_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdown_funtype_39(arraytopdown_funtype_39_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdown_funtype_39_hashentry_t data = htbl->data[hashindex];
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

arraytopdown_funtype_39_t dupdate_arraytopdown_funtype_39(arraytopdown_funtype_39_t a, uint8_t i, mpz_ptr_t v){
        arraytopdown_funtype_39_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdown_funtype_39_htbl_t)safe_malloc(sizeof(struct arraytopdown_funtype_39_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdown_funtype_39_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdown_funtype_39_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdown_funtype_39_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdown_funtype_39_hashentry_t * new_data = (arraytopdown_funtype_39_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdown_funtype_39_hashentry_s));
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
        uint32_t hashindex = lookup_arraytopdown_funtype_39(htbl, i, ihash);
        arraytopdown_funtype_39_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

arraytopdown_funtype_39_t update_arraytopdown_funtype_39(arraytopdown_funtype_39_t a, uint8_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_arraytopdown_funtype_39(a, i, v);
            } else {
                arraytopdown_funtype_39_t x = copy_arraytopdown_funtype_39(a);
                a->count--;
                return dupdate_arraytopdown_funtype_39(x, i, v);
            }}

bool_t equal_arraytopdown_funtype_39(arraytopdown_funtype_39_t x, arraytopdown_funtype_39_t y){
        return false;}


arraytopdown_record_40_t new_arraytopdown_record_40(void){
        arraytopdown_record_40_t tmp = (arraytopdown_record_40_t) safe_malloc(sizeof(struct arraytopdown_record_40_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_40(arraytopdown_record_40_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_40_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_40((arraytopdown_record_40_t)x);
}

arraytopdown_record_40_t copy_arraytopdown_record_40(arraytopdown_record_40_t x){
        arraytopdown_record_40_t y = new_arraytopdown_record_40();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_40(arraytopdown_record_40_t x, arraytopdown_record_40_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

bool_t equal_arraytopdown_record_40_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_40_t T){
        return equal_arraytopdown_record_40((arraytopdown_record_40_t)x, (arraytopdown_record_40_t)y);
}

actual_arraytopdown_record_40_t actual_arraytopdown_record_40(){
        actual_arraytopdown_record_40_t new = (actual_arraytopdown_record_40_t)safe_malloc(sizeof(struct actual_arraytopdown_record_40_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_40_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_40_ptr);
 

 
        return new;
 };

arraytopdown_record_40_t update_arraytopdown_record_40_project_1(arraytopdown_record_40_t x, uint8_t v){
        arraytopdown_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_40(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

arraytopdown_record_40_t update_arraytopdown_record_40_project_2(arraytopdown_record_40_t x, uint8_t v){
        arraytopdown_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_40(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}



void release_arraytopdown_funtype_41(arraytopdown_funtype_41_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_41_t copy_arraytopdown_funtype_41(arraytopdown_funtype_41_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_41(arraytopdown_funtype_41_t x, arraytopdown_funtype_41_t y){
        return false;}


mpz_ptr_t f_arraytopdown_closure_42(struct arraytopdown_closure_42_s * closure, arraytopdown__peg_adt_t bvar){
        mpz_ptr_t result = h_arraytopdown_closure_42(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

mpz_ptr_t m_arraytopdown_closure_42(struct arraytopdown_closure_42_s * closure, arraytopdown__peg_adt_t bvar){
        return h_arraytopdown_closure_42(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern mpz_ptr_t h_arraytopdown_closure_42(arraytopdown__peg_adt_t ivar_27, arraytopdown_funtype_39_t ivar_21, arraytopdown_funtype_39_t ivar_23, arraytopdown_funtype_41_t ivar_19, arraytopdown_funtype_41_t ivar_17, arraytopdown_funtype_39_t ivar_15, arraytopdown_funtype_38_t ivar_12, mpz_ptr_t ivar_11, mpz_ptr_t ivar_10){
        mpz_ptr_t result;
        bool_t ivar_57;
        ivar_27->count++;
        ivar_57 = (bool_t)r_arraytopdown__epsilonp((arraytopdown__peg_adt_t)ivar_27);
        if (ivar_57){ 
             release_arraytopdown__peg_adt(ivar_27);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_10);
} else {
        
             bool_t ivar_61;
             ivar_27->count++;
             ivar_61 = (bool_t)r_arraytopdown__failurep((arraytopdown__peg_adt_t)ivar_27);
             if (ivar_61){  
           release_arraytopdown__peg_adt(ivar_27);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_11);
} else {
             
           bool_t ivar_77;
           ivar_27->count++;
           ivar_77 = (bool_t)r_arraytopdown__anyp((arraytopdown__peg_adt_t)ivar_27);
           if (ivar_77){   
           arraytopdown_funtype_29_t ivar_65;
           ivar_65 = (arraytopdown_funtype_29_t)arraytopdown__peg_adt_p((arraytopdown__peg_adt_t)ivar_27);
           mpz_mk_set(result, ivar_12->ftbl->fptr(ivar_12, ivar_65));
} else {
           
           bool_t ivar_90;
           ivar_27->count++;
           ivar_90 = (bool_t)r_arraytopdown__terminalp((arraytopdown__peg_adt_t)ivar_27);
           if (ivar_90){    
            uint8_t ivar_81;
            ivar_81 = (uint8_t)arraytopdown__peg_adt_a((arraytopdown__peg_adt_t)ivar_27);
            mpz_mk_set(result, ivar_15->ftbl->fptr(ivar_15, ivar_81));
} else {
           
            bool_t ivar_109;
            ivar_27->count++;
            ivar_109 = (bool_t)r_arraytopdown__concatp((arraytopdown__peg_adt_t)ivar_27);
            if (ivar_109){     
             uint8_t ivar_94;
             ivar_27->count++;
             ivar_94 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_27);
             uint8_t ivar_95;
             ivar_95 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_27);
             mpz_mk_set(result, ivar_17->ftbl->mptr(ivar_17, ivar_94, ivar_95));
} else {
            
             bool_t ivar_128;
             ivar_27->count++;
             ivar_128 = (bool_t)r_arraytopdown__orp((arraytopdown__peg_adt_t)ivar_27);
             if (ivar_128){      
              uint8_t ivar_113;
              ivar_27->count++;
              ivar_113 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_27);
              uint8_t ivar_114;
              ivar_114 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_27);
              mpz_mk_set(result, ivar_19->ftbl->mptr(ivar_19, ivar_113, ivar_114));
} else {
             
              bool_t ivar_141;
              ivar_27->count++;
              ivar_141 = (bool_t)r_arraytopdown__andp((arraytopdown__peg_adt_t)ivar_27);
              if (ivar_141){       
               uint8_t ivar_132;
               ivar_132 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_27);
               mpz_mk_set(result, ivar_21->ftbl->fptr(ivar_21, ivar_132));
} else {
              
               uint8_t ivar_145;
               ivar_145 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_27);
               mpz_mk_set(result, ivar_23->ftbl->fptr(ivar_23, ivar_145));
};
};
};
};
};
};
};

        return result;
}

arraytopdown_closure_42_t new_arraytopdown_closure_42(void){
        static struct arraytopdown_funtype_37_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(arraytopdown_funtype_37_t, arraytopdown__peg_adt_t))&f_arraytopdown_closure_42, .mptr = (mpz_ptr_t (*)(arraytopdown_funtype_37_t, arraytopdown__peg_adt_t))&m_arraytopdown_closure_42, .rptr =  (void (*)(arraytopdown_funtype_37_t))&release_arraytopdown_closure_42, .cptr = (arraytopdown_funtype_37_t (*)(arraytopdown_funtype_37_t))&copy_arraytopdown_closure_42};
        arraytopdown_closure_42_t tmp = (arraytopdown_closure_42_t) safe_malloc(sizeof(struct arraytopdown_closure_42_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_7);
        mpz_init(tmp->fvar_8);
        return tmp;}

void release_arraytopdown_closure_42(arraytopdown_funtype_37_t closure){
        arraytopdown_closure_42_t x = (arraytopdown_closure_42_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_39(x->fvar_1);
         release_arraytopdown_funtype_39(x->fvar_2);
         release_arraytopdown_funtype_41(x->fvar_3);
         release_arraytopdown_funtype_41(x->fvar_4);
         release_arraytopdown_funtype_39(x->fvar_5);
         release_arraytopdown_funtype_38(x->fvar_6);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_42_t copy_arraytopdown_closure_42(arraytopdown_closure_42_t x){
        arraytopdown_closure_42_t y = new_arraytopdown_closure_42();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        mpz_set(y->fvar_7, x->fvar_7);
        mpz_set(y->fvar_8, x->fvar_8);
        if (x->htbl != NULL){
            arraytopdown_funtype_37_htbl_t new_htbl = (arraytopdown_funtype_37_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_37_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_37_hashentry_t * new_data = (arraytopdown_funtype_37_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_37_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_37_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown_record_43_t new_arraytopdown_record_43(void){
        arraytopdown_record_43_t tmp = (arraytopdown_record_43_t) safe_malloc(sizeof(struct arraytopdown_record_43_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_43(arraytopdown_record_43_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_29(x->project_1);
         release_arraytopdown__peg_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_43_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_43((arraytopdown_record_43_t)x);
}

arraytopdown_record_43_t copy_arraytopdown_record_43(arraytopdown_record_43_t x){
        arraytopdown_record_43_t y = new_arraytopdown_record_43();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_43(arraytopdown_record_43_t x, arraytopdown_record_43_t y){
        bool_t tmp = true;
        tmp = tmp && equal_arraytopdown_funtype_29(x->project_1, y->project_1);
        tmp = tmp && equal_arraytopdown__peg_adt(x->project_2, y->project_2);
        return tmp;}

bool_t equal_arraytopdown_record_43_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_43_t T){
        return equal_arraytopdown_record_43((arraytopdown_record_43_t)x, (arraytopdown_record_43_t)y);
}

actual_arraytopdown_record_43_t actual_arraytopdown_record_43(){
        actual_arraytopdown_record_43_t new = (actual_arraytopdown_record_43_t)safe_malloc(sizeof(struct actual_arraytopdown_record_43_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_43_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_43_ptr);
 

 
        return new;
 };

arraytopdown_record_43_t update_arraytopdown_record_43_project_1(arraytopdown_record_43_t x, arraytopdown_funtype_29_t v){
        arraytopdown_record_43_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_arraytopdown_funtype_29(x->project_1);};}
        else {y = copy_arraytopdown_record_43(x); x->count--; y->project_1->count--;};
        y->project_1 = (arraytopdown_funtype_29_t)v;
        return y;}

arraytopdown_record_43_t update_arraytopdown_record_43_project_2(arraytopdown_record_43_t x, arraytopdown__peg_adt_t v){
        arraytopdown_record_43_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_arraytopdown__peg_adt(x->project_2);};}
        else {y = copy_arraytopdown_record_43(x); x->count--; y->project_2->count--;};
        y->project_2 = (arraytopdown__peg_adt_t)v;
        return y;}



void release_arraytopdown_funtype_44(arraytopdown_funtype_44_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_44_t copy_arraytopdown_funtype_44(arraytopdown_funtype_44_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_44(arraytopdown_funtype_44_t x, arraytopdown_funtype_44_t y){
        return false;}


arraytopdown_record_45_t new_arraytopdown_record_45(void){
        arraytopdown_record_45_t tmp = (arraytopdown_record_45_t) safe_malloc(sizeof(struct arraytopdown_record_45_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_45(arraytopdown_record_45_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown__peg_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_45_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_45((arraytopdown_record_45_t)x);
}

arraytopdown_record_45_t copy_arraytopdown_record_45(arraytopdown_record_45_t x){
        arraytopdown_record_45_t y = new_arraytopdown_record_45();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_45(arraytopdown_record_45_t x, arraytopdown_record_45_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_arraytopdown__peg_adt(x->project_2, y->project_2);
        return tmp;}

bool_t equal_arraytopdown_record_45_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_45_t T){
        return equal_arraytopdown_record_45((arraytopdown_record_45_t)x, (arraytopdown_record_45_t)y);
}

actual_arraytopdown_record_45_t actual_arraytopdown_record_45(){
        actual_arraytopdown_record_45_t new = (actual_arraytopdown_record_45_t)safe_malloc(sizeof(struct actual_arraytopdown_record_45_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_45_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_45_ptr);
 

 
        return new;
 };

arraytopdown_record_45_t update_arraytopdown_record_45_project_1(arraytopdown_record_45_t x, uint8_t v){
        arraytopdown_record_45_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_45(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

arraytopdown_record_45_t update_arraytopdown_record_45_project_2(arraytopdown_record_45_t x, arraytopdown__peg_adt_t v){
        arraytopdown_record_45_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_arraytopdown__peg_adt(x->project_2);};}
        else {y = copy_arraytopdown_record_45(x); x->count--; y->project_2->count--;};
        y->project_2 = (arraytopdown__peg_adt_t)v;
        return y;}



void release_arraytopdown_funtype_46(arraytopdown_funtype_46_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_46_t copy_arraytopdown_funtype_46(arraytopdown_funtype_46_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_46(arraytopdown_funtype_46_t x, arraytopdown_funtype_46_t y){
        return false;}


arraytopdown_record_47_t new_arraytopdown_record_47(void){
        arraytopdown_record_47_t tmp = (arraytopdown_record_47_t) safe_malloc(sizeof(struct arraytopdown_record_47_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_47(arraytopdown_record_47_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown__peg_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_47_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_47((arraytopdown_record_47_t)x);
}

arraytopdown_record_47_t copy_arraytopdown_record_47(arraytopdown_record_47_t x){
        arraytopdown_record_47_t y = new_arraytopdown_record_47();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_47(arraytopdown_record_47_t x, arraytopdown_record_47_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_arraytopdown__peg_adt(x->project_3, y->project_3);
        return tmp;}

bool_t equal_arraytopdown_record_47_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_47_t T){
        return equal_arraytopdown_record_47((arraytopdown_record_47_t)x, (arraytopdown_record_47_t)y);
}

actual_arraytopdown_record_47_t actual_arraytopdown_record_47(){
        actual_arraytopdown_record_47_t new = (actual_arraytopdown_record_47_t)safe_malloc(sizeof(struct actual_arraytopdown_record_47_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_47_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_47_ptr);
 

 
        return new;
 };

arraytopdown_record_47_t update_arraytopdown_record_47_project_1(arraytopdown_record_47_t x, uint8_t v){
        arraytopdown_record_47_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_47(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

arraytopdown_record_47_t update_arraytopdown_record_47_project_2(arraytopdown_record_47_t x, uint8_t v){
        arraytopdown_record_47_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_47(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

arraytopdown_record_47_t update_arraytopdown_record_47_project_3(arraytopdown_record_47_t x, arraytopdown__peg_adt_t v){
        arraytopdown_record_47_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_arraytopdown__peg_adt(x->project_3);};}
        else {y = copy_arraytopdown_record_47(x); x->count--; y->project_3->count--;};
        y->project_3 = (arraytopdown__peg_adt_t)v;
        return y;}



void release_arraytopdown_funtype_48(arraytopdown_funtype_48_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_48_t copy_arraytopdown_funtype_48(arraytopdown_funtype_48_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_48(arraytopdown_funtype_48_t x, arraytopdown_funtype_48_t y){
        return false;}


mpz_ptr_t f_arraytopdown_closure_49(struct arraytopdown_closure_49_s * closure, arraytopdown__peg_adt_t bvar){
        mpz_ptr_t result = h_arraytopdown_closure_49(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

mpz_ptr_t m_arraytopdown_closure_49(struct arraytopdown_closure_49_s * closure, arraytopdown__peg_adt_t bvar){
        return h_arraytopdown_closure_49(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern mpz_ptr_t h_arraytopdown_closure_49(arraytopdown__peg_adt_t ivar_31, arraytopdown_funtype_46_t ivar_25, arraytopdown_funtype_46_t ivar_27, arraytopdown_funtype_48_t ivar_23, arraytopdown_funtype_48_t ivar_21, arraytopdown_funtype_46_t ivar_19, arraytopdown_funtype_44_t ivar_16, arraytopdown_funtype_37_t ivar_14, arraytopdown_funtype_37_t ivar_12){
        mpz_ptr_t result;
        bool_t ivar_68;
        ivar_31->count++;
        ivar_68 = (bool_t)r_arraytopdown__epsilonp((arraytopdown__peg_adt_t)ivar_31);
        if (ivar_68){ 
             mpz_mk_set(result, ivar_12->ftbl->fptr(ivar_12, ivar_31));
} else {
        
             bool_t ivar_77;
             ivar_31->count++;
             ivar_77 = (bool_t)r_arraytopdown__failurep((arraytopdown__peg_adt_t)ivar_31);
             if (ivar_77){  
           mpz_mk_set(result, ivar_14->ftbl->fptr(ivar_14, ivar_31));
} else {
             
           bool_t ivar_95;
           ivar_31->count++;
           ivar_95 = (bool_t)r_arraytopdown__anyp((arraytopdown__peg_adt_t)ivar_31);
           if (ivar_95){   
           arraytopdown_funtype_29_t ivar_81;
           ivar_31->count++;
           ivar_81 = (arraytopdown_funtype_29_t)arraytopdown__peg_adt_p((arraytopdown__peg_adt_t)ivar_31);
           mpz_mk_set(result, ivar_16->ftbl->mptr(ivar_16, ivar_81, ivar_31));
} else {
           
           bool_t ivar_110;
           ivar_31->count++;
           ivar_110 = (bool_t)r_arraytopdown__terminalp((arraytopdown__peg_adt_t)ivar_31);
           if (ivar_110){    
            uint8_t ivar_99;
            ivar_31->count++;
            ivar_99 = (uint8_t)arraytopdown__peg_adt_a((arraytopdown__peg_adt_t)ivar_31);
            mpz_mk_set(result, ivar_19->ftbl->mptr(ivar_19, ivar_99, ivar_31));
} else {
           
            bool_t ivar_131;
            ivar_31->count++;
            ivar_131 = (bool_t)r_arraytopdown__concatp((arraytopdown__peg_adt_t)ivar_31);
            if (ivar_131){     
             uint8_t ivar_114;
             ivar_31->count++;
             ivar_114 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_31);
             uint8_t ivar_115;
             ivar_31->count++;
             ivar_115 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_31);
             mpz_mk_set(result, ivar_21->ftbl->mptr(ivar_21, ivar_114, ivar_115, ivar_31));
} else {
            
             bool_t ivar_152;
             ivar_31->count++;
             ivar_152 = (bool_t)r_arraytopdown__orp((arraytopdown__peg_adt_t)ivar_31);
             if (ivar_152){      
              uint8_t ivar_135;
              ivar_31->count++;
              ivar_135 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_31);
              uint8_t ivar_136;
              ivar_31->count++;
              ivar_136 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_31);
              mpz_mk_set(result, ivar_23->ftbl->mptr(ivar_23, ivar_135, ivar_136, ivar_31));
} else {
             
              bool_t ivar_167;
              ivar_31->count++;
              ivar_167 = (bool_t)r_arraytopdown__andp((arraytopdown__peg_adt_t)ivar_31);
              if (ivar_167){       
               uint8_t ivar_156;
               ivar_31->count++;
               ivar_156 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_31);
               mpz_mk_set(result, ivar_25->ftbl->mptr(ivar_25, ivar_156, ivar_31));
} else {
              
               uint8_t ivar_171;
               ivar_31->count++;
               ivar_171 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_31);
               mpz_mk_set(result, ivar_27->ftbl->mptr(ivar_27, ivar_171, ivar_31));
};
};
};
};
};
};
};

        return result;
}

arraytopdown_closure_49_t new_arraytopdown_closure_49(void){
        static struct arraytopdown_funtype_37_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(arraytopdown_funtype_37_t, arraytopdown__peg_adt_t))&f_arraytopdown_closure_49, .mptr = (mpz_ptr_t (*)(arraytopdown_funtype_37_t, arraytopdown__peg_adt_t))&m_arraytopdown_closure_49, .rptr =  (void (*)(arraytopdown_funtype_37_t))&release_arraytopdown_closure_49, .cptr = (arraytopdown_funtype_37_t (*)(arraytopdown_funtype_37_t))&copy_arraytopdown_closure_49};
        arraytopdown_closure_49_t tmp = (arraytopdown_closure_49_t) safe_malloc(sizeof(struct arraytopdown_closure_49_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_49(arraytopdown_funtype_37_t closure){
        arraytopdown_closure_49_t x = (arraytopdown_closure_49_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_46(x->fvar_1);
         release_arraytopdown_funtype_46(x->fvar_2);
         release_arraytopdown_funtype_48(x->fvar_3);
         release_arraytopdown_funtype_48(x->fvar_4);
         release_arraytopdown_funtype_46(x->fvar_5);
         release_arraytopdown_funtype_44(x->fvar_6);
         release_arraytopdown_funtype_37(x->fvar_7);
         release_arraytopdown_funtype_37(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_49_t copy_arraytopdown_closure_49(arraytopdown_closure_49_t x){
        arraytopdown_closure_49_t y = new_arraytopdown_closure_49();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        y->fvar_7 = x->fvar_7; x->fvar_7->count++;
        y->fvar_8 = x->fvar_8; x->fvar_8->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_37_htbl_t new_htbl = (arraytopdown_funtype_37_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_37_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_37_hashentry_t * new_data = (arraytopdown_funtype_37_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_37_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_37_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_50(arraytopdown_funtype_50_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_50_t copy_arraytopdown_funtype_50(arraytopdown_funtype_50_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_50(arraytopdown_funtype_50_t x, arraytopdown_funtype_50_t y){
        return false;}

void release_arraytopdown_funtype_51(arraytopdown_funtype_51_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_51_t copy_arraytopdown_funtype_51(arraytopdown_funtype_51_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_51(arraytopdown_funtype_51_t x, arraytopdown_funtype_51_t y){
        return false;}

void release_arraytopdown_funtype_52(arraytopdown_funtype_52_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_52_t copy_arraytopdown_funtype_52(arraytopdown_funtype_52_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdown_funtype_52(arraytopdown_funtype_52_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdown_funtype_52_hashentry_t data = htbl->data[hashindex];
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

arraytopdown_funtype_52_t dupdate_arraytopdown_funtype_52(arraytopdown_funtype_52_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v){
        arraytopdown_funtype_52_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdown_funtype_52_htbl_t)safe_malloc(sizeof(struct arraytopdown_funtype_52_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdown_funtype_52_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdown_funtype_52_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdown_funtype_52_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdown_funtype_52_hashentry_t * new_data = (arraytopdown_funtype_52_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdown_funtype_52_hashentry_s));
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
                                new_data[new_loc].value = (ordstruct_adt__ordstruct_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_arraytopdown_funtype_52(htbl, i, ihash);
        arraytopdown_funtype_52_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v; htbl->num_entries++;}
            else {ordstruct_adt__ordstruct_adt_t tempvalue;tempvalue = (ordstruct_adt__ordstruct_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ordstruct_adt__ordstruct_adt(tempvalue);};
        return a;

}

arraytopdown_funtype_52_t update_arraytopdown_funtype_52(arraytopdown_funtype_52_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v){
        if (a->count == 1){
                return dupdate_arraytopdown_funtype_52(a, i, v);
            } else {
                arraytopdown_funtype_52_t x = copy_arraytopdown_funtype_52(a);
                a->count--;
                return dupdate_arraytopdown_funtype_52(x, i, v);
            }}

bool_t equal_arraytopdown_funtype_52(arraytopdown_funtype_52_t x, arraytopdown_funtype_52_t y){
        return false;}

void release_arraytopdown_funtype_53(arraytopdown_funtype_53_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_53_t copy_arraytopdown_funtype_53(arraytopdown_funtype_53_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_53(arraytopdown_funtype_53_t x, arraytopdown_funtype_53_t y){
        return false;}


ordstruct_adt__ordstruct_adt_t f_arraytopdown_closure_54(struct arraytopdown_closure_54_s * closure, arraytopdown__peg_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_arraytopdown_closure_54(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_arraytopdown_closure_54(struct arraytopdown_closure_54_s * closure, arraytopdown__peg_adt_t bvar){
        return h_arraytopdown_closure_54(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern ordstruct_adt__ordstruct_adt_t h_arraytopdown_closure_54(arraytopdown__peg_adt_t ivar_27, arraytopdown_funtype_52_t ivar_21, arraytopdown_funtype_52_t ivar_23, arraytopdown_funtype_53_t ivar_19, arraytopdown_funtype_53_t ivar_17, arraytopdown_funtype_52_t ivar_15, arraytopdown_funtype_51_t ivar_12, ordstruct_adt__ordstruct_adt_t ivar_11, ordstruct_adt__ordstruct_adt_t ivar_10){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_57;
        ivar_27->count++;
        ivar_57 = (bool_t)r_arraytopdown__epsilonp((arraytopdown__peg_adt_t)ivar_27);
        if (ivar_57){ 
             release_arraytopdown__peg_adt(ivar_27);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_10;
             if (result != NULL) result->count++;
} else {
        
             bool_t ivar_61;
             ivar_27->count++;
             ivar_61 = (bool_t)r_arraytopdown__failurep((arraytopdown__peg_adt_t)ivar_27);
             if (ivar_61){  
           release_arraytopdown__peg_adt(ivar_27);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_11;
           if (result != NULL) result->count++;
} else {
             
           bool_t ivar_77;
           ivar_27->count++;
           ivar_77 = (bool_t)r_arraytopdown__anyp((arraytopdown__peg_adt_t)ivar_27);
           if (ivar_77){   
           arraytopdown_funtype_29_t ivar_65;
           ivar_65 = (arraytopdown_funtype_29_t)arraytopdown__peg_adt_p((arraytopdown__peg_adt_t)ivar_27);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_12->ftbl->fptr(ivar_12, ivar_65);
} else {
           
           bool_t ivar_90;
           ivar_27->count++;
           ivar_90 = (bool_t)r_arraytopdown__terminalp((arraytopdown__peg_adt_t)ivar_27);
           if (ivar_90){    
            uint8_t ivar_81;
            ivar_81 = (uint8_t)arraytopdown__peg_adt_a((arraytopdown__peg_adt_t)ivar_27);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_15->ftbl->fptr(ivar_15, ivar_81);
} else {
           
            bool_t ivar_109;
            ivar_27->count++;
            ivar_109 = (bool_t)r_arraytopdown__concatp((arraytopdown__peg_adt_t)ivar_27);
            if (ivar_109){     
             uint8_t ivar_94;
             ivar_27->count++;
             ivar_94 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_27);
             uint8_t ivar_95;
             ivar_95 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_27);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_17->ftbl->mptr(ivar_17, ivar_94, ivar_95);
} else {
            
             bool_t ivar_128;
             ivar_27->count++;
             ivar_128 = (bool_t)r_arraytopdown__orp((arraytopdown__peg_adt_t)ivar_27);
             if (ivar_128){      
              uint8_t ivar_113;
              ivar_27->count++;
              ivar_113 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_27);
              uint8_t ivar_114;
              ivar_114 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_27);
              result = (ordstruct_adt__ordstruct_adt_t)ivar_19->ftbl->mptr(ivar_19, ivar_113, ivar_114);
} else {
             
              bool_t ivar_141;
              ivar_27->count++;
              ivar_141 = (bool_t)r_arraytopdown__andp((arraytopdown__peg_adt_t)ivar_27);
              if (ivar_141){       
               uint8_t ivar_132;
               ivar_132 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_27);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_21->ftbl->fptr(ivar_21, ivar_132);
} else {
              
               uint8_t ivar_145;
               ivar_145 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_27);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_23->ftbl->fptr(ivar_23, ivar_145);
};
};
};
};
};
};
};

        return result;
}

arraytopdown_closure_54_t new_arraytopdown_closure_54(void){
        static struct arraytopdown_funtype_50_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(arraytopdown_funtype_50_t, arraytopdown__peg_adt_t))&f_arraytopdown_closure_54, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(arraytopdown_funtype_50_t, arraytopdown__peg_adt_t))&m_arraytopdown_closure_54, .rptr =  (void (*)(arraytopdown_funtype_50_t))&release_arraytopdown_closure_54, .cptr = (arraytopdown_funtype_50_t (*)(arraytopdown_funtype_50_t))&copy_arraytopdown_closure_54};
        arraytopdown_closure_54_t tmp = (arraytopdown_closure_54_t) safe_malloc(sizeof(struct arraytopdown_closure_54_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_54(arraytopdown_funtype_50_t closure){
        arraytopdown_closure_54_t x = (arraytopdown_closure_54_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_52(x->fvar_1);
         release_arraytopdown_funtype_52(x->fvar_2);
         release_arraytopdown_funtype_53(x->fvar_3);
         release_arraytopdown_funtype_53(x->fvar_4);
         release_arraytopdown_funtype_52(x->fvar_5);
         release_arraytopdown_funtype_51(x->fvar_6);
         release_ordstruct_adt__ordstruct_adt(x->fvar_7);
         release_ordstruct_adt__ordstruct_adt(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_54_t copy_arraytopdown_closure_54(arraytopdown_closure_54_t x){
        arraytopdown_closure_54_t y = new_arraytopdown_closure_54();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        y->fvar_7 = x->fvar_7; x->fvar_7->count++;
        y->fvar_8 = x->fvar_8; x->fvar_8->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_50_htbl_t new_htbl = (arraytopdown_funtype_50_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_50_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_50_hashentry_t * new_data = (arraytopdown_funtype_50_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_50_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_50_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_55(arraytopdown_funtype_55_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_55_t copy_arraytopdown_funtype_55(arraytopdown_funtype_55_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_55(arraytopdown_funtype_55_t x, arraytopdown_funtype_55_t y){
        return false;}

void release_arraytopdown_funtype_56(arraytopdown_funtype_56_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_56_t copy_arraytopdown_funtype_56(arraytopdown_funtype_56_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_56(arraytopdown_funtype_56_t x, arraytopdown_funtype_56_t y){
        return false;}

void release_arraytopdown_funtype_57(arraytopdown_funtype_57_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_57_t copy_arraytopdown_funtype_57(arraytopdown_funtype_57_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_57(arraytopdown_funtype_57_t x, arraytopdown_funtype_57_t y){
        return false;}


ordstruct_adt__ordstruct_adt_t f_arraytopdown_closure_58(struct arraytopdown_closure_58_s * closure, arraytopdown__peg_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_arraytopdown_closure_58(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_arraytopdown_closure_58(struct arraytopdown_closure_58_s * closure, arraytopdown__peg_adt_t bvar){
        return h_arraytopdown_closure_58(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern ordstruct_adt__ordstruct_adt_t h_arraytopdown_closure_58(arraytopdown__peg_adt_t ivar_31, arraytopdown_funtype_56_t ivar_25, arraytopdown_funtype_56_t ivar_27, arraytopdown_funtype_57_t ivar_23, arraytopdown_funtype_57_t ivar_21, arraytopdown_funtype_56_t ivar_19, arraytopdown_funtype_55_t ivar_16, arraytopdown_funtype_50_t ivar_14, arraytopdown_funtype_50_t ivar_12){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_68;
        ivar_31->count++;
        ivar_68 = (bool_t)r_arraytopdown__epsilonp((arraytopdown__peg_adt_t)ivar_31);
        if (ivar_68){ 
             result = (ordstruct_adt__ordstruct_adt_t)ivar_12->ftbl->fptr(ivar_12, ivar_31);
} else {
        
             bool_t ivar_77;
             ivar_31->count++;
             ivar_77 = (bool_t)r_arraytopdown__failurep((arraytopdown__peg_adt_t)ivar_31);
             if (ivar_77){  
           result = (ordstruct_adt__ordstruct_adt_t)ivar_14->ftbl->fptr(ivar_14, ivar_31);
} else {
             
           bool_t ivar_95;
           ivar_31->count++;
           ivar_95 = (bool_t)r_arraytopdown__anyp((arraytopdown__peg_adt_t)ivar_31);
           if (ivar_95){   
           arraytopdown_funtype_29_t ivar_81;
           ivar_31->count++;
           ivar_81 = (arraytopdown_funtype_29_t)arraytopdown__peg_adt_p((arraytopdown__peg_adt_t)ivar_31);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_16->ftbl->mptr(ivar_16, ivar_81, ivar_31);
} else {
           
           bool_t ivar_110;
           ivar_31->count++;
           ivar_110 = (bool_t)r_arraytopdown__terminalp((arraytopdown__peg_adt_t)ivar_31);
           if (ivar_110){    
            uint8_t ivar_99;
            ivar_31->count++;
            ivar_99 = (uint8_t)arraytopdown__peg_adt_a((arraytopdown__peg_adt_t)ivar_31);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_19->ftbl->mptr(ivar_19, ivar_99, ivar_31);
} else {
           
            bool_t ivar_131;
            ivar_31->count++;
            ivar_131 = (bool_t)r_arraytopdown__concatp((arraytopdown__peg_adt_t)ivar_31);
            if (ivar_131){     
             uint8_t ivar_114;
             ivar_31->count++;
             ivar_114 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_31);
             uint8_t ivar_115;
             ivar_31->count++;
             ivar_115 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_31);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_21->ftbl->mptr(ivar_21, ivar_114, ivar_115, ivar_31);
} else {
            
             bool_t ivar_152;
             ivar_31->count++;
             ivar_152 = (bool_t)r_arraytopdown__orp((arraytopdown__peg_adt_t)ivar_31);
             if (ivar_152){      
              uint8_t ivar_135;
              ivar_31->count++;
              ivar_135 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_31);
              uint8_t ivar_136;
              ivar_31->count++;
              ivar_136 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_31);
              result = (ordstruct_adt__ordstruct_adt_t)ivar_23->ftbl->mptr(ivar_23, ivar_135, ivar_136, ivar_31);
} else {
             
              bool_t ivar_167;
              ivar_31->count++;
              ivar_167 = (bool_t)r_arraytopdown__andp((arraytopdown__peg_adt_t)ivar_31);
              if (ivar_167){       
               uint8_t ivar_156;
               ivar_31->count++;
               ivar_156 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_31);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_25->ftbl->mptr(ivar_25, ivar_156, ivar_31);
} else {
              
               uint8_t ivar_171;
               ivar_31->count++;
               ivar_171 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_31);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_27->ftbl->mptr(ivar_27, ivar_171, ivar_31);
};
};
};
};
};
};
};

        return result;
}

arraytopdown_closure_58_t new_arraytopdown_closure_58(void){
        static struct arraytopdown_funtype_50_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(arraytopdown_funtype_50_t, arraytopdown__peg_adt_t))&f_arraytopdown_closure_58, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(arraytopdown_funtype_50_t, arraytopdown__peg_adt_t))&m_arraytopdown_closure_58, .rptr =  (void (*)(arraytopdown_funtype_50_t))&release_arraytopdown_closure_58, .cptr = (arraytopdown_funtype_50_t (*)(arraytopdown_funtype_50_t))&copy_arraytopdown_closure_58};
        arraytopdown_closure_58_t tmp = (arraytopdown_closure_58_t) safe_malloc(sizeof(struct arraytopdown_closure_58_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_58(arraytopdown_funtype_50_t closure){
        arraytopdown_closure_58_t x = (arraytopdown_closure_58_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_56(x->fvar_1);
         release_arraytopdown_funtype_56(x->fvar_2);
         release_arraytopdown_funtype_57(x->fvar_3);
         release_arraytopdown_funtype_57(x->fvar_4);
         release_arraytopdown_funtype_56(x->fvar_5);
         release_arraytopdown_funtype_55(x->fvar_6);
         release_arraytopdown_funtype_50(x->fvar_7);
         release_arraytopdown_funtype_50(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_58_t copy_arraytopdown_closure_58(arraytopdown_closure_58_t x){
        arraytopdown_closure_58_t y = new_arraytopdown_closure_58();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        y->fvar_6 = x->fvar_6; x->fvar_6->count++;
        y->fvar_7 = x->fvar_7; x->fvar_7->count++;
        y->fvar_8 = x->fvar_8; x->fvar_8->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_50_htbl_t new_htbl = (arraytopdown_funtype_50_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_50_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_50_hashentry_t * new_data = (arraytopdown_funtype_50_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_50_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_50_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_59(arraytopdown_funtype_59_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_59_t copy_arraytopdown_funtype_59(arraytopdown_funtype_59_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_59(arraytopdown_funtype_59_t x, arraytopdown_funtype_59_t y){
        return false;}


bool_t f_arraytopdown_closure_60(struct arraytopdown_closure_60_s * closure, arraytopdown__ent_adt_t bvar){
        bool_t result = h_arraytopdown_closure_60(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_arraytopdown_closure_60(struct arraytopdown_closure_60_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_60(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_arraytopdown_closure_60(arraytopdown__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1){
        bool_t result;
        mpq_ptr_t ivar_5;
        uint32_t ivar_8;
        ivar_8 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_4);
        mpz_t tmp6531;
        mpz_init(tmp6531);
        mpz_set_ui(tmp6531, (uint64_t)ivar_2);
        mpz_add_ui(tmp6531, tmp6531, (uint64_t)ivar_8);
        mpq_mk_set_z(ivar_5, tmp6531);
        mpz_clear(tmp6531);
        int64_t tmp6532 = mpq_cmp_ui(ivar_5, ivar_1, 1);
        result = (tmp6532 <= 0);

        return result;
}

arraytopdown_closure_60_t new_arraytopdown_closure_60(void){
        static struct arraytopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_60, .mptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_60, .rptr =  (void (*)(arraytopdown_funtype_59_t))&release_arraytopdown_closure_60, .cptr = (arraytopdown_funtype_59_t (*)(arraytopdown_funtype_59_t))&copy_arraytopdown_closure_60};
        arraytopdown_closure_60_t tmp = (arraytopdown_closure_60_t) safe_malloc(sizeof(struct arraytopdown_closure_60_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_60(arraytopdown_funtype_59_t closure){
        arraytopdown_closure_60_t x = (arraytopdown_closure_60_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_60_t copy_arraytopdown_closure_60(arraytopdown_closure_60_t x){
        arraytopdown_closure_60_t y = new_arraytopdown_closure_60();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            arraytopdown_funtype_59_htbl_t new_htbl = (arraytopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_59_hashentry_t * new_data = (arraytopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdown_closure_61(struct arraytopdown_closure_61_s * closure, arraytopdown__ent_adt_t bvar){
        bool_t result = h_arraytopdown_closure_61(bvar, closure->fvar_1); 
        return result;}

bool_t m_arraytopdown_closure_61(struct arraytopdown_closure_61_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_61(bvar, closure->fvar_1);}

extern bool_t h_arraytopdown_closure_61(arraytopdown__ent_adt_t ivar_3, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_4;
        ivar_3->count++;
        ivar_4 = (bool_t)r_arraytopdown__pushp((arraytopdown__ent_adt_t)ivar_3);
        if (ivar_4){ 
             bool_t ivar_9;
             uint32_t ivar_11;
             ivar_3->count++;
             ivar_11 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_3);
             ivar_9 = (ivar_11 <= ivar_1);
             if (ivar_9){  
           uint8_t ivar_17;
           ivar_17 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_3);
           uint8_t ivar_18;
           ivar_18 = (uint8_t)255;
           result = (ivar_17 <= ivar_18);
} else {
             
           release_arraytopdown__ent_adt(ivar_3);
           result = (bool_t) false;
};
} else {
        
             release_arraytopdown__ent_adt(ivar_3);
             result = (bool_t) false;
};

        return result;
}

arraytopdown_closure_61_t new_arraytopdown_closure_61(void){
        static struct arraytopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_61, .mptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_61, .rptr =  (void (*)(arraytopdown_funtype_59_t))&release_arraytopdown_closure_61, .cptr = (arraytopdown_funtype_59_t (*)(arraytopdown_funtype_59_t))&copy_arraytopdown_closure_61};
        arraytopdown_closure_61_t tmp = (arraytopdown_closure_61_t) safe_malloc(sizeof(struct arraytopdown_closure_61_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_61(arraytopdown_funtype_59_t closure){
        arraytopdown_closure_61_t x = (arraytopdown_closure_61_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_61_t copy_arraytopdown_closure_61(arraytopdown_closure_61_t x){
        arraytopdown_closure_61_t y = new_arraytopdown_closure_61();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            arraytopdown_funtype_59_htbl_t new_htbl = (arraytopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_59_hashentry_t * new_data = (arraytopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdown_closure_62(struct arraytopdown_closure_62_s * closure, arraytopdown__ent_adt_t bvar){
        bool_t result = h_arraytopdown_closure_62(bvar, closure->fvar_1); 
        return result;}

bool_t m_arraytopdown_closure_62(struct arraytopdown_closure_62_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_62(bvar, closure->fvar_1);}

extern bool_t h_arraytopdown_closure_62(arraytopdown__ent_adt_t ivar_3, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_4;
        arraytopdown_funtype_59_t ivar_9;
        ivar_9 = (arraytopdown_funtype_59_t)arraytopdown__good_push_entryp((uint32_t)ivar_1);
        ivar_3->count++;
        ivar_4 = (bool_t)ivar_9->ftbl->fptr(ivar_9, ivar_3);
        ivar_9->ftbl->rptr(ivar_9);
        if (ivar_4){ 
             uint8_t ivar_15;
             ivar_15 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_3);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)255;
             result = (ivar_15 < ivar_16);
} else {
        
             release_arraytopdown__ent_adt(ivar_3);
             result = (bool_t) false;
};

        return result;
}

arraytopdown_closure_62_t new_arraytopdown_closure_62(void){
        static struct arraytopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_62, .mptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_62, .rptr =  (void (*)(arraytopdown_funtype_59_t))&release_arraytopdown_closure_62, .cptr = (arraytopdown_funtype_59_t (*)(arraytopdown_funtype_59_t))&copy_arraytopdown_closure_62};
        arraytopdown_closure_62_t tmp = (arraytopdown_closure_62_t) safe_malloc(sizeof(struct arraytopdown_closure_62_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_62(arraytopdown_funtype_59_t closure){
        arraytopdown_closure_62_t x = (arraytopdown_closure_62_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_62_t copy_arraytopdown_closure_62(arraytopdown_closure_62_t x){
        arraytopdown_closure_62_t y = new_arraytopdown_closure_62();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            arraytopdown_funtype_59_htbl_t new_htbl = (arraytopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_59_hashentry_t * new_data = (arraytopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdown_closure_63(struct arraytopdown_closure_63_s * closure, arraytopdown__ent_adt_t bvar){
        bool_t result = h_arraytopdown_closure_63(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_arraytopdown_closure_63(struct arraytopdown_closure_63_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_63(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_arraytopdown_closure_63(arraytopdown__ent_adt_t ivar_4, uint32_t ivar_1, uint32_t ivar_2){
        bool_t result;
        bool_t ivar_5;
        bool_t ivar_7;
        ivar_4->count++;
        ivar_7 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_4);
        if (ivar_7){ 
             arraytopdown_funtype_59_t ivar_15;
             ivar_15 = (arraytopdown_funtype_59_t)arraytopdown__good_good_entryp((uint32_t)ivar_1, (uint32_t)ivar_2);
             ivar_4->count++;
             ivar_5 = (bool_t)ivar_15->ftbl->fptr(ivar_15, ivar_4);
             ivar_15->ftbl->rptr(ivar_15);
} else {
        
             ivar_5 = (bool_t) true;
};
        if (ivar_5){ 
             bool_t ivar_24;
             ivar_4->count++;
             ivar_24 = (bool_t)r_arraytopdown__pushp((arraytopdown__ent_adt_t)ivar_4);
             if (ivar_24){  
           arraytopdown_funtype_59_t ivar_32;
           ivar_32 = (arraytopdown_funtype_59_t)arraytopdown__good_push_entryp((uint32_t)ivar_1);
           result = (bool_t)ivar_32->ftbl->fptr(ivar_32, ivar_4);
           ivar_32->ftbl->rptr(ivar_32);
} else {
             
           release_arraytopdown__ent_adt(ivar_4);
           result = (bool_t) true;
};
} else {
        
             release_arraytopdown__ent_adt(ivar_4);
             result = (bool_t) false;
};

        return result;
}

arraytopdown_closure_63_t new_arraytopdown_closure_63(void){
        static struct arraytopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_63, .mptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_63, .rptr =  (void (*)(arraytopdown_funtype_59_t))&release_arraytopdown_closure_63, .cptr = (arraytopdown_funtype_59_t (*)(arraytopdown_funtype_59_t))&copy_arraytopdown_closure_63};
        arraytopdown_closure_63_t tmp = (arraytopdown_closure_63_t) safe_malloc(sizeof(struct arraytopdown_closure_63_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_63(arraytopdown_funtype_59_t closure){
        arraytopdown_closure_63_t x = (arraytopdown_closure_63_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_63_t copy_arraytopdown_closure_63(arraytopdown_closure_63_t x){
        arraytopdown_closure_63_t y = new_arraytopdown_closure_63();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            arraytopdown_funtype_59_htbl_t new_htbl = (arraytopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_59_hashentry_t * new_data = (arraytopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_64(arraytopdown_funtype_64_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_64_t copy_arraytopdown_funtype_64(arraytopdown_funtype_64_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_64(arraytopdown_funtype_64_t x, arraytopdown_funtype_64_t y){
        return false;}

void release_arraytopdown_funtype_65(arraytopdown_funtype_65_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_65_t copy_arraytopdown_funtype_65(arraytopdown_funtype_65_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdown_funtype_65(arraytopdown_funtype_65_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdown_funtype_65_hashentry_t data = htbl->data[hashindex];
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

arraytopdown_funtype_65_t dupdate_arraytopdown_funtype_65(arraytopdown_funtype_65_t a, uint8_t i, arraytopdown__ent_adt_t v){
        arraytopdown_funtype_65_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdown_funtype_65_htbl_t)safe_malloc(sizeof(struct arraytopdown_funtype_65_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdown_funtype_65_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdown_funtype_65_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdown_funtype_65_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdown_funtype_65_hashentry_t * new_data = (arraytopdown_funtype_65_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdown_funtype_65_hashentry_s));
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
                                new_data[new_loc].value = (arraytopdown__ent_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_arraytopdown_funtype_65(htbl, i, ihash);
        arraytopdown_funtype_65_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (arraytopdown__ent_adt_t)v; htbl->num_entries++;}
            else {arraytopdown__ent_adt_t tempvalue;tempvalue = (arraytopdown__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (arraytopdown__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_arraytopdown__ent_adt(tempvalue);};
        return a;

}

arraytopdown_funtype_65_t update_arraytopdown_funtype_65(arraytopdown_funtype_65_t a, uint8_t i, arraytopdown__ent_adt_t v){
        if (a->count == 1){
                return dupdate_arraytopdown_funtype_65(a, i, v);
            } else {
                arraytopdown_funtype_65_t x = copy_arraytopdown_funtype_65(a);
                a->count--;
                return dupdate_arraytopdown_funtype_65(x, i, v);
            }}

bool_t equal_arraytopdown_funtype_65(arraytopdown_funtype_65_t x, arraytopdown_funtype_65_t y){
        return false;}


arraytopdown_array_66_t new_arraytopdown_array_66(uint32_t size){
        arraytopdown_array_66_t tmp = (arraytopdown_array_66_t) safe_malloc(sizeof(struct arraytopdown_array_66_s) + (size * sizeof(arraytopdown_funtype_65_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_arraytopdown_array_66(arraytopdown_array_66_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_arraytopdown_funtype_65(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_arraytopdown_array_66_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_array_66((arraytopdown_array_66_t)x);
}

arraytopdown_array_66_t copy_arraytopdown_array_66(arraytopdown_array_66_t x){
        arraytopdown_array_66_t tmp = new_arraytopdown_array_66(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_arraytopdown_array_66(arraytopdown_array_66_t x, arraytopdown_array_66_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_arraytopdown_funtype_65(x->elems[i], y->elems[i]);};
        return tmp;}

bool_t equal_arraytopdown_array_66_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_arraytopdown_array_66((arraytopdown_array_66_t)x, (arraytopdown_array_66_t)y);
}

actual_arraytopdown_array_66_t actual_arraytopdown_array_66(){
        actual_arraytopdown_array_66_t new = (actual_arraytopdown_array_66_t)safe_malloc(sizeof(struct actual_arraytopdown_array_66_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_array_66_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_array_66_ptr);
 

 
        return new;
 };

arraytopdown_array_66_t update_arraytopdown_array_66(arraytopdown_array_66_t x, uint32_t i, arraytopdown_funtype_65_t v){
         arraytopdown_array_66_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_arraytopdown_array_66(x);
                      x->count--;};
        arraytopdown_funtype_65_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_arraytopdown_funtype_65(yelems[i]);};
         yelems[i] = v;
         return y;}

arraytopdown_array_66_t upgrade_arraytopdown_array_66(arraytopdown_array_66_t x, uint32_t i, arraytopdown_funtype_65_t v){
         arraytopdown_array_66_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct arraytopdown_array_66_s) + (newmax * sizeof(arraytopdown_funtype_65_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_arraytopdown_array_66(x);} else {y = copy_arraytopdown_array_66(x);
                      x->count--;};
        arraytopdown_funtype_65_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_arraytopdown_funtype_65(yelems[i]);};
         yelems[i] = v;
         return y;}




bool_t f_arraytopdown_closure_67(struct arraytopdown_closure_67_s * closure, arraytopdown_record_9_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_arraytopdown_record_9(bvar);
        bool_t result = h_arraytopdown_closure_67(bvar_1, bvar_2, closure->fvar_1); 
        return result;}

bool_t m_arraytopdown_closure_67(struct arraytopdown_closure_67_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_arraytopdown_closure_67(bvar_1, bvar_2, closure->fvar_1);}

extern bool_t h_arraytopdown_closure_67(uint32_t ivar_5, uint8_t ivar_6, arraytopdown_array_66_t ivar_2){
        bool_t result;
        arraytopdown__ent_adt_t ivar_18;
        arraytopdown_funtype_65_t ivar_10;
        ivar_10 = (arraytopdown_funtype_65_t)ivar_2->elems[ivar_5];
        ivar_10->count++;
        ivar_18 = (arraytopdown__ent_adt_t)ivar_10->ftbl->fptr(ivar_10, ivar_6);
        ivar_10->ftbl->rptr(ivar_10);
        result = (bool_t)r_arraytopdown__pushp((arraytopdown__ent_adt_t)ivar_18);

        return result;
}

arraytopdown_closure_67_t new_arraytopdown_closure_67(void){
        static struct arraytopdown_funtype_64_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_64_t, arraytopdown_record_9_t))&f_arraytopdown_closure_67, .mptr = (bool_t (*)(arraytopdown_funtype_64_t, uint32_t, uint8_t))&m_arraytopdown_closure_67, .rptr =  (void (*)(arraytopdown_funtype_64_t))&release_arraytopdown_closure_67, .cptr = (arraytopdown_funtype_64_t (*)(arraytopdown_funtype_64_t))&copy_arraytopdown_closure_67};
        arraytopdown_closure_67_t tmp = (arraytopdown_closure_67_t) safe_malloc(sizeof(struct arraytopdown_closure_67_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_67(arraytopdown_funtype_64_t closure){
        arraytopdown_closure_67_t x = (arraytopdown_closure_67_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_67_t copy_arraytopdown_closure_67(arraytopdown_closure_67_t x){
        arraytopdown_closure_67_t y = new_arraytopdown_closure_67();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_64_htbl_t new_htbl = (arraytopdown_funtype_64_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_64_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_64_hashentry_t * new_data = (arraytopdown_funtype_64_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_64_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_64_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown_record_68_t new_arraytopdown_record_68(void){
        arraytopdown_record_68_t tmp = (arraytopdown_record_68_t) safe_malloc(sizeof(struct arraytopdown_record_68_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_68(arraytopdown_record_68_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown__ent_adt(x->project_1);
         release_arraytopdown__ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_68_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_68((arraytopdown_record_68_t)x);
}

arraytopdown_record_68_t copy_arraytopdown_record_68(arraytopdown_record_68_t x){
        arraytopdown_record_68_t y = new_arraytopdown_record_68();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_68(arraytopdown_record_68_t x, arraytopdown_record_68_t y){
        bool_t tmp = true;
        tmp = tmp && equal_arraytopdown__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_arraytopdown__ent_adt(x->project_2, y->project_2);
        return tmp;}

bool_t equal_arraytopdown_record_68_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_68_t T){
        return equal_arraytopdown_record_68((arraytopdown_record_68_t)x, (arraytopdown_record_68_t)y);
}

actual_arraytopdown_record_68_t actual_arraytopdown_record_68(){
        actual_arraytopdown_record_68_t new = (actual_arraytopdown_record_68_t)safe_malloc(sizeof(struct actual_arraytopdown_record_68_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_68_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_68_ptr);
 

 
        return new;
 };

arraytopdown_record_68_t update_arraytopdown_record_68_project_1(arraytopdown_record_68_t x, arraytopdown__ent_adt_t v){
        arraytopdown_record_68_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_arraytopdown__ent_adt(x->project_1);};}
        else {y = copy_arraytopdown_record_68(x); x->count--; y->project_1->count--;};
        y->project_1 = (arraytopdown__ent_adt_t)v;
        return y;}

arraytopdown_record_68_t update_arraytopdown_record_68_project_2(arraytopdown_record_68_t x, arraytopdown__ent_adt_t v){
        arraytopdown_record_68_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_arraytopdown__ent_adt(x->project_2);};}
        else {y = copy_arraytopdown_record_68(x); x->count--; y->project_2->count--;};
        y->project_2 = (arraytopdown__ent_adt_t)v;
        return y;}



void release_arraytopdown_funtype_69(arraytopdown_funtype_69_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_69_t copy_arraytopdown_funtype_69(arraytopdown_funtype_69_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_69(arraytopdown_funtype_69_t x, arraytopdown_funtype_69_t y){
        return false;}

void release_arraytopdown__lang_spec(arraytopdown__lang_spec_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown__lang_spec_t copy_arraytopdown__lang_spec(arraytopdown__lang_spec_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdown__lang_spec(arraytopdown__lang_spec_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdown__lang_spec_hashentry_t data = htbl->data[hashindex];
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

arraytopdown__lang_spec_t dupdate_arraytopdown__lang_spec(arraytopdown__lang_spec_t a, uint8_t i, arraytopdown__peg_adt_t v){
        arraytopdown__lang_spec_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdown__lang_spec_htbl_t)safe_malloc(sizeof(struct arraytopdown__lang_spec_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdown__lang_spec_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdown__lang_spec_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdown__lang_spec_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdown__lang_spec_hashentry_t * new_data = (arraytopdown__lang_spec_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdown__lang_spec_hashentry_s));
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
                                new_data[new_loc].value = (arraytopdown__peg_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_arraytopdown__lang_spec(htbl, i, ihash);
        arraytopdown__lang_spec_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (arraytopdown__peg_adt_t)v; htbl->num_entries++;}
            else {arraytopdown__peg_adt_t tempvalue;tempvalue = (arraytopdown__peg_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (arraytopdown__peg_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_arraytopdown__peg_adt(tempvalue);};
        return a;

}

arraytopdown__lang_spec_t update_arraytopdown__lang_spec(arraytopdown__lang_spec_t a, uint8_t i, arraytopdown__peg_adt_t v){
        if (a->count == 1){
                return dupdate_arraytopdown__lang_spec(a, i, v);
            } else {
                arraytopdown__lang_spec_t x = copy_arraytopdown__lang_spec(a);
                a->count--;
                return dupdate_arraytopdown__lang_spec(x, i, v);
            }}

bool_t equal_arraytopdown__lang_spec(arraytopdown__lang_spec_t x, arraytopdown__lang_spec_t y){
        return false;}


bool_t f_arraytopdown_closure_71(struct arraytopdown_closure_71_s * closure, arraytopdown_record_68_t bvar){
        arraytopdown__ent_adt_t bvar_1;
        bvar_1 = (arraytopdown__ent_adt_t)bvar->project_1;
        bvar->project_1->count++;
        arraytopdown__ent_adt_t bvar_2;
        bvar_2 = (arraytopdown__ent_adt_t)bvar->project_2;
        bvar->project_2->count++;
        release_arraytopdown_record_68(bvar);
        bool_t result = h_arraytopdown_closure_71(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2); 
        release_arraytopdown__ent_adt(bvar_1);
        release_arraytopdown__ent_adt(bvar_2);
        return result;}

bool_t m_arraytopdown_closure_71(struct arraytopdown_closure_71_s * closure, arraytopdown__ent_adt_t bvar_1, arraytopdown__ent_adt_t bvar_2){
        return h_arraytopdown_closure_71(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2);}

extern bool_t h_arraytopdown_closure_71(arraytopdown__ent_adt_t ivar_6, arraytopdown__ent_adt_t ivar_7, arraytopdown_array_66_t ivar_3, arraytopdown__lang_spec_t ivar_2){
        bool_t result;
        /* p1 */ uint32_t ivar_8;
        ivar_6->count++;
        ivar_8 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_6);
        /* nt1 */ uint8_t ivar_12;
        ivar_12 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_6);
        /* p2 */ uint32_t ivar_16;
        ivar_7->count++;
        ivar_16 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_7);
        /* nt2 */ uint8_t ivar_20;
        ivar_20 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_7);
        bool_t ivar_24;
        uint8_t ivar_27;
        ivar_27 = (uint8_t)255;
        ivar_24 = (ivar_12 >= ivar_27);
        if (ivar_24){ 
             result = (bool_t) true;
} else {
        
             arraytopdown__peg_adt_t ivar_29;
             ivar_29 = (arraytopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_12);
             bool_t ivar_93;
             ivar_29->count++;
             ivar_93 = (bool_t)r_arraytopdown__concatp((arraytopdown__peg_adt_t)ivar_29);
             if (ivar_93){  
           uint8_t ivar_34;
           ivar_29->count++;
           ivar_34 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_29);
           uint8_t ivar_35;
           ivar_35 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_29);
           bool_t ivar_42;
           bool_t ivar_44;
           ivar_44 = (ivar_16 == ivar_8);
           if (ivar_44){   
           ivar_42 = (ivar_20 == ivar_34);
} else {
           
           ivar_42 = (bool_t) false;
};
           if (ivar_42){   
           result = (bool_t) true;
} else {
           
           bool_t ivar_53;
           arraytopdown__ent_adt_t ivar_66;
           arraytopdown_funtype_65_t ivar_58;
           ivar_58 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_8];
           ivar_58->count++;
           ivar_66 = (arraytopdown__ent_adt_t)ivar_58->ftbl->fptr(ivar_58, ivar_34);
           ivar_58->ftbl->rptr(ivar_58);
           ivar_53 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_66);
           if (ivar_53){    
            bool_t ivar_67;
            ivar_67 = (ivar_20 == ivar_35);
            if (ivar_67){     
             mpq_ptr_t ivar_73;
             uint32_t ivar_75;
             arraytopdown__ent_adt_t ivar_87;
             arraytopdown_funtype_65_t ivar_79;
             ivar_79 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_8];
             ivar_79->count++;
             ivar_87 = (arraytopdown__ent_adt_t)ivar_79->ftbl->fptr(ivar_79, ivar_34);
             ivar_79->ftbl->rptr(ivar_79);
             ivar_75 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_87);
             mpz_t tmp6549;
             mpz_init(tmp6549);
             mpz_set_ui(tmp6549, (uint64_t)ivar_8);
             mpz_add_ui(tmp6549, tmp6549, (uint64_t)ivar_75);
             mpq_mk_set_z(ivar_73, tmp6549);
             mpz_clear(tmp6549);
             int64_t tmp6550 = mpq_cmp_ui(ivar_73, ivar_16, 1);
             result = (tmp6550 == 0);
} else {
            
             result = (bool_t) false;
};
} else {
           
            result = (bool_t) false;
};
};
} else {
             
           bool_t ivar_141;
           ivar_29->count++;
           ivar_141 = (bool_t)r_arraytopdown__orp((arraytopdown__peg_adt_t)ivar_29);
           if (ivar_141){   
           uint8_t ivar_97;
           ivar_29->count++;
           ivar_97 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_29);
           uint8_t ivar_98;
           ivar_98 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_29);
           bool_t ivar_105;
           bool_t ivar_107;
           ivar_107 = (ivar_16 == ivar_8);
           if (ivar_107){    
            ivar_105 = (ivar_20 == ivar_97);
} else {
           
            ivar_105 = (bool_t) false;
};
           if (ivar_105){    
            result = (bool_t) true;
} else {
           
            bool_t ivar_116;
            arraytopdown__ent_adt_t ivar_129;
            arraytopdown_funtype_65_t ivar_121;
            ivar_121 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_8];
            ivar_121->count++;
            ivar_129 = (arraytopdown__ent_adt_t)ivar_121->ftbl->fptr(ivar_121, ivar_97);
            ivar_121->ftbl->rptr(ivar_121);
            ivar_116 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_129);
            if (ivar_116){     
             bool_t ivar_130;
             ivar_130 = (ivar_20 == ivar_98);
             if (ivar_130){      
              result = (ivar_16 == ivar_8);
} else {
             
              result = (bool_t) false;
};
} else {
            
             result = (bool_t) false;
};
};
} else {
           
           bool_t ivar_158;
           ivar_29->count++;
           ivar_158 = (bool_t)r_arraytopdown__andp((arraytopdown__peg_adt_t)ivar_29);
           if (ivar_158){    
            uint8_t ivar_145;
            ivar_145 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_29);
            bool_t ivar_149;
            ivar_149 = (ivar_20 == ivar_145);
            if (ivar_149){     
             result = (ivar_16 == ivar_8);
} else {
            
             result = (bool_t) false;
};
} else {
           
            bool_t ivar_175;
            ivar_29->count++;
            ivar_175 = (bool_t)r_arraytopdown__notp((arraytopdown__peg_adt_t)ivar_29);
            if (ivar_175){     
             uint8_t ivar_162;
             ivar_162 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_29);
             bool_t ivar_166;
             ivar_166 = (ivar_20 == ivar_162);
             if (ivar_166){      
              result = (ivar_16 == ivar_8);
} else {
             
              result = (bool_t) false;
};
} else {
            
             release_arraytopdown__peg_adt(ivar_29);
             result = (bool_t) false;
};
};
};
};
};

        return result;
}

arraytopdown_closure_71_t new_arraytopdown_closure_71(void){
        static struct arraytopdown_funtype_69_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_69_t, arraytopdown_record_68_t))&f_arraytopdown_closure_71, .mptr = (bool_t (*)(arraytopdown_funtype_69_t, arraytopdown__ent_adt_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_71, .rptr =  (void (*)(arraytopdown_funtype_69_t))&release_arraytopdown_closure_71, .cptr = (arraytopdown_funtype_69_t (*)(arraytopdown_funtype_69_t))&copy_arraytopdown_closure_71};
        arraytopdown_closure_71_t tmp = (arraytopdown_closure_71_t) safe_malloc(sizeof(struct arraytopdown_closure_71_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_71(arraytopdown_funtype_69_t closure){
        arraytopdown_closure_71_t x = (arraytopdown_closure_71_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_66(x->fvar_1);
         release_arraytopdown__lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_71_t copy_arraytopdown_closure_71(arraytopdown_closure_71_t x){
        arraytopdown_closure_71_t y = new_arraytopdown_closure_71();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_69_htbl_t new_htbl = (arraytopdown_funtype_69_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_69_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_69_hashentry_t * new_data = (arraytopdown_funtype_69_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_69_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_69_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_72(arraytopdown_funtype_72_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_72_t copy_arraytopdown_funtype_72(arraytopdown_funtype_72_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdown_funtype_72(arraytopdown_funtype_72_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdown_funtype_72_hashentry_t data = htbl->data[hashindex];
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

arraytopdown_funtype_72_t dupdate_arraytopdown_funtype_72(arraytopdown_funtype_72_t a, uint32_t i, mpz_ptr_t v){
        arraytopdown_funtype_72_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdown_funtype_72_htbl_t)safe_malloc(sizeof(struct arraytopdown_funtype_72_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdown_funtype_72_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdown_funtype_72_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdown_funtype_72_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdown_funtype_72_hashentry_t * new_data = (arraytopdown_funtype_72_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdown_funtype_72_hashentry_s));
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
                                mpz_set(new_data[new_loc].value, data[j].value);
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_arraytopdown_funtype_72(htbl, i, ihash);
        arraytopdown_funtype_72_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

arraytopdown_funtype_72_t update_arraytopdown_funtype_72(arraytopdown_funtype_72_t a, uint32_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_arraytopdown_funtype_72(a, i, v);
            } else {
                arraytopdown_funtype_72_t x = copy_arraytopdown_funtype_72(a);
                a->count--;
                return dupdate_arraytopdown_funtype_72(x, i, v);
            }}

bool_t equal_arraytopdown_funtype_72(arraytopdown_funtype_72_t x, arraytopdown_funtype_72_t y){
        return false;}


arraytopdown_array_73_t new_arraytopdown_array_73(uint32_t size){
        arraytopdown_array_73_t tmp = (arraytopdown_array_73_t) safe_malloc(sizeof(struct arraytopdown_array_73_s) + (size * sizeof(mpz_ptr_t)));
        tmp->count = 1;
        tmp->size = size;;
        tmp->max = size;
         return tmp;}

void release_arraytopdown_array_73(arraytopdown_array_73_t x){
        x->count--;
         if (x->count <= 0){safe_free(x);}
}

void release_arraytopdown_array_73_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_array_73((arraytopdown_array_73_t)x);
}

arraytopdown_array_73_t copy_arraytopdown_array_73(arraytopdown_array_73_t x){
        arraytopdown_array_73_t tmp = new_arraytopdown_array_73(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){mpz_set(tmp->elems[i], x->elems[i]);};
         return tmp;}

bool_t equal_arraytopdown_array_73(arraytopdown_array_73_t x, arraytopdown_array_73_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        tmp = (mpz_cmp(x->elems[i], y->elems[i]) == 0);
        return tmp;}

bool_t equal_arraytopdown_array_73_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_arraytopdown_array_73((arraytopdown_array_73_t)x, (arraytopdown_array_73_t)y);
}

actual_arraytopdown_array_73_t actual_arraytopdown_array_73(){
        actual_arraytopdown_array_73_t new = (actual_arraytopdown_array_73_t)safe_malloc(sizeof(struct actual_arraytopdown_array_73_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_array_73_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_array_73_ptr);
 

 
        return new;
 };

arraytopdown_array_73_t update_arraytopdown_array_73(arraytopdown_array_73_t x, uint32_t i, mpz_t v){
        arraytopdown_array_73_t y; 
         if (x->count == 1){y = x;}
           else {y = copy_arraytopdown_array_73(x );
                x->count--;};
        mpz_set(y->elems[i], v);
        return y;}

arraytopdown_array_73_t upgrade_arraytopdown_array_73(arraytopdown_array_73_t x, uint32_t i, mpz_t v){
        arraytopdown_array_73_t y; 
         if (x->count == 1 && i < x->max){y = x;}
           else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct arraytopdown_array_73_s) + (newmax * sizeof(mpz_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_arraytopdown_array_73(x);}
           else {y = copy_arraytopdown_array_73(x );
                x->count--;};
        mpz_set(y->elems[i], v);
        return y;}




mpz_ptr_t f_arraytopdown_closure_74(struct arraytopdown_closure_74_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        arraytopdown_funtype_72_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_arraytopdown_funtype_72(htbl, bvar, hash);
        arraytopdown_funtype_72_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            mpz_ptr_t result;
            mpz_mk_set(result, entry.value);
            return result;}
        

        return h_arraytopdown_closure_74(bvar, closure->fvar_1, closure->fvar_2);};

return h_arraytopdown_closure_74(bvar, closure->fvar_1, closure->fvar_2);}

mpz_ptr_t m_arraytopdown_closure_74(struct arraytopdown_closure_74_s * closure, uint32_t bvar){
        return h_arraytopdown_closure_74(bvar, closure->fvar_1, closure->fvar_2);}

extern mpz_ptr_t h_arraytopdown_closure_74(uint32_t ivar_8, uint32_t ivar_4, arraytopdown_array_73_t ivar_5){
        mpz_ptr_t result;
        bool_t ivar_9;
        ivar_9 = (ivar_8 == ivar_4);
        if (ivar_9){ 
             result = safe_malloc(sizeof(mpz_t));
             mpz_init(result);
             mpz_mk_set_ui(result, 0);
} else {
        
             mpz_ptr_t ivar_13;
             ivar_13 = safe_malloc(sizeof(mpz_t));
             mpz_init(ivar_13);
             mpz_set(ivar_13, ivar_5->elems[ivar_8]);
             mpz_ptr_t ivar_14;
             arraytopdown_funtype_72_t ivar_25;
             ivar_5->count++;
             ivar_25 = (arraytopdown_funtype_72_t)arraytopdown__sigma((uint32_t)ivar_4, (arraytopdown_array_73_t)ivar_5);
             int32_t ivar_33;
             uint8_t ivar_21;
             ivar_21 = (uint8_t)1;
             ivar_33 = (int32_t)((uint64_t)ivar_8 - (uint64_t)ivar_21);
             uint32_t ivar_32;
             //copying to uint32 from int32;
             ivar_32 = (uint32_t)ivar_33;
             mpz_mk_set(ivar_14, ivar_25->ftbl->fptr(ivar_25, ivar_32));
             ivar_25->ftbl->rptr(ivar_25);
             mpz_mk_add(result, ivar_14, ivar_13);
};

        return result;
}

arraytopdown_closure_74_t new_arraytopdown_closure_74(void){
        static struct arraytopdown_funtype_72_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(arraytopdown_funtype_72_t, uint32_t))&f_arraytopdown_closure_74, .mptr = (mpz_ptr_t (*)(arraytopdown_funtype_72_t, uint32_t))&m_arraytopdown_closure_74, .rptr =  (void (*)(arraytopdown_funtype_72_t))&release_arraytopdown_closure_74, .cptr = (arraytopdown_funtype_72_t (*)(arraytopdown_funtype_72_t))&copy_arraytopdown_closure_74};
        arraytopdown_closure_74_t tmp = (arraytopdown_closure_74_t) safe_malloc(sizeof(struct arraytopdown_closure_74_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_74(arraytopdown_funtype_72_t closure){
        arraytopdown_closure_74_t x = (arraytopdown_closure_74_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_73(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_74_t copy_arraytopdown_closure_74(arraytopdown_closure_74_t x){
        arraytopdown_closure_74_t y = new_arraytopdown_closure_74();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_72_htbl_t new_htbl = (arraytopdown_funtype_72_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_72_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_72_hashentry_t * new_data = (arraytopdown_funtype_72_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_72_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_72_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown_array_75_t new_arraytopdown_array_75(uint32_t size){
        arraytopdown_array_75_t tmp = (arraytopdown_array_75_t) safe_malloc(sizeof(struct arraytopdown_array_75_s) + (size * sizeof(arraytopdown__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_arraytopdown_array_75(arraytopdown_array_75_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_arraytopdown__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_arraytopdown_array_75_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_array_75((arraytopdown_array_75_t)x);
}

arraytopdown_array_75_t copy_arraytopdown_array_75(arraytopdown_array_75_t x){
        arraytopdown_array_75_t tmp = new_arraytopdown_array_75(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_arraytopdown_array_75(arraytopdown_array_75_t x, arraytopdown_array_75_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_arraytopdown__ent_adt(x->elems[i], y->elems[i]);};
        return tmp;}

bool_t equal_arraytopdown_array_75_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_arraytopdown_array_75((arraytopdown_array_75_t)x, (arraytopdown_array_75_t)y);
}

actual_arraytopdown_array_75_t actual_arraytopdown_array_75(){
        actual_arraytopdown_array_75_t new = (actual_arraytopdown_array_75_t)safe_malloc(sizeof(struct actual_arraytopdown_array_75_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_array_75_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_array_75_ptr);
 

 
        return new;
 };

arraytopdown_array_75_t update_arraytopdown_array_75(arraytopdown_array_75_t x, uint32_t i, arraytopdown__ent_adt_t v){
         arraytopdown_array_75_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_arraytopdown_array_75(x);
                      x->count--;};
        arraytopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_arraytopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

arraytopdown_array_75_t upgrade_arraytopdown_array_75(arraytopdown_array_75_t x, uint32_t i, arraytopdown__ent_adt_t v){
         arraytopdown_array_75_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct arraytopdown_array_75_s) + (newmax * sizeof(arraytopdown__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_arraytopdown_array_75(x);} else {y = copy_arraytopdown_array_75(x);
                      x->count--;};
        arraytopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_arraytopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}



void release_arraytopdown_funtype_76(arraytopdown_funtype_76_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_76_t copy_arraytopdown_funtype_76(arraytopdown_funtype_76_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_76(arraytopdown_funtype_76_t x, arraytopdown_funtype_76_t y){
        return false;}

void release_arraytopdown_funtype_77(arraytopdown_funtype_77_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_77_t copy_arraytopdown_funtype_77(arraytopdown_funtype_77_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_77(arraytopdown_funtype_77_t x, arraytopdown_funtype_77_t y){
        return false;}


bool_t f_arraytopdown_closure_78(struct arraytopdown_closure_78_s * closure, arraytopdown__ent_adt_t bvar){
        bool_t result = h_arraytopdown_closure_78(bvar); 
        return result;}

bool_t m_arraytopdown_closure_78(struct arraytopdown_closure_78_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_78(bvar);}

extern bool_t h_arraytopdown_closure_78(arraytopdown__ent_adt_t ivar_19){
        bool_t result;
        result = (bool_t)r_arraytopdown__pushp((arraytopdown__ent_adt_t)ivar_19);

        return result;
}

arraytopdown_closure_78_t new_arraytopdown_closure_78(void){
        static struct arraytopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_78, .mptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_78, .rptr =  (void (*)(arraytopdown_funtype_59_t))&release_arraytopdown_closure_78, .cptr = (arraytopdown_funtype_59_t (*)(arraytopdown_funtype_59_t))&copy_arraytopdown_closure_78};
        arraytopdown_closure_78_t tmp = (arraytopdown_closure_78_t) safe_malloc(sizeof(struct arraytopdown_closure_78_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_78(arraytopdown_funtype_59_t closure){
        arraytopdown_closure_78_t x = (arraytopdown_closure_78_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_78_t copy_arraytopdown_closure_78(arraytopdown_closure_78_t x){
        arraytopdown_closure_78_t y = new_arraytopdown_closure_78();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdown_funtype_59_htbl_t new_htbl = (arraytopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_59_hashentry_t * new_data = (arraytopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdown_closure_79(struct arraytopdown_closure_79_s * closure, arraytopdown__ent_adt_t bvar){
        bool_t result = h_arraytopdown_closure_79(bvar); 
        return result;}

bool_t m_arraytopdown_closure_79(struct arraytopdown_closure_79_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_79(bvar);}

extern bool_t h_arraytopdown_closure_79(arraytopdown__ent_adt_t ivar_11){
        bool_t result;
        result = (bool_t)arraytopdown__good_or_failp((arraytopdown__ent_adt_t)ivar_11);

        return result;
}

arraytopdown_closure_79_t new_arraytopdown_closure_79(void){
        static struct arraytopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_79, .mptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_79, .rptr =  (void (*)(arraytopdown_funtype_59_t))&release_arraytopdown_closure_79, .cptr = (arraytopdown_funtype_59_t (*)(arraytopdown_funtype_59_t))&copy_arraytopdown_closure_79};
        arraytopdown_closure_79_t tmp = (arraytopdown_closure_79_t) safe_malloc(sizeof(struct arraytopdown_closure_79_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_79(arraytopdown_funtype_59_t closure){
        arraytopdown_closure_79_t x = (arraytopdown_closure_79_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_79_t copy_arraytopdown_closure_79(arraytopdown_closure_79_t x){
        arraytopdown_closure_79_t y = new_arraytopdown_closure_79();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdown_funtype_59_htbl_t new_htbl = (arraytopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_59_hashentry_t * new_data = (arraytopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_80(arraytopdown_funtype_80_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_80_t copy_arraytopdown_funtype_80(arraytopdown_funtype_80_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdown_funtype_80(arraytopdown_funtype_80_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdown_funtype_80_hashentry_t data = htbl->data[hashindex];
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

arraytopdown_funtype_80_t dupdate_arraytopdown_funtype_80(arraytopdown_funtype_80_t a, uint64_t i, bool_t v){
        arraytopdown_funtype_80_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdown_funtype_80_htbl_t)safe_malloc(sizeof(struct arraytopdown_funtype_80_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdown_funtype_80_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdown_funtype_80_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdown_funtype_80_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdown_funtype_80_hashentry_t * new_data = (arraytopdown_funtype_80_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdown_funtype_80_hashentry_s));
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
                                new_data[new_loc].key = (uint64_t)data[j].key;
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (bool_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint64_hash(i);
        uint32_t hashindex = lookup_arraytopdown_funtype_80(htbl, i, ihash);
        arraytopdown_funtype_80_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

arraytopdown_funtype_80_t update_arraytopdown_funtype_80(arraytopdown_funtype_80_t a, uint64_t i, bool_t v){
        if (a->count == 1){
                return dupdate_arraytopdown_funtype_80(a, i, v);
            } else {
                arraytopdown_funtype_80_t x = copy_arraytopdown_funtype_80(a);
                a->count--;
                return dupdate_arraytopdown_funtype_80(x, i, v);
            }}

bool_t equal_arraytopdown_funtype_80(arraytopdown_funtype_80_t x, arraytopdown_funtype_80_t y){
        return false;}


bool_t f_arraytopdown_closure_81(struct arraytopdown_closure_81_s * closure, uint64_t bvar){
if (closure->htbl != NULL){
        arraytopdown_funtype_80_htbl_t htbl = closure->htbl;
        uint32_t hash = uint64_hash(bvar);
        uint32_t hashindex = lookup_arraytopdown_funtype_80(htbl, bvar, hash);
        arraytopdown_funtype_80_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_arraytopdown_closure_81(bvar, closure->fvar_1, closure->fvar_2);};

return h_arraytopdown_closure_81(bvar, closure->fvar_1, closure->fvar_2);}

bool_t m_arraytopdown_closure_81(struct arraytopdown_closure_81_s * closure, uint64_t bvar){
        return h_arraytopdown_closure_81(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_arraytopdown_closure_81(uint64_t ivar_5, uint32_t ivar_1, arraytopdown_array_66_t ivar_2){
        bool_t result;
        uint64_t ivar_6;
        ivar_2->count++;
        ivar_6 = (uint64_t)arraytopdown__pushcount((uint32_t)ivar_1, (arraytopdown_array_66_t)ivar_2);
        result = (ivar_6 == ivar_5);

        return result;
}

arraytopdown_closure_81_t new_arraytopdown_closure_81(void){
        static struct arraytopdown_funtype_80_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_80_t, uint64_t))&f_arraytopdown_closure_81, .mptr = (bool_t (*)(arraytopdown_funtype_80_t, uint64_t))&m_arraytopdown_closure_81, .rptr =  (void (*)(arraytopdown_funtype_80_t))&release_arraytopdown_closure_81, .cptr = (arraytopdown_funtype_80_t (*)(arraytopdown_funtype_80_t))&copy_arraytopdown_closure_81};
        arraytopdown_closure_81_t tmp = (arraytopdown_closure_81_t) safe_malloc(sizeof(struct arraytopdown_closure_81_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_81(arraytopdown_funtype_80_t closure){
        arraytopdown_closure_81_t x = (arraytopdown_closure_81_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_66(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_81_t copy_arraytopdown_closure_81(arraytopdown_closure_81_t x){
        arraytopdown_closure_81_t y = new_arraytopdown_closure_81();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_80_htbl_t new_htbl = (arraytopdown_funtype_80_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_80_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_80_hashentry_t * new_data = (arraytopdown_funtype_80_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_80_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_80_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdown_closure_82(struct arraytopdown_closure_82_s * closure, arraytopdown__ent_adt_t bvar){
        bool_t result = h_arraytopdown_closure_82(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_arraytopdown_closure_82(struct arraytopdown_closure_82_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_82(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_arraytopdown_closure_82(arraytopdown__ent_adt_t ivar_7, arraytopdown__lang_spec_t ivar_2, arraytopdown_array_66_t ivar_4, uint32_t ivar_1, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_8;
        uint8_t ivar_9;
        ivar_7->count++;
        ivar_9 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_7);
        uint8_t ivar_10;
        ivar_10 = (uint8_t)255;
        ivar_8 = (ivar_9 >= ivar_10);
        if (ivar_8){ 
             release_arraytopdown__ent_adt(ivar_7);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)0;
             result = (ivar_3 == ivar_16);
} else {
        
             /* entry */ arraytopdown__ent_adt_t ivar_18;
             arraytopdown_funtype_65_t ivar_24;
             uint32_t ivar_32;
             ivar_7->count++;
             ivar_32 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_7);
             ivar_24 = (arraytopdown_funtype_65_t)ivar_4->elems[ivar_32];
             ivar_24->count++;
             uint8_t ivar_33;
             ivar_7->count++;
             ivar_33 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_7);
             ivar_18 = (arraytopdown__ent_adt_t)ivar_24->ftbl->fptr(ivar_24, ivar_33);
             ivar_24->ftbl->rptr(ivar_24);
             bool_t ivar_34;
             arraytopdown_funtype_59_t ivar_39;
             ivar_39 = (arraytopdown_funtype_59_t)arraytopdown__good_push_entryp((uint32_t)ivar_1);
             ivar_18->count++;
             ivar_34 = (bool_t)ivar_39->ftbl->fptr(ivar_39, ivar_18);
             ivar_39->ftbl->rptr(ivar_39);
             if (ivar_34){  
           bool_t ivar_45;
           bool_t ivar_47;
           uint8_t ivar_49;
           ivar_18->count++;
           ivar_49 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_18);
           uint8_t ivar_50;
           ivar_50 = (uint8_t)255;
           ivar_47 = (ivar_49 == ivar_50);
           if (ivar_47){   
           release_arraytopdown__ent_adt(ivar_7);
           ivar_45 = (bool_t) true;
} else {
           
           arraytopdown_funtype_69_t ivar_59;
           ivar_2->count++;
           ivar_4->count++;
           ivar_59 = (arraytopdown_funtype_69_t)arraytopdown__successor((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (arraytopdown_array_66_t)ivar_4);
           ivar_18->count++;
           ivar_45 = (bool_t)ivar_59->ftbl->mptr(ivar_59, ivar_18, ivar_7);
           ivar_59->ftbl->rptr(ivar_59);
};
           if (ivar_45){   
           bool_t ivar_71;
           uint8_t ivar_74;
           ivar_74 = (uint8_t)0;
           ivar_71 = (ivar_3 > ivar_74);
           if (ivar_71){    
            arraytopdown_funtype_59_t ivar_79;
            mpz_ptr_t ivar_95;
            uint8_t ivar_86;
            ivar_86 = (uint8_t)1;
            mpz_mk_set_ui(ivar_95, (uint64_t)ivar_3);
            mpz_sub_ui(ivar_95, ivar_95, (uint64_t)ivar_86);
            uint64_t ivar_91;
            //copying to uint64 from mpz;
            ivar_91 = (uint64_t)mpz_get_ui(ivar_95);
            mpz_clear(ivar_95);
            ivar_2->count++;
            ivar_4->count++;
            ivar_79 = (arraytopdown_funtype_59_t)arraytopdown__good_stackp((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (uint64_t)ivar_91, (arraytopdown_array_66_t)ivar_4);
            result = (bool_t)ivar_79->ftbl->fptr(ivar_79, ivar_18);
            ivar_79->ftbl->rptr(ivar_79);
} else {
           
            release_arraytopdown__ent_adt(ivar_18);
            result = (bool_t) false;
};
} else {
           
           release_arraytopdown__ent_adt(ivar_18);
           result = (bool_t) false;
};
} else {
             
           release_arraytopdown__ent_adt(ivar_18);
           release_arraytopdown__ent_adt(ivar_7);
           result = (bool_t) false;
};
};

        return result;
}

arraytopdown_closure_82_t new_arraytopdown_closure_82(void){
        static struct arraytopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_82, .mptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_82, .rptr =  (void (*)(arraytopdown_funtype_59_t))&release_arraytopdown_closure_82, .cptr = (arraytopdown_funtype_59_t (*)(arraytopdown_funtype_59_t))&copy_arraytopdown_closure_82};
        arraytopdown_closure_82_t tmp = (arraytopdown_closure_82_t) safe_malloc(sizeof(struct arraytopdown_closure_82_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_82(arraytopdown_funtype_59_t closure){
        arraytopdown_closure_82_t x = (arraytopdown_closure_82_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown__lang_spec(x->fvar_1);
         release_arraytopdown_array_66(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_82_t copy_arraytopdown_closure_82(arraytopdown_closure_82_t x){
        arraytopdown_closure_82_t y = new_arraytopdown_closure_82();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = (uint32_t)x->fvar_3;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            arraytopdown_funtype_59_htbl_t new_htbl = (arraytopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_59_hashentry_t * new_data = (arraytopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdown_closure_83(struct arraytopdown_closure_83_s * closure, arraytopdown_record_68_t bvar){
        arraytopdown__ent_adt_t bvar_1;
        bvar_1 = (arraytopdown__ent_adt_t)bvar->project_1;
        bvar->project_1->count++;
        arraytopdown__ent_adt_t bvar_2;
        bvar_2 = (arraytopdown__ent_adt_t)bvar->project_2;
        bvar->project_2->count++;
        release_arraytopdown_record_68(bvar);
        bool_t result = h_arraytopdown_closure_83(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        release_arraytopdown__ent_adt(bvar_1);
        release_arraytopdown__ent_adt(bvar_2);
        return result;}

bool_t m_arraytopdown_closure_83(struct arraytopdown_closure_83_s * closure, arraytopdown__ent_adt_t bvar_1, arraytopdown__ent_adt_t bvar_2){
        return h_arraytopdown_closure_83(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_arraytopdown_closure_83(arraytopdown__ent_adt_t ivar_7, arraytopdown__ent_adt_t ivar_8, arraytopdown_array_66_t ivar_4, arraytopdown__lang_spec_t ivar_2, uint32_t ivar_1, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_9;
        uint8_t ivar_10;
        ivar_8->count++;
        ivar_10 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_8);
        uint8_t ivar_11;
        ivar_11 = (uint8_t)255;
        ivar_9 = (ivar_10 >= ivar_11);
        if (ivar_9){ 
             release_arraytopdown__ent_adt(ivar_7);
             release_arraytopdown__ent_adt(ivar_8);
             result = (bool_t) false;
} else {
        
             bool_t ivar_16;
             ivar_7->count++;
             ivar_8->count++;
             ivar_16 = (bool_t) equal_arraytopdown__ent_adt(ivar_7, ivar_8);
             if (ivar_16){  
           release_arraytopdown__ent_adt(ivar_7);
           release_arraytopdown__ent_adt(ivar_8);
           result = (bool_t) true;
} else {
             
           arraytopdown_funtype_69_t ivar_40;
           mpz_ptr_t ivar_56;
           uint8_t ivar_47;
           ivar_47 = (uint8_t)1;
           mpz_mk_set_ui(ivar_56, (uint64_t)ivar_3);
           mpz_sub_ui(ivar_56, ivar_56, (uint64_t)ivar_47);
           uint64_t ivar_52;
           //copying to uint64 from mpz;
           ivar_52 = (uint64_t)mpz_get_ui(ivar_56);
           mpz_clear(ivar_56);
           ivar_2->count++;
           ivar_4->count++;
           ivar_40 = (arraytopdown_funtype_69_t)arraytopdown__mem_stackp((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (uint64_t)ivar_52, (arraytopdown_array_66_t)ivar_4);
           arraytopdown__ent_adt_t ivar_58;
           arraytopdown_funtype_65_t ivar_28;
           uint32_t ivar_36;
           ivar_8->count++;
           ivar_36 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_8);
           ivar_28 = (arraytopdown_funtype_65_t)ivar_4->elems[ivar_36];
           ivar_28->count++;
           uint8_t ivar_37;
           ivar_37 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_8);
           ivar_58 = (arraytopdown__ent_adt_t)ivar_28->ftbl->fptr(ivar_28, ivar_37);
           ivar_28->ftbl->rptr(ivar_28);
           result = (bool_t)ivar_40->ftbl->mptr(ivar_40, ivar_7, ivar_58);
           ivar_40->ftbl->rptr(ivar_40);
};
};

        return result;
}

arraytopdown_closure_83_t new_arraytopdown_closure_83(void){
        static struct arraytopdown_funtype_69_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_69_t, arraytopdown_record_68_t))&f_arraytopdown_closure_83, .mptr = (bool_t (*)(arraytopdown_funtype_69_t, arraytopdown__ent_adt_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_83, .rptr =  (void (*)(arraytopdown_funtype_69_t))&release_arraytopdown_closure_83, .cptr = (arraytopdown_funtype_69_t (*)(arraytopdown_funtype_69_t))&copy_arraytopdown_closure_83};
        arraytopdown_closure_83_t tmp = (arraytopdown_closure_83_t) safe_malloc(sizeof(struct arraytopdown_closure_83_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_83(arraytopdown_funtype_69_t closure){
        arraytopdown_closure_83_t x = (arraytopdown_closure_83_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_66(x->fvar_1);
         release_arraytopdown__lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_83_t copy_arraytopdown_closure_83(arraytopdown_closure_83_t x){
        arraytopdown_closure_83_t y = new_arraytopdown_closure_83();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = (uint32_t)x->fvar_3;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            arraytopdown_funtype_69_htbl_t new_htbl = (arraytopdown_funtype_69_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_69_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_69_hashentry_t * new_data = (arraytopdown_funtype_69_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_69_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_69_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdown_closure_84(struct arraytopdown_closure_84_s * closure, arraytopdown__ent_adt_t bvar){
        bool_t result = h_arraytopdown_closure_84(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_arraytopdown_closure_84(struct arraytopdown_closure_84_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_84(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_arraytopdown_closure_84(arraytopdown__ent_adt_t ivar_7, arraytopdown_array_66_t ivar_4, arraytopdown__lang_spec_t ivar_2, uint32_t ivar_1, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_8;
        uint8_t ivar_9;
        ivar_7->count++;
        ivar_9 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_7);
        uint8_t ivar_10;
        ivar_10 = (uint8_t)255;
        ivar_8 = (ivar_9 >= ivar_10);
        if (ivar_8){ 
             release_arraytopdown__ent_adt(ivar_7);
             result = (bool_t) true;
} else {
        
             /* rest */ arraytopdown__ent_adt_t ivar_15;
             arraytopdown_funtype_65_t ivar_21;
             uint32_t ivar_29;
             ivar_7->count++;
             ivar_29 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_7);
             ivar_21 = (arraytopdown_funtype_65_t)ivar_4->elems[ivar_29];
             ivar_21->count++;
             uint8_t ivar_30;
             ivar_7->count++;
             ivar_30 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_7);
             ivar_15 = (arraytopdown__ent_adt_t)ivar_21->ftbl->fptr(ivar_21, ivar_30);
             ivar_21->ftbl->rptr(ivar_21);
             bool_t ivar_31;
             bool_t ivar_33;
             arraytopdown_funtype_69_t ivar_38;
             mpz_ptr_t ivar_53;
             uint8_t ivar_45;
             ivar_45 = (uint8_t)1;
             mpz_mk_set_ui(ivar_53, (uint64_t)ivar_3);
             mpz_sub_ui(ivar_53, ivar_53, (uint64_t)ivar_45);
             uint64_t ivar_50;
             //copying to uint64 from mpz;
             ivar_50 = (uint64_t)mpz_get_ui(ivar_53);
             mpz_clear(ivar_53);
             ivar_2->count++;
             ivar_4->count++;
             ivar_38 = (arraytopdown_funtype_69_t)arraytopdown__mem_stackp((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (uint64_t)ivar_50, (arraytopdown_array_66_t)ivar_4);
             ivar_7->count++;
             ivar_33 = (bool_t)ivar_38->ftbl->mptr(ivar_38, ivar_7, ivar_15);
             ivar_38->ftbl->rptr(ivar_38);
             ivar_31 = !ivar_33;
             if (ivar_31){  
           arraytopdown_funtype_59_t ivar_75;
           mpz_ptr_t ivar_91;
           uint8_t ivar_82;
           ivar_82 = (uint8_t)1;
           mpz_mk_set_ui(ivar_91, (uint64_t)ivar_3);
           mpz_sub_ui(ivar_91, ivar_91, (uint64_t)ivar_82);
           uint64_t ivar_87;
           //copying to uint64 from mpz;
           ivar_87 = (uint64_t)mpz_get_ui(ivar_91);
           mpz_clear(ivar_91);
           ivar_2->count++;
           ivar_4->count++;
           ivar_75 = (arraytopdown_funtype_59_t)arraytopdown__fine_stackp((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (uint64_t)ivar_87, (arraytopdown_array_66_t)ivar_4);
           arraytopdown__ent_adt_t ivar_92;
           arraytopdown_funtype_65_t ivar_63;
           uint32_t ivar_71;
           ivar_7->count++;
           ivar_71 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_7);
           ivar_63 = (arraytopdown_funtype_65_t)ivar_4->elems[ivar_71];
           ivar_63->count++;
           uint8_t ivar_72;
           ivar_72 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_7);
           ivar_92 = (arraytopdown__ent_adt_t)ivar_63->ftbl->fptr(ivar_63, ivar_72);
           ivar_63->ftbl->rptr(ivar_63);
           result = (bool_t)ivar_75->ftbl->fptr(ivar_75, ivar_92);
           ivar_75->ftbl->rptr(ivar_75);
} else {
             
           release_arraytopdown__ent_adt(ivar_7);
           result = (bool_t) false;
};
};

        return result;
}

arraytopdown_closure_84_t new_arraytopdown_closure_84(void){
        static struct arraytopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_84, .mptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_84, .rptr =  (void (*)(arraytopdown_funtype_59_t))&release_arraytopdown_closure_84, .cptr = (arraytopdown_funtype_59_t (*)(arraytopdown_funtype_59_t))&copy_arraytopdown_closure_84};
        arraytopdown_closure_84_t tmp = (arraytopdown_closure_84_t) safe_malloc(sizeof(struct arraytopdown_closure_84_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_84(arraytopdown_funtype_59_t closure){
        arraytopdown_closure_84_t x = (arraytopdown_closure_84_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_66(x->fvar_1);
         release_arraytopdown__lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_84_t copy_arraytopdown_closure_84(arraytopdown_closure_84_t x){
        arraytopdown_closure_84_t y = new_arraytopdown_closure_84();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = (uint32_t)x->fvar_3;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            arraytopdown_funtype_59_htbl_t new_htbl = (arraytopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_59_hashentry_t * new_data = (arraytopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown_record_85_t new_arraytopdown_record_85(void){
        arraytopdown_record_85_t tmp = (arraytopdown_record_85_t) safe_malloc(sizeof(struct arraytopdown_record_85_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_85(arraytopdown_record_85_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_66(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_85_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_85((arraytopdown_record_85_t)x);
}

arraytopdown_record_85_t copy_arraytopdown_record_85(arraytopdown_record_85_t x){
        arraytopdown_record_85_t y = new_arraytopdown_record_85();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = (uint64_t)x->project_4;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_85(arraytopdown_record_85_t x, arraytopdown_record_85_t y){
        bool_t tmp = true;
        tmp = tmp && equal_arraytopdown_array_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && x->project_4 == y->project_4;
        return tmp;}

bool_t equal_arraytopdown_record_85_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_85_t T){
        return equal_arraytopdown_record_85((arraytopdown_record_85_t)x, (arraytopdown_record_85_t)y);
}

actual_arraytopdown_record_85_t actual_arraytopdown_record_85(){
        actual_arraytopdown_record_85_t new = (actual_arraytopdown_record_85_t)safe_malloc(sizeof(struct actual_arraytopdown_record_85_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_85_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_85_ptr);
 

 
        return new;
 };

arraytopdown_record_85_t update_arraytopdown_record_85_project_1(arraytopdown_record_85_t x, arraytopdown_array_66_t v){
        arraytopdown_record_85_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_arraytopdown_array_66(x->project_1);};}
        else {y = copy_arraytopdown_record_85(x); x->count--; y->project_1->count--;};
        y->project_1 = (arraytopdown_array_66_t)v;
        return y;}

arraytopdown_record_85_t update_arraytopdown_record_85_project_2(arraytopdown_record_85_t x, uint32_t v){
        arraytopdown_record_85_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_85(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

arraytopdown_record_85_t update_arraytopdown_record_85_project_3(arraytopdown_record_85_t x, uint8_t v){
        arraytopdown_record_85_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_85(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

arraytopdown_record_85_t update_arraytopdown_record_85_project_4(arraytopdown_record_85_t x, uint64_t v){
        arraytopdown_record_85_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_85(x); x->count--;};
        y->project_4 = (uint64_t)v;
        return y;}



void release_arraytopdown_funtype_86(arraytopdown_funtype_86_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_86_t copy_arraytopdown_funtype_86(arraytopdown_funtype_86_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_86(arraytopdown_funtype_86_t x, arraytopdown_funtype_86_t y){
        return false;}


bool_t f_arraytopdown_closure_87(struct arraytopdown_closure_87_s * closure, arraytopdown_record_85_t bvar){
        arraytopdown_array_66_t bvar_1;
        bvar_1 = (arraytopdown_array_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        uint64_t bvar_4;
        bvar_4 = (uint64_t)bvar->project_4;
        release_arraytopdown_record_85(bvar);
        bool_t result = h_arraytopdown_closure_87(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_arraytopdown_array_66(bvar_1);
        return result;}

bool_t m_arraytopdown_closure_87(struct arraytopdown_closure_87_s * closure, arraytopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4){
        return h_arraytopdown_closure_87(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_arraytopdown_closure_87(arraytopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, uint64_t ivar_10, bytestrings__bytestring_t ivar_3, uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2){
        bool_t result;
        arraytopdown__peg_adt_t ivar_11;
        ivar_11 = (arraytopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_9);
        bool_t ivar_46;
        ivar_11->count++;
        ivar_46 = (bool_t)r_arraytopdown__anyp((arraytopdown__peg_adt_t)ivar_11);
        if (ivar_46){ 
             release_arraytopdown_array_66(ivar_6);
             arraytopdown_funtype_29_t ivar_16;
             ivar_16 = (arraytopdown_funtype_29_t)arraytopdown__peg_adt_p((arraytopdown__peg_adt_t)ivar_11);
             bool_t ivar_22;
             bool_t ivar_24;
             ivar_24 = (ivar_8 == ivar_1);
             if (ivar_24){  
           release_arraytopdown_funtype_29(ivar_16);
           ivar_22 = (bool_t) true;
} else {
             
           bool_t ivar_29;
           uint8_t ivar_39;
           ivar_3->count++;
           ivar_39 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_8);
           ivar_29 = (bool_t)ivar_16->ftbl->fptr(ivar_16, ivar_39);
           ivar_16->ftbl->rptr(ivar_16);
           ivar_22 = !ivar_29;
};
             if (ivar_22){  
           uint8_t ivar_43;
           ivar_43 = (uint8_t)0;
           result = (ivar_10 == ivar_43);
} else {
             
           result = (bool_t) false;
};
} else {
        
             bool_t ivar_74;
             ivar_11->count++;
             ivar_74 = (bool_t)r_arraytopdown__terminalp((arraytopdown__peg_adt_t)ivar_11);
             if (ivar_74){  
           release_arraytopdown_array_66(ivar_6);
           uint8_t ivar_50;
           ivar_50 = (uint8_t)arraytopdown__peg_adt_a((arraytopdown__peg_adt_t)ivar_11);
           bool_t ivar_54;
           bool_t ivar_56;
           ivar_56 = (ivar_8 == ivar_1);
           if (ivar_56){   
           ivar_54 = (bool_t) true;
} else {
           
           uint8_t ivar_62;
           ivar_3->count++;
           ivar_62 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_8);
           ivar_54 = (ivar_50 != ivar_62);
};
           if (ivar_54){   
           uint8_t ivar_71;
           ivar_71 = (uint8_t)0;
           result = (ivar_10 == ivar_71);
} else {
           
           result = (bool_t) false;
};
} else {
             
           bool_t ivar_221;
           ivar_11->count++;
           ivar_221 = (bool_t)r_arraytopdown__concatp((arraytopdown__peg_adt_t)ivar_11);
           if (ivar_221){   
           uint8_t ivar_78;
           ivar_11->count++;
           ivar_78 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_11);
           uint8_t ivar_79;
           ivar_79 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_11);
           bool_t ivar_86;
           bool_t ivar_88;
           arraytopdown__ent_adt_t ivar_101;
           arraytopdown_funtype_65_t ivar_93;
           ivar_93 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
           ivar_93->count++;
           ivar_101 = (arraytopdown__ent_adt_t)ivar_93->ftbl->fptr(ivar_93, ivar_78);
           ivar_93->ftbl->rptr(ivar_93);
           ivar_88 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_101);
           if (ivar_88){    
            mpz_ptr_t ivar_103;
            uint8_t ivar_104;
            ivar_104 = (uint8_t)1;
            uint64_t ivar_105;
            arraytopdown__ent_adt_t ivar_117;
            arraytopdown_funtype_65_t ivar_109;
            ivar_109 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
            ivar_109->count++;
            ivar_117 = (arraytopdown__ent_adt_t)ivar_109->ftbl->fptr(ivar_109, ivar_78);
            ivar_109->ftbl->rptr(ivar_109);
            ivar_105 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_117);
            mpz_mk_set_ui(ivar_103, (uint64_t)ivar_104);
            mpz_add_ui(ivar_103, ivar_103, (uint64_t)ivar_105);
            int64_t tmp6630 = mpz_cmp_ui(ivar_103, ivar_10);
            ivar_86 = (tmp6630 == 0);
} else {
           
            ivar_86 = (bool_t) false;
};
           if (ivar_86){    
            release_arraytopdown_array_66(ivar_6);
            result = (bool_t) true;
} else {
           
            bool_t ivar_121;
            arraytopdown__ent_adt_t ivar_134;
            arraytopdown_funtype_65_t ivar_126;
            ivar_126 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
            ivar_126->count++;
            ivar_134 = (arraytopdown__ent_adt_t)ivar_126->ftbl->fptr(ivar_126, ivar_78);
            ivar_126->ftbl->rptr(ivar_126);
            ivar_121 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_134);
            if (ivar_121){     
             bool_t ivar_135;
             arraytopdown__ent_adt_t ivar_163;
             arraytopdown_funtype_65_t ivar_140;
             uint32_t ivar_160;
             uint32_t ivar_143;
             arraytopdown__ent_adt_t ivar_155;
             arraytopdown_funtype_65_t ivar_147;
             ivar_147 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
             ivar_147->count++;
             ivar_155 = (arraytopdown__ent_adt_t)ivar_147->ftbl->fptr(ivar_147, ivar_78);
             ivar_147->ftbl->rptr(ivar_147);
             ivar_143 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_155);
             ivar_160 = (uint32_t)(ivar_8 + ivar_143);
             ivar_140 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_160];
             ivar_140->count++;
             ivar_163 = (arraytopdown__ent_adt_t)ivar_140->ftbl->fptr(ivar_140, ivar_79);
             ivar_140->ftbl->rptr(ivar_140);
             ivar_135 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_163);
             if (ivar_135){      
              mpz_ptr_t ivar_165;
              uint8_t ivar_166;
              ivar_166 = (uint8_t)1;
              mpq_ptr_t ivar_167;
              uint64_t ivar_215;
              arraytopdown__ent_adt_t ivar_181;
              arraytopdown_funtype_65_t ivar_173;
              ivar_173 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
              ivar_173->count++;
              ivar_181 = (arraytopdown__ent_adt_t)ivar_173->ftbl->fptr(ivar_173, ivar_78);
              ivar_173->ftbl->rptr(ivar_173);
              ivar_215 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_181);
              mpq_ptr_t ivar_210;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_210, ivar_215);
              uint64_t ivar_214;
              arraytopdown__ent_adt_t ivar_208;
              arraytopdown_funtype_65_t ivar_185;
              uint32_t ivar_205;
              uint32_t ivar_188;
              arraytopdown__ent_adt_t ivar_200;
              arraytopdown_funtype_65_t ivar_192;
              ivar_192 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
              ivar_192->count++;
              ivar_200 = (arraytopdown__ent_adt_t)ivar_192->ftbl->fptr(ivar_192, ivar_78);
              ivar_192->ftbl->rptr(ivar_192);
              ivar_188 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_200);
              ivar_205 = (uint32_t)(ivar_8 + ivar_188);
              ivar_185 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_205];
              ivar_185->count++;
              release_arraytopdown_array_66(ivar_6);
              ivar_208 = (arraytopdown__ent_adt_t)ivar_185->ftbl->fptr(ivar_185, ivar_79);
              ivar_185->ftbl->rptr(ivar_185);
              ivar_214 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_208);
              mpq_ptr_t ivar_211;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_211, ivar_214);
              ivar_167 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_210, (mpq_ptr_t)ivar_211);
              mpz_mk_set_q(ivar_165, ivar_167);
              mpz_add_ui(ivar_165, ivar_165, ivar_166);
              int64_t tmp6631 = mpz_cmp_ui(ivar_165, ivar_10);
              result = (tmp6631 == 0);
} else {
             
              release_arraytopdown_array_66(ivar_6);
              result = (bool_t) false;
};
} else {
            
             release_arraytopdown_array_66(ivar_6);
             result = (bool_t) false;
};
};
} else {
           
           bool_t ivar_302;
           ivar_11->count++;
           ivar_302 = (bool_t)r_arraytopdown__orp((arraytopdown__peg_adt_t)ivar_11);
           if (ivar_302){    
            uint8_t ivar_225;
            ivar_11->count++;
            ivar_225 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_11);
            uint8_t ivar_226;
            ivar_226 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_11);
            bool_t ivar_233;
            arraytopdown__ent_adt_t ivar_246;
            arraytopdown_funtype_65_t ivar_238;
            ivar_238 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
            ivar_238->count++;
            ivar_246 = (arraytopdown__ent_adt_t)ivar_238->ftbl->fptr(ivar_238, ivar_225);
            ivar_238->ftbl->rptr(ivar_238);
            ivar_233 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_246);
            if (ivar_233){     
             bool_t ivar_247;
             arraytopdown__ent_adt_t ivar_260;
             arraytopdown_funtype_65_t ivar_252;
             ivar_252 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
             ivar_252->count++;
             ivar_260 = (arraytopdown__ent_adt_t)ivar_252->ftbl->fptr(ivar_252, ivar_226);
             ivar_252->ftbl->rptr(ivar_252);
             ivar_247 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_260);
             if (ivar_247){      
              mpz_ptr_t ivar_262;
              uint8_t ivar_263;
              ivar_263 = (uint8_t)1;
              mpq_ptr_t ivar_264;
              uint64_t ivar_297;
              arraytopdown__ent_adt_t ivar_278;
              arraytopdown_funtype_65_t ivar_270;
              ivar_270 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
              ivar_270->count++;
              ivar_278 = (arraytopdown__ent_adt_t)ivar_270->ftbl->fptr(ivar_270, ivar_225);
              ivar_270->ftbl->rptr(ivar_270);
              ivar_297 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_278);
              mpq_ptr_t ivar_292;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_292, ivar_297);
              uint64_t ivar_296;
              arraytopdown__ent_adt_t ivar_290;
              arraytopdown_funtype_65_t ivar_282;
              ivar_282 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
              ivar_282->count++;
              release_arraytopdown_array_66(ivar_6);
              ivar_290 = (arraytopdown__ent_adt_t)ivar_282->ftbl->fptr(ivar_282, ivar_226);
              ivar_282->ftbl->rptr(ivar_282);
              ivar_296 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_290);
              mpq_ptr_t ivar_293;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_293, ivar_296);
              ivar_264 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_292, (mpq_ptr_t)ivar_293);
              mpz_mk_set_q(ivar_262, ivar_264);
              mpz_add_ui(ivar_262, ivar_262, ivar_263);
              int64_t tmp6632 = mpz_cmp_ui(ivar_262, ivar_10);
              result = (tmp6632 == 0);
} else {
             
              release_arraytopdown_array_66(ivar_6);
              result = (bool_t) false;
};
} else {
            
             release_arraytopdown_array_66(ivar_6);
             result = (bool_t) false;
};
} else {
           
            bool_t ivar_343;
            ivar_11->count++;
            ivar_343 = (bool_t)r_arraytopdown__andp((arraytopdown__peg_adt_t)ivar_11);
            if (ivar_343){     
             uint8_t ivar_306;
             ivar_306 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_11);
             bool_t ivar_310;
             arraytopdown__ent_adt_t ivar_323;
             arraytopdown_funtype_65_t ivar_315;
             ivar_315 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
             ivar_315->count++;
             ivar_323 = (arraytopdown__ent_adt_t)ivar_315->ftbl->fptr(ivar_315, ivar_306);
             ivar_315->ftbl->rptr(ivar_315);
             ivar_310 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_323);
             if (ivar_310){      
              mpz_ptr_t ivar_325;
              uint8_t ivar_326;
              ivar_326 = (uint8_t)1;
              uint64_t ivar_327;
              arraytopdown__ent_adt_t ivar_339;
              arraytopdown_funtype_65_t ivar_331;
              ivar_331 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
              ivar_331->count++;
              release_arraytopdown_array_66(ivar_6);
              ivar_339 = (arraytopdown__ent_adt_t)ivar_331->ftbl->fptr(ivar_331, ivar_306);
              ivar_331->ftbl->rptr(ivar_331);
              ivar_327 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_339);
              mpz_mk_set_ui(ivar_325, (uint64_t)ivar_326);
              mpz_add_ui(ivar_325, ivar_325, (uint64_t)ivar_327);
              int64_t tmp6633 = mpz_cmp_ui(ivar_325, ivar_10);
              result = (tmp6633 == 0);
} else {
             
              release_arraytopdown_array_66(ivar_6);
              result = (bool_t) false;
};
} else {
            
             bool_t ivar_384;
             ivar_11->count++;
             ivar_384 = (bool_t)r_arraytopdown__notp((arraytopdown__peg_adt_t)ivar_11);
             if (ivar_384){      
              uint8_t ivar_347;
              ivar_347 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_11);
              bool_t ivar_351;
              arraytopdown__ent_adt_t ivar_364;
              arraytopdown_funtype_65_t ivar_356;
              ivar_356 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
              ivar_356->count++;
              ivar_364 = (arraytopdown__ent_adt_t)ivar_356->ftbl->fptr(ivar_356, ivar_347);
              ivar_356->ftbl->rptr(ivar_356);
              ivar_351 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_364);
              if (ivar_351){       
               mpz_ptr_t ivar_366;
               uint8_t ivar_367;
               ivar_367 = (uint8_t)1;
               uint64_t ivar_368;
               arraytopdown__ent_adt_t ivar_380;
               arraytopdown_funtype_65_t ivar_372;
               ivar_372 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
               ivar_372->count++;
               release_arraytopdown_array_66(ivar_6);
               ivar_380 = (arraytopdown__ent_adt_t)ivar_372->ftbl->fptr(ivar_372, ivar_347);
               ivar_372->ftbl->rptr(ivar_372);
               ivar_368 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_380);
               mpz_mk_set_ui(ivar_366, (uint64_t)ivar_367);
               mpz_add_ui(ivar_366, ivar_366, (uint64_t)ivar_368);
               int64_t tmp6634 = mpz_cmp_ui(ivar_366, ivar_10);
               result = (tmp6634 == 0);
} else {
              
               release_arraytopdown_array_66(ivar_6);
               result = (bool_t) false;
};
} else {
             
              release_arraytopdown_array_66(ivar_6);
              bool_t ivar_391;
              ivar_391 = (bool_t)r_arraytopdown__failurep((arraytopdown__peg_adt_t)ivar_11);
              if (ivar_391){       
               uint8_t ivar_389;
               ivar_389 = (uint8_t)0;
               result = (ivar_10 == ivar_389);
} else {
              
               result = (bool_t) false;
};
};
};
};
};
};
};

        return result;
}

arraytopdown_closure_87_t new_arraytopdown_closure_87(void){
        static struct arraytopdown_funtype_86_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_86_t, arraytopdown_record_85_t))&f_arraytopdown_closure_87, .mptr = (bool_t (*)(arraytopdown_funtype_86_t, arraytopdown_array_66_t, uint32_t, uint8_t, uint64_t))&m_arraytopdown_closure_87, .rptr =  (void (*)(arraytopdown_funtype_86_t))&release_arraytopdown_closure_87, .cptr = (arraytopdown_funtype_86_t (*)(arraytopdown_funtype_86_t))&copy_arraytopdown_closure_87};
        arraytopdown_closure_87_t tmp = (arraytopdown_closure_87_t) safe_malloc(sizeof(struct arraytopdown_closure_87_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_87(arraytopdown_funtype_86_t closure){
        arraytopdown_closure_87_t x = (arraytopdown_closure_87_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->fvar_1);
         release_arraytopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_87_t copy_arraytopdown_closure_87(arraytopdown_closure_87_t x){
        arraytopdown_closure_87_t y = new_arraytopdown_closure_87();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_86_htbl_t new_htbl = (arraytopdown_funtype_86_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_86_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_86_hashentry_t * new_data = (arraytopdown_funtype_86_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_86_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_86_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown_record_88_t new_arraytopdown_record_88(void){
        arraytopdown_record_88_t tmp = (arraytopdown_record_88_t) safe_malloc(sizeof(struct arraytopdown_record_88_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_88(arraytopdown_record_88_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_66(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_88_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_88((arraytopdown_record_88_t)x);
}

arraytopdown_record_88_t copy_arraytopdown_record_88(arraytopdown_record_88_t x){
        arraytopdown_record_88_t y = new_arraytopdown_record_88();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_88(arraytopdown_record_88_t x, arraytopdown_record_88_t y){
        bool_t tmp = true;
        tmp = tmp && equal_arraytopdown_array_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

bool_t equal_arraytopdown_record_88_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_88_t T){
        return equal_arraytopdown_record_88((arraytopdown_record_88_t)x, (arraytopdown_record_88_t)y);
}

actual_arraytopdown_record_88_t actual_arraytopdown_record_88(){
        actual_arraytopdown_record_88_t new = (actual_arraytopdown_record_88_t)safe_malloc(sizeof(struct actual_arraytopdown_record_88_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_88_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_88_ptr);
 

 
        return new;
 };

arraytopdown_record_88_t update_arraytopdown_record_88_project_1(arraytopdown_record_88_t x, arraytopdown_array_66_t v){
        arraytopdown_record_88_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_arraytopdown_array_66(x->project_1);};}
        else {y = copy_arraytopdown_record_88(x); x->count--; y->project_1->count--;};
        y->project_1 = (arraytopdown_array_66_t)v;
        return y;}

arraytopdown_record_88_t update_arraytopdown_record_88_project_2(arraytopdown_record_88_t x, uint32_t v){
        arraytopdown_record_88_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_88(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

arraytopdown_record_88_t update_arraytopdown_record_88_project_3(arraytopdown_record_88_t x, uint8_t v){
        arraytopdown_record_88_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_88(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}



void release_arraytopdown_funtype_89(arraytopdown_funtype_89_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_89_t copy_arraytopdown_funtype_89(arraytopdown_funtype_89_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_89(arraytopdown_funtype_89_t x, arraytopdown_funtype_89_t y){
        return false;}


bool_t f_arraytopdown_closure_90(struct arraytopdown_closure_90_s * closure, arraytopdown_record_88_t bvar){
        arraytopdown_array_66_t bvar_1;
        bvar_1 = (arraytopdown_array_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        release_arraytopdown_record_88(bvar);
        bool_t result = h_arraytopdown_closure_90(bvar_1, bvar_2, bvar_3, closure->fvar_1); 
        release_arraytopdown_array_66(bvar_1);
        return result;}

bool_t m_arraytopdown_closure_90(struct arraytopdown_closure_90_s * closure, arraytopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3){
        return h_arraytopdown_closure_90(bvar_1, bvar_2, bvar_3, closure->fvar_1);}

extern bool_t h_arraytopdown_closure_90(arraytopdown_array_66_t ivar_5, uint32_t ivar_7, uint8_t ivar_8, arraytopdown__lang_spec_t ivar_2){
        bool_t result;
        arraytopdown__peg_adt_t ivar_9;
        ivar_9 = (arraytopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_8);
        bool_t ivar_79;
        ivar_9->count++;
        ivar_79 = (bool_t)r_arraytopdown__concatp((arraytopdown__peg_adt_t)ivar_9);
        if (ivar_79){ 
             uint8_t ivar_14;
             ivar_9->count++;
             ivar_14 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_9);
             uint8_t ivar_15;
             ivar_15 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_9);
             bool_t ivar_22;
             arraytopdown__ent_adt_t ivar_35;
             arraytopdown_funtype_65_t ivar_27;
             ivar_27 = (arraytopdown_funtype_65_t)ivar_5->elems[ivar_7];
             ivar_27->count++;
             ivar_35 = (arraytopdown__ent_adt_t)ivar_27->ftbl->fptr(ivar_27, ivar_14);
             ivar_27->ftbl->rptr(ivar_27);
             ivar_22 = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_35);
             if (ivar_22){  
           release_arraytopdown_array_66(ivar_5);
           result = (bool_t) true;
} else {
             
           bool_t ivar_36;
           arraytopdown__ent_adt_t ivar_49;
           arraytopdown_funtype_65_t ivar_41;
           ivar_41 = (arraytopdown_funtype_65_t)ivar_5->elems[ivar_7];
           ivar_41->count++;
           ivar_49 = (arraytopdown__ent_adt_t)ivar_41->ftbl->fptr(ivar_41, ivar_14);
           ivar_41->ftbl->rptr(ivar_41);
           ivar_36 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_49);
           if (ivar_36){   
           arraytopdown__ent_adt_t ivar_76;
           arraytopdown_funtype_65_t ivar_53;
           uint32_t ivar_73;
           uint32_t ivar_56;
           arraytopdown__ent_adt_t ivar_68;
           arraytopdown_funtype_65_t ivar_60;
           ivar_60 = (arraytopdown_funtype_65_t)ivar_5->elems[ivar_7];
           ivar_60->count++;
           ivar_68 = (arraytopdown__ent_adt_t)ivar_60->ftbl->fptr(ivar_60, ivar_14);
           ivar_60->ftbl->rptr(ivar_60);
           ivar_56 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_68);
           ivar_73 = (uint32_t)(ivar_7 + ivar_56);
           ivar_53 = (arraytopdown_funtype_65_t)ivar_5->elems[ivar_73];
           ivar_53->count++;
           release_arraytopdown_array_66(ivar_5);
           ivar_76 = (arraytopdown__ent_adt_t)ivar_53->ftbl->fptr(ivar_53, ivar_15);
           ivar_53->ftbl->rptr(ivar_53);
           result = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_76);
} else {
           
           release_arraytopdown_array_66(ivar_5);
           result = (bool_t) false;
};
};
} else {
        
             bool_t ivar_133;
             ivar_9->count++;
             ivar_133 = (bool_t)r_arraytopdown__orp((arraytopdown__peg_adt_t)ivar_9);
             if (ivar_133){  
           uint8_t ivar_83;
           ivar_9->count++;
           ivar_83 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_9);
           uint8_t ivar_84;
           ivar_84 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_9);
           bool_t ivar_91;
           arraytopdown__ent_adt_t ivar_104;
           arraytopdown_funtype_65_t ivar_96;
           ivar_96 = (arraytopdown_funtype_65_t)ivar_5->elems[ivar_7];
           ivar_96->count++;
           ivar_104 = (arraytopdown__ent_adt_t)ivar_96->ftbl->fptr(ivar_96, ivar_83);
           ivar_96->ftbl->rptr(ivar_96);
           ivar_91 = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_104);
           if (ivar_91){   
           release_arraytopdown_array_66(ivar_5);
           result = (bool_t) true;
} else {
           
           bool_t ivar_105;
           arraytopdown__ent_adt_t ivar_118;
           arraytopdown_funtype_65_t ivar_110;
           ivar_110 = (arraytopdown_funtype_65_t)ivar_5->elems[ivar_7];
           ivar_110->count++;
           ivar_118 = (arraytopdown__ent_adt_t)ivar_110->ftbl->fptr(ivar_110, ivar_83);
           ivar_110->ftbl->rptr(ivar_110);
           ivar_105 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_118);
           if (ivar_105){    
            arraytopdown__ent_adt_t ivar_130;
            arraytopdown_funtype_65_t ivar_122;
            ivar_122 = (arraytopdown_funtype_65_t)ivar_5->elems[ivar_7];
            ivar_122->count++;
            release_arraytopdown_array_66(ivar_5);
            ivar_130 = (arraytopdown__ent_adt_t)ivar_122->ftbl->fptr(ivar_122, ivar_84);
            ivar_122->ftbl->rptr(ivar_122);
            result = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_130);
} else {
           
            release_arraytopdown_array_66(ivar_5);
            result = (bool_t) false;
};
};
} else {
             
           bool_t ivar_153;
           ivar_9->count++;
           ivar_153 = (bool_t)r_arraytopdown__andp((arraytopdown__peg_adt_t)ivar_9);
           if (ivar_153){   
           uint8_t ivar_137;
           ivar_137 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_9);
           arraytopdown__ent_adt_t ivar_152;
           arraytopdown_funtype_65_t ivar_144;
           ivar_144 = (arraytopdown_funtype_65_t)ivar_5->elems[ivar_7];
           ivar_144->count++;
           release_arraytopdown_array_66(ivar_5);
           ivar_152 = (arraytopdown__ent_adt_t)ivar_144->ftbl->fptr(ivar_144, ivar_137);
           ivar_144->ftbl->rptr(ivar_144);
           result = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_152);
} else {
           
           bool_t ivar_173;
           ivar_9->count++;
           ivar_173 = (bool_t)r_arraytopdown__notp((arraytopdown__peg_adt_t)ivar_9);
           if (ivar_173){    
            uint8_t ivar_157;
            ivar_157 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_9);
            arraytopdown__ent_adt_t ivar_172;
            arraytopdown_funtype_65_t ivar_164;
            ivar_164 = (arraytopdown_funtype_65_t)ivar_5->elems[ivar_7];
            ivar_164->count++;
            release_arraytopdown_array_66(ivar_5);
            ivar_172 = (arraytopdown__ent_adt_t)ivar_164->ftbl->fptr(ivar_164, ivar_157);
            ivar_164->ftbl->rptr(ivar_164);
            result = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_172);
} else {
           
            release_arraytopdown__peg_adt(ivar_9);
            release_arraytopdown_array_66(ivar_5);
            result = (bool_t) false;
};
};
};
};

        return result;
}

arraytopdown_closure_90_t new_arraytopdown_closure_90(void){
        static struct arraytopdown_funtype_89_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_89_t, arraytopdown_record_88_t))&f_arraytopdown_closure_90, .mptr = (bool_t (*)(arraytopdown_funtype_89_t, arraytopdown_array_66_t, uint32_t, uint8_t))&m_arraytopdown_closure_90, .rptr =  (void (*)(arraytopdown_funtype_89_t))&release_arraytopdown_closure_90, .cptr = (arraytopdown_funtype_89_t (*)(arraytopdown_funtype_89_t))&copy_arraytopdown_closure_90};
        arraytopdown_closure_90_t tmp = (arraytopdown_closure_90_t) safe_malloc(sizeof(struct arraytopdown_closure_90_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_90(arraytopdown_funtype_89_t closure){
        arraytopdown_closure_90_t x = (arraytopdown_closure_90_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown__lang_spec(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_90_t copy_arraytopdown_closure_90(arraytopdown_closure_90_t x){
        arraytopdown_closure_90_t y = new_arraytopdown_closure_90();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_89_htbl_t new_htbl = (arraytopdown_funtype_89_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_89_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_89_hashentry_t * new_data = (arraytopdown_funtype_89_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_89_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_89_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown_record_91_t new_arraytopdown_record_91(void){
        arraytopdown_record_91_t tmp = (arraytopdown_record_91_t) safe_malloc(sizeof(struct arraytopdown_record_91_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_91(arraytopdown_record_91_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_66(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_91_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_91((arraytopdown_record_91_t)x);
}

arraytopdown_record_91_t copy_arraytopdown_record_91(arraytopdown_record_91_t x){
        arraytopdown_record_91_t y = new_arraytopdown_record_91();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = (uint64_t)x->project_4;
        mpz_set(y->project_5, x->project_5);
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_91(arraytopdown_record_91_t x, arraytopdown_record_91_t y){
        bool_t tmp = true;
        tmp = tmp && equal_arraytopdown_array_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && x->project_4 == y->project_4;
        tmp = tmp && x->project_5 == y->project_5;
        return tmp;}

bool_t equal_arraytopdown_record_91_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_91_t T){
        return equal_arraytopdown_record_91((arraytopdown_record_91_t)x, (arraytopdown_record_91_t)y);
}

actual_arraytopdown_record_91_t actual_arraytopdown_record_91(){
        actual_arraytopdown_record_91_t new = (actual_arraytopdown_record_91_t)safe_malloc(sizeof(struct actual_arraytopdown_record_91_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_91_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_91_ptr);
 

 
        return new;
 };

arraytopdown_record_91_t update_arraytopdown_record_91_project_1(arraytopdown_record_91_t x, arraytopdown_array_66_t v){
        arraytopdown_record_91_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_arraytopdown_array_66(x->project_1);};}
        else {y = copy_arraytopdown_record_91(x); x->count--; y->project_1->count--;};
        y->project_1 = (arraytopdown_array_66_t)v;
        return y;}

arraytopdown_record_91_t update_arraytopdown_record_91_project_2(arraytopdown_record_91_t x, uint32_t v){
        arraytopdown_record_91_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_91(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

arraytopdown_record_91_t update_arraytopdown_record_91_project_3(arraytopdown_record_91_t x, uint8_t v){
        arraytopdown_record_91_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_91(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

arraytopdown_record_91_t update_arraytopdown_record_91_project_4(arraytopdown_record_91_t x, uint64_t v){
        arraytopdown_record_91_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_91(x); x->count--;};
        y->project_4 = (uint64_t)v;
        return y;}

arraytopdown_record_91_t update_arraytopdown_record_91_project_5(arraytopdown_record_91_t x, mpz_ptr_t v){
        arraytopdown_record_91_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_91(x); x->count--;};
        mpz_set(y->project_5, v);
        return y;}



void release_arraytopdown_funtype_92(arraytopdown_funtype_92_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_92_t copy_arraytopdown_funtype_92(arraytopdown_funtype_92_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_92(arraytopdown_funtype_92_t x, arraytopdown_funtype_92_t y){
        return false;}


bool_t f_arraytopdown_closure_93(struct arraytopdown_closure_93_s * closure, arraytopdown_record_91_t bvar){
        arraytopdown_array_66_t bvar_1;
        bvar_1 = (arraytopdown_array_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        uint64_t bvar_4;
        bvar_4 = (uint64_t)bvar->project_4;
        mpz_t bvar_5;
        mpz_init(bvar_5);
        mpz_set(bvar_5, bvar->project_5);
        release_arraytopdown_record_91(bvar);
        bool_t result = h_arraytopdown_closure_93(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2); 
        release_arraytopdown_array_66(bvar_1);
        release_mpz(bvar_5);
        return result;}

bool_t m_arraytopdown_closure_93(struct arraytopdown_closure_93_s * closure, arraytopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4, mpz_ptr_t bvar_5){
        return h_arraytopdown_closure_93(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2);}

extern bool_t h_arraytopdown_closure_93(arraytopdown_array_66_t ivar_9, uint32_t ivar_11, uint8_t ivar_12, uint64_t ivar_13, mpz_ptr_t ivar_14, bytestrings__bytestring_t ivar_3, arraytopdown__lang_spec_t ivar_2){
        bool_t result;
        arraytopdown__peg_adt_t ivar_18;
        ivar_18 = (arraytopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_12);
        bool_t ivar_32;
        ivar_18->count++;
        ivar_32 = (bool_t)r_arraytopdown__epsilonp((arraytopdown__peg_adt_t)ivar_18);
        if (ivar_32){ 
             release_arraytopdown_array_66(ivar_9);
             release_arraytopdown__peg_adt(ivar_18);
             bool_t ivar_23;
             uint8_t ivar_26;
             ivar_26 = (uint8_t)0;
             int64_t tmp6676 = mpz_cmp_ui(ivar_14, ivar_26);
             ivar_23 = (tmp6676 == 0);
             if (ivar_23){  
           uint8_t ivar_29;
           ivar_29 = (uint8_t)0;
           result = (ivar_13 == ivar_29);
} else {
             
           result = (bool_t) false;
};
} else {
        
             bool_t ivar_64;
             ivar_18->count++;
             ivar_64 = (bool_t)r_arraytopdown__anyp((arraytopdown__peg_adt_t)ivar_18);
             if (ivar_64){  
           release_arraytopdown_array_66(ivar_9);
           arraytopdown_funtype_29_t ivar_36;
           ivar_36 = (arraytopdown_funtype_29_t)arraytopdown__peg_adt_p((arraytopdown__peg_adt_t)ivar_18);
           bool_t ivar_42;
           uint8_t ivar_45;
           ivar_45 = (uint8_t)1;
           int64_t tmp6677 = mpz_cmp_ui(ivar_14, ivar_45);
           ivar_42 = (tmp6677 == 0);
           if (ivar_42){   
           bool_t ivar_47;
           uint8_t ivar_58;
           ivar_3->count++;
           ivar_58 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_11);
           ivar_47 = (bool_t)ivar_36->ftbl->fptr(ivar_36, ivar_58);
           ivar_36->ftbl->rptr(ivar_36);
           if (ivar_47){    
            uint8_t ivar_60;
            ivar_60 = (uint8_t)0;
            result = (ivar_13 == ivar_60);
} else {
           
            result = (bool_t) false;
};
} else {
           
           release_arraytopdown_funtype_29(ivar_36);
           result = (bool_t) false;
};
} else {
             
           bool_t ivar_92;
           ivar_18->count++;
           ivar_92 = (bool_t)r_arraytopdown__terminalp((arraytopdown__peg_adt_t)ivar_18);
           if (ivar_92){   
           release_arraytopdown_array_66(ivar_9);
           uint8_t ivar_68;
           ivar_68 = (uint8_t)arraytopdown__peg_adt_a((arraytopdown__peg_adt_t)ivar_18);
           bool_t ivar_72;
           uint8_t ivar_75;
           ivar_75 = (uint8_t)1;
           int64_t tmp6678 = mpz_cmp_ui(ivar_14, ivar_75);
           ivar_72 = (tmp6678 == 0);
           if (ivar_72){    
            bool_t ivar_77;
            uint8_t ivar_79;
            ivar_3->count++;
            ivar_79 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_11);
            ivar_77 = (ivar_79 == ivar_68);
            if (ivar_77){     
             uint8_t ivar_88;
             ivar_88 = (uint8_t)0;
             result = (ivar_13 == ivar_88);
} else {
            
             result = (bool_t) false;
};
} else {
           
            result = (bool_t) false;
};
} else {
           
           bool_t ivar_203;
           ivar_18->count++;
           ivar_203 = (bool_t)r_arraytopdown__concatp((arraytopdown__peg_adt_t)ivar_18);
           if (ivar_203){    
            uint8_t ivar_96;
            ivar_18->count++;
            ivar_96 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_18);
            uint8_t ivar_97;
            ivar_97 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_18);
            bool_t ivar_104;
            arraytopdown__ent_adt_t ivar_117;
            arraytopdown_funtype_65_t ivar_109;
            ivar_109 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
            ivar_109->count++;
            ivar_117 = (arraytopdown__ent_adt_t)ivar_109->ftbl->fptr(ivar_109, ivar_96);
            ivar_109->ftbl->rptr(ivar_109);
            ivar_104 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_117);
            if (ivar_104){     
             bool_t ivar_118;
             arraytopdown__ent_adt_t ivar_146;
             arraytopdown_funtype_65_t ivar_123;
             uint32_t ivar_143;
             uint32_t ivar_126;
             arraytopdown__ent_adt_t ivar_138;
             arraytopdown_funtype_65_t ivar_130;
             ivar_130 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
             ivar_130->count++;
             ivar_138 = (arraytopdown__ent_adt_t)ivar_130->ftbl->fptr(ivar_130, ivar_96);
             ivar_130->ftbl->rptr(ivar_130);
             ivar_126 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_138);
             ivar_143 = (uint32_t)(ivar_11 + ivar_126);
             ivar_123 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_143];
             ivar_123->count++;
             ivar_146 = (arraytopdown__ent_adt_t)ivar_123->ftbl->fptr(ivar_123, ivar_97);
             ivar_123->ftbl->rptr(ivar_123);
             ivar_118 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_146);
             if (ivar_118){      
              mpz_ptr_t ivar_148;
              uint8_t ivar_149;
              ivar_149 = (uint8_t)1;
              mpq_ptr_t ivar_150;
              uint64_t ivar_198;
              arraytopdown__ent_adt_t ivar_164;
              arraytopdown_funtype_65_t ivar_156;
              ivar_156 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
              ivar_156->count++;
              ivar_164 = (arraytopdown__ent_adt_t)ivar_156->ftbl->fptr(ivar_156, ivar_96);
              ivar_156->ftbl->rptr(ivar_156);
              ivar_198 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_164);
              mpq_ptr_t ivar_193;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_193, ivar_198);
              uint64_t ivar_197;
              arraytopdown__ent_adt_t ivar_191;
              arraytopdown_funtype_65_t ivar_168;
              uint32_t ivar_188;
              uint32_t ivar_171;
              arraytopdown__ent_adt_t ivar_183;
              arraytopdown_funtype_65_t ivar_175;
              ivar_175 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
              ivar_175->count++;
              ivar_183 = (arraytopdown__ent_adt_t)ivar_175->ftbl->fptr(ivar_175, ivar_96);
              ivar_175->ftbl->rptr(ivar_175);
              ivar_171 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_183);
              ivar_188 = (uint32_t)(ivar_11 + ivar_171);
              ivar_168 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_188];
              ivar_168->count++;
              release_arraytopdown_array_66(ivar_9);
              ivar_191 = (arraytopdown__ent_adt_t)ivar_168->ftbl->fptr(ivar_168, ivar_97);
              ivar_168->ftbl->rptr(ivar_168);
              ivar_197 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_191);
              mpq_ptr_t ivar_194;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_194, ivar_197);
              ivar_150 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_193, (mpq_ptr_t)ivar_194);
              mpz_mk_set_q(ivar_148, ivar_150);
              mpz_add_ui(ivar_148, ivar_148, ivar_149);
              int64_t tmp6679 = mpz_cmp_ui(ivar_148, ivar_13);
              result = (tmp6679 == 0);
} else {
             
              release_arraytopdown_array_66(ivar_9);
              result = (bool_t) false;
};
} else {
            
             release_arraytopdown_array_66(ivar_9);
             result = (bool_t) false;
};
} else {
           
            bool_t ivar_320;
            ivar_18->count++;
            ivar_320 = (bool_t)r_arraytopdown__orp((arraytopdown__peg_adt_t)ivar_18);
            if (ivar_320){     
             uint8_t ivar_207;
             ivar_18->count++;
             ivar_207 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_18);
             uint8_t ivar_208;
             ivar_208 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_18);
             bool_t ivar_215;
             bool_t ivar_217;
             arraytopdown__ent_adt_t ivar_230;
             arraytopdown_funtype_65_t ivar_222;
             ivar_222 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
             ivar_222->count++;
             ivar_230 = (arraytopdown__ent_adt_t)ivar_222->ftbl->fptr(ivar_222, ivar_207);
             ivar_222->ftbl->rptr(ivar_222);
             ivar_217 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_230);
             if (ivar_217){      
              mpz_ptr_t ivar_232;
              uint8_t ivar_233;
              ivar_233 = (uint8_t)1;
              uint64_t ivar_234;
              arraytopdown__ent_adt_t ivar_246;
              arraytopdown_funtype_65_t ivar_238;
              ivar_238 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
              ivar_238->count++;
              ivar_246 = (arraytopdown__ent_adt_t)ivar_238->ftbl->fptr(ivar_238, ivar_207);
              ivar_238->ftbl->rptr(ivar_238);
              ivar_234 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_246);
              mpz_mk_set_ui(ivar_232, (uint64_t)ivar_233);
              mpz_add_ui(ivar_232, ivar_232, (uint64_t)ivar_234);
              int64_t tmp6680 = mpz_cmp_ui(ivar_232, ivar_13);
              ivar_215 = (tmp6680 == 0);
} else {
             
              ivar_215 = (bool_t) false;
};
             if (ivar_215){      
              release_arraytopdown_array_66(ivar_9);
              result = (bool_t) true;
} else {
             
              bool_t ivar_250;
              arraytopdown__ent_adt_t ivar_263;
              arraytopdown_funtype_65_t ivar_255;
              ivar_255 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
              ivar_255->count++;
              ivar_263 = (arraytopdown__ent_adt_t)ivar_255->ftbl->fptr(ivar_255, ivar_207);
              ivar_255->ftbl->rptr(ivar_255);
              ivar_250 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_263);
              if (ivar_250){       
               bool_t ivar_264;
               arraytopdown__ent_adt_t ivar_277;
               arraytopdown_funtype_65_t ivar_269;
               ivar_269 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
               ivar_269->count++;
               ivar_277 = (arraytopdown__ent_adt_t)ivar_269->ftbl->fptr(ivar_269, ivar_208);
               ivar_269->ftbl->rptr(ivar_269);
               ivar_264 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_277);
               if (ivar_264){        
                mpz_ptr_t ivar_279;
                uint8_t ivar_280;
                ivar_280 = (uint8_t)1;
                mpq_ptr_t ivar_281;
                uint64_t ivar_314;
                arraytopdown__ent_adt_t ivar_295;
                arraytopdown_funtype_65_t ivar_287;
                ivar_287 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
                ivar_287->count++;
                ivar_295 = (arraytopdown__ent_adt_t)ivar_287->ftbl->fptr(ivar_287, ivar_207);
                ivar_287->ftbl->rptr(ivar_287);
                ivar_314 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_295);
                mpq_ptr_t ivar_309;
                //copying to mpq from uint64;
                mpq_mk_set_ui(ivar_309, ivar_314);
                uint64_t ivar_313;
                arraytopdown__ent_adt_t ivar_307;
                arraytopdown_funtype_65_t ivar_299;
                ivar_299 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
                ivar_299->count++;
                release_arraytopdown_array_66(ivar_9);
                ivar_307 = (arraytopdown__ent_adt_t)ivar_299->ftbl->fptr(ivar_299, ivar_208);
                ivar_299->ftbl->rptr(ivar_299);
                ivar_313 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_307);
                mpq_ptr_t ivar_310;
                //copying to mpq from uint64;
                mpq_mk_set_ui(ivar_310, ivar_313);
                ivar_281 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_309, (mpq_ptr_t)ivar_310);
                mpz_mk_set_q(ivar_279, ivar_281);
                mpz_add_ui(ivar_279, ivar_279, ivar_280);
                int64_t tmp6681 = mpz_cmp_ui(ivar_279, ivar_13);
                result = (tmp6681 == 0);
} else {
               
                release_arraytopdown_array_66(ivar_9);
                result = (bool_t) false;
};
} else {
              
               release_arraytopdown_array_66(ivar_9);
               result = (bool_t) false;
};
};
} else {
            
             bool_t ivar_367;
             ivar_18->count++;
             ivar_367 = (bool_t)r_arraytopdown__andp((arraytopdown__peg_adt_t)ivar_18);
             if (ivar_367){      
              uint8_t ivar_324;
              ivar_324 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_18);
              bool_t ivar_328;
              arraytopdown__ent_adt_t ivar_341;
              arraytopdown_funtype_65_t ivar_333;
              ivar_333 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
              ivar_333->count++;
              ivar_341 = (arraytopdown__ent_adt_t)ivar_333->ftbl->fptr(ivar_333, ivar_324);
              ivar_333->ftbl->rptr(ivar_333);
              ivar_328 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_341);
              if (ivar_328){       
               bool_t ivar_342;
               uint8_t ivar_345;
               ivar_345 = (uint8_t)0;
               int64_t tmp6682 = mpz_cmp_ui(ivar_14, ivar_345);
               ivar_342 = (tmp6682 == 0);
               if (ivar_342){        
                mpz_ptr_t ivar_348;
                uint8_t ivar_349;
                ivar_349 = (uint8_t)1;
                uint64_t ivar_350;
                arraytopdown__ent_adt_t ivar_362;
                arraytopdown_funtype_65_t ivar_354;
                ivar_354 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
                ivar_354->count++;
                release_arraytopdown_array_66(ivar_9);
                ivar_362 = (arraytopdown__ent_adt_t)ivar_354->ftbl->fptr(ivar_354, ivar_324);
                ivar_354->ftbl->rptr(ivar_354);
                ivar_350 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_362);
                mpz_mk_set_ui(ivar_348, (uint64_t)ivar_349);
                mpz_add_ui(ivar_348, ivar_348, (uint64_t)ivar_350);
                int64_t tmp6683 = mpz_cmp_ui(ivar_348, ivar_13);
                result = (tmp6683 == 0);
} else {
               
                release_arraytopdown_array_66(ivar_9);
                result = (bool_t) false;
};
} else {
              
               release_arraytopdown_array_66(ivar_9);
               result = (bool_t) false;
};
} else {
             
              bool_t ivar_414;
              ivar_18->count++;
              ivar_414 = (bool_t)r_arraytopdown__notp((arraytopdown__peg_adt_t)ivar_18);
              if (ivar_414){       
               uint8_t ivar_371;
               ivar_371 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_18);
               bool_t ivar_375;
               arraytopdown__ent_adt_t ivar_388;
               arraytopdown_funtype_65_t ivar_380;
               ivar_380 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
               ivar_380->count++;
               ivar_388 = (arraytopdown__ent_adt_t)ivar_380->ftbl->fptr(ivar_380, ivar_371);
               ivar_380->ftbl->rptr(ivar_380);
               ivar_375 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_388);
               if (ivar_375){        
                bool_t ivar_389;
                uint8_t ivar_392;
                ivar_392 = (uint8_t)0;
                int64_t tmp6684 = mpz_cmp_ui(ivar_14, ivar_392);
                ivar_389 = (tmp6684 == 0);
                if (ivar_389){         
                 mpz_ptr_t ivar_395;
                 uint8_t ivar_396;
                 ivar_396 = (uint8_t)1;
                 uint64_t ivar_397;
                 arraytopdown__ent_adt_t ivar_409;
                 arraytopdown_funtype_65_t ivar_401;
                 ivar_401 = (arraytopdown_funtype_65_t)ivar_9->elems[ivar_11];
                 ivar_401->count++;
                 release_arraytopdown_array_66(ivar_9);
                 ivar_409 = (arraytopdown__ent_adt_t)ivar_401->ftbl->fptr(ivar_401, ivar_371);
                 ivar_401->ftbl->rptr(ivar_401);
                 ivar_397 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_409);
                 mpz_mk_set_ui(ivar_395, (uint64_t)ivar_396);
                 mpz_add_ui(ivar_395, ivar_395, (uint64_t)ivar_397);
                 int64_t tmp6685 = mpz_cmp_ui(ivar_395, ivar_13);
                 result = (tmp6685 == 0);
} else {
                
                 release_arraytopdown_array_66(ivar_9);
                 result = (bool_t) false;
};
} else {
               
                release_arraytopdown_array_66(ivar_9);
                result = (bool_t) false;
};
} else {
              
               release_arraytopdown__peg_adt(ivar_18);
               release_arraytopdown_array_66(ivar_9);
               result = (bool_t) false;
};
};
};
};
};
};
};

        return result;
}

arraytopdown_closure_93_t new_arraytopdown_closure_93(void){
        static struct arraytopdown_funtype_92_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_92_t, arraytopdown_record_91_t))&f_arraytopdown_closure_93, .mptr = (bool_t (*)(arraytopdown_funtype_92_t, arraytopdown_array_66_t, uint32_t, uint8_t, uint64_t, mpz_ptr_t))&m_arraytopdown_closure_93, .rptr =  (void (*)(arraytopdown_funtype_92_t))&release_arraytopdown_closure_93, .cptr = (arraytopdown_funtype_92_t (*)(arraytopdown_funtype_92_t))&copy_arraytopdown_closure_93};
        arraytopdown_closure_93_t tmp = (arraytopdown_closure_93_t) safe_malloc(sizeof(struct arraytopdown_closure_93_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_93(arraytopdown_funtype_92_t closure){
        arraytopdown_closure_93_t x = (arraytopdown_closure_93_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->fvar_1);
         release_arraytopdown__lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_93_t copy_arraytopdown_closure_93(arraytopdown_closure_93_t x){
        arraytopdown_closure_93_t y = new_arraytopdown_closure_93();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_92_htbl_t new_htbl = (arraytopdown_funtype_92_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_92_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_92_hashentry_t * new_data = (arraytopdown_funtype_92_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_92_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_92_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown_record_94_t new_arraytopdown_record_94(void){
        arraytopdown_record_94_t tmp = (arraytopdown_record_94_t) safe_malloc(sizeof(struct arraytopdown_record_94_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_94(arraytopdown_record_94_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_66(x->project_1);
         release_arraytopdown__ent_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_94_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_94((arraytopdown_record_94_t)x);
}

arraytopdown_record_94_t copy_arraytopdown_record_94(arraytopdown_record_94_t x){
        arraytopdown_record_94_t y = new_arraytopdown_record_94();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_94(arraytopdown_record_94_t x, arraytopdown_record_94_t y){
        bool_t tmp = true;
        tmp = tmp && equal_arraytopdown_array_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_arraytopdown__ent_adt(x->project_4, y->project_4);
        return tmp;}

bool_t equal_arraytopdown_record_94_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_94_t T){
        return equal_arraytopdown_record_94((arraytopdown_record_94_t)x, (arraytopdown_record_94_t)y);
}

actual_arraytopdown_record_94_t actual_arraytopdown_record_94(){
        actual_arraytopdown_record_94_t new = (actual_arraytopdown_record_94_t)safe_malloc(sizeof(struct actual_arraytopdown_record_94_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_94_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_94_ptr);
 

 
        return new;
 };

arraytopdown_record_94_t update_arraytopdown_record_94_project_1(arraytopdown_record_94_t x, arraytopdown_array_66_t v){
        arraytopdown_record_94_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_arraytopdown_array_66(x->project_1);};}
        else {y = copy_arraytopdown_record_94(x); x->count--; y->project_1->count--;};
        y->project_1 = (arraytopdown_array_66_t)v;
        return y;}

arraytopdown_record_94_t update_arraytopdown_record_94_project_2(arraytopdown_record_94_t x, uint32_t v){
        arraytopdown_record_94_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_94(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

arraytopdown_record_94_t update_arraytopdown_record_94_project_3(arraytopdown_record_94_t x, uint8_t v){
        arraytopdown_record_94_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_94(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

arraytopdown_record_94_t update_arraytopdown_record_94_project_4(arraytopdown_record_94_t x, arraytopdown__ent_adt_t v){
        arraytopdown_record_94_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_arraytopdown__ent_adt(x->project_4);};}
        else {y = copy_arraytopdown_record_94(x); x->count--; y->project_4->count--;};
        y->project_4 = (arraytopdown__ent_adt_t)v;
        return y;}



void release_arraytopdown_funtype_95(arraytopdown_funtype_95_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_95_t copy_arraytopdown_funtype_95(arraytopdown_funtype_95_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_95(arraytopdown_funtype_95_t x, arraytopdown_funtype_95_t y){
        return false;}


bool_t f_arraytopdown_closure_96(struct arraytopdown_closure_96_s * closure, arraytopdown_record_94_t bvar){
        arraytopdown_array_66_t bvar_1;
        bvar_1 = (arraytopdown_array_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        arraytopdown__ent_adt_t bvar_4;
        bvar_4 = (arraytopdown__ent_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_arraytopdown_record_94(bvar);
        bool_t result = h_arraytopdown_closure_96(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_arraytopdown_array_66(bvar_1);
        release_arraytopdown__ent_adt(bvar_4);
        return result;}

bool_t m_arraytopdown_closure_96(struct arraytopdown_closure_96_s * closure, arraytopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, arraytopdown__ent_adt_t bvar_4){
        return h_arraytopdown_closure_96(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_arraytopdown_closure_96(arraytopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, arraytopdown__ent_adt_t ivar_10, uint32_t ivar_1, bytestrings__bytestring_t ivar_3, arraytopdown__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_37;
        ivar_10->count++;
        ivar_37 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_10);
        if (ivar_37){ 
             uint64_t ivar_12;
             ivar_12 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_10);
             arraytopdown_funtype_86_t ivar_23;
             ivar_2->count++;
             ivar_3->count++;
             ivar_23 = (arraytopdown_funtype_86_t)arraytopdown__good_failp((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
             result = (bool_t)ivar_23->ftbl->mptr(ivar_23, ivar_6, ivar_8, ivar_9, ivar_12);
             ivar_23->ftbl->rptr(ivar_23);
} else {
        
             bool_t ivar_52;
             ivar_10->count++;
             ivar_52 = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_10);
             if (ivar_52){  
           release_arraytopdown__ent_adt(ivar_10);
           ivar_2->count++;
           result = (bool_t)arraytopdown__loop_readyp((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (arraytopdown_array_66_t)ivar_6, (uint32_t)ivar_8, (uint8_t)ivar_9);
} else {
             
           bool_t ivar_102;
           ivar_10->count++;
           ivar_102 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_10);
           if (ivar_102){   
           uint64_t ivar_56;
           ivar_10->count++;
           ivar_56 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_10);
           uint32_t ivar_57;
           ivar_57 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_10);
           bool_t ivar_64;
           int32_t ivar_67;
           ivar_67 = (int32_t)((uint64_t)ivar_1 - (uint64_t)ivar_8);
           if ((ivar_67 < 0)){    
            ivar_64 = false;
} else {
           
            ivar_64 = (ivar_57 <= (uint32_t)ivar_67);
};
           if (ivar_64){    
            arraytopdown_funtype_92_t ivar_83;
            ivar_2->count++;
            ivar_3->count++;
            ivar_83 = (arraytopdown_funtype_92_t)arraytopdown__good_goodp((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
            mpz_ptr_t ivar_100;
            //copying to mpz from uint32;
            mpz_mk_set_ui(ivar_100, ivar_57);
            result = (bool_t)ivar_83->ftbl->mptr(ivar_83, ivar_6, ivar_8, ivar_9, ivar_56, ivar_100);
            ivar_83->ftbl->rptr(ivar_83);
} else {
           
            release_arraytopdown_array_66(ivar_6);
            result = (bool_t) false;
};
} else {
           
           release_arraytopdown_array_66(ivar_6);
           release_arraytopdown__ent_adt(ivar_10);
           result = (bool_t) true;
};
};
};

        return result;
}

arraytopdown_closure_96_t new_arraytopdown_closure_96(void){
        static struct arraytopdown_funtype_95_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_95_t, arraytopdown_record_94_t))&f_arraytopdown_closure_96, .mptr = (bool_t (*)(arraytopdown_funtype_95_t, arraytopdown_array_66_t, uint32_t, uint8_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_96, .rptr =  (void (*)(arraytopdown_funtype_95_t))&release_arraytopdown_closure_96, .cptr = (arraytopdown_funtype_95_t (*)(arraytopdown_funtype_95_t))&copy_arraytopdown_closure_96};
        arraytopdown_closure_96_t tmp = (arraytopdown_closure_96_t) safe_malloc(sizeof(struct arraytopdown_closure_96_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_96(arraytopdown_funtype_95_t closure){
        arraytopdown_closure_96_t x = (arraytopdown_closure_96_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->fvar_2);
         release_arraytopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_96_t copy_arraytopdown_closure_96(arraytopdown_closure_96_t x){
        arraytopdown_closure_96_t y = new_arraytopdown_closure_96();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_95_htbl_t new_htbl = (arraytopdown_funtype_95_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_95_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_95_hashentry_t * new_data = (arraytopdown_funtype_95_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_95_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_95_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdown_closure_97(struct arraytopdown_closure_97_s * closure, arraytopdown_record_94_t bvar){
        arraytopdown_array_66_t bvar_1;
        bvar_1 = (arraytopdown_array_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        arraytopdown__ent_adt_t bvar_4;
        bvar_4 = (arraytopdown__ent_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_arraytopdown_record_94(bvar);
        bool_t result = h_arraytopdown_closure_97(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_arraytopdown_array_66(bvar_1);
        release_arraytopdown__ent_adt(bvar_4);
        return result;}

bool_t m_arraytopdown_closure_97(struct arraytopdown_closure_97_s * closure, arraytopdown_array_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, arraytopdown__ent_adt_t bvar_4){
        return h_arraytopdown_closure_97(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_arraytopdown_closure_97(arraytopdown_array_66_t ivar_6, uint32_t ivar_8, uint8_t ivar_9, arraytopdown__ent_adt_t ivar_10, uint32_t ivar_1, bytestrings__bytestring_t ivar_3, arraytopdown__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_37;
        ivar_10->count++;
        ivar_37 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_10);
        if (ivar_37){ 
             uint64_t ivar_12;
             ivar_12 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_10);
             arraytopdown_funtype_86_t ivar_23;
             ivar_2->count++;
             ivar_3->count++;
             ivar_23 = (arraytopdown_funtype_86_t)arraytopdown__good_failp((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
             result = (bool_t)ivar_23->ftbl->mptr(ivar_23, ivar_6, ivar_8, ivar_9, ivar_12);
             ivar_23->ftbl->rptr(ivar_23);
} else {
        
             bool_t ivar_52;
             ivar_10->count++;
             ivar_52 = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_10);
             if (ivar_52){  
           release_arraytopdown__ent_adt(ivar_10);
           release_arraytopdown__ent_adt(ivar_10);
           ivar_2->count++;
           result = (bool_t)arraytopdown__loop_readyp((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (arraytopdown_array_66_t)ivar_6, (uint32_t)ivar_8, (uint8_t)ivar_9);
} else {
             
           bool_t ivar_102;
           ivar_10->count++;
           ivar_102 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_10);
           if (ivar_102){   
           uint64_t ivar_56;
           ivar_10->count++;
           ivar_56 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_10);
           uint32_t ivar_57;
           ivar_57 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_10);
           bool_t ivar_64;
           int32_t ivar_67;
           ivar_67 = (int32_t)((uint64_t)ivar_1 - (uint64_t)ivar_8);
           if ((ivar_67 < 0)){    
            ivar_64 = false;
} else {
           
            ivar_64 = (ivar_57 <= (uint32_t)ivar_67);
};
           if (ivar_64){    
            arraytopdown_funtype_92_t ivar_83;
            ivar_2->count++;
            ivar_3->count++;
            ivar_83 = (arraytopdown_funtype_92_t)arraytopdown__good_goodp((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
            mpz_ptr_t ivar_100;
            //copying to mpz from uint32;
            mpz_mk_set_ui(ivar_100, ivar_57);
            result = (bool_t)ivar_83->ftbl->mptr(ivar_83, ivar_6, ivar_8, ivar_9, ivar_56, ivar_100);
            ivar_83->ftbl->rptr(ivar_83);
} else {
           
            release_arraytopdown_array_66(ivar_6);
            result = (bool_t) false;
};
} else {
           
           bool_t ivar_106;
           ivar_106 = (bool_t)r_arraytopdown__pushp((arraytopdown__ent_adt_t)ivar_10);
           if (ivar_106){    
            arraytopdown__ent_adt_t ivar_122;
            arraytopdown_funtype_65_t ivar_114;
            ivar_114 = (arraytopdown_funtype_65_t)ivar_6->elems[ivar_8];
            ivar_114->count++;
            release_arraytopdown_array_66(ivar_6);
            ivar_122 = (arraytopdown__ent_adt_t)ivar_114->ftbl->fptr(ivar_114, ivar_9);
            ivar_114->ftbl->rptr(ivar_114);
            result = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_122);
} else {
           
            release_arraytopdown_array_66(ivar_6);
            result = (bool_t) false;
};
};
};
};

        return result;
}

arraytopdown_closure_97_t new_arraytopdown_closure_97(void){
        static struct arraytopdown_funtype_95_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_95_t, arraytopdown_record_94_t))&f_arraytopdown_closure_97, .mptr = (bool_t (*)(arraytopdown_funtype_95_t, arraytopdown_array_66_t, uint32_t, uint8_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_97, .rptr =  (void (*)(arraytopdown_funtype_95_t))&release_arraytopdown_closure_97, .cptr = (arraytopdown_funtype_95_t (*)(arraytopdown_funtype_95_t))&copy_arraytopdown_closure_97};
        arraytopdown_closure_97_t tmp = (arraytopdown_closure_97_t) safe_malloc(sizeof(struct arraytopdown_closure_97_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_97(arraytopdown_funtype_95_t closure){
        arraytopdown_closure_97_t x = (arraytopdown_closure_97_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->fvar_2);
         release_arraytopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_97_t copy_arraytopdown_closure_97(arraytopdown_closure_97_t x){
        arraytopdown_closure_97_t y = new_arraytopdown_closure_97();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_95_htbl_t new_htbl = (arraytopdown_funtype_95_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_95_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_95_hashentry_t * new_data = (arraytopdown_funtype_95_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_95_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_95_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_98(arraytopdown_funtype_98_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_98_t copy_arraytopdown_funtype_98(arraytopdown_funtype_98_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_98(arraytopdown_funtype_98_t x, arraytopdown_funtype_98_t y){
        return false;}


bool_t f_arraytopdown_closure_99(struct arraytopdown_closure_99_s * closure, arraytopdown_array_66_t bvar){
        bool_t result = h_arraytopdown_closure_99(bvar); 
        return result;}

bool_t m_arraytopdown_closure_99(struct arraytopdown_closure_99_s * closure, arraytopdown_array_66_t bvar){
        return h_arraytopdown_closure_99(bvar);}

extern bool_t h_arraytopdown_closure_99(arraytopdown_array_66_t ivar_6){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

arraytopdown_closure_99_t new_arraytopdown_closure_99(void){
        static struct arraytopdown_funtype_98_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_98_t, arraytopdown_array_66_t))&f_arraytopdown_closure_99, .mptr = (bool_t (*)(arraytopdown_funtype_98_t, arraytopdown_array_66_t))&m_arraytopdown_closure_99, .rptr =  (void (*)(arraytopdown_funtype_98_t))&release_arraytopdown_closure_99, .cptr = (arraytopdown_funtype_98_t (*)(arraytopdown_funtype_98_t))&copy_arraytopdown_closure_99};
        arraytopdown_closure_99_t tmp = (arraytopdown_closure_99_t) safe_malloc(sizeof(struct arraytopdown_closure_99_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_99(arraytopdown_funtype_98_t closure){
        arraytopdown_closure_99_t x = (arraytopdown_closure_99_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_99_t copy_arraytopdown_closure_99(arraytopdown_closure_99_t x){
        arraytopdown_closure_99_t y = new_arraytopdown_closure_99();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdown_funtype_98_htbl_t new_htbl = (arraytopdown_funtype_98_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_98_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_98_hashentry_t * new_data = (arraytopdown_funtype_98_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_98_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_98_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdown_closure_100(struct arraytopdown_closure_100_s * closure, arraytopdown_record_9_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_arraytopdown_record_9(bvar);
        bool_t result = h_arraytopdown_closure_100(bvar_1, bvar_2, closure->fvar_1); 
        return result;}

bool_t m_arraytopdown_closure_100(struct arraytopdown_closure_100_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_arraytopdown_closure_100(bvar_1, bvar_2, closure->fvar_1);}

extern bool_t h_arraytopdown_closure_100(uint32_t ivar_5, uint8_t ivar_6, arraytopdown_array_66_t ivar_2){
        bool_t result;
        bool_t ivar_7;
        arraytopdown__ent_adt_t ivar_19;
        arraytopdown_funtype_65_t ivar_11;
        ivar_11 = (arraytopdown_funtype_65_t)ivar_2->elems[ivar_5];
        ivar_11->count++;
        ivar_19 = (arraytopdown__ent_adt_t)ivar_11->ftbl->fptr(ivar_11, ivar_6);
        ivar_11->ftbl->rptr(ivar_11);
        ivar_7 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_19);
        result = !ivar_7;

        return result;
}

arraytopdown_closure_100_t new_arraytopdown_closure_100(void){
        static struct arraytopdown_funtype_64_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_64_t, arraytopdown_record_9_t))&f_arraytopdown_closure_100, .mptr = (bool_t (*)(arraytopdown_funtype_64_t, uint32_t, uint8_t))&m_arraytopdown_closure_100, .rptr =  (void (*)(arraytopdown_funtype_64_t))&release_arraytopdown_closure_100, .cptr = (arraytopdown_funtype_64_t (*)(arraytopdown_funtype_64_t))&copy_arraytopdown_closure_100};
        arraytopdown_closure_100_t tmp = (arraytopdown_closure_100_t) safe_malloc(sizeof(struct arraytopdown_closure_100_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_100(arraytopdown_funtype_64_t closure){
        arraytopdown_closure_100_t x = (arraytopdown_closure_100_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_100_t copy_arraytopdown_closure_100(arraytopdown_closure_100_t x){
        arraytopdown_closure_100_t y = new_arraytopdown_closure_100();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_64_htbl_t new_htbl = (arraytopdown_funtype_64_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_64_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_64_hashentry_t * new_data = (arraytopdown_funtype_64_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_64_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_64_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_101(arraytopdown_funtype_101_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_101_t copy_arraytopdown_funtype_101(arraytopdown_funtype_101_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_101(arraytopdown_funtype_101_t x, arraytopdown_funtype_101_t y){
        return false;}


arraytopdown_funtype_98_t f_arraytopdown_closure_102(struct arraytopdown_closure_102_s * closure, arraytopdown_record_9_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_arraytopdown_record_9(bvar);
        arraytopdown_funtype_98_t result = h_arraytopdown_closure_102(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

arraytopdown_funtype_98_t m_arraytopdown_closure_102(struct arraytopdown_closure_102_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_arraytopdown_closure_102(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern arraytopdown_funtype_98_t h_arraytopdown_closure_102(uint32_t ivar_7, uint8_t ivar_8, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3, uint32_t ivar_1){
        arraytopdown_funtype_98_t result;
        arraytopdown_closure_103_t cl6741;
        cl6741 = new_arraytopdown_closure_103();
        cl6741->fvar_1 = (uint32_t)ivar_1;
        cl6741->fvar_2 = (uint8_t)ivar_8;
        cl6741->fvar_3 = (uint32_t)ivar_7;
        cl6741->fvar_4 = (bytestrings__bytestring_t)ivar_3;
        if (cl6741->fvar_4 != NULL) cl6741->fvar_4->count++;
        cl6741->fvar_5 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6741->fvar_5 != NULL) cl6741->fvar_5->count++;
        result = (arraytopdown_funtype_98_t)cl6741;

        return result;
}

arraytopdown_closure_102_t new_arraytopdown_closure_102(void){
        static struct arraytopdown_funtype_101_ftbl_s ftbl = {.fptr = (arraytopdown_funtype_98_t (*)(arraytopdown_funtype_101_t, arraytopdown_record_9_t))&f_arraytopdown_closure_102, .mptr = (arraytopdown_funtype_98_t (*)(arraytopdown_funtype_101_t, uint32_t, uint8_t))&m_arraytopdown_closure_102, .rptr =  (void (*)(arraytopdown_funtype_101_t))&release_arraytopdown_closure_102, .cptr = (arraytopdown_funtype_101_t (*)(arraytopdown_funtype_101_t))&copy_arraytopdown_closure_102};
        arraytopdown_closure_102_t tmp = (arraytopdown_closure_102_t) safe_malloc(sizeof(struct arraytopdown_closure_102_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_102(arraytopdown_funtype_101_t closure){
        arraytopdown_closure_102_t x = (arraytopdown_closure_102_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown__lang_spec(x->fvar_1);
         release_bytestrings__bytestring(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_102_t copy_arraytopdown_closure_102(arraytopdown_closure_102_t x){
        arraytopdown_closure_102_t y = new_arraytopdown_closure_102();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = (uint32_t)x->fvar_3;
        if (x->htbl != NULL){
            arraytopdown_funtype_101_htbl_t new_htbl = (arraytopdown_funtype_101_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_101_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_101_hashentry_t * new_data = (arraytopdown_funtype_101_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_101_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_101_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdown_closure_103(struct arraytopdown_closure_103_s * closure, arraytopdown_array_66_t bvar){
        bool_t result = h_arraytopdown_closure_103(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

bool_t m_arraytopdown_closure_103(struct arraytopdown_closure_103_s * closure, arraytopdown_array_66_t bvar){
        return h_arraytopdown_closure_103(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern bool_t h_arraytopdown_closure_103(arraytopdown_array_66_t ivar_11, uint32_t ivar_1, uint8_t ivar_8, uint32_t ivar_7, bytestrings__bytestring_t ivar_3, arraytopdown__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_13;
        arraytopdown_funtype_64_t ivar_19;
        ivar_11->count++;
        ivar_19 = (arraytopdown_funtype_64_t)arraytopdown__good_rootp((uint32_t)ivar_1, (arraytopdown_array_66_t)ivar_11);
        ivar_13 = (bool_t)ivar_19->ftbl->mptr(ivar_19, ivar_7, ivar_8);
        ivar_19->ftbl->rptr(ivar_19);
        if (ivar_13){ 
             arraytopdown_funtype_98_t ivar_32;
             ivar_2->count++;
             ivar_3->count++;
             ivar_32 = (arraytopdown_funtype_98_t)arraytopdown__good_tscaffoldp((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (bytestrings__bytestring_t)ivar_3);
             result = (bool_t)ivar_32->ftbl->fptr(ivar_32, ivar_11);
             ivar_32->ftbl->rptr(ivar_32);
} else {
        
             release_arraytopdown_array_66(ivar_11);
             result = (bool_t) false;
};

        return result;
}

arraytopdown_closure_103_t new_arraytopdown_closure_103(void){
        static struct arraytopdown_funtype_98_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_98_t, arraytopdown_array_66_t))&f_arraytopdown_closure_103, .mptr = (bool_t (*)(arraytopdown_funtype_98_t, arraytopdown_array_66_t))&m_arraytopdown_closure_103, .rptr =  (void (*)(arraytopdown_funtype_98_t))&release_arraytopdown_closure_103, .cptr = (arraytopdown_funtype_98_t (*)(arraytopdown_funtype_98_t))&copy_arraytopdown_closure_103};
        arraytopdown_closure_103_t tmp = (arraytopdown_closure_103_t) safe_malloc(sizeof(struct arraytopdown_closure_103_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_103(arraytopdown_funtype_98_t closure){
        arraytopdown_closure_103_t x = (arraytopdown_closure_103_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->fvar_4);
         release_arraytopdown__lang_spec(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_103_t copy_arraytopdown_closure_103(arraytopdown_closure_103_t x){
        arraytopdown_closure_103_t y = new_arraytopdown_closure_103();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint8_t)x->fvar_2;
        y->fvar_3 = (uint32_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_98_htbl_t new_htbl = (arraytopdown_funtype_98_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_98_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_98_hashentry_t * new_data = (arraytopdown_funtype_98_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_98_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_98_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown_record_104_t new_arraytopdown_record_104(void){
        arraytopdown_record_104_t tmp = (arraytopdown_record_104_t) safe_malloc(sizeof(struct arraytopdown_record_104_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_104(arraytopdown_record_104_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_array_66(x->scaf);
         release_arraytopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_104_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_104((arraytopdown_record_104_t)x);
}

arraytopdown_record_104_t copy_arraytopdown_record_104(arraytopdown_record_104_t x){
        arraytopdown_record_104_t y = new_arraytopdown_record_104();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_104(arraytopdown_record_104_t x, arraytopdown_record_104_t y){
        bool_t tmp = true;
        tmp = tmp && equal_arraytopdown_array_66(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_arraytopdown__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

bool_t equal_arraytopdown_record_104_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_104_t T){
        return equal_arraytopdown_record_104((arraytopdown_record_104_t)x, (arraytopdown_record_104_t)y);
}

actual_arraytopdown_record_104_t actual_arraytopdown_record_104(){
        actual_arraytopdown_record_104_t new = (actual_arraytopdown_record_104_t)safe_malloc(sizeof(struct actual_arraytopdown_record_104_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_104_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_104_ptr);
 

 
        return new;
 };

arraytopdown_record_104_t update_arraytopdown_record_104_scaf(arraytopdown_record_104_t x, arraytopdown_array_66_t v){
        arraytopdown_record_104_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_arraytopdown_array_66(x->scaf);};}
        else {y = copy_arraytopdown_record_104(x); x->count--; y->scaf->count--;};
        y->scaf = (arraytopdown_array_66_t)v;
        return y;}

arraytopdown_record_104_t update_arraytopdown_record_104_depth(arraytopdown_record_104_t x, uint64_t v){
        arraytopdown_record_104_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_104(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

arraytopdown_record_104_t update_arraytopdown_record_104_stack(arraytopdown_record_104_t x, arraytopdown__ent_adt_t v){
        arraytopdown_record_104_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_arraytopdown__ent_adt(x->stack);};}
        else {y = copy_arraytopdown_record_104(x); x->count--; y->stack->count--;};
        y->stack = (arraytopdown__ent_adt_t)v;
        return y;}

arraytopdown_record_104_t update_arraytopdown_record_104_lflag(arraytopdown_record_104_t x, bool_t v){
        arraytopdown_record_104_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_104(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}



void release_arraytopdown_funtype_105(arraytopdown_funtype_105_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_105_t copy_arraytopdown_funtype_105(arraytopdown_funtype_105_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_105(arraytopdown_funtype_105_t x, arraytopdown_funtype_105_t y){
        return false;}


arraytopdown_record_104_t f_arraytopdown_closure_106(struct arraytopdown_closure_106_s * closure, arraytopdown_record_104_t bvar){
        arraytopdown_record_104_t result = h_arraytopdown_closure_106(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

arraytopdown_record_104_t m_arraytopdown_closure_106(struct arraytopdown_closure_106_s * closure, arraytopdown_record_104_t bvar){
        return h_arraytopdown_closure_106(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern arraytopdown_record_104_t h_arraytopdown_closure_106(arraytopdown_record_104_t ivar_9, uint32_t ivar_1, bytestrings__bytestring_t ivar_3, arraytopdown__lang_spec_t ivar_2){
        arraytopdown_record_104_t result;
        /* scaf */ arraytopdown_array_66_t ivar_12;
        ivar_12 = (arraytopdown_array_66_t)ivar_9->scaf;
        ivar_12->count++;
        /* stack */ arraytopdown__ent_adt_t ivar_17;
        ivar_17 = (arraytopdown__ent_adt_t)ivar_9->stack;
        ivar_17->count++;
        /* depth */ uint64_t ivar_20;
        ivar_20 = (uint64_t)ivar_9->depth;
        bool_t ivar_26;
        ivar_17->count++;
        ivar_26 = (bool_t)arraytopdown__emptyp((arraytopdown__ent_adt_t)ivar_17);
        if (ivar_26){ 
             release_arraytopdown__ent_adt(ivar_17);
             release_arraytopdown_array_66(ivar_12);
             //copying to arraytopdown_record_104 from arraytopdown_record_104;
             result = (arraytopdown_record_104_t)ivar_9;
             if (result != NULL) result->count++;
             release_arraytopdown_record_104(ivar_9);
} else {
        
             /* pos */ uint32_t ivar_30;
             ivar_17->count++;
             ivar_30 = (uint32_t)arraytopdown__ent_adt_pos((arraytopdown__ent_adt_t)ivar_17);
             /* cur */ uint8_t ivar_34;
             ivar_17->count++;
             ivar_34 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_17);
             /* rest */ arraytopdown__ent_adt_t ivar_38;
             arraytopdown_funtype_65_t ivar_41;
             ivar_41 = (arraytopdown_funtype_65_t)ivar_12->elems[ivar_30];
             ivar_41->count++;
             ivar_38 = (arraytopdown__ent_adt_t)ivar_41->ftbl->fptr(ivar_41, ivar_34);
             ivar_41->ftbl->rptr(ivar_41);
             arraytopdown__peg_adt_t ivar_48;
             ivar_48 = (arraytopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_34);
             bool_t ivar_94;
             ivar_48->count++;
             ivar_94 = (bool_t)r_arraytopdown__epsilonp((arraytopdown__peg_adt_t)ivar_48);
             if (ivar_94){  
           release_arraytopdown__ent_adt(ivar_17);
           release_arraytopdown_array_66(ivar_12);
           release_arraytopdown__peg_adt(ivar_48);
           arraytopdown__ent_adt_t ivar_54;
           uint8_t ivar_65;
           ivar_65 = (uint8_t)0;
           uint64_t ivar_60;
           //copying to uint64 from uint8;
           ivar_60 = (uint64_t)ivar_65;
           uint8_t ivar_64;
           ivar_64 = (uint8_t)0;
           uint32_t ivar_61;
           //copying to uint32 from uint8;
           ivar_61 = (uint32_t)ivar_64;
           ivar_54 = (arraytopdown__ent_adt_t)arraytopdown__good((uint64_t)ivar_60, (uint32_t)ivar_61);
           uint64_t ivar_56;
           uint8_t ivar_67;
           ivar_67 = (uint8_t)1;
           ivar_56 = (uint64_t)(ivar_20 - ivar_67);
           arraytopdown_record_104_t ivar_84;
           arraytopdown_array_66_t ivar_70;
           ivar_70 = (arraytopdown_array_66_t)ivar_9->scaf;
           ivar_70->count++;
           arraytopdown_record_104_t ivar_81;
           arraytopdown_array_66_t ivar_83;
           ivar_83 = NULL;
           ivar_81 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_83);
           if (ivar_83 != NULL) ivar_83->count--;
           arraytopdown_array_66_t ivar_82;
           arraytopdown_funtype_65_t ivar_71;
           ivar_71 = (arraytopdown_funtype_65_t)ivar_70->elems[ivar_30];
           ivar_71->count++;
           arraytopdown_array_66_t ivar_78;
           arraytopdown_funtype_65_t ivar_80;
           ivar_80 = NULL;
           ivar_78 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_70, ivar_30, ivar_80);
           if (ivar_80 != NULL) ivar_80->count--;
           arraytopdown_funtype_65_t ivar_79;
           arraytopdown_funtype_65_t ivar_74;
           arraytopdown__ent_adt_t ivar_76;
           ivar_76 = NULL;
           ivar_74 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_71, ivar_34, ivar_76);
           if (ivar_76 != NULL) ivar_76->count--;
           ivar_79 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_74, ivar_34, ivar_54);
           if (ivar_54 != NULL) ivar_54->count--;
           ivar_82 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_78, ivar_30, ivar_79);
           if (ivar_79 != NULL) ivar_79->count--;
           ivar_84 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_81, ivar_82);
           if (ivar_82 != NULL) ivar_82->count--;
           arraytopdown_record_104_t ivar_89;
           arraytopdown_record_104_t ivar_86;
           arraytopdown__ent_adt_t ivar_88;
           ivar_88 = NULL;
           ivar_86 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_84, ivar_88);
           if (ivar_88 != NULL) ivar_88->count--;
           ivar_89 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_86, ivar_38);
           if (ivar_38 != NULL) ivar_38->count--;
           result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_89, ivar_56);
} else {
             
           bool_t ivar_135;
           ivar_48->count++;
           ivar_135 = (bool_t)r_arraytopdown__failurep((arraytopdown__peg_adt_t)ivar_48);
           if (ivar_135){   
           release_arraytopdown__ent_adt(ivar_17);
           release_arraytopdown_array_66(ivar_12);
           release_arraytopdown__peg_adt(ivar_48);
           arraytopdown__ent_adt_t ivar_99;
           uint8_t ivar_106;
           ivar_106 = (uint8_t)0;
           uint64_t ivar_104;
           //copying to uint64 from uint8;
           ivar_104 = (uint64_t)ivar_106;
           ivar_99 = (arraytopdown__ent_adt_t)arraytopdown__fail((uint64_t)ivar_104);
           uint64_t ivar_101;
           uint8_t ivar_108;
           ivar_108 = (uint8_t)1;
           ivar_101 = (uint64_t)(ivar_20 - ivar_108);
           arraytopdown_record_104_t ivar_125;
           arraytopdown_array_66_t ivar_111;
           ivar_111 = (arraytopdown_array_66_t)ivar_9->scaf;
           ivar_111->count++;
           arraytopdown_record_104_t ivar_122;
           arraytopdown_array_66_t ivar_124;
           ivar_124 = NULL;
           ivar_122 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_124);
           if (ivar_124 != NULL) ivar_124->count--;
           arraytopdown_array_66_t ivar_123;
           arraytopdown_funtype_65_t ivar_112;
           ivar_112 = (arraytopdown_funtype_65_t)ivar_111->elems[ivar_30];
           ivar_112->count++;
           arraytopdown_array_66_t ivar_119;
           arraytopdown_funtype_65_t ivar_121;
           ivar_121 = NULL;
           ivar_119 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_111, ivar_30, ivar_121);
           if (ivar_121 != NULL) ivar_121->count--;
           arraytopdown_funtype_65_t ivar_120;
           arraytopdown_funtype_65_t ivar_115;
           arraytopdown__ent_adt_t ivar_117;
           ivar_117 = NULL;
           ivar_115 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_112, ivar_34, ivar_117);
           if (ivar_117 != NULL) ivar_117->count--;
           ivar_120 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_115, ivar_34, ivar_99);
           if (ivar_99 != NULL) ivar_99->count--;
           ivar_123 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_119, ivar_30, ivar_120);
           if (ivar_120 != NULL) ivar_120->count--;
           ivar_125 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_122, ivar_123);
           if (ivar_123 != NULL) ivar_123->count--;
           arraytopdown_record_104_t ivar_130;
           arraytopdown_record_104_t ivar_127;
           arraytopdown__ent_adt_t ivar_129;
           ivar_129 = NULL;
           ivar_127 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_125, ivar_129);
           if (ivar_129 != NULL) ivar_129->count--;
           ivar_130 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_127, ivar_38);
           if (ivar_38 != NULL) ivar_38->count--;
           result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_130, ivar_101);
} else {
           
           bool_t ivar_211;
           ivar_48->count++;
           ivar_211 = (bool_t)r_arraytopdown__anyp((arraytopdown__peg_adt_t)ivar_48);
           if (ivar_211){    
            release_arraytopdown__ent_adt(ivar_17);
            release_arraytopdown_array_66(ivar_12);
            arraytopdown_funtype_29_t ivar_139;
            ivar_139 = (arraytopdown_funtype_29_t)arraytopdown__peg_adt_p((arraytopdown__peg_adt_t)ivar_48);
            /* v */ arraytopdown__ent_adt_t ivar_145;
            bool_t ivar_146;
            bool_t ivar_147;
            ivar_147 = (ivar_30 == ivar_1);
            if (ivar_147){     
             release_arraytopdown_funtype_29(ivar_139);
             ivar_146 = (bool_t) true;
} else {
            
             bool_t ivar_152;
             uint8_t ivar_162;
             ivar_3->count++;
             ivar_162 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_30);
             ivar_152 = (bool_t)ivar_139->ftbl->fptr(ivar_139, ivar_162);
             ivar_139->ftbl->rptr(ivar_139);
             ivar_146 = !ivar_152;
};
            if (ivar_146){     
             uint8_t ivar_169;
             ivar_169 = (uint8_t)0;
             uint64_t ivar_167;
             //copying to uint64 from uint8;
             ivar_167 = (uint64_t)ivar_169;
             ivar_145 = (arraytopdown__ent_adt_t)arraytopdown__fail((uint64_t)ivar_167);
} else {
            
             uint8_t ivar_178;
             ivar_178 = (uint8_t)0;
             uint64_t ivar_173;
             //copying to uint64 from uint8;
             ivar_173 = (uint64_t)ivar_178;
             uint8_t ivar_177;
             ivar_177 = (uint8_t)1;
             uint32_t ivar_174;
             //copying to uint32 from uint8;
             ivar_174 = (uint32_t)ivar_177;
             ivar_145 = (arraytopdown__ent_adt_t)arraytopdown__good((uint64_t)ivar_173, (uint32_t)ivar_174);
};
            uint64_t ivar_182;
            uint8_t ivar_184;
            ivar_184 = (uint8_t)1;
            ivar_182 = (uint64_t)(ivar_20 - ivar_184);
            arraytopdown_record_104_t ivar_201;
            arraytopdown_array_66_t ivar_187;
            ivar_187 = (arraytopdown_array_66_t)ivar_9->scaf;
            ivar_187->count++;
            arraytopdown_record_104_t ivar_198;
            arraytopdown_array_66_t ivar_200;
            ivar_200 = NULL;
            ivar_198 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_200);
            if (ivar_200 != NULL) ivar_200->count--;
            arraytopdown_array_66_t ivar_199;
            arraytopdown_funtype_65_t ivar_188;
            ivar_188 = (arraytopdown_funtype_65_t)ivar_187->elems[ivar_30];
            ivar_188->count++;
            arraytopdown_array_66_t ivar_195;
            arraytopdown_funtype_65_t ivar_197;
            ivar_197 = NULL;
            ivar_195 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_187, ivar_30, ivar_197);
            if (ivar_197 != NULL) ivar_197->count--;
            arraytopdown_funtype_65_t ivar_196;
            arraytopdown_funtype_65_t ivar_191;
            arraytopdown__ent_adt_t ivar_193;
            ivar_193 = NULL;
            ivar_191 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_188, ivar_34, ivar_193);
            if (ivar_193 != NULL) ivar_193->count--;
            ivar_196 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_191, ivar_34, ivar_145);
            if (ivar_145 != NULL) ivar_145->count--;
            ivar_199 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_195, ivar_30, ivar_196);
            if (ivar_196 != NULL) ivar_196->count--;
            ivar_201 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_198, ivar_199);
            if (ivar_199 != NULL) ivar_199->count--;
            arraytopdown_record_104_t ivar_206;
            arraytopdown_record_104_t ivar_203;
            arraytopdown__ent_adt_t ivar_205;
            ivar_205 = NULL;
            ivar_203 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_201, ivar_205);
            if (ivar_205 != NULL) ivar_205->count--;
            ivar_206 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_203, ivar_38);
            if (ivar_38 != NULL) ivar_38->count--;
            result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_206, ivar_182);
} else {
           
            bool_t ivar_281;
            ivar_48->count++;
            ivar_281 = (bool_t)r_arraytopdown__terminalp((arraytopdown__peg_adt_t)ivar_48);
            if (ivar_281){     
             release_arraytopdown__ent_adt(ivar_17);
             release_arraytopdown_array_66(ivar_12);
             uint8_t ivar_215;
             ivar_215 = (uint8_t)arraytopdown__peg_adt_a((arraytopdown__peg_adt_t)ivar_48);
             /* v */ arraytopdown__ent_adt_t ivar_219;
             bool_t ivar_220;
             bool_t ivar_221;
             ivar_221 = (ivar_30 == ivar_1);
             if (ivar_221){      
              ivar_220 = (bool_t) true;
} else {
             
              uint8_t ivar_227;
              ivar_3->count++;
              ivar_227 = (uint8_t)bytestrings__get((bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_30);
              ivar_220 = (ivar_215 != ivar_227);
};
             if (ivar_220){      
              uint8_t ivar_239;
              ivar_239 = (uint8_t)0;
              uint64_t ivar_237;
              //copying to uint64 from uint8;
              ivar_237 = (uint64_t)ivar_239;
              ivar_219 = (arraytopdown__ent_adt_t)arraytopdown__fail((uint64_t)ivar_237);
} else {
             
              uint8_t ivar_248;
              ivar_248 = (uint8_t)0;
              uint64_t ivar_243;
              //copying to uint64 from uint8;
              ivar_243 = (uint64_t)ivar_248;
              uint8_t ivar_247;
              ivar_247 = (uint8_t)1;
              uint32_t ivar_244;
              //copying to uint32 from uint8;
              ivar_244 = (uint32_t)ivar_247;
              ivar_219 = (arraytopdown__ent_adt_t)arraytopdown__good((uint64_t)ivar_243, (uint32_t)ivar_244);
};
             uint64_t ivar_252;
             uint8_t ivar_254;
             ivar_254 = (uint8_t)1;
             ivar_252 = (uint64_t)(ivar_20 - ivar_254);
             arraytopdown_record_104_t ivar_271;
             arraytopdown_array_66_t ivar_257;
             ivar_257 = (arraytopdown_array_66_t)ivar_9->scaf;
             ivar_257->count++;
             arraytopdown_record_104_t ivar_268;
             arraytopdown_array_66_t ivar_270;
             ivar_270 = NULL;
             ivar_268 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_270);
             if (ivar_270 != NULL) ivar_270->count--;
             arraytopdown_array_66_t ivar_269;
             arraytopdown_funtype_65_t ivar_258;
             ivar_258 = (arraytopdown_funtype_65_t)ivar_257->elems[ivar_30];
             ivar_258->count++;
             arraytopdown_array_66_t ivar_265;
             arraytopdown_funtype_65_t ivar_267;
             ivar_267 = NULL;
             ivar_265 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_257, ivar_30, ivar_267);
             if (ivar_267 != NULL) ivar_267->count--;
             arraytopdown_funtype_65_t ivar_266;
             arraytopdown_funtype_65_t ivar_261;
             arraytopdown__ent_adt_t ivar_263;
             ivar_263 = NULL;
             ivar_261 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_258, ivar_34, ivar_263);
             if (ivar_263 != NULL) ivar_263->count--;
             ivar_266 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_261, ivar_34, ivar_219);
             if (ivar_219 != NULL) ivar_219->count--;
             ivar_269 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_265, ivar_30, ivar_266);
             if (ivar_266 != NULL) ivar_266->count--;
             ivar_271 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_268, ivar_269);
             if (ivar_269 != NULL) ivar_269->count--;
             arraytopdown_record_104_t ivar_276;
             arraytopdown_record_104_t ivar_273;
             arraytopdown__ent_adt_t ivar_275;
             ivar_275 = NULL;
             ivar_273 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_271, ivar_275);
             if (ivar_275 != NULL) ivar_275->count--;
             ivar_276 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_273, ivar_38);
             if (ivar_38 != NULL) ivar_38->count--;
             result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_276, ivar_252);
} else {
            
             bool_t ivar_665;
             ivar_48->count++;
             ivar_665 = (bool_t)r_arraytopdown__concatp((arraytopdown__peg_adt_t)ivar_48);
             if (ivar_665){      
              release_arraytopdown_array_66(ivar_12);
              uint8_t ivar_285;
              ivar_48->count++;
              ivar_285 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_48);
              uint8_t ivar_286;
              ivar_286 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_48);
              arraytopdown__ent_adt_t ivar_293;
              arraytopdown_funtype_65_t ivar_296;
              arraytopdown_array_66_t ivar_300;
              ivar_300 = (arraytopdown_array_66_t)ivar_9->scaf;
              ivar_300->count++;
              ivar_296 = (arraytopdown_funtype_65_t)ivar_300->elems[ivar_30];
              ivar_296->count++;
              release_arraytopdown_array_66(ivar_300);
              ivar_293 = (arraytopdown__ent_adt_t)ivar_296->ftbl->fptr(ivar_296, ivar_285);
              ivar_296->ftbl->rptr(ivar_296);
              bool_t ivar_349;
              ivar_293->count++;
              ivar_349 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_293);
              if (ivar_349){       
               release_arraytopdown__ent_adt(ivar_17);
               uint64_t ivar_305;
               ivar_305 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_293);
               arraytopdown__ent_adt_t ivar_310;
               mpz_ptr_t ivar_320;
               uint8_t ivar_315;
               ivar_315 = (uint8_t)1;
               mpz_mk_set_ui(ivar_320, (uint64_t)ivar_305);
               mpz_add_ui(ivar_320, ivar_320, (uint64_t)ivar_315);
               uint64_t ivar_318;
               //copying to uint64 from mpz;
               ivar_318 = (uint64_t)mpz_get_ui(ivar_320);
               mpz_clear(ivar_320);
               ivar_310 = (arraytopdown__ent_adt_t)arraytopdown__fail((uint64_t)ivar_318);
               uint64_t ivar_312;
               uint8_t ivar_322;
               ivar_322 = (uint8_t)1;
               ivar_312 = (uint64_t)(ivar_20 - ivar_322);
               arraytopdown_record_104_t ivar_339;
               arraytopdown_array_66_t ivar_325;
               ivar_325 = (arraytopdown_array_66_t)ivar_9->scaf;
               ivar_325->count++;
               arraytopdown_record_104_t ivar_336;
               arraytopdown_array_66_t ivar_338;
               ivar_338 = NULL;
               ivar_336 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_338);
               if (ivar_338 != NULL) ivar_338->count--;
               arraytopdown_array_66_t ivar_337;
               arraytopdown_funtype_65_t ivar_326;
               ivar_326 = (arraytopdown_funtype_65_t)ivar_325->elems[ivar_30];
               ivar_326->count++;
               arraytopdown_array_66_t ivar_333;
               arraytopdown_funtype_65_t ivar_335;
               ivar_335 = NULL;
               ivar_333 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_325, ivar_30, ivar_335);
               if (ivar_335 != NULL) ivar_335->count--;
               arraytopdown_funtype_65_t ivar_334;
               arraytopdown_funtype_65_t ivar_329;
               arraytopdown__ent_adt_t ivar_331;
               ivar_331 = NULL;
               ivar_329 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_326, ivar_34, ivar_331);
               if (ivar_331 != NULL) ivar_331->count--;
               ivar_334 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_329, ivar_34, ivar_310);
               if (ivar_310 != NULL) ivar_310->count--;
               ivar_337 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_333, ivar_30, ivar_334);
               if (ivar_334 != NULL) ivar_334->count--;
               ivar_339 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_336, ivar_337);
               if (ivar_337 != NULL) ivar_337->count--;
               arraytopdown_record_104_t ivar_344;
               arraytopdown_record_104_t ivar_341;
               arraytopdown__ent_adt_t ivar_343;
               ivar_343 = NULL;
               ivar_341 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_339, ivar_343);
               if (ivar_343 != NULL) ivar_343->count--;
               ivar_344 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_341, ivar_38);
               if (ivar_38 != NULL) ivar_38->count--;
               result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_344, ivar_312);
} else {
              
               bool_t ivar_583;
               ivar_293->count++;
               ivar_583 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_293);
               if (ivar_583){        
                release_arraytopdown__ent_adt(ivar_17);
                uint64_t ivar_353;
                ivar_293->count++;
                ivar_353 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_293);
                uint32_t ivar_354;
                ivar_354 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_293);
                arraytopdown__ent_adt_t ivar_361;
                arraytopdown_funtype_65_t ivar_364;
                arraytopdown_array_66_t ivar_371;
                ivar_371 = (arraytopdown_array_66_t)ivar_9->scaf;
                ivar_371->count++;
                uint32_t ivar_374;
                ivar_374 = (uint32_t)(ivar_30 + ivar_354);
                ivar_364 = (arraytopdown_funtype_65_t)ivar_371->elems[ivar_374];
                ivar_364->count++;
                release_arraytopdown_array_66(ivar_371);
                ivar_361 = (arraytopdown__ent_adt_t)ivar_364->ftbl->fptr(ivar_364, ivar_286);
                ivar_364->ftbl->rptr(ivar_364);
                bool_t ivar_425;
                ivar_361->count++;
                ivar_425 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_361);
                if (ivar_425){         
                 uint64_t ivar_376;
                 ivar_376 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_361);
                 arraytopdown__ent_adt_t ivar_381;
                 mpz_ptr_t ivar_396;
                 uint8_t ivar_385;
                 ivar_385 = (uint8_t)1;
                 mpq_ptr_t ivar_386;
                 mpq_ptr_t ivar_390;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_390, ivar_353);
                 mpq_ptr_t ivar_391;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_391, ivar_376);
                 ivar_386 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_390, (mpq_ptr_t)ivar_391);
                 mpz_mk_set_q(ivar_396, ivar_386);
                 mpz_add_ui(ivar_396, ivar_396, ivar_385);
                 uint64_t ivar_394;
                 //copying to uint64 from mpz;
                 ivar_394 = (uint64_t)mpz_get_ui(ivar_396);
                 mpz_clear(ivar_396);
                 ivar_381 = (arraytopdown__ent_adt_t)arraytopdown__fail((uint64_t)ivar_394);
                 uint64_t ivar_383;
                 uint8_t ivar_398;
                 ivar_398 = (uint8_t)1;
                 ivar_383 = (uint64_t)(ivar_20 - ivar_398);
                 arraytopdown_record_104_t ivar_415;
                 arraytopdown_array_66_t ivar_401;
                 ivar_401 = (arraytopdown_array_66_t)ivar_9->scaf;
                 ivar_401->count++;
                 arraytopdown_record_104_t ivar_412;
                 arraytopdown_array_66_t ivar_414;
                 ivar_414 = NULL;
                 ivar_412 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_414);
                 if (ivar_414 != NULL) ivar_414->count--;
                 arraytopdown_array_66_t ivar_413;
                 arraytopdown_funtype_65_t ivar_402;
                 ivar_402 = (arraytopdown_funtype_65_t)ivar_401->elems[ivar_30];
                 ivar_402->count++;
                 arraytopdown_array_66_t ivar_409;
                 arraytopdown_funtype_65_t ivar_411;
                 ivar_411 = NULL;
                 ivar_409 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_401, ivar_30, ivar_411);
                 if (ivar_411 != NULL) ivar_411->count--;
                 arraytopdown_funtype_65_t ivar_410;
                 arraytopdown_funtype_65_t ivar_405;
                 arraytopdown__ent_adt_t ivar_407;
                 ivar_407 = NULL;
                 ivar_405 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_402, ivar_34, ivar_407);
                 if (ivar_407 != NULL) ivar_407->count--;
                 ivar_410 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_405, ivar_34, ivar_381);
                 if (ivar_381 != NULL) ivar_381->count--;
                 ivar_413 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_409, ivar_30, ivar_410);
                 if (ivar_410 != NULL) ivar_410->count--;
                 ivar_415 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_412, ivar_413);
                 if (ivar_413 != NULL) ivar_413->count--;
                 arraytopdown_record_104_t ivar_420;
                 arraytopdown_record_104_t ivar_417;
                 arraytopdown__ent_adt_t ivar_419;
                 ivar_419 = NULL;
                 ivar_417 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_415, ivar_419);
                 if (ivar_419 != NULL) ivar_419->count--;
                 ivar_420 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_417, ivar_38);
                 if (ivar_38 != NULL) ivar_38->count--;
                 result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_420, ivar_383);
} else {
                
                 bool_t ivar_489;
                 ivar_361->count++;
                 ivar_489 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_361);
                 if (ivar_489){          
                  uint64_t ivar_429;
                  ivar_361->count++;
                  ivar_429 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_361);
                  uint32_t ivar_430;
                  ivar_430 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_361);
                  arraytopdown__ent_adt_t ivar_438;
                  mpz_ptr_t ivar_460;
                  uint8_t ivar_443;
                  ivar_443 = (uint8_t)1;
                  mpq_ptr_t ivar_444;
                  mpq_ptr_t ivar_448;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_448, ivar_353);
                  mpq_ptr_t ivar_449;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_449, ivar_429);
                  ivar_444 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_448, (mpq_ptr_t)ivar_449);
                  mpz_mk_set_q(ivar_460, ivar_444);
                  mpz_add_ui(ivar_460, ivar_460, ivar_443);
                  uint64_t ivar_455;
                  //copying to uint64 from mpz;
                  ivar_455 = (uint64_t)mpz_get_ui(ivar_460);
                  mpz_clear(ivar_460);
                  mpq_ptr_t ivar_459;
                  mpz_t tmp6800;
                  mpz_init(tmp6800);
                  mpz_set_ui(tmp6800, (uint64_t)ivar_354);
                  mpz_add_ui(tmp6800, tmp6800, (uint64_t)ivar_430);
                  mpq_mk_set_z(ivar_459, tmp6800);
                  mpz_clear(tmp6800);
                  uint32_t ivar_456;
                  //copying to uint32 from mpq;
                  ivar_456 = (uint32_t)mpq_get_ui(ivar_459);
                  mpq_clear(ivar_459);
                  ivar_438 = (arraytopdown__ent_adt_t)arraytopdown__good((uint64_t)ivar_455, (uint32_t)ivar_456);
                  uint64_t ivar_440;
                  uint8_t ivar_462;
                  ivar_462 = (uint8_t)1;
                  ivar_440 = (uint64_t)(ivar_20 - ivar_462);
                  arraytopdown_record_104_t ivar_479;
                  arraytopdown_array_66_t ivar_465;
                  ivar_465 = (arraytopdown_array_66_t)ivar_9->scaf;
                  ivar_465->count++;
                  arraytopdown_record_104_t ivar_476;
                  arraytopdown_array_66_t ivar_478;
                  ivar_478 = NULL;
                  ivar_476 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_478);
                  if (ivar_478 != NULL) ivar_478->count--;
                  arraytopdown_array_66_t ivar_477;
                  arraytopdown_funtype_65_t ivar_466;
                  ivar_466 = (arraytopdown_funtype_65_t)ivar_465->elems[ivar_30];
                  ivar_466->count++;
                  arraytopdown_array_66_t ivar_473;
                  arraytopdown_funtype_65_t ivar_475;
                  ivar_475 = NULL;
                  ivar_473 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_465, ivar_30, ivar_475);
                  if (ivar_475 != NULL) ivar_475->count--;
                  arraytopdown_funtype_65_t ivar_474;
                  arraytopdown_funtype_65_t ivar_469;
                  arraytopdown__ent_adt_t ivar_471;
                  ivar_471 = NULL;
                  ivar_469 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_466, ivar_34, ivar_471);
                  if (ivar_471 != NULL) ivar_471->count--;
                  ivar_474 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_469, ivar_34, ivar_438);
                  if (ivar_438 != NULL) ivar_438->count--;
                  ivar_477 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_473, ivar_30, ivar_474);
                  if (ivar_474 != NULL) ivar_474->count--;
                  ivar_479 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_476, ivar_477);
                  if (ivar_477 != NULL) ivar_477->count--;
                  arraytopdown_record_104_t ivar_484;
                  arraytopdown_record_104_t ivar_481;
                  arraytopdown__ent_adt_t ivar_483;
                  ivar_483 = NULL;
                  ivar_481 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_479, ivar_483);
                  if (ivar_483 != NULL) ivar_483->count--;
                  ivar_484 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_481, ivar_38);
                  if (ivar_38 != NULL) ivar_38->count--;
                  result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_484, ivar_440);
} else {
                 
                  bool_t ivar_542;
                  ivar_542 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_361);
                  if (ivar_542){           
                   release_arraytopdown__ent_adt(ivar_38);
                   arraytopdown__ent_adt_t ivar_494;
                   mpq_ptr_t ivar_506;
                   mpz_t tmp6801;
                   mpz_init(tmp6801);
                   mpz_set_ui(tmp6801, (uint64_t)ivar_30);
                   mpz_add_ui(tmp6801, tmp6801, (uint64_t)ivar_354);
                   mpq_mk_set_z(ivar_506, tmp6801);
                   mpz_clear(tmp6801);
                   uint32_t ivar_503;
                   //copying to uint32 from mpq;
                   ivar_503 = (uint32_t)mpq_get_ui(ivar_506);
                   mpq_clear(ivar_506);
                   ivar_494 = (arraytopdown__ent_adt_t)arraytopdown__push((uint32_t)ivar_503, (uint8_t)ivar_286);
                   uint64_t ivar_495;
                   uint64_t ivar_507;
                   ivar_507 = (uint64_t)ivar_9->depth;
                   uint8_t ivar_508;
                   ivar_508 = (uint8_t)1;
                   ivar_495 = (uint64_t)(ivar_507 + ivar_508);
                   arraytopdown__ent_adt_t ivar_496;
                   ivar_496 = (arraytopdown__ent_adt_t)ivar_9->stack;
                   ivar_496->count++;
                   arraytopdown_record_104_t ivar_519;
                   arraytopdown_record_104_t ivar_516;
                   arraytopdown__ent_adt_t ivar_518;
                   ivar_518 = NULL;
                   ivar_516 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_9, ivar_518);
                   if (ivar_518 != NULL) ivar_518->count--;
                   ivar_519 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_516, ivar_494);
                   if (ivar_494 != NULL) ivar_494->count--;
                   arraytopdown_record_104_t ivar_523;
                   ivar_523 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_519, ivar_495);
                   arraytopdown_array_66_t ivar_524;
                   ivar_524 = (arraytopdown_array_66_t)ivar_523->scaf;
                   ivar_524->count++;
                   arraytopdown_record_104_t ivar_538;
                   arraytopdown_array_66_t ivar_540;
                   ivar_540 = NULL;
                   ivar_538 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_523, ivar_540);
                   if (ivar_540 != NULL) ivar_540->count--;
                   arraytopdown_array_66_t ivar_539;
                   uint32_t ivar_531;
                   ivar_531 = (uint32_t)(ivar_30 + ivar_354);
                   arraytopdown_funtype_65_t ivar_525;
                   ivar_525 = (arraytopdown_funtype_65_t)ivar_524->elems[ivar_531];
                   ivar_525->count++;
                   arraytopdown_array_66_t ivar_535;
                   arraytopdown_funtype_65_t ivar_537;
                   ivar_537 = NULL;
                   ivar_535 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_524, ivar_531, ivar_537);
                   if (ivar_537 != NULL) ivar_537->count--;
                   arraytopdown_funtype_65_t ivar_536;
                   arraytopdown_funtype_65_t ivar_528;
                   arraytopdown__ent_adt_t ivar_530;
                   ivar_530 = NULL;
                   ivar_528 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_525, ivar_286, ivar_530);
                   if (ivar_530 != NULL) ivar_530->count--;
                   ivar_536 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_528, ivar_286, ivar_496);
                   if (ivar_496 != NULL) ivar_496->count--;
                   ivar_539 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_535, ivar_531, ivar_536);
                   if (ivar_536 != NULL) ivar_536->count--;
                   result = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_538, ivar_539);
                   if (ivar_539 != NULL) ivar_539->count--;
} else {
                  
                   arraytopdown__ent_adt_t ivar_547;
                   ivar_547 = (arraytopdown__ent_adt_t)arraytopdown__loop();
                   if (ivar_547 != NULL) ivar_547->count++;
                   uint64_t ivar_548;
                   uint8_t ivar_552;
                   ivar_552 = (uint8_t)1;
                   ivar_548 = (uint64_t)(ivar_20 - ivar_552);
                   bool_t ivar_550;
                   ivar_550 = (bool_t) true;
                   arraytopdown_record_104_t ivar_569;
                   arraytopdown_array_66_t ivar_555;
                   ivar_555 = (arraytopdown_array_66_t)ivar_9->scaf;
                   ivar_555->count++;
                   arraytopdown_record_104_t ivar_566;
                   arraytopdown_array_66_t ivar_568;
                   ivar_568 = NULL;
                   ivar_566 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_568);
                   if (ivar_568 != NULL) ivar_568->count--;
                   arraytopdown_array_66_t ivar_567;
                   arraytopdown_funtype_65_t ivar_556;
                   ivar_556 = (arraytopdown_funtype_65_t)ivar_555->elems[ivar_30];
                   ivar_556->count++;
                   arraytopdown_array_66_t ivar_563;
                   arraytopdown_funtype_65_t ivar_565;
                   ivar_565 = NULL;
                   ivar_563 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_555, ivar_30, ivar_565);
                   if (ivar_565 != NULL) ivar_565->count--;
                   arraytopdown_funtype_65_t ivar_564;
                   arraytopdown_funtype_65_t ivar_559;
                   arraytopdown__ent_adt_t ivar_561;
                   ivar_561 = NULL;
                   ivar_559 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_556, ivar_34, ivar_561);
                   if (ivar_561 != NULL) ivar_561->count--;
                   ivar_564 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_559, ivar_34, ivar_547);
                   if (ivar_547 != NULL) ivar_547->count--;
                   ivar_567 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_563, ivar_30, ivar_564);
                   if (ivar_564 != NULL) ivar_564->count--;
                   ivar_569 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_566, ivar_567);
                   if (ivar_567 != NULL) ivar_567->count--;
                   arraytopdown_record_104_t ivar_573;
                   ivar_573 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_569, ivar_548);
                   arraytopdown_record_104_t ivar_578;
                   arraytopdown_record_104_t ivar_575;
                   arraytopdown__ent_adt_t ivar_577;
                   ivar_577 = NULL;
                   ivar_575 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_573, ivar_577);
                   if (ivar_577 != NULL) ivar_577->count--;
                   ivar_578 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_575, ivar_38);
                   if (ivar_38 != NULL) ivar_38->count--;
                   result = (arraytopdown_record_104_t)update_arraytopdown_record_104_lflag(ivar_578, ivar_550);
};
};
};
} else {
               
                bool_t ivar_624;
                ivar_624 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_293);
                if (ivar_624){         
                 release_arraytopdown__ent_adt(ivar_38);
                 arraytopdown__ent_adt_t ivar_588;
                 ivar_588 = (arraytopdown__ent_adt_t)arraytopdown__push((uint32_t)ivar_30, (uint8_t)ivar_285);
                 uint64_t ivar_589;
                 uint8_t ivar_597;
                 ivar_597 = (uint8_t)1;
                 ivar_589 = (uint64_t)(ivar_20 + ivar_597);
                 arraytopdown_record_104_t ivar_604;
                 arraytopdown_record_104_t ivar_601;
                 arraytopdown__ent_adt_t ivar_603;
                 ivar_603 = NULL;
                 ivar_601 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_9, ivar_603);
                 if (ivar_603 != NULL) ivar_603->count--;
                 ivar_604 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_601, ivar_588);
                 if (ivar_588 != NULL) ivar_588->count--;
                 arraytopdown_record_104_t ivar_608;
                 ivar_608 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_604, ivar_589);
                 arraytopdown_array_66_t ivar_609;
                 ivar_609 = (arraytopdown_array_66_t)ivar_608->scaf;
                 ivar_609->count++;
                 arraytopdown_record_104_t ivar_620;
                 arraytopdown_array_66_t ivar_622;
                 ivar_622 = NULL;
                 ivar_620 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_608, ivar_622);
                 if (ivar_622 != NULL) ivar_622->count--;
                 arraytopdown_array_66_t ivar_621;
                 arraytopdown_funtype_65_t ivar_610;
                 ivar_610 = (arraytopdown_funtype_65_t)ivar_609->elems[ivar_30];
                 ivar_610->count++;
                 arraytopdown_array_66_t ivar_617;
                 arraytopdown_funtype_65_t ivar_619;
                 ivar_619 = NULL;
                 ivar_617 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_609, ivar_30, ivar_619);
                 if (ivar_619 != NULL) ivar_619->count--;
                 arraytopdown_funtype_65_t ivar_618;
                 arraytopdown_funtype_65_t ivar_613;
                 arraytopdown__ent_adt_t ivar_615;
                 ivar_615 = NULL;
                 ivar_613 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_610, ivar_285, ivar_615);
                 if (ivar_615 != NULL) ivar_615->count--;
                 ivar_618 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_613, ivar_285, ivar_17);
                 if (ivar_17 != NULL) ivar_17->count--;
                 ivar_621 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_617, ivar_30, ivar_618);
                 if (ivar_618 != NULL) ivar_618->count--;
                 result = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_620, ivar_621);
                 if (ivar_621 != NULL) ivar_621->count--;
} else {
                
                 release_arraytopdown__ent_adt(ivar_17);
                 arraytopdown__ent_adt_t ivar_629;
                 ivar_629 = (arraytopdown__ent_adt_t)arraytopdown__loop();
                 if (ivar_629 != NULL) ivar_629->count++;
                 uint64_t ivar_630;
                 uint8_t ivar_634;
                 ivar_634 = (uint8_t)1;
                 ivar_630 = (uint64_t)(ivar_20 - ivar_634);
                 bool_t ivar_632;
                 ivar_632 = (bool_t) true;
                 arraytopdown_record_104_t ivar_651;
                 arraytopdown_array_66_t ivar_637;
                 ivar_637 = (arraytopdown_array_66_t)ivar_9->scaf;
                 ivar_637->count++;
                 arraytopdown_record_104_t ivar_648;
                 arraytopdown_array_66_t ivar_650;
                 ivar_650 = NULL;
                 ivar_648 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_650);
                 if (ivar_650 != NULL) ivar_650->count--;
                 arraytopdown_array_66_t ivar_649;
                 arraytopdown_funtype_65_t ivar_638;
                 ivar_638 = (arraytopdown_funtype_65_t)ivar_637->elems[ivar_30];
                 ivar_638->count++;
                 arraytopdown_array_66_t ivar_645;
                 arraytopdown_funtype_65_t ivar_647;
                 ivar_647 = NULL;
                 ivar_645 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_637, ivar_30, ivar_647);
                 if (ivar_647 != NULL) ivar_647->count--;
                 arraytopdown_funtype_65_t ivar_646;
                 arraytopdown_funtype_65_t ivar_641;
                 arraytopdown__ent_adt_t ivar_643;
                 ivar_643 = NULL;
                 ivar_641 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_638, ivar_34, ivar_643);
                 if (ivar_643 != NULL) ivar_643->count--;
                 ivar_646 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_641, ivar_34, ivar_629);
                 if (ivar_629 != NULL) ivar_629->count--;
                 ivar_649 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_645, ivar_30, ivar_646);
                 if (ivar_646 != NULL) ivar_646->count--;
                 ivar_651 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_648, ivar_649);
                 if (ivar_649 != NULL) ivar_649->count--;
                 arraytopdown_record_104_t ivar_655;
                 ivar_655 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_651, ivar_630);
                 arraytopdown_record_104_t ivar_660;
                 arraytopdown_record_104_t ivar_657;
                 arraytopdown__ent_adt_t ivar_659;
                 ivar_659 = NULL;
                 ivar_657 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_655, ivar_659);
                 if (ivar_659 != NULL) ivar_659->count--;
                 ivar_660 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_657, ivar_38);
                 if (ivar_38 != NULL) ivar_38->count--;
                 result = (arraytopdown_record_104_t)update_arraytopdown_record_104_lflag(ivar_660, ivar_632);
};
};
};
} else {
             
              bool_t ivar_1027;
              ivar_48->count++;
              ivar_1027 = (bool_t)r_arraytopdown__orp((arraytopdown__peg_adt_t)ivar_48);
              if (ivar_1027){       
               uint8_t ivar_669;
               ivar_48->count++;
               ivar_669 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_48);
               uint8_t ivar_670;
               ivar_670 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_48);
               arraytopdown__ent_adt_t ivar_677;
               arraytopdown_funtype_65_t ivar_680;
               ivar_680 = (arraytopdown_funtype_65_t)ivar_12->elems[ivar_30];
               ivar_680->count++;
               ivar_677 = (arraytopdown__ent_adt_t)ivar_680->ftbl->fptr(ivar_680, ivar_669);
               ivar_680->ftbl->rptr(ivar_680);
               bool_t ivar_891;
               ivar_677->count++;
               ivar_891 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_677);
               if (ivar_891){        
                uint64_t ivar_687;
                ivar_687 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_677);
                arraytopdown__ent_adt_t ivar_691;
                arraytopdown_funtype_65_t ivar_694;
                ivar_694 = (arraytopdown_funtype_65_t)ivar_12->elems[ivar_30];
                ivar_694->count++;
                release_arraytopdown_array_66(ivar_12);
                ivar_691 = (arraytopdown__ent_adt_t)ivar_694->ftbl->fptr(ivar_694, ivar_670);
                ivar_694->ftbl->rptr(ivar_694);
                bool_t ivar_750;
                ivar_691->count++;
                ivar_750 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_691);
                if (ivar_750){         
                 release_arraytopdown__ent_adt(ivar_17);
                 uint64_t ivar_701;
                 ivar_701 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_691);
                 arraytopdown__ent_adt_t ivar_706;
                 mpz_ptr_t ivar_721;
                 mpq_ptr_t ivar_710;
                 mpq_ptr_t ivar_715;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_715, ivar_687);
                 mpq_ptr_t ivar_716;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_716, ivar_701);
                 ivar_710 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_715, (mpq_ptr_t)ivar_716);
                 uint8_t ivar_711;
                 ivar_711 = (uint8_t)1;
                 mpz_mk_set_q(ivar_721, ivar_710);
                 mpz_add_ui(ivar_721, ivar_721, (uint64_t)ivar_711);
                 uint64_t ivar_719;
                 //copying to uint64 from mpz;
                 ivar_719 = (uint64_t)mpz_get_ui(ivar_721);
                 mpz_clear(ivar_721);
                 ivar_706 = (arraytopdown__ent_adt_t)arraytopdown__fail((uint64_t)ivar_719);
                 uint64_t ivar_708;
                 uint8_t ivar_723;
                 ivar_723 = (uint8_t)1;
                 ivar_708 = (uint64_t)(ivar_20 - ivar_723);
                 arraytopdown_record_104_t ivar_740;
                 arraytopdown_array_66_t ivar_726;
                 ivar_726 = (arraytopdown_array_66_t)ivar_9->scaf;
                 ivar_726->count++;
                 arraytopdown_record_104_t ivar_737;
                 arraytopdown_array_66_t ivar_739;
                 ivar_739 = NULL;
                 ivar_737 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_739);
                 if (ivar_739 != NULL) ivar_739->count--;
                 arraytopdown_array_66_t ivar_738;
                 arraytopdown_funtype_65_t ivar_727;
                 ivar_727 = (arraytopdown_funtype_65_t)ivar_726->elems[ivar_30];
                 ivar_727->count++;
                 arraytopdown_array_66_t ivar_734;
                 arraytopdown_funtype_65_t ivar_736;
                 ivar_736 = NULL;
                 ivar_734 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_726, ivar_30, ivar_736);
                 if (ivar_736 != NULL) ivar_736->count--;
                 arraytopdown_funtype_65_t ivar_735;
                 arraytopdown_funtype_65_t ivar_730;
                 arraytopdown__ent_adt_t ivar_732;
                 ivar_732 = NULL;
                 ivar_730 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_727, ivar_34, ivar_732);
                 if (ivar_732 != NULL) ivar_732->count--;
                 ivar_735 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_730, ivar_34, ivar_706);
                 if (ivar_706 != NULL) ivar_706->count--;
                 ivar_738 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_734, ivar_30, ivar_735);
                 if (ivar_735 != NULL) ivar_735->count--;
                 ivar_740 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_737, ivar_738);
                 if (ivar_738 != NULL) ivar_738->count--;
                 arraytopdown_record_104_t ivar_745;
                 arraytopdown_record_104_t ivar_742;
                 arraytopdown__ent_adt_t ivar_744;
                 ivar_744 = NULL;
                 ivar_742 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_740, ivar_744);
                 if (ivar_744 != NULL) ivar_744->count--;
                 ivar_745 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_742, ivar_38);
                 if (ivar_38 != NULL) ivar_38->count--;
                 result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_745, ivar_708);
} else {
                
                 bool_t ivar_809;
                 ivar_691->count++;
                 ivar_809 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_691);
                 if (ivar_809){          
                  release_arraytopdown__ent_adt(ivar_17);
                  uint64_t ivar_754;
                  ivar_691->count++;
                  ivar_754 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_691);
                  uint32_t ivar_755;
                  ivar_755 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_691);
                  arraytopdown__ent_adt_t ivar_763;
                  mpz_ptr_t ivar_780;
                  mpq_ptr_t ivar_768;
                  mpq_ptr_t ivar_773;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_773, ivar_687);
                  mpq_ptr_t ivar_774;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_774, ivar_754);
                  ivar_768 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_773, (mpq_ptr_t)ivar_774);
                  uint8_t ivar_769;
                  ivar_769 = (uint8_t)1;
                  mpz_mk_set_q(ivar_780, ivar_768);
                  mpz_add_ui(ivar_780, ivar_780, (uint64_t)ivar_769);
                  uint64_t ivar_777;
                  //copying to uint64 from mpz;
                  ivar_777 = (uint64_t)mpz_get_ui(ivar_780);
                  mpz_clear(ivar_780);
                  ivar_763 = (arraytopdown__ent_adt_t)arraytopdown__good((uint64_t)ivar_777, (uint32_t)ivar_755);
                  uint64_t ivar_765;
                  uint8_t ivar_782;
                  ivar_782 = (uint8_t)1;
                  ivar_765 = (uint64_t)(ivar_20 - ivar_782);
                  arraytopdown_record_104_t ivar_799;
                  arraytopdown_array_66_t ivar_785;
                  ivar_785 = (arraytopdown_array_66_t)ivar_9->scaf;
                  ivar_785->count++;
                  arraytopdown_record_104_t ivar_796;
                  arraytopdown_array_66_t ivar_798;
                  ivar_798 = NULL;
                  ivar_796 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_798);
                  if (ivar_798 != NULL) ivar_798->count--;
                  arraytopdown_array_66_t ivar_797;
                  arraytopdown_funtype_65_t ivar_786;
                  ivar_786 = (arraytopdown_funtype_65_t)ivar_785->elems[ivar_30];
                  ivar_786->count++;
                  arraytopdown_array_66_t ivar_793;
                  arraytopdown_funtype_65_t ivar_795;
                  ivar_795 = NULL;
                  ivar_793 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_785, ivar_30, ivar_795);
                  if (ivar_795 != NULL) ivar_795->count--;
                  arraytopdown_funtype_65_t ivar_794;
                  arraytopdown_funtype_65_t ivar_789;
                  arraytopdown__ent_adt_t ivar_791;
                  ivar_791 = NULL;
                  ivar_789 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_786, ivar_34, ivar_791);
                  if (ivar_791 != NULL) ivar_791->count--;
                  ivar_794 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_789, ivar_34, ivar_763);
                  if (ivar_763 != NULL) ivar_763->count--;
                  ivar_797 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_793, ivar_30, ivar_794);
                  if (ivar_794 != NULL) ivar_794->count--;
                  ivar_799 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_796, ivar_797);
                  if (ivar_797 != NULL) ivar_797->count--;
                  arraytopdown_record_104_t ivar_804;
                  arraytopdown_record_104_t ivar_801;
                  arraytopdown__ent_adt_t ivar_803;
                  ivar_803 = NULL;
                  ivar_801 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_799, ivar_803);
                  if (ivar_803 != NULL) ivar_803->count--;
                  ivar_804 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_801, ivar_38);
                  if (ivar_38 != NULL) ivar_38->count--;
                  result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_804, ivar_765);
} else {
                 
                  bool_t ivar_850;
                  ivar_850 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_691);
                  if (ivar_850){           
                   release_arraytopdown__ent_adt(ivar_38);
                   arraytopdown__ent_adt_t ivar_814;
                   ivar_814 = (arraytopdown__ent_adt_t)arraytopdown__push((uint32_t)ivar_30, (uint8_t)ivar_670);
                   uint64_t ivar_815;
                   uint8_t ivar_823;
                   ivar_823 = (uint8_t)1;
                   ivar_815 = (uint64_t)(ivar_20 + ivar_823);
                   arraytopdown_record_104_t ivar_830;
                   arraytopdown_record_104_t ivar_827;
                   arraytopdown__ent_adt_t ivar_829;
                   ivar_829 = NULL;
                   ivar_827 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_9, ivar_829);
                   if (ivar_829 != NULL) ivar_829->count--;
                   ivar_830 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_827, ivar_814);
                   if (ivar_814 != NULL) ivar_814->count--;
                   arraytopdown_record_104_t ivar_834;
                   ivar_834 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_830, ivar_815);
                   arraytopdown_array_66_t ivar_835;
                   ivar_835 = (arraytopdown_array_66_t)ivar_834->scaf;
                   ivar_835->count++;
                   arraytopdown_record_104_t ivar_846;
                   arraytopdown_array_66_t ivar_848;
                   ivar_848 = NULL;
                   ivar_846 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_834, ivar_848);
                   if (ivar_848 != NULL) ivar_848->count--;
                   arraytopdown_array_66_t ivar_847;
                   arraytopdown_funtype_65_t ivar_836;
                   ivar_836 = (arraytopdown_funtype_65_t)ivar_835->elems[ivar_30];
                   ivar_836->count++;
                   arraytopdown_array_66_t ivar_843;
                   arraytopdown_funtype_65_t ivar_845;
                   ivar_845 = NULL;
                   ivar_843 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_835, ivar_30, ivar_845);
                   if (ivar_845 != NULL) ivar_845->count--;
                   arraytopdown_funtype_65_t ivar_844;
                   arraytopdown_funtype_65_t ivar_839;
                   arraytopdown__ent_adt_t ivar_841;
                   ivar_841 = NULL;
                   ivar_839 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_836, ivar_670, ivar_841);
                   if (ivar_841 != NULL) ivar_841->count--;
                   ivar_844 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_839, ivar_670, ivar_17);
                   if (ivar_17 != NULL) ivar_17->count--;
                   ivar_847 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_843, ivar_30, ivar_844);
                   if (ivar_844 != NULL) ivar_844->count--;
                   result = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_846, ivar_847);
                   if (ivar_847 != NULL) ivar_847->count--;
} else {
                  
                   release_arraytopdown__ent_adt(ivar_17);
                   arraytopdown__ent_adt_t ivar_855;
                   ivar_855 = (arraytopdown__ent_adt_t)arraytopdown__loop();
                   if (ivar_855 != NULL) ivar_855->count++;
                   uint64_t ivar_856;
                   uint8_t ivar_860;
                   ivar_860 = (uint8_t)1;
                   ivar_856 = (uint64_t)(ivar_20 - ivar_860);
                   bool_t ivar_858;
                   ivar_858 = (bool_t) true;
                   arraytopdown_record_104_t ivar_877;
                   arraytopdown_array_66_t ivar_863;
                   ivar_863 = (arraytopdown_array_66_t)ivar_9->scaf;
                   ivar_863->count++;
                   arraytopdown_record_104_t ivar_874;
                   arraytopdown_array_66_t ivar_876;
                   ivar_876 = NULL;
                   ivar_874 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_876);
                   if (ivar_876 != NULL) ivar_876->count--;
                   arraytopdown_array_66_t ivar_875;
                   arraytopdown_funtype_65_t ivar_864;
                   ivar_864 = (arraytopdown_funtype_65_t)ivar_863->elems[ivar_30];
                   ivar_864->count++;
                   arraytopdown_array_66_t ivar_871;
                   arraytopdown_funtype_65_t ivar_873;
                   ivar_873 = NULL;
                   ivar_871 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_863, ivar_30, ivar_873);
                   if (ivar_873 != NULL) ivar_873->count--;
                   arraytopdown_funtype_65_t ivar_872;
                   arraytopdown_funtype_65_t ivar_867;
                   arraytopdown__ent_adt_t ivar_869;
                   ivar_869 = NULL;
                   ivar_867 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_864, ivar_34, ivar_869);
                   if (ivar_869 != NULL) ivar_869->count--;
                   ivar_872 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_867, ivar_34, ivar_855);
                   if (ivar_855 != NULL) ivar_855->count--;
                   ivar_875 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_871, ivar_30, ivar_872);
                   if (ivar_872 != NULL) ivar_872->count--;
                   ivar_877 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_874, ivar_875);
                   if (ivar_875 != NULL) ivar_875->count--;
                   arraytopdown_record_104_t ivar_881;
                   ivar_881 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_877, ivar_856);
                   arraytopdown_record_104_t ivar_886;
                   arraytopdown_record_104_t ivar_883;
                   arraytopdown__ent_adt_t ivar_885;
                   ivar_885 = NULL;
                   ivar_883 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_881, ivar_885);
                   if (ivar_885 != NULL) ivar_885->count--;
                   ivar_886 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_883, ivar_38);
                   if (ivar_38 != NULL) ivar_38->count--;
                   result = (arraytopdown_record_104_t)update_arraytopdown_record_104_lflag(ivar_886, ivar_858);
};
};
};
} else {
               
                release_arraytopdown_array_66(ivar_12);
                bool_t ivar_945;
                ivar_677->count++;
                ivar_945 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_677);
                if (ivar_945){         
                 release_arraytopdown__ent_adt(ivar_17);
                 uint64_t ivar_895;
                 ivar_677->count++;
                 ivar_895 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_677);
                 uint32_t ivar_896;
                 ivar_896 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_677);
                 arraytopdown__ent_adt_t ivar_904;
                 mpz_ptr_t ivar_916;
                 uint8_t ivar_910;
                 ivar_910 = (uint8_t)1;
                 mpz_mk_set_ui(ivar_916, (uint64_t)ivar_895);
                 mpz_add_ui(ivar_916, ivar_916, (uint64_t)ivar_910);
                 uint64_t ivar_913;
                 //copying to uint64 from mpz;
                 ivar_913 = (uint64_t)mpz_get_ui(ivar_916);
                 mpz_clear(ivar_916);
                 ivar_904 = (arraytopdown__ent_adt_t)arraytopdown__good((uint64_t)ivar_913, (uint32_t)ivar_896);
                 uint64_t ivar_906;
                 uint8_t ivar_918;
                 ivar_918 = (uint8_t)1;
                 ivar_906 = (uint64_t)(ivar_20 - ivar_918);
                 arraytopdown_record_104_t ivar_935;
                 arraytopdown_array_66_t ivar_921;
                 ivar_921 = (arraytopdown_array_66_t)ivar_9->scaf;
                 ivar_921->count++;
                 arraytopdown_record_104_t ivar_932;
                 arraytopdown_array_66_t ivar_934;
                 ivar_934 = NULL;
                 ivar_932 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_934);
                 if (ivar_934 != NULL) ivar_934->count--;
                 arraytopdown_array_66_t ivar_933;
                 arraytopdown_funtype_65_t ivar_922;
                 ivar_922 = (arraytopdown_funtype_65_t)ivar_921->elems[ivar_30];
                 ivar_922->count++;
                 arraytopdown_array_66_t ivar_929;
                 arraytopdown_funtype_65_t ivar_931;
                 ivar_931 = NULL;
                 ivar_929 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_921, ivar_30, ivar_931);
                 if (ivar_931 != NULL) ivar_931->count--;
                 arraytopdown_funtype_65_t ivar_930;
                 arraytopdown_funtype_65_t ivar_925;
                 arraytopdown__ent_adt_t ivar_927;
                 ivar_927 = NULL;
                 ivar_925 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_922, ivar_34, ivar_927);
                 if (ivar_927 != NULL) ivar_927->count--;
                 ivar_930 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_925, ivar_34, ivar_904);
                 if (ivar_904 != NULL) ivar_904->count--;
                 ivar_933 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_929, ivar_30, ivar_930);
                 if (ivar_930 != NULL) ivar_930->count--;
                 ivar_935 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_932, ivar_933);
                 if (ivar_933 != NULL) ivar_933->count--;
                 arraytopdown_record_104_t ivar_940;
                 arraytopdown_record_104_t ivar_937;
                 arraytopdown__ent_adt_t ivar_939;
                 ivar_939 = NULL;
                 ivar_937 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_935, ivar_939);
                 if (ivar_939 != NULL) ivar_939->count--;
                 ivar_940 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_937, ivar_38);
                 if (ivar_38 != NULL) ivar_38->count--;
                 result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_940, ivar_906);
} else {
                
                 bool_t ivar_986;
                 ivar_986 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_677);
                 if (ivar_986){          
                  release_arraytopdown__ent_adt(ivar_38);
                  arraytopdown__ent_adt_t ivar_950;
                  ivar_950 = (arraytopdown__ent_adt_t)arraytopdown__push((uint32_t)ivar_30, (uint8_t)ivar_669);
                  uint64_t ivar_951;
                  uint8_t ivar_959;
                  ivar_959 = (uint8_t)1;
                  ivar_951 = (uint64_t)(ivar_20 + ivar_959);
                  arraytopdown_record_104_t ivar_966;
                  arraytopdown_record_104_t ivar_963;
                  arraytopdown__ent_adt_t ivar_965;
                  ivar_965 = NULL;
                  ivar_963 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_9, ivar_965);
                  if (ivar_965 != NULL) ivar_965->count--;
                  ivar_966 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_963, ivar_950);
                  if (ivar_950 != NULL) ivar_950->count--;
                  arraytopdown_record_104_t ivar_970;
                  ivar_970 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_966, ivar_951);
                  arraytopdown_array_66_t ivar_971;
                  ivar_971 = (arraytopdown_array_66_t)ivar_970->scaf;
                  ivar_971->count++;
                  arraytopdown_record_104_t ivar_982;
                  arraytopdown_array_66_t ivar_984;
                  ivar_984 = NULL;
                  ivar_982 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_970, ivar_984);
                  if (ivar_984 != NULL) ivar_984->count--;
                  arraytopdown_array_66_t ivar_983;
                  arraytopdown_funtype_65_t ivar_972;
                  ivar_972 = (arraytopdown_funtype_65_t)ivar_971->elems[ivar_30];
                  ivar_972->count++;
                  arraytopdown_array_66_t ivar_979;
                  arraytopdown_funtype_65_t ivar_981;
                  ivar_981 = NULL;
                  ivar_979 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_971, ivar_30, ivar_981);
                  if (ivar_981 != NULL) ivar_981->count--;
                  arraytopdown_funtype_65_t ivar_980;
                  arraytopdown_funtype_65_t ivar_975;
                  arraytopdown__ent_adt_t ivar_977;
                  ivar_977 = NULL;
                  ivar_975 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_972, ivar_669, ivar_977);
                  if (ivar_977 != NULL) ivar_977->count--;
                  ivar_980 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_975, ivar_669, ivar_17);
                  if (ivar_17 != NULL) ivar_17->count--;
                  ivar_983 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_979, ivar_30, ivar_980);
                  if (ivar_980 != NULL) ivar_980->count--;
                  result = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_982, ivar_983);
                  if (ivar_983 != NULL) ivar_983->count--;
} else {
                 
                  release_arraytopdown__ent_adt(ivar_17);
                  arraytopdown__ent_adt_t ivar_991;
                  ivar_991 = (arraytopdown__ent_adt_t)arraytopdown__loop();
                  if (ivar_991 != NULL) ivar_991->count++;
                  uint64_t ivar_992;
                  uint8_t ivar_996;
                  ivar_996 = (uint8_t)1;
                  ivar_992 = (uint64_t)(ivar_20 - ivar_996);
                  bool_t ivar_994;
                  ivar_994 = (bool_t) true;
                  arraytopdown_record_104_t ivar_1013;
                  arraytopdown_array_66_t ivar_999;
                  ivar_999 = (arraytopdown_array_66_t)ivar_9->scaf;
                  ivar_999->count++;
                  arraytopdown_record_104_t ivar_1010;
                  arraytopdown_array_66_t ivar_1012;
                  ivar_1012 = NULL;
                  ivar_1010 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_1012);
                  if (ivar_1012 != NULL) ivar_1012->count--;
                  arraytopdown_array_66_t ivar_1011;
                  arraytopdown_funtype_65_t ivar_1000;
                  ivar_1000 = (arraytopdown_funtype_65_t)ivar_999->elems[ivar_30];
                  ivar_1000->count++;
                  arraytopdown_array_66_t ivar_1007;
                  arraytopdown_funtype_65_t ivar_1009;
                  ivar_1009 = NULL;
                  ivar_1007 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_999, ivar_30, ivar_1009);
                  if (ivar_1009 != NULL) ivar_1009->count--;
                  arraytopdown_funtype_65_t ivar_1008;
                  arraytopdown_funtype_65_t ivar_1003;
                  arraytopdown__ent_adt_t ivar_1005;
                  ivar_1005 = NULL;
                  ivar_1003 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1000, ivar_34, ivar_1005);
                  if (ivar_1005 != NULL) ivar_1005->count--;
                  ivar_1008 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1003, ivar_34, ivar_991);
                  if (ivar_991 != NULL) ivar_991->count--;
                  ivar_1011 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1007, ivar_30, ivar_1008);
                  if (ivar_1008 != NULL) ivar_1008->count--;
                  ivar_1013 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_1010, ivar_1011);
                  if (ivar_1011 != NULL) ivar_1011->count--;
                  arraytopdown_record_104_t ivar_1017;
                  ivar_1017 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_1013, ivar_992);
                  arraytopdown_record_104_t ivar_1022;
                  arraytopdown_record_104_t ivar_1019;
                  arraytopdown__ent_adt_t ivar_1021;
                  ivar_1021 = NULL;
                  ivar_1019 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1017, ivar_1021);
                  if (ivar_1021 != NULL) ivar_1021->count--;
                  ivar_1022 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1019, ivar_38);
                  if (ivar_38 != NULL) ivar_38->count--;
                  result = (arraytopdown_record_104_t)update_arraytopdown_record_104_lflag(ivar_1022, ivar_994);
};
};
};
} else {
              
               bool_t ivar_1227;
               ivar_48->count++;
               ivar_1227 = (bool_t)r_arraytopdown__andp((arraytopdown__peg_adt_t)ivar_48);
               if (ivar_1227){        
                uint8_t ivar_1031;
                ivar_1031 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_48);
                arraytopdown__ent_adt_t ivar_1035;
                arraytopdown_funtype_65_t ivar_1038;
                ivar_1038 = (arraytopdown_funtype_65_t)ivar_12->elems[ivar_30];
                ivar_1038->count++;
                release_arraytopdown_array_66(ivar_12);
                ivar_1035 = (arraytopdown__ent_adt_t)ivar_1038->ftbl->fptr(ivar_1038, ivar_1031);
                ivar_1038->ftbl->rptr(ivar_1038);
                bool_t ivar_1089;
                ivar_1035->count++;
                ivar_1089 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_1035);
                if (ivar_1089){         
                 release_arraytopdown__ent_adt(ivar_17);
                 uint64_t ivar_1045;
                 ivar_1045 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_1035);
                 arraytopdown__ent_adt_t ivar_1050;
                 mpz_ptr_t ivar_1060;
                 uint8_t ivar_1055;
                 ivar_1055 = (uint8_t)1;
                 mpz_mk_set_ui(ivar_1060, (uint64_t)ivar_1045);
                 mpz_add_ui(ivar_1060, ivar_1060, (uint64_t)ivar_1055);
                 uint64_t ivar_1058;
                 //copying to uint64 from mpz;
                 ivar_1058 = (uint64_t)mpz_get_ui(ivar_1060);
                 mpz_clear(ivar_1060);
                 ivar_1050 = (arraytopdown__ent_adt_t)arraytopdown__fail((uint64_t)ivar_1058);
                 uint64_t ivar_1052;
                 uint8_t ivar_1062;
                 ivar_1062 = (uint8_t)1;
                 ivar_1052 = (uint64_t)(ivar_20 - ivar_1062);
                 arraytopdown_record_104_t ivar_1079;
                 arraytopdown_array_66_t ivar_1065;
                 ivar_1065 = (arraytopdown_array_66_t)ivar_9->scaf;
                 ivar_1065->count++;
                 arraytopdown_record_104_t ivar_1076;
                 arraytopdown_array_66_t ivar_1078;
                 ivar_1078 = NULL;
                 ivar_1076 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_1078);
                 if (ivar_1078 != NULL) ivar_1078->count--;
                 arraytopdown_array_66_t ivar_1077;
                 arraytopdown_funtype_65_t ivar_1066;
                 ivar_1066 = (arraytopdown_funtype_65_t)ivar_1065->elems[ivar_30];
                 ivar_1066->count++;
                 arraytopdown_array_66_t ivar_1073;
                 arraytopdown_funtype_65_t ivar_1075;
                 ivar_1075 = NULL;
                 ivar_1073 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1065, ivar_30, ivar_1075);
                 if (ivar_1075 != NULL) ivar_1075->count--;
                 arraytopdown_funtype_65_t ivar_1074;
                 arraytopdown_funtype_65_t ivar_1069;
                 arraytopdown__ent_adt_t ivar_1071;
                 ivar_1071 = NULL;
                 ivar_1069 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1066, ivar_34, ivar_1071);
                 if (ivar_1071 != NULL) ivar_1071->count--;
                 ivar_1074 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1069, ivar_34, ivar_1050);
                 if (ivar_1050 != NULL) ivar_1050->count--;
                 ivar_1077 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1073, ivar_30, ivar_1074);
                 if (ivar_1074 != NULL) ivar_1074->count--;
                 ivar_1079 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_1076, ivar_1077);
                 if (ivar_1077 != NULL) ivar_1077->count--;
                 arraytopdown_record_104_t ivar_1084;
                 arraytopdown_record_104_t ivar_1081;
                 arraytopdown__ent_adt_t ivar_1083;
                 ivar_1083 = NULL;
                 ivar_1081 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1079, ivar_1083);
                 if (ivar_1083 != NULL) ivar_1083->count--;
                 ivar_1084 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1081, ivar_38);
                 if (ivar_38 != NULL) ivar_38->count--;
                 result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_1084, ivar_1052);
} else {
                
                 bool_t ivar_1145;
                 ivar_1035->count++;
                 ivar_1145 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_1035);
                 if (ivar_1145){          
                  release_arraytopdown__ent_adt(ivar_17);
                  uint64_t ivar_1093;
                  ivar_1035->count++;
                  ivar_1093 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_1035);
                  arraytopdown__ent_adt_t ivar_1102;
                  mpz_ptr_t ivar_1116;
                  uint8_t ivar_1108;
                  ivar_1108 = (uint8_t)1;
                  mpz_mk_set_ui(ivar_1116, (uint64_t)ivar_1093);
                  mpz_add_ui(ivar_1116, ivar_1116, (uint64_t)ivar_1108);
                  uint64_t ivar_1111;
                  //copying to uint64 from mpz;
                  ivar_1111 = (uint64_t)mpz_get_ui(ivar_1116);
                  mpz_clear(ivar_1116);
                  uint8_t ivar_1115;
                  ivar_1115 = (uint8_t)0;
                  uint32_t ivar_1112;
                  //copying to uint32 from uint8;
                  ivar_1112 = (uint32_t)ivar_1115;
                  ivar_1102 = (arraytopdown__ent_adt_t)arraytopdown__good((uint64_t)ivar_1111, (uint32_t)ivar_1112);
                  uint64_t ivar_1104;
                  uint8_t ivar_1118;
                  ivar_1118 = (uint8_t)1;
                  ivar_1104 = (uint64_t)(ivar_20 - ivar_1118);
                  arraytopdown_record_104_t ivar_1135;
                  arraytopdown_array_66_t ivar_1121;
                  ivar_1121 = (arraytopdown_array_66_t)ivar_9->scaf;
                  ivar_1121->count++;
                  arraytopdown_record_104_t ivar_1132;
                  arraytopdown_array_66_t ivar_1134;
                  ivar_1134 = NULL;
                  ivar_1132 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_1134);
                  if (ivar_1134 != NULL) ivar_1134->count--;
                  arraytopdown_array_66_t ivar_1133;
                  arraytopdown_funtype_65_t ivar_1122;
                  ivar_1122 = (arraytopdown_funtype_65_t)ivar_1121->elems[ivar_30];
                  ivar_1122->count++;
                  arraytopdown_array_66_t ivar_1129;
                  arraytopdown_funtype_65_t ivar_1131;
                  ivar_1131 = NULL;
                  ivar_1129 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1121, ivar_30, ivar_1131);
                  if (ivar_1131 != NULL) ivar_1131->count--;
                  arraytopdown_funtype_65_t ivar_1130;
                  arraytopdown_funtype_65_t ivar_1125;
                  arraytopdown__ent_adt_t ivar_1127;
                  ivar_1127 = NULL;
                  ivar_1125 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1122, ivar_34, ivar_1127);
                  if (ivar_1127 != NULL) ivar_1127->count--;
                  ivar_1130 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1125, ivar_34, ivar_1102);
                  if (ivar_1102 != NULL) ivar_1102->count--;
                  ivar_1133 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1129, ivar_30, ivar_1130);
                  if (ivar_1130 != NULL) ivar_1130->count--;
                  ivar_1135 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_1132, ivar_1133);
                  if (ivar_1133 != NULL) ivar_1133->count--;
                  arraytopdown_record_104_t ivar_1140;
                  arraytopdown_record_104_t ivar_1137;
                  arraytopdown__ent_adt_t ivar_1139;
                  ivar_1139 = NULL;
                  ivar_1137 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1135, ivar_1139);
                  if (ivar_1139 != NULL) ivar_1139->count--;
                  ivar_1140 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1137, ivar_38);
                  if (ivar_38 != NULL) ivar_38->count--;
                  result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_1140, ivar_1104);
} else {
                 
                  bool_t ivar_1186;
                  ivar_1186 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_1035);
                  if (ivar_1186){           
                   release_arraytopdown__ent_adt(ivar_38);
                   arraytopdown__ent_adt_t ivar_1150;
                   ivar_1150 = (arraytopdown__ent_adt_t)arraytopdown__push((uint32_t)ivar_30, (uint8_t)ivar_1031);
                   uint64_t ivar_1151;
                   uint8_t ivar_1159;
                   ivar_1159 = (uint8_t)1;
                   ivar_1151 = (uint64_t)(ivar_20 + ivar_1159);
                   arraytopdown_record_104_t ivar_1166;
                   arraytopdown_record_104_t ivar_1163;
                   arraytopdown__ent_adt_t ivar_1165;
                   ivar_1165 = NULL;
                   ivar_1163 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_9, ivar_1165);
                   if (ivar_1165 != NULL) ivar_1165->count--;
                   ivar_1166 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1163, ivar_1150);
                   if (ivar_1150 != NULL) ivar_1150->count--;
                   arraytopdown_record_104_t ivar_1170;
                   ivar_1170 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_1166, ivar_1151);
                   arraytopdown_array_66_t ivar_1171;
                   ivar_1171 = (arraytopdown_array_66_t)ivar_1170->scaf;
                   ivar_1171->count++;
                   arraytopdown_record_104_t ivar_1182;
                   arraytopdown_array_66_t ivar_1184;
                   ivar_1184 = NULL;
                   ivar_1182 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_1170, ivar_1184);
                   if (ivar_1184 != NULL) ivar_1184->count--;
                   arraytopdown_array_66_t ivar_1183;
                   arraytopdown_funtype_65_t ivar_1172;
                   ivar_1172 = (arraytopdown_funtype_65_t)ivar_1171->elems[ivar_30];
                   ivar_1172->count++;
                   arraytopdown_array_66_t ivar_1179;
                   arraytopdown_funtype_65_t ivar_1181;
                   ivar_1181 = NULL;
                   ivar_1179 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1171, ivar_30, ivar_1181);
                   if (ivar_1181 != NULL) ivar_1181->count--;
                   arraytopdown_funtype_65_t ivar_1180;
                   arraytopdown_funtype_65_t ivar_1175;
                   arraytopdown__ent_adt_t ivar_1177;
                   ivar_1177 = NULL;
                   ivar_1175 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1172, ivar_1031, ivar_1177);
                   if (ivar_1177 != NULL) ivar_1177->count--;
                   ivar_1180 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1175, ivar_1031, ivar_17);
                   if (ivar_17 != NULL) ivar_17->count--;
                   ivar_1183 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1179, ivar_30, ivar_1180);
                   if (ivar_1180 != NULL) ivar_1180->count--;
                   result = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_1182, ivar_1183);
                   if (ivar_1183 != NULL) ivar_1183->count--;
} else {
                  
                   release_arraytopdown__ent_adt(ivar_17);
                   arraytopdown__ent_adt_t ivar_1191;
                   ivar_1191 = (arraytopdown__ent_adt_t)arraytopdown__loop();
                   if (ivar_1191 != NULL) ivar_1191->count++;
                   uint64_t ivar_1192;
                   uint8_t ivar_1196;
                   ivar_1196 = (uint8_t)1;
                   ivar_1192 = (uint64_t)(ivar_20 - ivar_1196);
                   bool_t ivar_1194;
                   ivar_1194 = (bool_t) true;
                   arraytopdown_record_104_t ivar_1213;
                   arraytopdown_array_66_t ivar_1199;
                   ivar_1199 = (arraytopdown_array_66_t)ivar_9->scaf;
                   ivar_1199->count++;
                   arraytopdown_record_104_t ivar_1210;
                   arraytopdown_array_66_t ivar_1212;
                   ivar_1212 = NULL;
                   ivar_1210 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_1212);
                   if (ivar_1212 != NULL) ivar_1212->count--;
                   arraytopdown_array_66_t ivar_1211;
                   arraytopdown_funtype_65_t ivar_1200;
                   ivar_1200 = (arraytopdown_funtype_65_t)ivar_1199->elems[ivar_30];
                   ivar_1200->count++;
                   arraytopdown_array_66_t ivar_1207;
                   arraytopdown_funtype_65_t ivar_1209;
                   ivar_1209 = NULL;
                   ivar_1207 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1199, ivar_30, ivar_1209);
                   if (ivar_1209 != NULL) ivar_1209->count--;
                   arraytopdown_funtype_65_t ivar_1208;
                   arraytopdown_funtype_65_t ivar_1203;
                   arraytopdown__ent_adt_t ivar_1205;
                   ivar_1205 = NULL;
                   ivar_1203 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1200, ivar_34, ivar_1205);
                   if (ivar_1205 != NULL) ivar_1205->count--;
                   ivar_1208 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1203, ivar_34, ivar_1191);
                   if (ivar_1191 != NULL) ivar_1191->count--;
                   ivar_1211 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1207, ivar_30, ivar_1208);
                   if (ivar_1208 != NULL) ivar_1208->count--;
                   ivar_1213 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_1210, ivar_1211);
                   if (ivar_1211 != NULL) ivar_1211->count--;
                   arraytopdown_record_104_t ivar_1217;
                   ivar_1217 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_1213, ivar_1192);
                   arraytopdown_record_104_t ivar_1222;
                   arraytopdown_record_104_t ivar_1219;
                   arraytopdown__ent_adt_t ivar_1221;
                   ivar_1221 = NULL;
                   ivar_1219 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1217, ivar_1221);
                   if (ivar_1221 != NULL) ivar_1221->count--;
                   ivar_1222 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1219, ivar_38);
                   if (ivar_38 != NULL) ivar_38->count--;
                   result = (arraytopdown_record_104_t)update_arraytopdown_record_104_lflag(ivar_1222, ivar_1194);
};
};
};
} else {
               
                uint8_t ivar_1231;
                ivar_1231 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_48);
                arraytopdown__ent_adt_t ivar_1235;
                arraytopdown_funtype_65_t ivar_1238;
                ivar_1238 = (arraytopdown_funtype_65_t)ivar_12->elems[ivar_30];
                ivar_1238->count++;
                release_arraytopdown_array_66(ivar_12);
                ivar_1235 = (arraytopdown__ent_adt_t)ivar_1238->ftbl->fptr(ivar_1238, ivar_1231);
                ivar_1238->ftbl->rptr(ivar_1238);
                bool_t ivar_1293;
                ivar_1235->count++;
                ivar_1293 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_1235);
                if (ivar_1293){         
                 release_arraytopdown__ent_adt(ivar_17);
                 uint64_t ivar_1245;
                 ivar_1245 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_1235);
                 arraytopdown__ent_adt_t ivar_1250;
                 mpz_ptr_t ivar_1264;
                 uint8_t ivar_1256;
                 ivar_1256 = (uint8_t)1;
                 mpz_mk_set_ui(ivar_1264, (uint64_t)ivar_1245);
                 mpz_add_ui(ivar_1264, ivar_1264, (uint64_t)ivar_1256);
                 uint64_t ivar_1259;
                 //copying to uint64 from mpz;
                 ivar_1259 = (uint64_t)mpz_get_ui(ivar_1264);
                 mpz_clear(ivar_1264);
                 uint8_t ivar_1263;
                 ivar_1263 = (uint8_t)0;
                 uint32_t ivar_1260;
                 //copying to uint32 from uint8;
                 ivar_1260 = (uint32_t)ivar_1263;
                 ivar_1250 = (arraytopdown__ent_adt_t)arraytopdown__good((uint64_t)ivar_1259, (uint32_t)ivar_1260);
                 uint64_t ivar_1252;
                 uint8_t ivar_1266;
                 ivar_1266 = (uint8_t)1;
                 ivar_1252 = (uint64_t)(ivar_20 - ivar_1266);
                 arraytopdown_record_104_t ivar_1283;
                 arraytopdown_array_66_t ivar_1269;
                 ivar_1269 = (arraytopdown_array_66_t)ivar_9->scaf;
                 ivar_1269->count++;
                 arraytopdown_record_104_t ivar_1280;
                 arraytopdown_array_66_t ivar_1282;
                 ivar_1282 = NULL;
                 ivar_1280 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_1282);
                 if (ivar_1282 != NULL) ivar_1282->count--;
                 arraytopdown_array_66_t ivar_1281;
                 arraytopdown_funtype_65_t ivar_1270;
                 ivar_1270 = (arraytopdown_funtype_65_t)ivar_1269->elems[ivar_30];
                 ivar_1270->count++;
                 arraytopdown_array_66_t ivar_1277;
                 arraytopdown_funtype_65_t ivar_1279;
                 ivar_1279 = NULL;
                 ivar_1277 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1269, ivar_30, ivar_1279);
                 if (ivar_1279 != NULL) ivar_1279->count--;
                 arraytopdown_funtype_65_t ivar_1278;
                 arraytopdown_funtype_65_t ivar_1273;
                 arraytopdown__ent_adt_t ivar_1275;
                 ivar_1275 = NULL;
                 ivar_1273 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1270, ivar_34, ivar_1275);
                 if (ivar_1275 != NULL) ivar_1275->count--;
                 ivar_1278 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1273, ivar_34, ivar_1250);
                 if (ivar_1250 != NULL) ivar_1250->count--;
                 ivar_1281 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1277, ivar_30, ivar_1278);
                 if (ivar_1278 != NULL) ivar_1278->count--;
                 ivar_1283 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_1280, ivar_1281);
                 if (ivar_1281 != NULL) ivar_1281->count--;
                 arraytopdown_record_104_t ivar_1288;
                 arraytopdown_record_104_t ivar_1285;
                 arraytopdown__ent_adt_t ivar_1287;
                 ivar_1287 = NULL;
                 ivar_1285 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1283, ivar_1287);
                 if (ivar_1287 != NULL) ivar_1287->count--;
                 ivar_1288 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1285, ivar_38);
                 if (ivar_38 != NULL) ivar_38->count--;
                 result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_1288, ivar_1252);
} else {
                
                 bool_t ivar_1345;
                 ivar_1235->count++;
                 ivar_1345 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_1235);
                 if (ivar_1345){          
                  release_arraytopdown__ent_adt(ivar_17);
                  uint64_t ivar_1297;
                  ivar_1235->count++;
                  ivar_1297 = (uint64_t)arraytopdown__ent_adt_dep((arraytopdown__ent_adt_t)ivar_1235);
                  arraytopdown__ent_adt_t ivar_1306;
                  mpz_ptr_t ivar_1316;
                  uint8_t ivar_1311;
                  ivar_1311 = (uint8_t)1;
                  mpz_mk_set_ui(ivar_1316, (uint64_t)ivar_1297);
                  mpz_add_ui(ivar_1316, ivar_1316, (uint64_t)ivar_1311);
                  uint64_t ivar_1314;
                  //copying to uint64 from mpz;
                  ivar_1314 = (uint64_t)mpz_get_ui(ivar_1316);
                  mpz_clear(ivar_1316);
                  ivar_1306 = (arraytopdown__ent_adt_t)arraytopdown__fail((uint64_t)ivar_1314);
                  uint64_t ivar_1308;
                  uint8_t ivar_1318;
                  ivar_1318 = (uint8_t)1;
                  ivar_1308 = (uint64_t)(ivar_20 - ivar_1318);
                  arraytopdown_record_104_t ivar_1335;
                  arraytopdown_array_66_t ivar_1321;
                  ivar_1321 = (arraytopdown_array_66_t)ivar_9->scaf;
                  ivar_1321->count++;
                  arraytopdown_record_104_t ivar_1332;
                  arraytopdown_array_66_t ivar_1334;
                  ivar_1334 = NULL;
                  ivar_1332 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_1334);
                  if (ivar_1334 != NULL) ivar_1334->count--;
                  arraytopdown_array_66_t ivar_1333;
                  arraytopdown_funtype_65_t ivar_1322;
                  ivar_1322 = (arraytopdown_funtype_65_t)ivar_1321->elems[ivar_30];
                  ivar_1322->count++;
                  arraytopdown_array_66_t ivar_1329;
                  arraytopdown_funtype_65_t ivar_1331;
                  ivar_1331 = NULL;
                  ivar_1329 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1321, ivar_30, ivar_1331);
                  if (ivar_1331 != NULL) ivar_1331->count--;
                  arraytopdown_funtype_65_t ivar_1330;
                  arraytopdown_funtype_65_t ivar_1325;
                  arraytopdown__ent_adt_t ivar_1327;
                  ivar_1327 = NULL;
                  ivar_1325 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1322, ivar_34, ivar_1327);
                  if (ivar_1327 != NULL) ivar_1327->count--;
                  ivar_1330 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1325, ivar_34, ivar_1306);
                  if (ivar_1306 != NULL) ivar_1306->count--;
                  ivar_1333 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1329, ivar_30, ivar_1330);
                  if (ivar_1330 != NULL) ivar_1330->count--;
                  ivar_1335 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_1332, ivar_1333);
                  if (ivar_1333 != NULL) ivar_1333->count--;
                  arraytopdown_record_104_t ivar_1340;
                  arraytopdown_record_104_t ivar_1337;
                  arraytopdown__ent_adt_t ivar_1339;
                  ivar_1339 = NULL;
                  ivar_1337 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1335, ivar_1339);
                  if (ivar_1339 != NULL) ivar_1339->count--;
                  ivar_1340 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1337, ivar_38);
                  if (ivar_38 != NULL) ivar_38->count--;
                  result = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_1340, ivar_1308);
} else {
                 
                  bool_t ivar_1386;
                  ivar_1386 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_1235);
                  if (ivar_1386){           
                   release_arraytopdown__ent_adt(ivar_38);
                   arraytopdown__ent_adt_t ivar_1350;
                   ivar_1350 = (arraytopdown__ent_adt_t)arraytopdown__push((uint32_t)ivar_30, (uint8_t)ivar_1231);
                   uint64_t ivar_1351;
                   uint8_t ivar_1359;
                   ivar_1359 = (uint8_t)1;
                   ivar_1351 = (uint64_t)(ivar_20 + ivar_1359);
                   arraytopdown_record_104_t ivar_1366;
                   arraytopdown_record_104_t ivar_1363;
                   arraytopdown__ent_adt_t ivar_1365;
                   ivar_1365 = NULL;
                   ivar_1363 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_9, ivar_1365);
                   if (ivar_1365 != NULL) ivar_1365->count--;
                   ivar_1366 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1363, ivar_1350);
                   if (ivar_1350 != NULL) ivar_1350->count--;
                   arraytopdown_record_104_t ivar_1370;
                   ivar_1370 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_1366, ivar_1351);
                   arraytopdown_array_66_t ivar_1371;
                   ivar_1371 = (arraytopdown_array_66_t)ivar_1370->scaf;
                   ivar_1371->count++;
                   arraytopdown_record_104_t ivar_1382;
                   arraytopdown_array_66_t ivar_1384;
                   ivar_1384 = NULL;
                   ivar_1382 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_1370, ivar_1384);
                   if (ivar_1384 != NULL) ivar_1384->count--;
                   arraytopdown_array_66_t ivar_1383;
                   arraytopdown_funtype_65_t ivar_1372;
                   ivar_1372 = (arraytopdown_funtype_65_t)ivar_1371->elems[ivar_30];
                   ivar_1372->count++;
                   arraytopdown_array_66_t ivar_1379;
                   arraytopdown_funtype_65_t ivar_1381;
                   ivar_1381 = NULL;
                   ivar_1379 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1371, ivar_30, ivar_1381);
                   if (ivar_1381 != NULL) ivar_1381->count--;
                   arraytopdown_funtype_65_t ivar_1380;
                   arraytopdown_funtype_65_t ivar_1375;
                   arraytopdown__ent_adt_t ivar_1377;
                   ivar_1377 = NULL;
                   ivar_1375 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1372, ivar_1231, ivar_1377);
                   if (ivar_1377 != NULL) ivar_1377->count--;
                   ivar_1380 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1375, ivar_1231, ivar_17);
                   if (ivar_17 != NULL) ivar_17->count--;
                   ivar_1383 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1379, ivar_30, ivar_1380);
                   if (ivar_1380 != NULL) ivar_1380->count--;
                   result = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_1382, ivar_1383);
                   if (ivar_1383 != NULL) ivar_1383->count--;
} else {
                  
                   release_arraytopdown__ent_adt(ivar_17);
                   arraytopdown__ent_adt_t ivar_1391;
                   ivar_1391 = (arraytopdown__ent_adt_t)arraytopdown__loop();
                   if (ivar_1391 != NULL) ivar_1391->count++;
                   uint64_t ivar_1392;
                   uint8_t ivar_1396;
                   ivar_1396 = (uint8_t)1;
                   ivar_1392 = (uint64_t)(ivar_20 - ivar_1396);
                   bool_t ivar_1394;
                   ivar_1394 = (bool_t) true;
                   arraytopdown_record_104_t ivar_1413;
                   arraytopdown_array_66_t ivar_1399;
                   ivar_1399 = (arraytopdown_array_66_t)ivar_9->scaf;
                   ivar_1399->count++;
                   arraytopdown_record_104_t ivar_1410;
                   arraytopdown_array_66_t ivar_1412;
                   ivar_1412 = NULL;
                   ivar_1410 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_9, ivar_1412);
                   if (ivar_1412 != NULL) ivar_1412->count--;
                   arraytopdown_array_66_t ivar_1411;
                   arraytopdown_funtype_65_t ivar_1400;
                   ivar_1400 = (arraytopdown_funtype_65_t)ivar_1399->elems[ivar_30];
                   ivar_1400->count++;
                   arraytopdown_array_66_t ivar_1407;
                   arraytopdown_funtype_65_t ivar_1409;
                   ivar_1409 = NULL;
                   ivar_1407 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1399, ivar_30, ivar_1409);
                   if (ivar_1409 != NULL) ivar_1409->count--;
                   arraytopdown_funtype_65_t ivar_1408;
                   arraytopdown_funtype_65_t ivar_1403;
                   arraytopdown__ent_adt_t ivar_1405;
                   ivar_1405 = NULL;
                   ivar_1403 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1400, ivar_34, ivar_1405);
                   if (ivar_1405 != NULL) ivar_1405->count--;
                   ivar_1408 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_1403, ivar_34, ivar_1391);
                   if (ivar_1391 != NULL) ivar_1391->count--;
                   ivar_1411 = (arraytopdown_array_66_t)update_arraytopdown_array_66(ivar_1407, ivar_30, ivar_1408);
                   if (ivar_1408 != NULL) ivar_1408->count--;
                   ivar_1413 = (arraytopdown_record_104_t)update_arraytopdown_record_104_scaf(ivar_1410, ivar_1411);
                   if (ivar_1411 != NULL) ivar_1411->count--;
                   arraytopdown_record_104_t ivar_1417;
                   ivar_1417 = (arraytopdown_record_104_t)update_arraytopdown_record_104_depth(ivar_1413, ivar_1392);
                   arraytopdown_record_104_t ivar_1422;
                   arraytopdown_record_104_t ivar_1419;
                   arraytopdown__ent_adt_t ivar_1421;
                   ivar_1421 = NULL;
                   ivar_1419 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1417, ivar_1421);
                   if (ivar_1421 != NULL) ivar_1421->count--;
                   ivar_1422 = (arraytopdown_record_104_t)update_arraytopdown_record_104_stack(ivar_1419, ivar_38);
                   if (ivar_38 != NULL) ivar_38->count--;
                   result = (arraytopdown_record_104_t)update_arraytopdown_record_104_lflag(ivar_1422, ivar_1394);
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

arraytopdown_closure_106_t new_arraytopdown_closure_106(void){
        static struct arraytopdown_funtype_105_ftbl_s ftbl = {.fptr = (arraytopdown_record_104_t (*)(arraytopdown_funtype_105_t, arraytopdown_record_104_t))&f_arraytopdown_closure_106, .mptr = (arraytopdown_record_104_t (*)(arraytopdown_funtype_105_t, arraytopdown_record_104_t))&m_arraytopdown_closure_106, .rptr =  (void (*)(arraytopdown_funtype_105_t))&release_arraytopdown_closure_106, .cptr = (arraytopdown_funtype_105_t (*)(arraytopdown_funtype_105_t))&copy_arraytopdown_closure_106};
        arraytopdown_closure_106_t tmp = (arraytopdown_closure_106_t) safe_malloc(sizeof(struct arraytopdown_closure_106_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_106(arraytopdown_funtype_105_t closure){
        arraytopdown_closure_106_t x = (arraytopdown_closure_106_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->fvar_2);
         release_arraytopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_106_t copy_arraytopdown_closure_106(arraytopdown_closure_106_t x){
        arraytopdown_closure_106_t y = new_arraytopdown_closure_106();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_105_htbl_t new_htbl = (arraytopdown_funtype_105_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_105_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_105_hashentry_t * new_data = (arraytopdown_funtype_105_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_105_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_105_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_107(arraytopdown_funtype_107_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_107_t copy_arraytopdown_funtype_107(arraytopdown_funtype_107_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_107(arraytopdown_funtype_107_t x, arraytopdown_funtype_107_t y){
        return false;}

void release_arraytopdown_funtype_108(arraytopdown_funtype_108_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_108_t copy_arraytopdown_funtype_108(arraytopdown_funtype_108_t x){return x->ftbl->cptr(x);}

bool_t equal_arraytopdown_funtype_108(arraytopdown_funtype_108_t x, arraytopdown_funtype_108_t y){
        return false;}


ordstruct_adt__ordstruct_adt_t f_arraytopdown_closure_109(struct arraytopdown_closure_109_s * closure, arraytopdown_record_104_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_arraytopdown_closure_109(bvar, closure->fvar_1); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_arraytopdown_closure_109(struct arraytopdown_closure_109_s * closure, arraytopdown_record_104_t bvar){
        return h_arraytopdown_closure_109(bvar, closure->fvar_1);}

extern ordstruct_adt__ordstruct_adt_t h_arraytopdown_closure_109(arraytopdown_record_104_t ivar_14, uint32_t ivar_5){
        ordstruct_adt__ordstruct_adt_t result;
        uint64_t ivar_49;
        arraytopdown_array_66_t ivar_31;
        ivar_31 = (arraytopdown_array_66_t)ivar_14->scaf;
        ivar_31->count++;
        arraytopdown_funtype_59_t ivar_32;
        arraytopdown_closure_110_t cl6813;
        cl6813 = new_arraytopdown_closure_110();
        ivar_32 = (arraytopdown_funtype_59_t)cl6813;
        ivar_49 = (uint64_t)arraytopdown__scafcount((uint32_t)ivar_5, (arraytopdown_array_66_t)ivar_31, (arraytopdown_funtype_59_t)ivar_32, (uint32_t)ivar_5);
        mpz_ptr_t ivar_46;
        //copying to mpz from uint64;
        mpz_mk_set_ui(ivar_46, ivar_49);
        mpz_ptr_t ivar_47;
        uint64_t ivar_34;
        uint32_t ivar_36;
        uint8_t ivar_39;
        ivar_39 = (uint8_t)1;
        ivar_36 = (uint32_t)(ivar_5 + ivar_39);
        uint8_t ivar_37;
        ivar_37 = (uint8_t)255;
        ivar_34 = (uint64_t)((uint64_t)ivar_36 * (uint64_t)ivar_37);
        uint64_t ivar_35;
        ivar_35 = (uint64_t)ivar_14->depth;
        release_arraytopdown_record_104(ivar_14);
        mpz_mk_set_ui(ivar_47, (uint64_t)ivar_34);
        mpz_sub_ui(ivar_47, ivar_47, (uint64_t)ivar_35);
        result = (ordstruct_adt__ordstruct_adt_t)lex2__lex2((mpz_ptr_t)ivar_46, (mpz_ptr_t)ivar_47);

        return result;
}

arraytopdown_closure_109_t new_arraytopdown_closure_109(void){
        static struct arraytopdown_funtype_108_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(arraytopdown_funtype_108_t, arraytopdown_record_104_t))&f_arraytopdown_closure_109, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(arraytopdown_funtype_108_t, arraytopdown_record_104_t))&m_arraytopdown_closure_109, .rptr =  (void (*)(arraytopdown_funtype_108_t))&release_arraytopdown_closure_109, .cptr = (arraytopdown_funtype_108_t (*)(arraytopdown_funtype_108_t))&copy_arraytopdown_closure_109};
        arraytopdown_closure_109_t tmp = (arraytopdown_closure_109_t) safe_malloc(sizeof(struct arraytopdown_closure_109_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_109(arraytopdown_funtype_108_t closure){
        arraytopdown_closure_109_t x = (arraytopdown_closure_109_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_109_t copy_arraytopdown_closure_109(arraytopdown_closure_109_t x){
        arraytopdown_closure_109_t y = new_arraytopdown_closure_109();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            arraytopdown_funtype_108_htbl_t new_htbl = (arraytopdown_funtype_108_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_108_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_108_hashentry_t * new_data = (arraytopdown_funtype_108_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_108_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_108_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_arraytopdown_closure_110(struct arraytopdown_closure_110_s * closure, arraytopdown__ent_adt_t bvar){
        bool_t result = h_arraytopdown_closure_110(bvar); 
        return result;}

bool_t m_arraytopdown_closure_110(struct arraytopdown_closure_110_s * closure, arraytopdown__ent_adt_t bvar){
        return h_arraytopdown_closure_110(bvar);}

extern bool_t h_arraytopdown_closure_110(arraytopdown__ent_adt_t ivar_25){
        bool_t result;
        result = (bool_t)arraytopdown__push_or_pendingp((arraytopdown__ent_adt_t)ivar_25);

        return result;
}

arraytopdown_closure_110_t new_arraytopdown_closure_110(void){
        static struct arraytopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&f_arraytopdown_closure_110, .mptr = (bool_t (*)(arraytopdown_funtype_59_t, arraytopdown__ent_adt_t))&m_arraytopdown_closure_110, .rptr =  (void (*)(arraytopdown_funtype_59_t))&release_arraytopdown_closure_110, .cptr = (arraytopdown_funtype_59_t (*)(arraytopdown_funtype_59_t))&copy_arraytopdown_closure_110};
        arraytopdown_closure_110_t tmp = (arraytopdown_closure_110_t) safe_malloc(sizeof(struct arraytopdown_closure_110_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_110(arraytopdown_funtype_59_t closure){
        arraytopdown_closure_110_t x = (arraytopdown_closure_110_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_110_t copy_arraytopdown_closure_110(arraytopdown_closure_110_t x){
        arraytopdown_closure_110_t y = new_arraytopdown_closure_110();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdown_funtype_59_htbl_t new_htbl = (arraytopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_59_hashentry_t * new_data = (arraytopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown_record_104_t f_arraytopdown_closure_111(struct arraytopdown_closure_111_s * closure, arraytopdown_record_104_t bvar){
        arraytopdown_record_104_t result = h_arraytopdown_closure_111(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

arraytopdown_record_104_t m_arraytopdown_closure_111(struct arraytopdown_closure_111_s * closure, arraytopdown_record_104_t bvar){
        return h_arraytopdown_closure_111(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern arraytopdown_record_104_t h_arraytopdown_closure_111(arraytopdown_record_104_t ivar_18, uint32_t ivar_10, uint8_t ivar_11, bytestrings__bytestring_t ivar_9, arraytopdown__lang_spec_t ivar_8, uint32_t ivar_7){
        arraytopdown_record_104_t result;
        bool_t ivar_21;
        uint64_t ivar_22;
        ivar_22 = (uint64_t)ivar_18->depth;
        uint8_t ivar_23;
        ivar_23 = (uint8_t)0;
        ivar_21 = (ivar_22 == ivar_23);
        if (ivar_21){ 
             //copying to arraytopdown_record_104 from arraytopdown_record_104;
             result = (arraytopdown_record_104_t)ivar_18;
             if (result != NULL) result->count++;
             release_arraytopdown_record_104(ivar_18);
} else {
        
             arraytopdown_funtype_105_t ivar_56;
             ivar_8->count++;
             ivar_9->count++;
             ivar_56 = (arraytopdown_funtype_105_t)arraytopdown__parse((uint32_t)ivar_7, (arraytopdown__lang_spec_t)ivar_8, (bytestrings__bytestring_t)ivar_9, (uint32_t)ivar_10, (uint8_t)ivar_11);
             arraytopdown_record_104_t ivar_71;
             arraytopdown_funtype_105_t ivar_35;
             ivar_8->count++;
             ivar_9->count++;
             ivar_35 = (arraytopdown_funtype_105_t)arraytopdown__step((uint32_t)ivar_7, (arraytopdown__lang_spec_t)ivar_8, (bytestrings__bytestring_t)ivar_9, (uint32_t)ivar_10, (uint8_t)ivar_11);
             ivar_71 = (arraytopdown_record_104_t)ivar_35->ftbl->fptr(ivar_35, ivar_18);
             ivar_35->ftbl->rptr(ivar_35);
             result = (arraytopdown_record_104_t)ivar_56->ftbl->fptr(ivar_56, ivar_71);
             ivar_56->ftbl->rptr(ivar_56);
};

        return result;
}

arraytopdown_closure_111_t new_arraytopdown_closure_111(void){
        static struct arraytopdown_funtype_105_ftbl_s ftbl = {.fptr = (arraytopdown_record_104_t (*)(arraytopdown_funtype_105_t, arraytopdown_record_104_t))&f_arraytopdown_closure_111, .mptr = (arraytopdown_record_104_t (*)(arraytopdown_funtype_105_t, arraytopdown_record_104_t))&m_arraytopdown_closure_111, .rptr =  (void (*)(arraytopdown_funtype_105_t))&release_arraytopdown_closure_111, .cptr = (arraytopdown_funtype_105_t (*)(arraytopdown_funtype_105_t))&copy_arraytopdown_closure_111};
        arraytopdown_closure_111_t tmp = (arraytopdown_closure_111_t) safe_malloc(sizeof(struct arraytopdown_closure_111_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_111(arraytopdown_funtype_105_t closure){
        arraytopdown_closure_111_t x = (arraytopdown_closure_111_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->fvar_3);
         release_arraytopdown__lang_spec(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_111_t copy_arraytopdown_closure_111(arraytopdown_closure_111_t x){
        arraytopdown_closure_111_t y = new_arraytopdown_closure_111();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint8_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = (uint32_t)x->fvar_5;
        if (x->htbl != NULL){
            arraytopdown_funtype_105_htbl_t new_htbl = (arraytopdown_funtype_105_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_105_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_105_hashentry_t * new_data = (arraytopdown_funtype_105_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_105_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_105_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


arraytopdown__ent_adt_t f_arraytopdown_closure_112(struct arraytopdown_closure_112_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        arraytopdown_funtype_65_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_arraytopdown_funtype_65(htbl, bvar, hash);
        arraytopdown_funtype_65_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            arraytopdown__ent_adt_t result;
            result = (arraytopdown__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_arraytopdown_closure_112(bvar);};

return h_arraytopdown_closure_112(bvar);}

arraytopdown__ent_adt_t m_arraytopdown_closure_112(struct arraytopdown_closure_112_s * closure, uint8_t bvar){
        return h_arraytopdown_closure_112(bvar);}

extern arraytopdown__ent_adt_t h_arraytopdown_closure_112(uint8_t ivar_8){
        arraytopdown__ent_adt_t result;
        result = (arraytopdown__ent_adt_t)arraytopdown__pending();
        if (result != NULL) result->count++;

        return result;
}

arraytopdown_closure_112_t new_arraytopdown_closure_112(void){
        static struct arraytopdown_funtype_65_ftbl_s ftbl = {.fptr = (arraytopdown__ent_adt_t (*)(arraytopdown_funtype_65_t, uint8_t))&f_arraytopdown_closure_112, .mptr = (arraytopdown__ent_adt_t (*)(arraytopdown_funtype_65_t, uint8_t))&m_arraytopdown_closure_112, .rptr =  (void (*)(arraytopdown_funtype_65_t))&release_arraytopdown_closure_112, .cptr = (arraytopdown_funtype_65_t (*)(arraytopdown_funtype_65_t))&copy_arraytopdown_closure_112};
        arraytopdown_closure_112_t tmp = (arraytopdown_closure_112_t) safe_malloc(sizeof(struct arraytopdown_closure_112_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_112(arraytopdown_funtype_65_t closure){
        arraytopdown_closure_112_t x = (arraytopdown_closure_112_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_112_t copy_arraytopdown_closure_112(arraytopdown_closure_112_t x){
        arraytopdown_closure_112_t y = new_arraytopdown_closure_112();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            arraytopdown_funtype_65_htbl_t new_htbl = (arraytopdown_funtype_65_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_65_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_65_hashentry_t * new_data = (arraytopdown_funtype_65_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_65_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_65_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_arraytopdown_funtype_113(arraytopdown_funtype_113_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

arraytopdown_funtype_113_t copy_arraytopdown_funtype_113(arraytopdown_funtype_113_t x){return x->ftbl->cptr(x);}

uint32_t lookup_arraytopdown_funtype_113(arraytopdown_funtype_113_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        arraytopdown_funtype_113_hashentry_t data = htbl->data[hashindex];
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

arraytopdown_funtype_113_t dupdate_arraytopdown_funtype_113(arraytopdown_funtype_113_t a, uint32_t i, arraytopdown_funtype_65_t v){
        arraytopdown_funtype_113_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (arraytopdown_funtype_113_htbl_t)safe_malloc(sizeof(struct arraytopdown_funtype_113_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (arraytopdown_funtype_113_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct arraytopdown_funtype_113_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        arraytopdown_funtype_113_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                arraytopdown_funtype_113_hashentry_t * new_data = (arraytopdown_funtype_113_hashentry_t *)safe_malloc(new_size * sizeof(struct arraytopdown_funtype_113_hashentry_s));
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
                                new_data[new_loc].value = (arraytopdown_funtype_65_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_arraytopdown_funtype_113(htbl, i, ihash);
        arraytopdown_funtype_113_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (arraytopdown_funtype_65_t)v; htbl->num_entries++;}
            else {arraytopdown_funtype_65_t tempvalue;tempvalue = (arraytopdown_funtype_65_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (arraytopdown_funtype_65_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_arraytopdown_funtype_65(tempvalue);};
        return a;

}

arraytopdown_funtype_113_t update_arraytopdown_funtype_113(arraytopdown_funtype_113_t a, uint32_t i, arraytopdown_funtype_65_t v){
        if (a->count == 1){
                return dupdate_arraytopdown_funtype_113(a, i, v);
            } else {
                arraytopdown_funtype_113_t x = copy_arraytopdown_funtype_113(a);
                a->count--;
                return dupdate_arraytopdown_funtype_113(x, i, v);
            }}

bool_t equal_arraytopdown_funtype_113(arraytopdown_funtype_113_t x, arraytopdown_funtype_113_t y){
        return false;}


arraytopdown_record_114_t new_arraytopdown_record_114(void){
        arraytopdown_record_114_t tmp = (arraytopdown_record_114_t) safe_malloc(sizeof(struct arraytopdown_record_114_s));
        tmp->count = 1;
        return tmp;}

void release_arraytopdown_record_114(arraytopdown_record_114_t x){
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_113(x->scaf);
         release_arraytopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_arraytopdown_record_114_ptr(pointer_t x, type_actual_t T){
        release_arraytopdown_record_114((arraytopdown_record_114_t)x);
}

arraytopdown_record_114_t copy_arraytopdown_record_114(arraytopdown_record_114_t x){
        arraytopdown_record_114_t y = new_arraytopdown_record_114();
        y->depth = (uint8_t)x->depth;
        y->lflag = (bool_t)x->lflag;
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_arraytopdown_record_114(arraytopdown_record_114_t x, arraytopdown_record_114_t y){
        bool_t tmp = true;
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && x->lflag == y->lflag;
        tmp = tmp && equal_arraytopdown_funtype_113(x->scaf, y->scaf);
        tmp = tmp && equal_arraytopdown__ent_adt(x->stack, y->stack);
        return tmp;}

bool_t equal_arraytopdown_record_114_ptr(pointer_t x, pointer_t y, actual_arraytopdown_record_114_t T){
        return equal_arraytopdown_record_114((arraytopdown_record_114_t)x, (arraytopdown_record_114_t)y);
}

actual_arraytopdown_record_114_t actual_arraytopdown_record_114(){
        actual_arraytopdown_record_114_t new = (actual_arraytopdown_record_114_t)safe_malloc(sizeof(struct actual_arraytopdown_record_114_s));
        new->equal_ptr = (equal_ptr_t)(*equal_arraytopdown_record_114_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_arraytopdown_record_114_ptr);
 

 
        return new;
 };

arraytopdown_record_114_t update_arraytopdown_record_114_depth(arraytopdown_record_114_t x, uint8_t v){
        arraytopdown_record_114_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_114(x); x->count--;};
        y->depth = (uint8_t)v;
        return y;}

arraytopdown_record_114_t update_arraytopdown_record_114_lflag(arraytopdown_record_114_t x, bool_t v){
        arraytopdown_record_114_t y;
        if (x->count == 1){y = x;}
        else {y = copy_arraytopdown_record_114(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}

arraytopdown_record_114_t update_arraytopdown_record_114_scaf(arraytopdown_record_114_t x, arraytopdown_funtype_113_t v){
        arraytopdown_record_114_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_arraytopdown_funtype_113(x->scaf);};}
        else {y = copy_arraytopdown_record_114(x); x->count--; y->scaf->count--;};
        y->scaf = (arraytopdown_funtype_113_t)v;
        return y;}

arraytopdown_record_114_t update_arraytopdown_record_114_stack(arraytopdown_record_114_t x, arraytopdown__ent_adt_t v){
        arraytopdown_record_114_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_arraytopdown__ent_adt(x->stack);};}
        else {y = copy_arraytopdown_record_114(x); x->count--; y->stack->count--;};
        y->stack = (arraytopdown__ent_adt_t)v;
        return y;}




arraytopdown_funtype_65_t f_arraytopdown_closure_115(struct arraytopdown_closure_115_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        arraytopdown_funtype_113_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_arraytopdown_funtype_113(htbl, bvar, hash);
        arraytopdown_funtype_113_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            arraytopdown_funtype_65_t result;
            result = (arraytopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_arraytopdown_closure_115(bvar, closure->fvar_1);};

return h_arraytopdown_closure_115(bvar, closure->fvar_1);}

arraytopdown_funtype_65_t m_arraytopdown_closure_115(struct arraytopdown_closure_115_s * closure, uint32_t bvar){
        return h_arraytopdown_closure_115(bvar, closure->fvar_1);}

extern arraytopdown_funtype_65_t h_arraytopdown_closure_115(uint32_t ivar_19, arraytopdown_funtype_65_t ivar_5){
        arraytopdown_funtype_65_t result;
        //copying to arraytopdown_funtype_65 from arraytopdown_funtype_65;
        result = (arraytopdown_funtype_65_t)ivar_5;
        if (result != NULL) result->count++;

        return result;
}

arraytopdown_closure_115_t new_arraytopdown_closure_115(void){
        static struct arraytopdown_funtype_113_ftbl_s ftbl = {.fptr = (arraytopdown_funtype_65_t (*)(arraytopdown_funtype_113_t, uint32_t))&f_arraytopdown_closure_115, .mptr = (arraytopdown_funtype_65_t (*)(arraytopdown_funtype_113_t, uint32_t))&m_arraytopdown_closure_115, .rptr =  (void (*)(arraytopdown_funtype_113_t))&release_arraytopdown_closure_115, .cptr = (arraytopdown_funtype_113_t (*)(arraytopdown_funtype_113_t))&copy_arraytopdown_closure_115};
        arraytopdown_closure_115_t tmp = (arraytopdown_closure_115_t) safe_malloc(sizeof(struct arraytopdown_closure_115_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_arraytopdown_closure_115(arraytopdown_funtype_113_t closure){
        arraytopdown_closure_115_t x = (arraytopdown_closure_115_t)closure;
        x->count--;
        if (x->count <= 0){
         release_arraytopdown_funtype_65(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

arraytopdown_closure_115_t copy_arraytopdown_closure_115(arraytopdown_closure_115_t x){
        arraytopdown_closure_115_t y = new_arraytopdown_closure_115();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            arraytopdown_funtype_113_htbl_t new_htbl = (arraytopdown_funtype_113_htbl_t) safe_malloc(sizeof(struct arraytopdown_funtype_113_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            arraytopdown_funtype_113_hashentry_t * new_data = (arraytopdown_funtype_113_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct arraytopdown_funtype_113_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct arraytopdown_funtype_113_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern uint8_t arraytopdown__num_non_terminals(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)255;

        defined = true;};
        
        return result;
}

extern bool_t r_arraytopdown__failp(arraytopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__ent_adt_index;
        release_arraytopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_arraytopdown__pendingp(arraytopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__ent_adt_index;
        release_arraytopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_arraytopdown__loopp(arraytopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__ent_adt_index;
        release_arraytopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_arraytopdown__goodp(arraytopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)3;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__ent_adt_index;
        release_arraytopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_arraytopdown__pushp(arraytopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)4;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__ent_adt_index;
        release_arraytopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern arraytopdown__ent_adt_t update_arraytopdown__ent_adt_dep(arraytopdown__ent_adt_t ivar_1, uint64_t ivar_7){
        arraytopdown__ent_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->arraytopdown__ent_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)0;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             arraytopdown__fail_t ivar_8;
             //copying to arraytopdown__fail from arraytopdown__ent_adt;
             ivar_8 = (arraytopdown__fail_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_arraytopdown__ent_adt(ivar_1);
             result = (arraytopdown__ent_adt_t)update_arraytopdown__fail_dep(ivar_8, ivar_7);
} else {
        
             arraytopdown__good_t ivar_12;
             //copying to arraytopdown__good from arraytopdown__ent_adt;
             ivar_12 = (arraytopdown__good_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_arraytopdown__ent_adt(ivar_1);
             result = (arraytopdown__ent_adt_t)update_arraytopdown__good_dep(ivar_12, ivar_7);
};

        
        return result;
}

extern uint64_t arraytopdown__ent_adt_dep(arraytopdown__ent_adt_t ivar_1){
        uint64_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->arraytopdown__ent_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)0;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             arraytopdown__fail_t ivar_2;
             //copying to arraytopdown__fail from arraytopdown__ent_adt;
             ivar_2 = (arraytopdown__fail_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_arraytopdown__ent_adt(ivar_1);
             result = (uint64_t)ivar_2->dep;
             release_arraytopdown__fail(ivar_2);
} else {
        
             arraytopdown__good_t ivar_6;
             //copying to arraytopdown__good from arraytopdown__ent_adt;
             ivar_6 = (arraytopdown__good_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_arraytopdown__ent_adt(ivar_1);
             result = (uint64_t)ivar_6->dep;
             release_arraytopdown__good(ivar_6);
};

        
        return result;
}

extern arraytopdown__good_t update_arraytopdown__ent_adt_span(arraytopdown__ent_adt_t ivar_1, uint32_t ivar_3){
        arraytopdown__good_t  result;
        arraytopdown__good_t ivar_2;
        //copying to arraytopdown__good from arraytopdown__ent_adt;
        ivar_2 = (arraytopdown__good_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_arraytopdown__ent_adt(ivar_1);
        result = (arraytopdown__good_t)update_arraytopdown__good_span(ivar_2, ivar_3);

        
        return result;
}

extern uint32_t arraytopdown__ent_adt_span(arraytopdown__ent_adt_t ivar_1){
        uint32_t  result;
        arraytopdown__good_t ivar_2;
        //copying to arraytopdown__good from arraytopdown__ent_adt;
        ivar_2 = (arraytopdown__good_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_arraytopdown__ent_adt(ivar_1);
        result = (uint32_t)ivar_2->span;
        release_arraytopdown__good(ivar_2);

        
        return result;
}

extern arraytopdown__push_t update_arraytopdown__ent_adt_pos(arraytopdown__ent_adt_t ivar_1, uint32_t ivar_3){
        arraytopdown__push_t  result;
        arraytopdown__push_t ivar_2;
        //copying to arraytopdown__push from arraytopdown__ent_adt;
        ivar_2 = (arraytopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_arraytopdown__ent_adt(ivar_1);
        result = (arraytopdown__push_t)update_arraytopdown__push_pos(ivar_2, ivar_3);

        
        return result;
}

extern uint32_t arraytopdown__ent_adt_pos(arraytopdown__ent_adt_t ivar_1){
        uint32_t  result;
        arraytopdown__push_t ivar_2;
        //copying to arraytopdown__push from arraytopdown__ent_adt;
        ivar_2 = (arraytopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_arraytopdown__ent_adt(ivar_1);
        result = (uint32_t)ivar_2->pos;
        release_arraytopdown__push(ivar_2);

        
        return result;
}

extern arraytopdown__push_t update_arraytopdown__ent_adt_nt(arraytopdown__ent_adt_t ivar_1, uint8_t ivar_3){
        arraytopdown__push_t  result;
        arraytopdown__push_t ivar_2;
        //copying to arraytopdown__push from arraytopdown__ent_adt;
        ivar_2 = (arraytopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_arraytopdown__ent_adt(ivar_1);
        result = (arraytopdown__push_t)update_arraytopdown__push_nt(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t arraytopdown__ent_adt_nt(arraytopdown__ent_adt_t ivar_1){
        uint8_t  result;
        arraytopdown__push_t ivar_2;
        //copying to arraytopdown__push from arraytopdown__ent_adt;
        ivar_2 = (arraytopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_arraytopdown__ent_adt(ivar_1);
        result = (uint8_t)ivar_2->nt;
        release_arraytopdown__push(ivar_2);

        
        return result;
}

extern arraytopdown__ent_adt_t arraytopdown__fail(uint64_t ivar_2){
        arraytopdown__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        arraytopdown__fail_t tmp6499 = new_arraytopdown__fail();;
        result = (arraytopdown__ent_adt_t)tmp6499;
        tmp6499->arraytopdown__ent_adt_index = (uint8_t)ivar_1;
        tmp6499->dep = (uint64_t)ivar_2;

        
        return result;
}

extern arraytopdown__ent_adt_t arraytopdown__pending(void){
        arraytopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        arraytopdown__ent_adt_t tmp6500 = new_arraytopdown__ent_adt();;
        result = (arraytopdown__ent_adt_t)tmp6500;
        tmp6500->arraytopdown__ent_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern arraytopdown__ent_adt_t arraytopdown__loop(void){
        arraytopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        arraytopdown__ent_adt_t tmp6501 = new_arraytopdown__ent_adt();;
        result = (arraytopdown__ent_adt_t)tmp6501;
        tmp6501->arraytopdown__ent_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern arraytopdown__ent_adt_t arraytopdown__good(uint64_t ivar_2, uint32_t ivar_3){
        arraytopdown__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)3;
        arraytopdown__good_t tmp6502 = new_arraytopdown__good();;
        result = (arraytopdown__ent_adt_t)tmp6502;
        tmp6502->arraytopdown__ent_adt_index = (uint8_t)ivar_1;
        tmp6502->dep = (uint64_t)ivar_2;
        tmp6502->span = (uint32_t)ivar_3;

        
        return result;
}

extern arraytopdown__ent_adt_t arraytopdown__push(uint32_t ivar_2, uint8_t ivar_3){
        arraytopdown__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)4;
        arraytopdown__push_t tmp6503 = new_arraytopdown__push();;
        result = (arraytopdown__ent_adt_t)tmp6503;
        tmp6503->arraytopdown__ent_adt_index = (uint8_t)ivar_1;
        tmp6503->pos = (uint32_t)ivar_2;
        tmp6503->nt = (uint8_t)ivar_3;

        
        return result;
}

extern arraytopdown_funtype_4_t arraytopdown__ent_ord(void){
        arraytopdown_funtype_4_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t arraytopdown__ord__1(arraytopdown__ent_adt_t ivar_2){
        uint8_t  result;
        bool_t ivar_8;
        ivar_2->count++;
        ivar_8 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_2);
        if (ivar_8){ 
             result = (uint8_t)0;
} else {
        
             bool_t ivar_12;
             ivar_2->count++;
             ivar_12 = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_2);
             if (ivar_12){  
           release_arraytopdown__ent_adt(ivar_2);
           result = (uint8_t)1;
} else {
             
           bool_t ivar_16;
           ivar_2->count++;
           ivar_16 = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_2);
           if (ivar_16){   
           release_arraytopdown__ent_adt(ivar_2);
           result = (uint8_t)2;
} else {
           
           bool_t ivar_28;
           ivar_2->count++;
           ivar_28 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_2);
           if (ivar_28){    
            result = (uint8_t)3;
} else {
           
            result = (uint8_t)4;
};
};
};
};

        
        return result;
}

extern bool_t arraytopdown__subterm__1(arraytopdown__ent_adt_t ivar_1, arraytopdown__ent_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_arraytopdown__ent_adt(ivar_1, ivar_2);

        
        return result;
}

extern bool_t arraytopdown__doublelessp__1(arraytopdown__ent_adt_t ivar_1, arraytopdown__ent_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

extern arraytopdown_funtype_5_t arraytopdown__reduce_nat__1(arraytopdown_funtype_6_t ivar_6, mpz_ptr_t ivar_8, mpz_ptr_t ivar_9, arraytopdown_funtype_8_t ivar_10, arraytopdown_funtype_10_t ivar_12){
        arraytopdown_funtype_5_t  result;
        arraytopdown_closure_11_t cl6506;
        cl6506 = new_arraytopdown_closure_11();
        cl6506->fvar_1 = (arraytopdown_funtype_8_t)ivar_10;
        if (cl6506->fvar_1 != NULL) cl6506->fvar_1->count++;
        cl6506->fvar_2 = (arraytopdown_funtype_10_t)ivar_12;
        if (cl6506->fvar_2 != NULL) cl6506->fvar_2->count++;
        mpz_set(cl6506->fvar_3, ivar_9);
        mpz_set(cl6506->fvar_4, ivar_8);
        cl6506->fvar_5 = (arraytopdown_funtype_6_t)ivar_6;
        if (cl6506->fvar_5 != NULL) cl6506->fvar_5->count++;
        release_arraytopdown_funtype_8(ivar_10);
        release_arraytopdown_funtype_10(ivar_12);
        release_arraytopdown_funtype_6(ivar_6);
        result = (arraytopdown_funtype_5_t)cl6506;

        
        return result;
}

extern arraytopdown_funtype_5_t arraytopdown__REDUCE_nat__1(arraytopdown_funtype_13_t ivar_8, arraytopdown_funtype_5_t ivar_10, arraytopdown_funtype_5_t ivar_12, arraytopdown_funtype_15_t ivar_14, arraytopdown_funtype_17_t ivar_16){
        arraytopdown_funtype_5_t  result;
        arraytopdown_closure_18_t cl6508;
        cl6508 = new_arraytopdown_closure_18();
        cl6508->fvar_1 = (arraytopdown_funtype_15_t)ivar_14;
        if (cl6508->fvar_1 != NULL) cl6508->fvar_1->count++;
        cl6508->fvar_2 = (arraytopdown_funtype_17_t)ivar_16;
        if (cl6508->fvar_2 != NULL) cl6508->fvar_2->count++;
        cl6508->fvar_3 = (arraytopdown_funtype_5_t)ivar_12;
        if (cl6508->fvar_3 != NULL) cl6508->fvar_3->count++;
        cl6508->fvar_4 = (arraytopdown_funtype_5_t)ivar_10;
        if (cl6508->fvar_4 != NULL) cl6508->fvar_4->count++;
        cl6508->fvar_5 = (arraytopdown_funtype_13_t)ivar_8;
        if (cl6508->fvar_5 != NULL) cl6508->fvar_5->count++;
        release_arraytopdown_funtype_15(ivar_14);
        release_arraytopdown_funtype_17(ivar_16);
        release_arraytopdown_funtype_5(ivar_12);
        release_arraytopdown_funtype_5(ivar_10);
        release_arraytopdown_funtype_13(ivar_8);
        result = (arraytopdown_funtype_5_t)cl6508;

        
        return result;
}

extern arraytopdown_funtype_19_t arraytopdown__reduce_ordinal__1(arraytopdown_funtype_20_t ivar_6, ordstruct_adt__ordstruct_adt_t ivar_8, ordstruct_adt__ordstruct_adt_t ivar_9, arraytopdown_funtype_21_t ivar_10, arraytopdown_funtype_22_t ivar_12){
        arraytopdown_funtype_19_t  result;
        arraytopdown_closure_23_t cl6510;
        cl6510 = new_arraytopdown_closure_23();
        cl6510->fvar_1 = (arraytopdown_funtype_21_t)ivar_10;
        if (cl6510->fvar_1 != NULL) cl6510->fvar_1->count++;
        cl6510->fvar_2 = (arraytopdown_funtype_22_t)ivar_12;
        if (cl6510->fvar_2 != NULL) cl6510->fvar_2->count++;
        cl6510->fvar_3 = (ordstruct_adt__ordstruct_adt_t)ivar_9;
        if (cl6510->fvar_3 != NULL) cl6510->fvar_3->count++;
        cl6510->fvar_4 = (ordstruct_adt__ordstruct_adt_t)ivar_8;
        if (cl6510->fvar_4 != NULL) cl6510->fvar_4->count++;
        cl6510->fvar_5 = (arraytopdown_funtype_20_t)ivar_6;
        if (cl6510->fvar_5 != NULL) cl6510->fvar_5->count++;
        release_arraytopdown_funtype_21(ivar_10);
        release_arraytopdown_funtype_22(ivar_12);
        release_ordstruct_adt__ordstruct_adt(ivar_9);
        release_ordstruct_adt__ordstruct_adt(ivar_8);
        release_arraytopdown_funtype_20(ivar_6);
        result = (arraytopdown_funtype_19_t)cl6510;

        
        return result;
}

extern arraytopdown_funtype_19_t arraytopdown__REDUCE_ordinal__1(arraytopdown_funtype_24_t ivar_8, arraytopdown_funtype_19_t ivar_10, arraytopdown_funtype_19_t ivar_12, arraytopdown_funtype_25_t ivar_14, arraytopdown_funtype_26_t ivar_16){
        arraytopdown_funtype_19_t  result;
        arraytopdown_closure_27_t cl6512;
        cl6512 = new_arraytopdown_closure_27();
        cl6512->fvar_1 = (arraytopdown_funtype_25_t)ivar_14;
        if (cl6512->fvar_1 != NULL) cl6512->fvar_1->count++;
        cl6512->fvar_2 = (arraytopdown_funtype_26_t)ivar_16;
        if (cl6512->fvar_2 != NULL) cl6512->fvar_2->count++;
        cl6512->fvar_3 = (arraytopdown_funtype_19_t)ivar_12;
        if (cl6512->fvar_3 != NULL) cl6512->fvar_3->count++;
        cl6512->fvar_4 = (arraytopdown_funtype_19_t)ivar_10;
        if (cl6512->fvar_4 != NULL) cl6512->fvar_4->count++;
        cl6512->fvar_5 = (arraytopdown_funtype_24_t)ivar_8;
        if (cl6512->fvar_5 != NULL) cl6512->fvar_5->count++;
        release_arraytopdown_funtype_25(ivar_14);
        release_arraytopdown_funtype_26(ivar_16);
        release_arraytopdown_funtype_19(ivar_12);
        release_arraytopdown_funtype_19(ivar_10);
        release_arraytopdown_funtype_24(ivar_8);
        result = (arraytopdown_funtype_19_t)cl6512;

        
        return result;
}

extern bool_t r_arraytopdown__epsilonp(arraytopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__peg_adt_index;
        release_arraytopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_arraytopdown__failurep(arraytopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__peg_adt_index;
        release_arraytopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_arraytopdown__anyp(arraytopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__peg_adt_index;
        release_arraytopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_arraytopdown__terminalp(arraytopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)3;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__peg_adt_index;
        release_arraytopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_arraytopdown__concatp(arraytopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)4;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__peg_adt_index;
        release_arraytopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_arraytopdown__orp(arraytopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)5;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__peg_adt_index;
        release_arraytopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_arraytopdown__andp(arraytopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)6;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__peg_adt_index;
        release_arraytopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_arraytopdown__notp(arraytopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)7;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->arraytopdown__peg_adt_index;
        release_arraytopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern arraytopdown__any_t update_arraytopdown__peg_adt_p(arraytopdown__peg_adt_t ivar_1, arraytopdown_funtype_29_t ivar_4){
        arraytopdown__any_t  result;
        arraytopdown__any_t ivar_3;
        //copying to arraytopdown__any from arraytopdown__peg_adt;
        ivar_3 = (arraytopdown__any_t)ivar_1;
        if (ivar_3 != NULL) ivar_3->count++;
        release_arraytopdown__peg_adt(ivar_1);
        result = (arraytopdown__any_t)update_arraytopdown__any_p(ivar_3, ivar_4);

        
        return result;
}

extern arraytopdown_funtype_29_t arraytopdown__peg_adt_p(arraytopdown__peg_adt_t ivar_1){
        arraytopdown_funtype_29_t  result;
        arraytopdown__any_t ivar_3;
        //copying to arraytopdown__any from arraytopdown__peg_adt;
        ivar_3 = (arraytopdown__any_t)ivar_1;
        if (ivar_3 != NULL) ivar_3->count++;
        release_arraytopdown__peg_adt(ivar_1);
        result = (arraytopdown_funtype_29_t)ivar_3->p;
        result->count++;
        release_arraytopdown__any(ivar_3);

        
        return result;
}

extern arraytopdown__terminal_t update_arraytopdown__peg_adt_a(arraytopdown__peg_adt_t ivar_1, uint8_t ivar_3){
        arraytopdown__terminal_t  result;
        arraytopdown__terminal_t ivar_2;
        //copying to arraytopdown__terminal from arraytopdown__peg_adt;
        ivar_2 = (arraytopdown__terminal_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_arraytopdown__peg_adt(ivar_1);
        result = (arraytopdown__terminal_t)update_arraytopdown__terminal_a(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t arraytopdown__peg_adt_a(arraytopdown__peg_adt_t ivar_1){
        uint8_t  result;
        arraytopdown__terminal_t ivar_2;
        //copying to arraytopdown__terminal from arraytopdown__peg_adt;
        ivar_2 = (arraytopdown__terminal_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_arraytopdown__peg_adt(ivar_1);
        result = (uint8_t)ivar_2->a;
        release_arraytopdown__terminal(ivar_2);

        
        return result;
}

extern arraytopdown__peg_adt_t update_arraytopdown__peg_adt_e1(arraytopdown__peg_adt_t ivar_1, uint8_t ivar_7){
        arraytopdown__peg_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->arraytopdown__peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)4;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             arraytopdown__concat_t ivar_8;
             //copying to arraytopdown__concat from arraytopdown__peg_adt;
             ivar_8 = (arraytopdown__concat_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (arraytopdown__peg_adt_t)update_arraytopdown__concat_e1(ivar_8, ivar_7);
} else {
        
             arraytopdown__choice_t ivar_12;
             //copying to arraytopdown__choice from arraytopdown__peg_adt;
             ivar_12 = (arraytopdown__choice_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (arraytopdown__peg_adt_t)update_arraytopdown__choice_e1(ivar_12, ivar_7);
};

        
        return result;
}

extern uint8_t arraytopdown__peg_adt_e1(arraytopdown__peg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->arraytopdown__peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)4;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             arraytopdown__concat_t ivar_2;
             //copying to arraytopdown__concat from arraytopdown__peg_adt;
             ivar_2 = (arraytopdown__concat_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e1;
             release_arraytopdown__concat(ivar_2);
} else {
        
             arraytopdown__choice_t ivar_6;
             //copying to arraytopdown__choice from arraytopdown__peg_adt;
             ivar_6 = (arraytopdown__choice_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e1;
             release_arraytopdown__choice(ivar_6);
};

        
        return result;
}

extern arraytopdown__peg_adt_t update_arraytopdown__peg_adt_e2(arraytopdown__peg_adt_t ivar_1, uint8_t ivar_7){
        arraytopdown__peg_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->arraytopdown__peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)4;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             arraytopdown__concat_t ivar_8;
             //copying to arraytopdown__concat from arraytopdown__peg_adt;
             ivar_8 = (arraytopdown__concat_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (arraytopdown__peg_adt_t)update_arraytopdown__concat_e2(ivar_8, ivar_7);
} else {
        
             arraytopdown__choice_t ivar_12;
             //copying to arraytopdown__choice from arraytopdown__peg_adt;
             ivar_12 = (arraytopdown__choice_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (arraytopdown__peg_adt_t)update_arraytopdown__choice_e2(ivar_12, ivar_7);
};

        
        return result;
}

extern uint8_t arraytopdown__peg_adt_e2(arraytopdown__peg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->arraytopdown__peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)4;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             arraytopdown__concat_t ivar_2;
             //copying to arraytopdown__concat from arraytopdown__peg_adt;
             ivar_2 = (arraytopdown__concat_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e2;
             release_arraytopdown__concat(ivar_2);
} else {
        
             arraytopdown__choice_t ivar_6;
             //copying to arraytopdown__choice from arraytopdown__peg_adt;
             ivar_6 = (arraytopdown__choice_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e2;
             release_arraytopdown__choice(ivar_6);
};

        
        return result;
}

extern arraytopdown__peg_adt_t update_arraytopdown__peg_adt_e(arraytopdown__peg_adt_t ivar_1, uint8_t ivar_7){
        arraytopdown__peg_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->arraytopdown__peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)6;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             arraytopdown__check_t ivar_8;
             //copying to arraytopdown__check from arraytopdown__peg_adt;
             ivar_8 = (arraytopdown__check_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (arraytopdown__peg_adt_t)update_arraytopdown__check_e(ivar_8, ivar_7);
} else {
        
             arraytopdown__neg_t ivar_12;
             //copying to arraytopdown__neg from arraytopdown__peg_adt;
             ivar_12 = (arraytopdown__neg_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (arraytopdown__peg_adt_t)update_arraytopdown__neg_e(ivar_12, ivar_7);
};

        
        return result;
}

extern uint8_t arraytopdown__peg_adt_e(arraytopdown__peg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->arraytopdown__peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)6;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             arraytopdown__check_t ivar_2;
             //copying to arraytopdown__check from arraytopdown__peg_adt;
             ivar_2 = (arraytopdown__check_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e;
             release_arraytopdown__check(ivar_2);
} else {
        
             arraytopdown__neg_t ivar_6;
             //copying to arraytopdown__neg from arraytopdown__peg_adt;
             ivar_6 = (arraytopdown__neg_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_arraytopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e;
             release_arraytopdown__neg(ivar_6);
};

        
        return result;
}

extern arraytopdown__peg_adt_t arraytopdown__epsilon(void){
        arraytopdown__peg_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        arraytopdown__peg_adt_t tmp6513 = new_arraytopdown__peg_adt();;
        result = (arraytopdown__peg_adt_t)tmp6513;
        tmp6513->arraytopdown__peg_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern arraytopdown__peg_adt_t arraytopdown__failure(void){
        arraytopdown__peg_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        arraytopdown__peg_adt_t tmp6514 = new_arraytopdown__peg_adt();;
        result = (arraytopdown__peg_adt_t)tmp6514;
        tmp6514->arraytopdown__peg_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern arraytopdown__peg_adt_t arraytopdown__any(arraytopdown_funtype_29_t ivar_2){
        arraytopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        arraytopdown__any_t tmp6515 = new_arraytopdown__any();;
        result = (arraytopdown__peg_adt_t)tmp6515;
        tmp6515->arraytopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp6515->p = (arraytopdown_funtype_29_t)ivar_2;

        
        return result;
}

extern arraytopdown__peg_adt_t arraytopdown__terminal(uint8_t ivar_2){
        arraytopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)3;
        arraytopdown__terminal_t tmp6516 = new_arraytopdown__terminal();;
        result = (arraytopdown__peg_adt_t)tmp6516;
        tmp6516->arraytopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp6516->a = (uint8_t)ivar_2;

        
        return result;
}

extern arraytopdown__peg_adt_t arraytopdown__concat(uint8_t ivar_2, uint8_t ivar_3){
        arraytopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)4;
        arraytopdown__concat_t tmp6517 = new_arraytopdown__concat();;
        result = (arraytopdown__peg_adt_t)tmp6517;
        tmp6517->arraytopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp6517->e1 = (uint8_t)ivar_2;
        tmp6517->e2 = (uint8_t)ivar_3;

        
        return result;
}

extern arraytopdown__peg_adt_t arraytopdown__choice(uint8_t ivar_2, uint8_t ivar_3){
        arraytopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)5;
        arraytopdown__choice_t tmp6518 = new_arraytopdown__choice();;
        result = (arraytopdown__peg_adt_t)tmp6518;
        tmp6518->arraytopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp6518->e1 = (uint8_t)ivar_2;
        tmp6518->e2 = (uint8_t)ivar_3;

        
        return result;
}

extern arraytopdown__peg_adt_t arraytopdown__check(uint8_t ivar_2){
        arraytopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)6;
        arraytopdown__check_t tmp6519 = new_arraytopdown__check();;
        result = (arraytopdown__peg_adt_t)tmp6519;
        tmp6519->arraytopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp6519->e = (uint8_t)ivar_2;

        
        return result;
}

extern arraytopdown__peg_adt_t arraytopdown__neg(uint8_t ivar_2){
        arraytopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)7;
        arraytopdown__neg_t tmp6520 = new_arraytopdown__neg();;
        result = (arraytopdown__peg_adt_t)tmp6520;
        tmp6520->arraytopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp6520->e = (uint8_t)ivar_2;

        
        return result;
}

extern arraytopdown_funtype_36_t arraytopdown__peg_ord(void){
        arraytopdown_funtype_36_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t arraytopdown__ord__2(arraytopdown__peg_adt_t ivar_2){
        uint8_t  result;
        bool_t ivar_4;
        ivar_2->count++;
        ivar_4 = (bool_t)r_arraytopdown__epsilonp((arraytopdown__peg_adt_t)ivar_2);
        if (ivar_4){ 
             release_arraytopdown__peg_adt(ivar_2);
             result = (uint8_t)0;
} else {
        
             bool_t ivar_8;
             ivar_2->count++;
             ivar_8 = (bool_t)r_arraytopdown__failurep((arraytopdown__peg_adt_t)ivar_2);
             if (ivar_8){  
           release_arraytopdown__peg_adt(ivar_2);
           result = (uint8_t)1;
} else {
             
           bool_t ivar_18;
           ivar_2->count++;
           ivar_18 = (bool_t)r_arraytopdown__anyp((arraytopdown__peg_adt_t)ivar_2);
           if (ivar_18){   
           result = (uint8_t)2;
} else {
           
           bool_t ivar_26;
           ivar_2->count++;
           ivar_26 = (bool_t)r_arraytopdown__terminalp((arraytopdown__peg_adt_t)ivar_2);
           if (ivar_26){    
            result = (uint8_t)3;
} else {
           
            bool_t ivar_38;
            ivar_2->count++;
            ivar_38 = (bool_t)r_arraytopdown__concatp((arraytopdown__peg_adt_t)ivar_2);
            if (ivar_38){     
             result = (uint8_t)4;
} else {
            
             bool_t ivar_50;
             ivar_2->count++;
             ivar_50 = (bool_t)r_arraytopdown__orp((arraytopdown__peg_adt_t)ivar_2);
             if (ivar_50){      
              result = (uint8_t)5;
} else {
             
              bool_t ivar_58;
              ivar_2->count++;
              ivar_58 = (bool_t)r_arraytopdown__andp((arraytopdown__peg_adt_t)ivar_2);
              if (ivar_58){       
               result = (uint8_t)6;
} else {
              
               result = (uint8_t)7;
};
};
};
};
};
};
};

        
        return result;
}

extern bool_t arraytopdown__subterm__2(arraytopdown__peg_adt_t ivar_1, arraytopdown__peg_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_arraytopdown__peg_adt(ivar_1, ivar_2);

        
        return result;
}

extern bool_t arraytopdown__doublelessp__2(arraytopdown__peg_adt_t ivar_1, arraytopdown__peg_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

extern arraytopdown_funtype_37_t arraytopdown__reduce_nat__2(mpz_ptr_t ivar_10, mpz_ptr_t ivar_11, arraytopdown_funtype_38_t ivar_12, arraytopdown_funtype_39_t ivar_15, arraytopdown_funtype_41_t ivar_17, arraytopdown_funtype_41_t ivar_19, arraytopdown_funtype_39_t ivar_21, arraytopdown_funtype_39_t ivar_23){
        arraytopdown_funtype_37_t  result;
        arraytopdown_closure_42_t cl6523;
        cl6523 = new_arraytopdown_closure_42();
        cl6523->fvar_1 = (arraytopdown_funtype_39_t)ivar_21;
        if (cl6523->fvar_1 != NULL) cl6523->fvar_1->count++;
        cl6523->fvar_2 = (arraytopdown_funtype_39_t)ivar_23;
        if (cl6523->fvar_2 != NULL) cl6523->fvar_2->count++;
        cl6523->fvar_3 = (arraytopdown_funtype_41_t)ivar_19;
        if (cl6523->fvar_3 != NULL) cl6523->fvar_3->count++;
        cl6523->fvar_4 = (arraytopdown_funtype_41_t)ivar_17;
        if (cl6523->fvar_4 != NULL) cl6523->fvar_4->count++;
        cl6523->fvar_5 = (arraytopdown_funtype_39_t)ivar_15;
        if (cl6523->fvar_5 != NULL) cl6523->fvar_5->count++;
        cl6523->fvar_6 = (arraytopdown_funtype_38_t)ivar_12;
        if (cl6523->fvar_6 != NULL) cl6523->fvar_6->count++;
        mpz_set(cl6523->fvar_7, ivar_11);
        mpz_set(cl6523->fvar_8, ivar_10);
        release_arraytopdown_funtype_39(ivar_21);
        release_arraytopdown_funtype_39(ivar_23);
        release_arraytopdown_funtype_41(ivar_19);
        release_arraytopdown_funtype_41(ivar_17);
        release_arraytopdown_funtype_39(ivar_15);
        release_arraytopdown_funtype_38(ivar_12);
        result = (arraytopdown_funtype_37_t)cl6523;

        
        return result;
}

extern arraytopdown_funtype_37_t arraytopdown__REDUCE_nat__2(arraytopdown_funtype_37_t ivar_12, arraytopdown_funtype_37_t ivar_14, arraytopdown_funtype_44_t ivar_16, arraytopdown_funtype_46_t ivar_19, arraytopdown_funtype_48_t ivar_21, arraytopdown_funtype_48_t ivar_23, arraytopdown_funtype_46_t ivar_25, arraytopdown_funtype_46_t ivar_27){
        arraytopdown_funtype_37_t  result;
        arraytopdown_closure_49_t cl6525;
        cl6525 = new_arraytopdown_closure_49();
        cl6525->fvar_1 = (arraytopdown_funtype_46_t)ivar_25;
        if (cl6525->fvar_1 != NULL) cl6525->fvar_1->count++;
        cl6525->fvar_2 = (arraytopdown_funtype_46_t)ivar_27;
        if (cl6525->fvar_2 != NULL) cl6525->fvar_2->count++;
        cl6525->fvar_3 = (arraytopdown_funtype_48_t)ivar_23;
        if (cl6525->fvar_3 != NULL) cl6525->fvar_3->count++;
        cl6525->fvar_4 = (arraytopdown_funtype_48_t)ivar_21;
        if (cl6525->fvar_4 != NULL) cl6525->fvar_4->count++;
        cl6525->fvar_5 = (arraytopdown_funtype_46_t)ivar_19;
        if (cl6525->fvar_5 != NULL) cl6525->fvar_5->count++;
        cl6525->fvar_6 = (arraytopdown_funtype_44_t)ivar_16;
        if (cl6525->fvar_6 != NULL) cl6525->fvar_6->count++;
        cl6525->fvar_7 = (arraytopdown_funtype_37_t)ivar_14;
        if (cl6525->fvar_7 != NULL) cl6525->fvar_7->count++;
        cl6525->fvar_8 = (arraytopdown_funtype_37_t)ivar_12;
        if (cl6525->fvar_8 != NULL) cl6525->fvar_8->count++;
        release_arraytopdown_funtype_46(ivar_25);
        release_arraytopdown_funtype_46(ivar_27);
        release_arraytopdown_funtype_48(ivar_23);
        release_arraytopdown_funtype_48(ivar_21);
        release_arraytopdown_funtype_46(ivar_19);
        release_arraytopdown_funtype_44(ivar_16);
        release_arraytopdown_funtype_37(ivar_14);
        release_arraytopdown_funtype_37(ivar_12);
        result = (arraytopdown_funtype_37_t)cl6525;

        
        return result;
}

extern arraytopdown_funtype_50_t arraytopdown__reduce_ordinal__2(ordstruct_adt__ordstruct_adt_t ivar_10, ordstruct_adt__ordstruct_adt_t ivar_11, arraytopdown_funtype_51_t ivar_12, arraytopdown_funtype_52_t ivar_15, arraytopdown_funtype_53_t ivar_17, arraytopdown_funtype_53_t ivar_19, arraytopdown_funtype_52_t ivar_21, arraytopdown_funtype_52_t ivar_23){
        arraytopdown_funtype_50_t  result;
        arraytopdown_closure_54_t cl6527;
        cl6527 = new_arraytopdown_closure_54();
        cl6527->fvar_1 = (arraytopdown_funtype_52_t)ivar_21;
        if (cl6527->fvar_1 != NULL) cl6527->fvar_1->count++;
        cl6527->fvar_2 = (arraytopdown_funtype_52_t)ivar_23;
        if (cl6527->fvar_2 != NULL) cl6527->fvar_2->count++;
        cl6527->fvar_3 = (arraytopdown_funtype_53_t)ivar_19;
        if (cl6527->fvar_3 != NULL) cl6527->fvar_3->count++;
        cl6527->fvar_4 = (arraytopdown_funtype_53_t)ivar_17;
        if (cl6527->fvar_4 != NULL) cl6527->fvar_4->count++;
        cl6527->fvar_5 = (arraytopdown_funtype_52_t)ivar_15;
        if (cl6527->fvar_5 != NULL) cl6527->fvar_5->count++;
        cl6527->fvar_6 = (arraytopdown_funtype_51_t)ivar_12;
        if (cl6527->fvar_6 != NULL) cl6527->fvar_6->count++;
        cl6527->fvar_7 = (ordstruct_adt__ordstruct_adt_t)ivar_11;
        if (cl6527->fvar_7 != NULL) cl6527->fvar_7->count++;
        cl6527->fvar_8 = (ordstruct_adt__ordstruct_adt_t)ivar_10;
        if (cl6527->fvar_8 != NULL) cl6527->fvar_8->count++;
        release_arraytopdown_funtype_52(ivar_21);
        release_arraytopdown_funtype_52(ivar_23);
        release_arraytopdown_funtype_53(ivar_19);
        release_arraytopdown_funtype_53(ivar_17);
        release_arraytopdown_funtype_52(ivar_15);
        release_arraytopdown_funtype_51(ivar_12);
        release_ordstruct_adt__ordstruct_adt(ivar_11);
        release_ordstruct_adt__ordstruct_adt(ivar_10);
        result = (arraytopdown_funtype_50_t)cl6527;

        
        return result;
}

extern arraytopdown_funtype_50_t arraytopdown__REDUCE_ordinal__2(arraytopdown_funtype_50_t ivar_12, arraytopdown_funtype_50_t ivar_14, arraytopdown_funtype_55_t ivar_16, arraytopdown_funtype_56_t ivar_19, arraytopdown_funtype_57_t ivar_21, arraytopdown_funtype_57_t ivar_23, arraytopdown_funtype_56_t ivar_25, arraytopdown_funtype_56_t ivar_27){
        arraytopdown_funtype_50_t  result;
        arraytopdown_closure_58_t cl6529;
        cl6529 = new_arraytopdown_closure_58();
        cl6529->fvar_1 = (arraytopdown_funtype_56_t)ivar_25;
        if (cl6529->fvar_1 != NULL) cl6529->fvar_1->count++;
        cl6529->fvar_2 = (arraytopdown_funtype_56_t)ivar_27;
        if (cl6529->fvar_2 != NULL) cl6529->fvar_2->count++;
        cl6529->fvar_3 = (arraytopdown_funtype_57_t)ivar_23;
        if (cl6529->fvar_3 != NULL) cl6529->fvar_3->count++;
        cl6529->fvar_4 = (arraytopdown_funtype_57_t)ivar_21;
        if (cl6529->fvar_4 != NULL) cl6529->fvar_4->count++;
        cl6529->fvar_5 = (arraytopdown_funtype_56_t)ivar_19;
        if (cl6529->fvar_5 != NULL) cl6529->fvar_5->count++;
        cl6529->fvar_6 = (arraytopdown_funtype_55_t)ivar_16;
        if (cl6529->fvar_6 != NULL) cl6529->fvar_6->count++;
        cl6529->fvar_7 = (arraytopdown_funtype_50_t)ivar_14;
        if (cl6529->fvar_7 != NULL) cl6529->fvar_7->count++;
        cl6529->fvar_8 = (arraytopdown_funtype_50_t)ivar_12;
        if (cl6529->fvar_8 != NULL) cl6529->fvar_8->count++;
        release_arraytopdown_funtype_56(ivar_25);
        release_arraytopdown_funtype_56(ivar_27);
        release_arraytopdown_funtype_57(ivar_23);
        release_arraytopdown_funtype_57(ivar_21);
        release_arraytopdown_funtype_56(ivar_19);
        release_arraytopdown_funtype_55(ivar_16);
        release_arraytopdown_funtype_50(ivar_14);
        release_arraytopdown_funtype_50(ivar_12);
        result = (arraytopdown_funtype_50_t)cl6529;

        
        return result;
}

extern arraytopdown_funtype_59_t arraytopdown__good_good_entryp(uint32_t ivar_1, uint32_t ivar_2){
        arraytopdown_funtype_59_t  result;
        arraytopdown_closure_60_t cl6533;
        cl6533 = new_arraytopdown_closure_60();
        cl6533->fvar_1 = (uint32_t)ivar_2;
        cl6533->fvar_2 = (uint32_t)ivar_1;
        result = (arraytopdown_funtype_59_t)cl6533;

        
        return result;
}

extern arraytopdown_funtype_59_t arraytopdown__good_push_entryp(uint32_t ivar_1){
        arraytopdown_funtype_59_t  result;
        arraytopdown_closure_61_t cl6534;
        cl6534 = new_arraytopdown_closure_61();
        cl6534->fvar_1 = (uint32_t)ivar_1;
        result = (arraytopdown_funtype_59_t)cl6534;

        
        return result;
}

extern arraytopdown_funtype_59_t arraytopdown__fine_push_entryp(uint32_t ivar_1){
        arraytopdown_funtype_59_t  result;
        arraytopdown_closure_62_t cl6535;
        cl6535 = new_arraytopdown_closure_62();
        cl6535->fvar_1 = (uint32_t)ivar_1;
        result = (arraytopdown_funtype_59_t)cl6535;

        
        return result;
}

extern arraytopdown_funtype_59_t arraytopdown__nice_entryp(uint32_t ivar_1, uint32_t ivar_2){
        arraytopdown_funtype_59_t  result;
        arraytopdown_closure_63_t cl6537;
        cl6537 = new_arraytopdown_closure_63();
        cl6537->fvar_1 = (uint32_t)ivar_1;
        cl6537->fvar_2 = (uint32_t)ivar_2;
        result = (arraytopdown_funtype_59_t)cl6537;

        
        return result;
}

extern bool_t arraytopdown__loop_or_pushp(arraytopdown__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_arraytopdown__loopp((arraytopdown__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_arraytopdown__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_arraytopdown__pushp((arraytopdown__ent_adt_t)ivar_1);
};

        
        return result;
}

extern arraytopdown_funtype_64_t arraytopdown__instack(uint32_t ivar_1, arraytopdown_array_66_t ivar_2){
        arraytopdown_funtype_64_t  result;
        arraytopdown_closure_67_t cl6543;
        cl6543 = new_arraytopdown_closure_67();
        cl6543->fvar_1 = (arraytopdown_array_66_t)ivar_2;
        if (cl6543->fvar_1 != NULL) cl6543->fvar_1->count++;
        release_arraytopdown_array_66(ivar_2);
        result = (arraytopdown_funtype_64_t)cl6543;

        
        return result;
}

extern arraytopdown_funtype_69_t arraytopdown__successor(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, arraytopdown_array_66_t ivar_3){
        arraytopdown_funtype_69_t  result;
        arraytopdown_closure_71_t cl6551;
        cl6551 = new_arraytopdown_closure_71();
        cl6551->fvar_1 = (arraytopdown_array_66_t)ivar_3;
        if (cl6551->fvar_1 != NULL) cl6551->fvar_1->count++;
        cl6551->fvar_2 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6551->fvar_2 != NULL) cl6551->fvar_2->count++;
        release_arraytopdown_array_66(ivar_3);
        release_arraytopdown__lang_spec(ivar_2);
        result = (arraytopdown_funtype_69_t)cl6551;

        
        return result;
}

extern arraytopdown_funtype_72_t arraytopdown__sigma(uint32_t ivar_4, arraytopdown_array_73_t ivar_5){
        arraytopdown_funtype_72_t  result;
        arraytopdown_closure_74_t cl6563;
        cl6563 = new_arraytopdown_closure_74();
        cl6563->fvar_1 = (uint32_t)ivar_4;
        cl6563->fvar_2 = (arraytopdown_array_73_t)ivar_5;
        if (cl6563->fvar_2 != NULL) cl6563->fvar_2->count++;
        release_arraytopdown_array_73(ivar_5);
        result = (arraytopdown_funtype_72_t)cl6563;

        
        return result;
}

extern uint64_t arraytopdown__scafcount(uint32_t ivar_4, arraytopdown_array_66_t ivar_5, arraytopdown_funtype_59_t ivar_7, uint32_t ivar_9){
        uint64_t  result;
        type_actual_t ivar_39;
        ivar_39 = (type_actual_t)actual_arraytopdown__ent_adt();
        arraytopdown_funtype_72_t ivar_13;
        arraytopdown_array_73_t ivar_49;
        uint32_t size6575;
        //copying to uint32 from uint32;
        size6575 = (uint32_t)ivar_4;
        size6575 += 0;
        ivar_49 = new_arraytopdown_array_73(size6575);
        uint32_t ivar_17;
        for (uint32_t index6574 = 0; index6574 < size6575; index6574++){
             ivar_17 = (uint32_t)index6574;
             arraytopdown_funtype_76_t ivar_26;
             arraytopdown_funtype_77_t ivar_33;
             uint8_t ivar_42;
             ivar_42 = (uint8_t)255;
             mpz_ptr_t ivar_41;
             //copying to mpz from uint8;
             mpz_mk_set_ui(ivar_41, ivar_42);
             ivar_33 = (arraytopdown_funtype_77_t)arrayCount__count((type_actual_t)ivar_39, (mpz_ptr_t)ivar_41);
             ivar_7->count++;
             ivar_26 = (arraytopdown_funtype_76_t)ivar_33->ftbl->fptr(ivar_33, ivar_7);
             ivar_33->ftbl->rptr(ivar_33);
             arraytopdown_array_75_t ivar_44;
             ivar_44 = (arraytopdown_array_75_t)ivar_5->elems[ivar_17];
             ivar_44->count++;
             mpz_mk_set_ui(ivar_49->elems[index6574], ivar_26->ftbl->fptr(ivar_26, ivar_44));
             ivar_26->ftbl->rptr(ivar_26);
        };
        release_arraytopdown_funtype_59(ivar_7);
        release_arraytopdown_array_66(ivar_5);
        ivar_13 = (arraytopdown_funtype_72_t)arraytopdown__sigma((uint32_t)ivar_4, (arraytopdown_array_73_t)ivar_49);
        result = (uint64_t)mpz_get_ui(ivar_13->ftbl->fptr(ivar_13, ivar_9));
        ivar_13->ftbl->rptr(ivar_13);
        safe_free(ivar_39);

        
        return result;
}

extern uint64_t arraytopdown__pushcount(uint32_t ivar_3, arraytopdown_array_66_t ivar_4){
        uint64_t  result;
        arraytopdown_funtype_59_t ivar_16;
        arraytopdown_closure_78_t cl6578;
        cl6578 = new_arraytopdown_closure_78();
        ivar_16 = (arraytopdown_funtype_59_t)cl6578;
        result = (uint64_t)arraytopdown__scafcount((uint32_t)ivar_3, (arraytopdown_array_66_t)ivar_4, (arraytopdown_funtype_59_t)ivar_16, (uint32_t)ivar_3);

        
        return result;
}

extern bool_t arraytopdown__good_or_failp(arraytopdown__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_arraytopdown__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_1);
};

        
        return result;
}

extern uint64_t arraytopdown__gfcount(uint32_t ivar_3, arraytopdown_array_66_t ivar_4){
        uint64_t  result;
        arraytopdown_funtype_59_t ivar_17;
        arraytopdown_closure_79_t cl6581;
        cl6581 = new_arraytopdown_closure_79();
        ivar_17 = (arraytopdown_funtype_59_t)cl6581;
        result = (uint64_t)arraytopdown__scafcount((uint32_t)ivar_3, (arraytopdown_array_66_t)ivar_4, (arraytopdown_funtype_59_t)ivar_17, (uint32_t)ivar_3);

        
        return result;
}

extern arraytopdown_funtype_80_t arraytopdown__good_depthp(uint32_t ivar_1, arraytopdown_array_66_t ivar_2){
        arraytopdown_funtype_80_t  result;
        arraytopdown_closure_81_t cl6583;
        cl6583 = new_arraytopdown_closure_81();
        cl6583->fvar_1 = (uint32_t)ivar_1;
        cl6583->fvar_2 = (arraytopdown_array_66_t)ivar_2;
        if (cl6583->fvar_2 != NULL) cl6583->fvar_2->count++;
        release_arraytopdown_array_66(ivar_2);
        result = (arraytopdown_funtype_80_t)cl6583;

        
        return result;
}

extern arraytopdown_funtype_59_t arraytopdown__good_stackp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, uint64_t ivar_3, arraytopdown_array_66_t ivar_4){
        arraytopdown_funtype_59_t  result;
        arraytopdown_closure_82_t cl6587;
        cl6587 = new_arraytopdown_closure_82();
        cl6587->fvar_1 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6587->fvar_1 != NULL) cl6587->fvar_1->count++;
        cl6587->fvar_2 = (arraytopdown_array_66_t)ivar_4;
        if (cl6587->fvar_2 != NULL) cl6587->fvar_2->count++;
        cl6587->fvar_3 = (uint32_t)ivar_1;
        cl6587->fvar_4 = (uint64_t)ivar_3;
        release_arraytopdown_array_66(ivar_4);
        release_arraytopdown__lang_spec(ivar_2);
        result = (arraytopdown_funtype_59_t)cl6587;

        
        return result;
}

extern arraytopdown_funtype_69_t arraytopdown__mem_stackp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, uint64_t ivar_3, arraytopdown_array_66_t ivar_4){
        arraytopdown_funtype_69_t  result;
        arraytopdown_closure_83_t cl6591;
        cl6591 = new_arraytopdown_closure_83();
        cl6591->fvar_1 = (arraytopdown_array_66_t)ivar_4;
        if (cl6591->fvar_1 != NULL) cl6591->fvar_1->count++;
        cl6591->fvar_2 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6591->fvar_2 != NULL) cl6591->fvar_2->count++;
        cl6591->fvar_3 = (uint32_t)ivar_1;
        cl6591->fvar_4 = (uint64_t)ivar_3;
        release_arraytopdown_array_66(ivar_4);
        release_arraytopdown__lang_spec(ivar_2);
        result = (arraytopdown_funtype_69_t)cl6591;

        
        return result;
}

extern bool_t arraytopdown__push_or_pendingp(arraytopdown__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_arraytopdown__pushp((arraytopdown__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_arraytopdown__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_arraytopdown__pendingp((arraytopdown__ent_adt_t)ivar_1);
};

        
        return result;
}

extern arraytopdown_funtype_59_t arraytopdown__fine_stackp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, uint64_t ivar_3, arraytopdown_array_66_t ivar_4){
        arraytopdown_funtype_59_t  result;
        arraytopdown_closure_84_t cl6596;
        cl6596 = new_arraytopdown_closure_84();
        cl6596->fvar_1 = (arraytopdown_array_66_t)ivar_4;
        if (cl6596->fvar_1 != NULL) cl6596->fvar_1->count++;
        cl6596->fvar_2 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6596->fvar_2 != NULL) cl6596->fvar_2->count++;
        cl6596->fvar_3 = (uint32_t)ivar_1;
        cl6596->fvar_4 = (uint64_t)ivar_3;
        release_arraytopdown_array_66(ivar_4);
        release_arraytopdown__lang_spec(ivar_2);
        result = (arraytopdown_funtype_59_t)cl6596;

        
        return result;
}

extern bool_t arraytopdown__loop_readyp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, arraytopdown_array_66_t ivar_3, uint32_t ivar_5, uint8_t ivar_6){
        bool_t  result;
        arraytopdown__peg_adt_t ivar_7;
        ivar_7 = (arraytopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_6);
        ivar_2->ftbl->rptr(ivar_2);
        bool_t ivar_77;
        ivar_7->count++;
        ivar_77 = (bool_t)r_arraytopdown__concatp((arraytopdown__peg_adt_t)ivar_7);
        if (ivar_77){ 
             uint8_t ivar_12;
             ivar_7->count++;
             ivar_12 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_7);
             uint8_t ivar_13;
             ivar_13 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_7);
             bool_t ivar_20;
             arraytopdown__ent_adt_t ivar_33;
             arraytopdown_funtype_65_t ivar_25;
             ivar_25 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_5];
             ivar_25->count++;
             ivar_33 = (arraytopdown__ent_adt_t)ivar_25->ftbl->fptr(ivar_25, ivar_12);
             ivar_25->ftbl->rptr(ivar_25);
             ivar_20 = (bool_t)arraytopdown__loop_or_pushp((arraytopdown__ent_adt_t)ivar_33);
             if (ivar_20){  
           release_arraytopdown_array_66(ivar_3);
           result = (bool_t) true;
} else {
             
           bool_t ivar_34;
           arraytopdown__ent_adt_t ivar_47;
           arraytopdown_funtype_65_t ivar_39;
           ivar_39 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_5];
           ivar_39->count++;
           ivar_47 = (arraytopdown__ent_adt_t)ivar_39->ftbl->fptr(ivar_39, ivar_12);
           ivar_39->ftbl->rptr(ivar_39);
           ivar_34 = (bool_t)r_arraytopdown__goodp((arraytopdown__ent_adt_t)ivar_47);
           if (ivar_34){   
           arraytopdown__ent_adt_t ivar_74;
           arraytopdown_funtype_65_t ivar_51;
           uint32_t ivar_71;
           uint32_t ivar_54;
           arraytopdown__ent_adt_t ivar_66;
           arraytopdown_funtype_65_t ivar_58;
           ivar_58 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_5];
           ivar_58->count++;
           ivar_66 = (arraytopdown__ent_adt_t)ivar_58->ftbl->fptr(ivar_58, ivar_12);
           ivar_58->ftbl->rptr(ivar_58);
           ivar_54 = (uint32_t)arraytopdown__ent_adt_span((arraytopdown__ent_adt_t)ivar_66);
           ivar_71 = (uint32_t)(ivar_5 + ivar_54);
           ivar_51 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_71];
           ivar_51->count++;
           release_arraytopdown_array_66(ivar_3);
           ivar_74 = (arraytopdown__ent_adt_t)ivar_51->ftbl->fptr(ivar_51, ivar_13);
           ivar_51->ftbl->rptr(ivar_51);
           result = (bool_t)arraytopdown__loop_or_pushp((arraytopdown__ent_adt_t)ivar_74);
} else {
           
           release_arraytopdown_array_66(ivar_3);
           result = (bool_t) false;
};
};
} else {
        
             bool_t ivar_131;
             ivar_7->count++;
             ivar_131 = (bool_t)r_arraytopdown__orp((arraytopdown__peg_adt_t)ivar_7);
             if (ivar_131){  
           uint8_t ivar_81;
           ivar_7->count++;
           ivar_81 = (uint8_t)arraytopdown__peg_adt_e1((arraytopdown__peg_adt_t)ivar_7);
           uint8_t ivar_82;
           ivar_82 = (uint8_t)arraytopdown__peg_adt_e2((arraytopdown__peg_adt_t)ivar_7);
           bool_t ivar_89;
           arraytopdown__ent_adt_t ivar_102;
           arraytopdown_funtype_65_t ivar_94;
           ivar_94 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_5];
           ivar_94->count++;
           ivar_102 = (arraytopdown__ent_adt_t)ivar_94->ftbl->fptr(ivar_94, ivar_81);
           ivar_94->ftbl->rptr(ivar_94);
           ivar_89 = (bool_t)arraytopdown__loop_or_pushp((arraytopdown__ent_adt_t)ivar_102);
           if (ivar_89){   
           release_arraytopdown_array_66(ivar_3);
           result = (bool_t) true;
} else {
           
           bool_t ivar_103;
           arraytopdown__ent_adt_t ivar_116;
           arraytopdown_funtype_65_t ivar_108;
           ivar_108 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_5];
           ivar_108->count++;
           ivar_116 = (arraytopdown__ent_adt_t)ivar_108->ftbl->fptr(ivar_108, ivar_81);
           ivar_108->ftbl->rptr(ivar_108);
           ivar_103 = (bool_t)r_arraytopdown__failp((arraytopdown__ent_adt_t)ivar_116);
           if (ivar_103){    
            arraytopdown__ent_adt_t ivar_128;
            arraytopdown_funtype_65_t ivar_120;
            ivar_120 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_5];
            ivar_120->count++;
            release_arraytopdown_array_66(ivar_3);
            ivar_128 = (arraytopdown__ent_adt_t)ivar_120->ftbl->fptr(ivar_120, ivar_82);
            ivar_120->ftbl->rptr(ivar_120);
            result = (bool_t)arraytopdown__loop_or_pushp((arraytopdown__ent_adt_t)ivar_128);
} else {
           
            release_arraytopdown_array_66(ivar_3);
            result = (bool_t) false;
};
};
} else {
             
           bool_t ivar_151;
           ivar_7->count++;
           ivar_151 = (bool_t)r_arraytopdown__andp((arraytopdown__peg_adt_t)ivar_7);
           if (ivar_151){   
           uint8_t ivar_135;
           ivar_135 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_7);
           arraytopdown__ent_adt_t ivar_150;
           arraytopdown_funtype_65_t ivar_142;
           ivar_142 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_5];
           ivar_142->count++;
           release_arraytopdown_array_66(ivar_3);
           ivar_150 = (arraytopdown__ent_adt_t)ivar_142->ftbl->fptr(ivar_142, ivar_135);
           ivar_142->ftbl->rptr(ivar_142);
           result = (bool_t)arraytopdown__loop_or_pushp((arraytopdown__ent_adt_t)ivar_150);
} else {
           
           bool_t ivar_171;
           ivar_7->count++;
           ivar_171 = (bool_t)r_arraytopdown__notp((arraytopdown__peg_adt_t)ivar_7);
           if (ivar_171){    
            uint8_t ivar_155;
            ivar_155 = (uint8_t)arraytopdown__peg_adt_e((arraytopdown__peg_adt_t)ivar_7);
            arraytopdown__ent_adt_t ivar_170;
            arraytopdown_funtype_65_t ivar_162;
            ivar_162 = (arraytopdown_funtype_65_t)ivar_3->elems[ivar_5];
            ivar_162->count++;
            release_arraytopdown_array_66(ivar_3);
            ivar_170 = (arraytopdown__ent_adt_t)ivar_162->ftbl->fptr(ivar_162, ivar_155);
            ivar_162->ftbl->rptr(ivar_162);
            result = (bool_t)arraytopdown__loop_or_pushp((arraytopdown__ent_adt_t)ivar_170);
} else {
           
            release_arraytopdown__peg_adt(ivar_7);
            release_arraytopdown_array_66(ivar_3);
            result = (bool_t) false;
};
};
};
};

        
        return result;
}

extern arraytopdown_funtype_86_t arraytopdown__good_failp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3){
        arraytopdown_funtype_86_t  result;
        arraytopdown_closure_87_t cl6635;
        cl6635 = new_arraytopdown_closure_87();
        cl6635->fvar_1 = (bytestrings__bytestring_t)ivar_3;
        if (cl6635->fvar_1 != NULL) cl6635->fvar_1->count++;
        cl6635->fvar_2 = (uint32_t)ivar_1;
        cl6635->fvar_3 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6635->fvar_3 != NULL) cl6635->fvar_3->count++;
        release_bytestrings__bytestring(ivar_3);
        release_arraytopdown__lang_spec(ivar_2);
        result = (arraytopdown_funtype_86_t)cl6635;

        
        return result;
}

extern arraytopdown_funtype_89_t arraytopdown__good_loopp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2){
        arraytopdown_funtype_89_t  result;
        arraytopdown_closure_90_t cl6650;
        cl6650 = new_arraytopdown_closure_90();
        cl6650->fvar_1 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6650->fvar_1 != NULL) cl6650->fvar_1->count++;
        release_arraytopdown__lang_spec(ivar_2);
        result = (arraytopdown_funtype_89_t)cl6650;

        
        return result;
}

extern arraytopdown_funtype_92_t arraytopdown__good_goodp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3){
        arraytopdown_funtype_92_t  result;
        arraytopdown_closure_93_t cl6686;
        cl6686 = new_arraytopdown_closure_93();
        cl6686->fvar_1 = (bytestrings__bytestring_t)ivar_3;
        if (cl6686->fvar_1 != NULL) cl6686->fvar_1->count++;
        cl6686->fvar_2 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6686->fvar_2 != NULL) cl6686->fvar_2->count++;
        release_bytestrings__bytestring(ivar_3);
        release_arraytopdown__lang_spec(ivar_2);
        result = (arraytopdown_funtype_92_t)cl6686;

        
        return result;
}

extern arraytopdown_funtype_95_t arraytopdown__good_entryp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3){
        arraytopdown_funtype_95_t  result;
        arraytopdown_closure_96_t cl6704;
        cl6704 = new_arraytopdown_closure_96();
        cl6704->fvar_1 = (uint32_t)ivar_1;
        cl6704->fvar_2 = (bytestrings__bytestring_t)ivar_3;
        if (cl6704->fvar_2 != NULL) cl6704->fvar_2->count++;
        cl6704->fvar_3 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6704->fvar_3 != NULL) cl6704->fvar_3->count++;
        release_arraytopdown__lang_spec(ivar_2);
        release_bytestrings__bytestring(ivar_3);
        result = (arraytopdown_funtype_95_t)cl6704;

        
        return result;
}

extern arraytopdown_funtype_95_t arraytopdown__fine_entryp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3){
        arraytopdown_funtype_95_t  result;
        arraytopdown_closure_97_t cl6723;
        cl6723 = new_arraytopdown_closure_97();
        cl6723->fvar_1 = (uint32_t)ivar_1;
        cl6723->fvar_2 = (bytestrings__bytestring_t)ivar_3;
        if (cl6723->fvar_2 != NULL) cl6723->fvar_2->count++;
        cl6723->fvar_3 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6723->fvar_3 != NULL) cl6723->fvar_3->count++;
        release_arraytopdown__lang_spec(ivar_2);
        release_bytestrings__bytestring(ivar_3);
        result = (arraytopdown_funtype_95_t)cl6723;

        
        return result;
}

extern arraytopdown_funtype_98_t arraytopdown__good_tscaffoldp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3){
        arraytopdown_funtype_98_t  result;
        arraytopdown_closure_99_t cl6726;
        cl6726 = new_arraytopdown_closure_99();
        result = (arraytopdown_funtype_98_t)cl6726;

        
        return result;
}

extern arraytopdown_funtype_64_t arraytopdown__good_rootp(uint32_t ivar_1, arraytopdown_array_66_t ivar_2){
        arraytopdown_funtype_64_t  result;
        arraytopdown_closure_100_t cl6731;
        cl6731 = new_arraytopdown_closure_100();
        cl6731->fvar_1 = (arraytopdown_array_66_t)ivar_2;
        if (cl6731->fvar_1 != NULL) cl6731->fvar_1->count++;
        release_arraytopdown_array_66(ivar_2);
        result = (arraytopdown_funtype_64_t)cl6731;

        
        return result;
}

extern arraytopdown_funtype_101_t arraytopdown__fine_scaffoldp(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3){
        arraytopdown_funtype_101_t  result;
        arraytopdown_closure_102_t cl6742;
        cl6742 = new_arraytopdown_closure_102();
        cl6742->fvar_1 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6742->fvar_1 != NULL) cl6742->fvar_1->count++;
        cl6742->fvar_2 = (bytestrings__bytestring_t)ivar_3;
        if (cl6742->fvar_2 != NULL) cl6742->fvar_2->count++;
        cl6742->fvar_3 = (uint32_t)ivar_1;
        release_bytestrings__bytestring(ivar_3);
        release_arraytopdown__lang_spec(ivar_2);
        result = (arraytopdown_funtype_101_t)cl6742;

        
        return result;
}

extern bool_t arraytopdown__emptyp(arraytopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)arraytopdown__ent_adt_nt((arraytopdown__ent_adt_t)ivar_1);
        uint8_t ivar_3;
        ivar_3 = (uint8_t)255;
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern arraytopdown_funtype_105_t arraytopdown__step(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3, uint32_t ivar_4, uint8_t ivar_5){
        arraytopdown_funtype_105_t  result;
        arraytopdown_closure_106_t cl6802;
        cl6802 = new_arraytopdown_closure_106();
        cl6802->fvar_1 = (uint32_t)ivar_1;
        cl6802->fvar_2 = (bytestrings__bytestring_t)ivar_3;
        if (cl6802->fvar_2 != NULL) cl6802->fvar_2->count++;
        cl6802->fvar_3 = (arraytopdown__lang_spec_t)ivar_2;
        if (cl6802->fvar_3 != NULL) cl6802->fvar_3->count++;
        release_bytestrings__bytestring(ivar_3);
        release_arraytopdown__lang_spec(ivar_2);
        result = (arraytopdown_funtype_105_t)cl6802;

        
        return result;
}

extern arraytopdown_funtype_108_t arraytopdown__size(uint32_t ivar_5, arraytopdown__lang_spec_t ivar_6, bytestrings__bytestring_t ivar_7, uint32_t ivar_8, uint8_t ivar_9){
        arraytopdown_funtype_108_t  result;
        arraytopdown_closure_109_t cl6814;
        cl6814 = new_arraytopdown_closure_109();
        cl6814->fvar_1 = (uint32_t)ivar_5;
        result = (arraytopdown_funtype_108_t)cl6814;

        
        return result;
}

extern arraytopdown_funtype_105_t arraytopdown__parse(uint32_t ivar_7, arraytopdown__lang_spec_t ivar_8, bytestrings__bytestring_t ivar_9, uint32_t ivar_10, uint8_t ivar_11){
        arraytopdown_funtype_105_t  result;
        arraytopdown_closure_111_t cl6842;
        cl6842 = new_arraytopdown_closure_111();
        cl6842->fvar_1 = (uint32_t)ivar_10;
        cl6842->fvar_2 = (uint8_t)ivar_11;
        cl6842->fvar_3 = (bytestrings__bytestring_t)ivar_9;
        if (cl6842->fvar_3 != NULL) cl6842->fvar_3->count++;
        cl6842->fvar_4 = (arraytopdown__lang_spec_t)ivar_8;
        if (cl6842->fvar_4 != NULL) cl6842->fvar_4->count++;
        cl6842->fvar_5 = (uint32_t)ivar_7;
        release_bytestrings__bytestring(ivar_9);
        release_arraytopdown__lang_spec(ivar_8);
        result = (arraytopdown_funtype_105_t)cl6842;

        
        return result;
}

extern arraytopdown__ent_adt_t arraytopdown__doparse(uint32_t ivar_1, arraytopdown__lang_spec_t ivar_2, bytestrings__bytestring_t ivar_3, uint8_t ivar_4){
        arraytopdown__ent_adt_t  result;
        /* pend */ arraytopdown_funtype_65_t ivar_5;
        arraytopdown_closure_112_t cl6856;
        cl6856 = new_arraytopdown_closure_112();
        ivar_5 = (arraytopdown_funtype_65_t)cl6856;
        arraytopdown_record_114_t ivar_86;
        uint8_t ivar_13;
        ivar_13 = (uint8_t)1;
        bool_t ivar_14;
        ivar_14 = (bool_t) false;
        arraytopdown_funtype_113_t ivar_42;
        arraytopdown__ent_adt_t ivar_22;
        uint8_t ivar_29;
        ivar_29 = (uint8_t)0;
        uint32_t ivar_26;
        //copying to uint32 from uint8;
        ivar_26 = (uint32_t)ivar_29;
        uint8_t ivar_27;
        ivar_27 = (uint8_t)255;
        ivar_22 = (arraytopdown__ent_adt_t)arraytopdown__push((uint32_t)ivar_26, (uint8_t)ivar_27);
        arraytopdown_funtype_113_t ivar_30;
        arraytopdown_closure_115_t cl6857;
        cl6857 = new_arraytopdown_closure_115();
        cl6857->fvar_1 = (arraytopdown_funtype_65_t)ivar_5;
        if (cl6857->fvar_1 != NULL) cl6857->fvar_1->count++;
        release_arraytopdown_funtype_65(ivar_5);
        ivar_30 = (arraytopdown_funtype_113_t)cl6857;
        uint32_t ivar_37;
        ivar_37 = (uint32_t)0;
        arraytopdown_funtype_65_t ivar_31;
        ivar_31 = (arraytopdown_funtype_65_t)ivar_30->ftbl->fptr(ivar_30, ivar_37);
        arraytopdown_funtype_113_t ivar_38;
        arraytopdown_funtype_65_t ivar_40;
        ivar_40 = NULL;
        ivar_38 = (arraytopdown_funtype_113_t)update_arraytopdown_funtype_113(ivar_30, ivar_37, ivar_40);
        if (ivar_40 != NULL) ivar_40->count--;
        arraytopdown_funtype_65_t ivar_39;
        arraytopdown_funtype_65_t ivar_34;
        arraytopdown__ent_adt_t ivar_36;
        ivar_36 = NULL;
        ivar_34 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_31, ivar_4, ivar_36);
        if (ivar_36 != NULL) ivar_36->count--;
        ivar_39 = (arraytopdown_funtype_65_t)update_arraytopdown_funtype_65(ivar_34, ivar_4, ivar_22);
        if (ivar_22 != NULL) ivar_22->count--;
        ivar_42 = (arraytopdown_funtype_113_t)update_arraytopdown_funtype_113(ivar_38, ivar_37, ivar_39);
        if (ivar_39 != NULL) ivar_39->count--;
        arraytopdown__ent_adt_t ivar_50;
        uint8_t ivar_49;
        ivar_49 = (uint8_t)0;
        uint32_t ivar_46;
        //copying to uint32 from uint8;
        ivar_46 = (uint32_t)ivar_49;
        ivar_50 = (arraytopdown__ent_adt_t)arraytopdown__push((uint32_t)ivar_46, (uint8_t)ivar_4);
        arraytopdown_record_114_t tmp6858 = new_arraytopdown_record_114();;
        ivar_86 = (arraytopdown_record_114_t)tmp6858;
        tmp6858->depth = (uint8_t)ivar_13;
        tmp6858->lflag = (bool_t)ivar_14;
        tmp6858->scaf = (arraytopdown_funtype_113_t)ivar_42;
        tmp6858->stack = (arraytopdown__ent_adt_t)ivar_50;
        /* St */ arraytopdown_record_104_t ivar_9;
        //copying to arraytopdown_record_104 from arraytopdown_record_114;
        {
         ivar_9 = new_arraytopdown_record_104();
         uint32_t tmp6859;
         //copying to uint32 from uint32;
         tmp6859 = (uint32_t)ivar_1;
         tmp6859 += 1;
         ivar_9->scaf = new_arraytopdown_array_66(tmp6859);
         for (uint32_t index_87 = 0; index_87 < tmp6859; index_87++){
                 ivar_9->scaf->elems[index_87] = (arraytopdown_funtype_65_t)ivar_86->scaf->ftbl->fptr(ivar_86->scaf, index_87);
                 if (ivar_9->scaf->elems[index_87] != NULL) ivar_9->scaf->elems[index_87]->count++;
         };
         ivar_9->depth = (uint64_t)ivar_86->depth;
         ivar_9->stack = (arraytopdown__ent_adt_t)ivar_86->stack;
         if (ivar_9->stack != NULL) ivar_9->stack->count++;
         ivar_9->lflag = (bool_t)ivar_86->lflag;
        };
        release_arraytopdown_record_114(ivar_86);
        arraytopdown_funtype_65_t ivar_53;
        arraytopdown_array_66_t ivar_57;
        arraytopdown_record_104_t ivar_82;
        arraytopdown_funtype_105_t ivar_64;
        uint8_t ivar_80;
        ivar_80 = (uint8_t)0;
        uint32_t ivar_77;
        //copying to uint32 from uint8;
        ivar_77 = (uint32_t)ivar_80;
        ivar_64 = (arraytopdown_funtype_105_t)arraytopdown__parse((uint32_t)ivar_1, (arraytopdown__lang_spec_t)ivar_2, (bytestrings__bytestring_t)ivar_3, (uint32_t)ivar_77, (uint8_t)ivar_4);
        ivar_82 = (arraytopdown_record_104_t)ivar_64->ftbl->fptr(ivar_64, ivar_9);
        ivar_64->ftbl->rptr(ivar_64);
        ivar_57 = (arraytopdown_array_66_t)ivar_82->scaf;
        ivar_57->count++;
        release_arraytopdown_record_104(ivar_82);
        uint32_t ivar_84;
        ivar_84 = (uint32_t)0;
        ivar_53 = (arraytopdown_funtype_65_t)ivar_57->elems[ivar_84];
        ivar_53->count++;
        release_arraytopdown_array_66(ivar_57);
        result = (arraytopdown__ent_adt_t)ivar_53->ftbl->fptr(ivar_53, ivar_4);
        ivar_53->ftbl->rptr(ivar_53);

        
        return result;
}