//Code generated using pvs2ir2c
#include "bv_caret_c.h"

void release_bv_caret_funtype_0(bv_caret_funtype_0_t x, mpz_ptr_t bv_caret__N){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

bv_caret_funtype_0_t copy_bv_caret_funtype_0(bv_caret_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_bv_caret_funtype_0(bv_caret_funtype_0_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        bv_caret_funtype_0_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp2617 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp2617 == 0);
        bool_t keymatch;
        int64_t tmp2618 = mpz_cmp(data.key, i);
        keymatch = (tmp2618 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp2617 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp2617 == 0);

                int64_t tmp2618 = mpz_cmp(data.key, i);
                keymatch = (tmp2618 == 0);
                }
        return hashindex;
        }

bv_caret_funtype_0_t dupdate_bv_caret_funtype_0(bv_caret_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_caret__N){
        bv_caret_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (bv_caret_funtype_0_htbl_t)safe_malloc(sizeof(struct bv_caret_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (bv_caret_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct bv_caret_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        bv_caret_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                bv_caret_funtype_0_hashentry_t * new_data = (bv_caret_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct bv_caret_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp2619 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp2619 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp2620 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp2620 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp2621 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp2621 == 0);
                                }
                                mpz_set(new_data[new_loc].key, data[j].key);
                                new_data[new_loc].keyhash = keyhash;
                                new_data[new_loc].value = (bool_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = mpz_hash(i);
        uint32_t hashindex = lookup_bv_caret_funtype_0(htbl, i, ihash);
        bv_caret_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp2622 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp2622 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

bv_caret_funtype_0_t update_bv_caret_funtype_0(bv_caret_funtype_0_t a, mpz_ptr_t i, bool_t v, mpz_ptr_t bv_caret__N){
        if (a->count == 1){
                return dupdate_bv_caret_funtype_0(a, i, v, bv_caret__N);
            } else {
                bv_caret_funtype_0_t x = copy_bv_caret_funtype_0(a);
                a->count--;
                return dupdate_bv_caret_funtype_0(x, i, v, bv_caret__N);
            }}

bool_t equal_bv_caret_funtype_0(bv_caret_funtype_0_t x, bv_caret_funtype_0_t y, mpz_ptr_t bv_caret__N){
        return false;}

char* json_bv_caret_funtype_0(bv_caret_funtype_0_t x, mpz_ptr_t bv_caret__N){char * result = safe_malloc(28); sprintf(result, "%s", "\"bv_caret_funtype_0\""); return result;}


bv_caret_record_1_t new_bv_caret_record_1(void){
        bv_caret_record_1_t tmp = (bv_caret_record_1_t) safe_malloc(sizeof(struct bv_caret_record_1_s));
        tmp->count = 1;
        return tmp;}

void release_bv_caret_record_1(bv_caret_record_1_t x, mpz_ptr_t bv_caret__N){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_bv_caret_record_1_ptr(pointer_t x, type_actual_t T){
        actual_bv_caret_record_1_t actual = (actual_bv_caret_record_1_t)T;
        mpz_ptr_t bv_caret__N = actual->bv_caret__N;
        release_bv_caret_record_1((bv_caret_record_1_t)x, bv_caret__N);
}

bv_caret_record_1_t copy_bv_caret_record_1(bv_caret_record_1_t x){
        bv_caret_record_1_t y = new_bv_caret_record_1();
        mpz_set(y->project_1, x->project_1);
        mpz_set(y->project_2, x->project_2);
        y->count = 1;
        return y;}

bool_t equal_bv_caret_record_1(bv_caret_record_1_t x, bv_caret_record_1_t y, mpz_ptr_t bv_caret__N){
        bool_t tmp = true;tmp = tmp && (mpz_cmp(x->project_1, y->project_1) == 0);tmp = tmp && (mpz_cmp(x->project_2, y->project_2) == 0);
        return tmp;}

char * json_bv_caret_record_1(bv_caret_record_1_t x, mpz_ptr_t bv_caret__N){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_mpz(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_bv_caret_record_1_ptr(pointer_t x, pointer_t y, actual_bv_caret_record_1_t T){
        actual_bv_caret_record_1_t actual = (actual_bv_caret_record_1_t)T;
        mpz_ptr_t bv_caret__N = actual->bv_caret__N;
        return equal_bv_caret_record_1((bv_caret_record_1_t)x, (bv_caret_record_1_t)y, bv_caret__N);
}

char * json_bv_caret_record_1_ptr(pointer_t x, actual_bv_caret_record_1_t T){
        actual_bv_caret_record_1_t actual = (actual_bv_caret_record_1_t)T;
        mpz_ptr_t bv_caret__N = actual->bv_caret__N;
        return json_bv_caret_record_1((bv_caret_record_1_t)x, bv_caret__N);
}

actual_bv_caret_record_1_t actual_bv_caret_record_1(mpz_ptr_t bv_caret__N){
        actual_bv_caret_record_1_t new = (actual_bv_caret_record_1_t)safe_malloc(sizeof(struct actual_bv_caret_record_1_s));
        new->equal_ptr = (equal_ptr_t)(*equal_bv_caret_record_1_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_bv_caret_record_1_ptr);
 
        new->json_ptr = (json_ptr_t)(*json_bv_caret_record_1_ptr);
 

        new->bv_caret__N = bv_caret__N;
 
        return new;
 };

bv_caret_record_1_t update_bv_caret_record_1_project_1(bv_caret_record_1_t x, mpz_ptr_t v){
        bv_caret_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_bv_caret_record_1(x); x->count--;};
        mpz_set(y->project_1, v);
        return y;}

bv_caret_record_1_t update_bv_caret_record_1_project_2(bv_caret_record_1_t x, mpz_ptr_t v){
        bv_caret_record_1_t y;
        if (x->count == 1){y = x;}
        else {y = copy_bv_caret_record_1(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}




bool_t f_bv_caret_closure_2(struct bv_caret_closure_2_s * closure, mpz_ptr_t bvar){
if (closure->htbl != NULL){
        bv_caret_funtype_0_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_bv_caret_funtype_0(htbl, bvar, hash);
        bv_caret_funtype_0_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp2623 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp2623 == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_bv_caret_closure_2(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);};

return h_bv_caret_closure_2(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

bool_t m_bv_caret_closure_2(struct bv_caret_closure_2_s * closure, mpz_ptr_t bvar){
        return h_bv_caret_closure_2(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

bool_t h_bv_caret_closure_2(mpz_ptr_t ivar_14, bv_caret_record_1_t ivar_3, mpz_ptr_t bv_caret__N, bv_caret_funtype_0_t ivar_1){
        bool_t result;
        mpz_ptr_t ivar_33;
        mpz_ptr_t ivar_26;
        ivar_26 = safe_malloc(sizeof(mpz_t));
        mpz_init(ivar_26);
        mpz_set(ivar_26, ivar_3->project_2);
        mpz_mk_add(ivar_33, ivar_26, ivar_14);
        result = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_33);

        return result;
}

bv_caret_closure_2_t new_bv_caret_closure_2(void){
        static struct bv_caret_funtype_0_ftbl_s ftbl = {.fptr = (bool_t (*)(bv_caret_funtype_0_t, mpz_ptr_t))&f_bv_caret_closure_2, .mptr = (bool_t (*)(bv_caret_funtype_0_t, mpz_ptr_t))&m_bv_caret_closure_2, .rptr =  (void (*)(bv_caret_funtype_0_t))&release_bv_caret_closure_2, .cptr = (bv_caret_funtype_0_t (*)(bv_caret_funtype_0_t))&copy_bv_caret_closure_2};
        bv_caret_closure_2_t tmp = (bv_caret_closure_2_t) safe_malloc(sizeof(struct bv_caret_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_2);
        return tmp;}

void release_bv_caret_closure_2(bv_caret_funtype_0_t closure, mpz_ptr_t bv_caret__N){
        bv_caret_closure_2_t x = (bv_caret_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bv_caret_record_1(x->fvar_1, bv_caret__N);
         release_bv_caret_funtype_0(x->fvar_3, bv_caret__N);
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_caret_closure_2_t copy_bv_caret_closure_2(bv_caret_closure_2_t x){
        bv_caret_closure_2_t y = new_bv_caret_closure_2();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        mpz_set(y->fvar_2, x->fvar_2);
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            bv_caret_funtype_0_htbl_t new_htbl = (bv_caret_funtype_0_htbl_t) safe_malloc(sizeof(struct bv_caret_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv_caret_funtype_0_hashentry_t * new_data = (bv_caret_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct bv_caret_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct bv_caret_funtype_0_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

bv_caret_funtype_0_t bv_caret__caret(mpz_ptr_t bv_caret__N, bv_caret_funtype_0_t ivar_1, bv_caret_record_1_t ivar_3){
        bv_caret_funtype_0_t  result;
        bv_caret_closure_2_t cl2624;
        cl2624 = new_bv_caret_closure_2();
        cl2624->fvar_1 = (bv_caret_record_1_t)ivar_3;
        if (cl2624->fvar_1 != NULL) cl2624->fvar_1->count++;
        mpz_set(cl2624->fvar_2, bv_caret__N);
        cl2624->fvar_3 = (bv_caret_funtype_0_t)ivar_1;
        if (cl2624->fvar_3 != NULL) cl2624->fvar_3->count++;
        release_bv_caret_record_1(ivar_3, bv_caret__N);
        release_bv_caret_funtype_0(ivar_1, bv_caret__N);
        result = (bv_caret_funtype_0_t)cl2624;

        
        return result;
}