//Code generated using pvs2ir2c
#include "bv_bitwise_c.h"


bool_t f_bv_bitwise_closure_0(struct bv_bitwise_closure_0_s * closure, mpz_t bvar){
if (closure->htbl != NULL){
        bv__bvec_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_bv__bvec(htbl, bvar, hash);
        bv__bvec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp769 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp769 == 0);
        if (!keyzero && entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        return h_bv_bitwise_closure_0(bvar, closure->fvar_1, closure->fvar_2);};

return h_bv_bitwise_closure_0(bvar, closure->fvar_1, closure->fvar_2);}

bool_t m_bv_bitwise_closure_0(struct bv_bitwise_closure_0_s * closure, mpz_t bvar){
        return h_bv_bitwise_closure_0(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_bv_bitwise_closure_0(mpz_t ivar_8, bv__bvec_t ivar_5, bv__bvec_t ivar_6){
        bool_t result;
        bool_t ivar_9;
        ivar_9 = (bool_t)ivar_5->ftbl->fptr(ivar_5, ivar_8);
        bool_t ivar_10;
        ivar_10 = (bool_t)ivar_6->ftbl->fptr(ivar_6, ivar_8);
        result = ivar_9 || ivar_10;

        return result;
}

bv_bitwise_closure_0_t new_bv_bitwise_closure_0(void){
        static struct bv__bvec_ftbl_s ftbl = {.fptr = (bool_t (*)(bv__bvec_t, mpz_t))&f_bv_bitwise_closure_0, .mptr = (bool_t (*)(bv__bvec_t, mpz_t))&m_bv_bitwise_closure_0, .rptr =  (void (*)(bv__bvec_t))&release_bv_bitwise_closure_0, .cptr = (bv__bvec_t (*)(bv__bvec_t))&copy_bv_bitwise_closure_0};
        bv_bitwise_closure_0_t tmp = (bv_bitwise_closure_0_t) safe_malloc(sizeof(struct bv_bitwise_closure_0_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_bv_bitwise_closure_0(bv__bvec_t closure){
        bv_bitwise_closure_0_t x = (bv_bitwise_closure_0_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bv__bvec(x->fvar_1);
         release_bv__bvec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_bitwise_closure_0_t copy_bv_bitwise_closure_0(bv_bitwise_closure_0_t x){
        bv_bitwise_closure_0_t y = new_bv_bitwise_closure_0();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            bv__bvec_htbl_t new_htbl = (bv__bvec_htbl_t) safe_malloc(sizeof(bv__bvec_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv__bvec_hashentry_t * new_data = (bv__bvec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(bv__bvec_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(bv__bvec_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_bv_bitwise_closure_1(struct bv_bitwise_closure_1_s * closure, mpz_t bvar){
if (closure->htbl != NULL){
        bv__bvec_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_bv__bvec(htbl, bvar, hash);
        bv__bvec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp772 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp772 == 0);
        if (!keyzero && entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        return h_bv_bitwise_closure_1(bvar, closure->fvar_1, closure->fvar_2);};

return h_bv_bitwise_closure_1(bvar, closure->fvar_1, closure->fvar_2);}

bool_t m_bv_bitwise_closure_1(struct bv_bitwise_closure_1_s * closure, mpz_t bvar){
        return h_bv_bitwise_closure_1(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_bv_bitwise_closure_1(mpz_t ivar_4, bv__bvec_t ivar_1, bv__bvec_t ivar_2){
        bool_t result;
        bool_t ivar_5;
        ivar_5 = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_4);
        bool_t ivar_6;
        ivar_6 = (bool_t)ivar_2->ftbl->fptr(ivar_2, ivar_4);
        result = ivar_5 && ivar_6;

        return result;
}

bv_bitwise_closure_1_t new_bv_bitwise_closure_1(void){
        static struct bv__bvec_ftbl_s ftbl = {.fptr = (bool_t (*)(bv__bvec_t, mpz_t))&f_bv_bitwise_closure_1, .mptr = (bool_t (*)(bv__bvec_t, mpz_t))&m_bv_bitwise_closure_1, .rptr =  (void (*)(bv__bvec_t))&release_bv_bitwise_closure_1, .cptr = (bv__bvec_t (*)(bv__bvec_t))&copy_bv_bitwise_closure_1};
        bv_bitwise_closure_1_t tmp = (bv_bitwise_closure_1_t) safe_malloc(sizeof(struct bv_bitwise_closure_1_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_bv_bitwise_closure_1(bv__bvec_t closure){
        bv_bitwise_closure_1_t x = (bv_bitwise_closure_1_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bv__bvec(x->fvar_1);
         release_bv__bvec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_bitwise_closure_1_t copy_bv_bitwise_closure_1(bv_bitwise_closure_1_t x){
        bv_bitwise_closure_1_t y = new_bv_bitwise_closure_1();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            bv__bvec_htbl_t new_htbl = (bv__bvec_htbl_t) safe_malloc(sizeof(bv__bvec_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv__bvec_hashentry_t * new_data = (bv__bvec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(bv__bvec_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(bv__bvec_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_bv_bitwise_closure_2(struct bv_bitwise_closure_2_s * closure, mpz_t bvar){
if (closure->htbl != NULL){
        bv__bvec_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_bv__bvec(htbl, bvar, hash);
        bv__bvec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp775 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp775 == 0);
        if (!keyzero && entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        return h_bv_bitwise_closure_2(bvar, closure->fvar_1, closure->fvar_2);};

return h_bv_bitwise_closure_2(bvar, closure->fvar_1, closure->fvar_2);}

bool_t m_bv_bitwise_closure_2(struct bv_bitwise_closure_2_s * closure, mpz_t bvar){
        return h_bv_bitwise_closure_2(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_bv_bitwise_closure_2(mpz_t ivar_4, bv__bvec_t ivar_1, bv__bvec_t ivar_2){
        bool_t result;
        bool_t ivar_5;
        ivar_5 = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_4);
        bool_t ivar_6;
        ivar_6 = (bool_t)ivar_2->ftbl->fptr(ivar_2, ivar_4);
        result = (ivar_5 || ! ivar_6) && ((!ivar_5) ||  ivar_6);

        return result;
}

bv_bitwise_closure_2_t new_bv_bitwise_closure_2(void){
        static struct bv__bvec_ftbl_s ftbl = {.fptr = (bool_t (*)(bv__bvec_t, mpz_t))&f_bv_bitwise_closure_2, .mptr = (bool_t (*)(bv__bvec_t, mpz_t))&m_bv_bitwise_closure_2, .rptr =  (void (*)(bv__bvec_t))&release_bv_bitwise_closure_2, .cptr = (bv__bvec_t (*)(bv__bvec_t))&copy_bv_bitwise_closure_2};
        bv_bitwise_closure_2_t tmp = (bv_bitwise_closure_2_t) safe_malloc(sizeof(struct bv_bitwise_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_bv_bitwise_closure_2(bv__bvec_t closure){
        bv_bitwise_closure_2_t x = (bv_bitwise_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bv__bvec(x->fvar_1);
         release_bv__bvec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_bitwise_closure_2_t copy_bv_bitwise_closure_2(bv_bitwise_closure_2_t x){
        bv_bitwise_closure_2_t y = new_bv_bitwise_closure_2();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            bv__bvec_htbl_t new_htbl = (bv__bvec_htbl_t) safe_malloc(sizeof(bv__bvec_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv__bvec_hashentry_t * new_data = (bv__bvec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(bv__bvec_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(bv__bvec_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_bv_bitwise_closure_3(struct bv_bitwise_closure_3_s * closure, mpz_t bvar){
if (closure->htbl != NULL){
        bv__bvec_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_bv__bvec(htbl, bvar, hash);
        bv__bvec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp778 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp778 == 0);
        if (!keyzero && entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        return h_bv_bitwise_closure_3(bvar, closure->fvar_1);};

return h_bv_bitwise_closure_3(bvar, closure->fvar_1);}

bool_t m_bv_bitwise_closure_3(struct bv_bitwise_closure_3_s * closure, mpz_t bvar){
        return h_bv_bitwise_closure_3(bvar, closure->fvar_1);}

extern bool_t h_bv_bitwise_closure_3(mpz_t ivar_3, bv__bvec_t ivar_1){
        bool_t result;
        bool_t ivar_4;
        ivar_4 = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_3);
        result = !ivar_4;

        return result;
}

bv_bitwise_closure_3_t new_bv_bitwise_closure_3(void){
        static struct bv__bvec_ftbl_s ftbl = {.fptr = (bool_t (*)(bv__bvec_t, mpz_t))&f_bv_bitwise_closure_3, .mptr = (bool_t (*)(bv__bvec_t, mpz_t))&m_bv_bitwise_closure_3, .rptr =  (void (*)(bv__bvec_t))&release_bv_bitwise_closure_3, .cptr = (bv__bvec_t (*)(bv__bvec_t))&copy_bv_bitwise_closure_3};
        bv_bitwise_closure_3_t tmp = (bv_bitwise_closure_3_t) safe_malloc(sizeof(struct bv_bitwise_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_bv_bitwise_closure_3(bv__bvec_t closure){
        bv_bitwise_closure_3_t x = (bv_bitwise_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bv__bvec(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_bitwise_closure_3_t copy_bv_bitwise_closure_3(bv_bitwise_closure_3_t x){
        bv_bitwise_closure_3_t y = new_bv_bitwise_closure_3();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            bv__bvec_htbl_t new_htbl = (bv__bvec_htbl_t) safe_malloc(sizeof(bv__bvec_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv__bvec_hashentry_t * new_data = (bv__bvec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(bv__bvec_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(bv__bvec_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_bv_bitwise_closure_4(struct bv_bitwise_closure_4_s * closure, mpz_t bvar){
if (closure->htbl != NULL){
        bv__bvec_htbl_t htbl = closure->htbl;
        uint32_t hash = mpz_hash(bvar);
        uint32_t hashindex = lookup_bv__bvec(htbl, bvar, hash);
        bv__bvec_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         int64_t tmp781 = mpz_cmp_ui(entry.key, 0);
         keyzero = (tmp781 == 0);
        if (!keyzero && entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        return h_bv_bitwise_closure_4(bvar, closure->fvar_1, closure->fvar_2);};

return h_bv_bitwise_closure_4(bvar, closure->fvar_1, closure->fvar_2);}

bool_t m_bv_bitwise_closure_4(struct bv_bitwise_closure_4_s * closure, mpz_t bvar){
        return h_bv_bitwise_closure_4(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_bv_bitwise_closure_4(mpz_t ivar_4, bv__bvec_t ivar_1, bv__bvec_t ivar_2){
        bool_t result;
        bool_t ivar_16;
        ivar_16 = (bool_t)ivar_1->ftbl->fptr(ivar_1, ivar_4);
        bool_t ivar_17;
        ivar_17 = (bool_t)ivar_2->ftbl->fptr(ivar_2, ivar_4);
        result = (bool_t)xor_def__XOR((bool_t)ivar_16, (bool_t)ivar_17);

        return result;
}

bv_bitwise_closure_4_t new_bv_bitwise_closure_4(void){
        static struct bv__bvec_ftbl_s ftbl = {.fptr = (bool_t (*)(bv__bvec_t, mpz_t))&f_bv_bitwise_closure_4, .mptr = (bool_t (*)(bv__bvec_t, mpz_t))&m_bv_bitwise_closure_4, .rptr =  (void (*)(bv__bvec_t))&release_bv_bitwise_closure_4, .cptr = (bv__bvec_t (*)(bv__bvec_t))&copy_bv_bitwise_closure_4};
        bv_bitwise_closure_4_t tmp = (bv_bitwise_closure_4_t) safe_malloc(sizeof(struct bv_bitwise_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_bv_bitwise_closure_4(bv__bvec_t closure){
        bv_bitwise_closure_4_t x = (bv_bitwise_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
         release_bv__bvec(x->fvar_1);
         release_bv__bvec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

bv_bitwise_closure_4_t copy_bv_bitwise_closure_4(bv_bitwise_closure_4_t x){
        bv_bitwise_closure_4_t y = new_bv_bitwise_closure_4();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            bv__bvec_htbl_t new_htbl = (bv__bvec_htbl_t) safe_malloc(sizeof(bv__bvec_htbl_t));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            bv__bvec_hashentry_t * new_data = (bv__bvec_hashentry_t *) safe_malloc(new_htbl->size * sizeof(bv__bvec_hashentry_t));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(bv__bvec_hashentry_t)));
            new_htbl->data = new_data;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern bv__bvec_t bv_bitwise__OR(bv__bvec_t ivar_5, bv__bvec_t ivar_6){
        bv__bvec_t result;
        bv_bitwise_closure_0_t cl770;
        cl770 = new_bv_bitwise_closure_0();
        cl770->fvar_1 = (bv__bvec_t)ivar_5;
        cl770->fvar_1->count++;
        cl770->fvar_2 = (bv__bvec_t)ivar_6;
        cl770->fvar_2->count++;
        release_bv__bvec(ivar_5);
        release_bv__bvec(ivar_6);
        result = (bv__bvec_t)cl770;

        return result;
}

extern bv__bvec_t bv_bitwise__AND(bv__bvec_t ivar_1, bv__bvec_t ivar_2){
        bv__bvec_t result;
        bv_bitwise_closure_1_t cl773;
        cl773 = new_bv_bitwise_closure_1();
        cl773->fvar_1 = (bv__bvec_t)ivar_1;
        cl773->fvar_1->count++;
        cl773->fvar_2 = (bv__bvec_t)ivar_2;
        cl773->fvar_2->count++;
        release_bv__bvec(ivar_1);
        release_bv__bvec(ivar_2);
        result = (bv__bvec_t)cl773;

        return result;
}

extern bv__bvec_t bv_bitwise__IFF(bv__bvec_t ivar_1, bv__bvec_t ivar_2){
        bv__bvec_t result;
        bv_bitwise_closure_2_t cl776;
        cl776 = new_bv_bitwise_closure_2();
        cl776->fvar_1 = (bv__bvec_t)ivar_1;
        cl776->fvar_1->count++;
        cl776->fvar_2 = (bv__bvec_t)ivar_2;
        cl776->fvar_2->count++;
        release_bv__bvec(ivar_1);
        release_bv__bvec(ivar_2);
        result = (bv__bvec_t)cl776;

        return result;
}

extern bv__bvec_t bv_bitwise__NOT(bv__bvec_t ivar_1){
        bv__bvec_t result;
        bv_bitwise_closure_3_t cl779;
        cl779 = new_bv_bitwise_closure_3();
        cl779->fvar_1 = (bv__bvec_t)ivar_1;
        cl779->fvar_1->count++;
        release_bv__bvec(ivar_1);
        result = (bv__bvec_t)cl779;

        return result;
}

extern bv__bvec_t bv_bitwise__XOR(bv__bvec_t ivar_1, bv__bvec_t ivar_2){
        bv__bvec_t result;
        bv_bitwise_closure_4_t cl782;
        cl782 = new_bv_bitwise_closure_4();
        cl782->fvar_1 = (bv__bvec_t)ivar_1;
        cl782->fvar_1->count++;
        cl782->fvar_2 = (bv__bvec_t)ivar_2;
        cl782->fvar_2->count++;
        release_bv__bvec(ivar_1);
        release_bv__bvec(ivar_2);
        result = (bv__bvec_t)cl782;

        return result;
}