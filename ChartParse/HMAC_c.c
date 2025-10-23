//Code generated using pvs2ir2c
#include "HMAC_c.h"

void release_HMAC_funtype_0(HMAC_funtype_0_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

HMAC_funtype_0_t copy_HMAC_funtype_0(HMAC_funtype_0_t x){return x->ftbl->cptr(x);}

bool_t equal_HMAC_funtype_0(HMAC_funtype_0_t x, HMAC_funtype_0_t y){
        return false;}


HMAC_record_1_t new_HMAC_record_1(void){
        HMAC_record_1_t tmp = (HMAC_record_1_t) safe_malloc(sizeof(struct HMAC_record_1_s));
        tmp->count = 1;
        return tmp;}

void release_HMAC_record_1(HMAC_record_1_t x){
        x->count--;
        if (x->count <= 0){
         release_bytestrings__bytestring(x->project_1);
         release_bytestrings__bytestring(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_HMAC_record_1_ptr(pointer_t x, type_actual_t T){
        release_HMAC_record_1((HMAC_record_1_t)x);
}

HMAC_record_1_t copy_HMAC_record_1(HMAC_record_1_t x){
        HMAC_record_1_t y = new_HMAC_record_1();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_HMAC_record_1(HMAC_record_1_t x, HMAC_record_1_t y){
        bool_t tmp = true;
        tmp = tmp && equal_bytestrings__bytestring(x->project_1, y->project_1);
        tmp = tmp && equal_bytestrings__bytestring(x->project_2, y->project_2);
        return tmp;}

bool_t equal_HMAC_record_1_ptr(pointer_t x, pointer_t y, actual_HMAC_record_1_t T){
        return equal_HMAC_record_1((HMAC_record_1_t)x, (HMAC_record_1_t)y);
}

actual_HMAC_record_1_t actual_HMAC_record_1(){
        actual_HMAC_record_1_t new = (actual_HMAC_record_1_t)safe_malloc(sizeof(struct actual_HMAC_record_1_s));
        new->equal_ptr = (equal_ptr_t)(*equal_HMAC_record_1_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_HMAC_record_1_ptr);
 

 
        return new;
 };

HMAC_record_1_t update_HMAC_record_1_project_1(HMAC_record_1_t x, bytestrings__bytestring_t v){
        HMAC_record_1_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_bytestrings__bytestring(x->project_1);};}
        else {y = copy_HMAC_record_1(x); x->count--; y->project_1->count--;};
        y->project_1 = (bytestrings__bytestring_t)v;
        return y;}

HMAC_record_1_t update_HMAC_record_1_project_2(HMAC_record_1_t x, bytestrings__bytestring_t v){
        HMAC_record_1_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_bytestrings__bytestring(x->project_2);};}
        else {y = copy_HMAC_record_1(x); x->count--; y->project_2->count--;};
        y->project_2 = (bytestrings__bytestring_t)v;
        return y;}



void release_HMAC_funtype_2(HMAC_funtype_2_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

HMAC_funtype_2_t copy_HMAC_funtype_2(HMAC_funtype_2_t x){return x->ftbl->cptr(x);}

bool_t equal_HMAC_funtype_2(HMAC_funtype_2_t x, HMAC_funtype_2_t y){
        return false;}


bytestrings__bytestring_t f_HMAC_closure_3(struct HMAC_closure_3_s * closure, bytestrings__bytestring_t bvar){
        bytestrings__bytestring_t result = h_HMAC_closure_3(bvar); 
        return result;}

bytestrings__bytestring_t m_HMAC_closure_3(struct HMAC_closure_3_s * closure, bytestrings__bytestring_t bvar){
        return h_HMAC_closure_3(bvar);}

extern bytestrings__bytestring_t h_HMAC_closure_3(bytestrings__bytestring_t ivar_11){
        bytestrings__bytestring_t result;
        result = (bytestrings__bytestring_t)SHA256__sha256message((bytestrings__bytestring_t)ivar_11);

        return result;
}

HMAC_closure_3_t new_HMAC_closure_3(void){
        static struct HMAC_funtype_0_ftbl_s ftbl = {.fptr = (bytestrings__bytestring_t (*)(HMAC_funtype_0_t, bytestrings__bytestring_t))&f_HMAC_closure_3, .mptr = (bytestrings__bytestring_t (*)(HMAC_funtype_0_t, bytestrings__bytestring_t))&m_HMAC_closure_3, .rptr =  (void (*)(HMAC_funtype_0_t))&release_HMAC_closure_3, .cptr = (HMAC_funtype_0_t (*)(HMAC_funtype_0_t))&copy_HMAC_closure_3};
        HMAC_closure_3_t tmp = (HMAC_closure_3_t) safe_malloc(sizeof(struct HMAC_closure_3_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_HMAC_closure_3(HMAC_funtype_0_t closure){
        HMAC_closure_3_t x = (HMAC_closure_3_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

HMAC_closure_3_t copy_HMAC_closure_3(HMAC_closure_3_t x){
        HMAC_closure_3_t y = new_HMAC_closure_3();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            HMAC_funtype_0_htbl_t new_htbl = (HMAC_funtype_0_htbl_t) safe_malloc(sizeof(struct HMAC_funtype_0_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            HMAC_funtype_0_hashentry_t * new_data = (HMAC_funtype_0_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct HMAC_funtype_0_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct HMAC_funtype_0_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_HMAC_funtype_4(HMAC_funtype_4_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

HMAC_funtype_4_t copy_HMAC_funtype_4(HMAC_funtype_4_t x){return x->ftbl->cptr(x);}

uint32_t lookup_HMAC_funtype_4(HMAC_funtype_4_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; HMAC_funtype_4_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp1233 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1233 == 0);
        bool_t keymatch;
        int64_t tmp1234 = mpz_cmp(data.key, i);
        keymatch = (tmp1234 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

        int64_t tmp1233 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp1233 == 0);

        int64_t tmp1234 = mpz_cmp(data.key, i);
        keymatch = (tmp1234 == 0);
                }
        return hashindex;
        }

HMAC_funtype_4_t dupdate_HMAC_funtype_4(HMAC_funtype_4_t a, mpz_ptr_t i, uint32_t v){
        HMAC_funtype_4_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (HMAC_funtype_4_htbl_t)safe_malloc(sizeof(struct HMAC_funtype_4_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (HMAC_funtype_4_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct HMAC_funtype_4_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        HMAC_funtype_4_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                HMAC_funtype_4_hashentry_t * new_data = (HMAC_funtype_4_hashentry_t *)safe_malloc(new_size * sizeof(struct HMAC_funtype_4_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp1235 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp1235 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp1236 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp1236 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp1237 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp1237 == 0);
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
        uint32_t hashindex = lookup_HMAC_funtype_4(htbl, i, ihash);
        HMAC_funtype_4_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp1238 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp1238 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

HMAC_funtype_4_t update_HMAC_funtype_4(HMAC_funtype_4_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_HMAC_funtype_4(a, i, v);
            } else {
                HMAC_funtype_4_t x = copy_HMAC_funtype_4(a);
                a->count--;
                return dupdate_HMAC_funtype_4(x, i, v);
            }}

bool_t equal_HMAC_funtype_4(HMAC_funtype_4_t x, HMAC_funtype_4_t y){
        return false;}


HMAC_record_5_t new_HMAC_record_5(void){
        HMAC_record_5_t tmp = (HMAC_record_5_t) safe_malloc(sizeof(struct HMAC_record_5_s));
        tmp->count = 1;
        return tmp;}

void release_HMAC_record_5(HMAC_record_5_t x){
        x->count--;
        if (x->count <= 0){
         release_HMAC_funtype_4(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_HMAC_record_5_ptr(pointer_t x, type_actual_t T){
        release_HMAC_record_5((HMAC_record_5_t)x);
}

HMAC_record_5_t copy_HMAC_record_5(HMAC_record_5_t x){
        HMAC_record_5_t y = new_HMAC_record_5();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_HMAC_record_5(HMAC_record_5_t x, HMAC_record_5_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_HMAC_funtype_4(x->seq, y->seq);
        return tmp;}

bool_t equal_HMAC_record_5_ptr(pointer_t x, pointer_t y, actual_HMAC_record_5_t T){
        return equal_HMAC_record_5((HMAC_record_5_t)x, (HMAC_record_5_t)y);
}

actual_HMAC_record_5_t actual_HMAC_record_5(){
        actual_HMAC_record_5_t new = (actual_HMAC_record_5_t)safe_malloc(sizeof(struct actual_HMAC_record_5_s));
        new->equal_ptr = (equal_ptr_t)(*equal_HMAC_record_5_ptr);
 
        new->release_ptr = (release_ptr_t)(*release_HMAC_record_5_ptr);
 

 
        return new;
 };

HMAC_record_5_t update_HMAC_record_5_length(HMAC_record_5_t x, mpz_ptr_t v){
        HMAC_record_5_t y;
        if (x->count == 1){y = x;}
        else {y = copy_HMAC_record_5(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

HMAC_record_5_t update_HMAC_record_5_seq(HMAC_record_5_t x, HMAC_funtype_4_t v){
        HMAC_record_5_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_HMAC_funtype_4(x->seq);};}
        else {y = copy_HMAC_record_5(x); x->count--; y->seq->count--;};
        y->seq = (HMAC_funtype_4_t)v;
        return y;}



extern bytestrings__bytestring_t HMAC__hmac(uint8_t ivar_3, bytestrings__bytestring_t ivar_4, bytestrings__bytestring_t ivar_5, uint8_t ivar_6, HMAC_funtype_0_t ivar_7){
        bytestrings__bytestring_t  result;
        /* newkey */ bytestrings__bytestring_t ivar_9;
        bool_t ivar_10;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)ivar_4->length;
        ivar_10 = (ivar_11 > ivar_3);
        if (ivar_10){ 
             bytestrings__bytestring_t ivar_16;
             ivar_16 = (bytestrings__bytestring_t)ivar_7->ftbl->fptr(ivar_7, ivar_4);
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             ivar_9 = (bytestrings__bytestring_t)ivar_16;
             if (ivar_9 != NULL) ivar_9->count++;
             release_bytestrings__bytestring(ivar_16);
} else {
        
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             ivar_9 = (bytestrings__bytestring_t)ivar_4;
             if (ivar_9 != NULL) ivar_9->count++;
             release_bytestrings__bytestring(ivar_4);
};
        /* newerkey */ bytestrings__bytestring_t ivar_20;
        bool_t ivar_21;
        uint32_t ivar_22;
        ivar_22 = (uint32_t)ivar_9->length;
        ivar_21 = (ivar_22 < ivar_3);
        if (ivar_21){ 
             HMAC_funtype_0_t ivar_29;
             HMAC_funtype_0_t ivar_32;
             ivar_32 = (HMAC_funtype_0_t)rotate__padright((uint8_t)ivar_3);
             //copying to HMAC_funtype_0 from HMAC_funtype_0;
             ivar_29 = (HMAC_funtype_0_t)ivar_32;
             if (ivar_29 != NULL) ivar_29->count++;
             release_HMAC_funtype_0(ivar_32);
             bytestrings__bytestring_t ivar_27;
             ivar_27 = (bytestrings__bytestring_t)ivar_29->ftbl->fptr(ivar_29, ivar_9);
             ivar_29->ftbl->rptr(ivar_29);
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             ivar_20 = (bytestrings__bytestring_t)ivar_27;
             if (ivar_20 != NULL) ivar_20->count++;
             release_bytestrings__bytestring(ivar_27);
} else {
        
             //copying to bytestrings__bytestring from bytestrings__bytestring;
             ivar_20 = (bytestrings__bytestring_t)ivar_9;
             if (ivar_20 != NULL) ivar_20->count++;
             release_bytestrings__bytestring(ivar_9);
};
        /* oKeyPad */ bytestrings__bytestring_t ivar_35;
        HMAC_funtype_2_t ivar_45;
        HMAC_funtype_2_t ivar_48;
        ivar_48 = (HMAC_funtype_2_t)rotate__lbytesXOR((uint8_t)ivar_3);
        //copying to HMAC_funtype_2 from HMAC_funtype_2;
        ivar_45 = (HMAC_funtype_2_t)ivar_48;
        if (ivar_45 != NULL) ivar_45->count++;
        release_HMAC_funtype_2(ivar_48);
        bytestrings__bytestring_t ivar_51;
        uint8_t ivar_41;
        ivar_41 = (uint8_t)92;
        bytestrings__bytestring_t ivar_40;
        ivar_40 = (bytestrings__bytestring_t)rotate__nbytes((uint8_t)ivar_41, (uint8_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_51 = (bytestrings__bytestring_t)ivar_40;
        if (ivar_51 != NULL) ivar_51->count++;
        release_bytestrings__bytestring(ivar_40);
        bytestrings__bytestring_t ivar_43;
        ivar_20->count++;
        ivar_43 = (bytestrings__bytestring_t)ivar_45->ftbl->mptr(ivar_45, ivar_20, ivar_51);
        ivar_45->ftbl->rptr(ivar_45);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_35 = (bytestrings__bytestring_t)ivar_43;
        if (ivar_35 != NULL) ivar_35->count++;
        release_bytestrings__bytestring(ivar_43);
        /* iKeyPad */ bytestrings__bytestring_t ivar_52;
        HMAC_funtype_2_t ivar_62;
        HMAC_funtype_2_t ivar_65;
        ivar_65 = (HMAC_funtype_2_t)rotate__lbytesXOR((uint8_t)ivar_3);
        //copying to HMAC_funtype_2 from HMAC_funtype_2;
        ivar_62 = (HMAC_funtype_2_t)ivar_65;
        if (ivar_62 != NULL) ivar_62->count++;
        release_HMAC_funtype_2(ivar_65);
        bytestrings__bytestring_t ivar_68;
        uint8_t ivar_58;
        ivar_58 = (uint8_t)54;
        bytestrings__bytestring_t ivar_57;
        ivar_57 = (bytestrings__bytestring_t)rotate__nbytes((uint8_t)ivar_58, (uint8_t)ivar_3);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_68 = (bytestrings__bytestring_t)ivar_57;
        if (ivar_68 != NULL) ivar_68->count++;
        release_bytestrings__bytestring(ivar_57);
        bytestrings__bytestring_t ivar_60;
        ivar_60 = (bytestrings__bytestring_t)ivar_62->ftbl->mptr(ivar_62, ivar_20, ivar_68);
        ivar_62->ftbl->rptr(ivar_62);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_52 = (bytestrings__bytestring_t)ivar_60;
        if (ivar_52 != NULL) ivar_52->count++;
        release_bytestrings__bytestring(ivar_60);
        bytestrings__bytestring_t ivar_88;
        bytestrings__bytestring_t ivar_84;
        bytestrings__bytestring_t ivar_81;
        bytestrings__bytestring_t ivar_75;
        ivar_75 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_52, (bytestrings__bytestring_t)ivar_5);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_81 = (bytestrings__bytestring_t)ivar_75;
        if (ivar_81 != NULL) ivar_81->count++;
        release_bytestrings__bytestring(ivar_75);
        bytestrings__bytestring_t ivar_78;
        ivar_78 = (bytestrings__bytestring_t)ivar_7->ftbl->fptr(ivar_7, ivar_81);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_84 = (bytestrings__bytestring_t)ivar_78;
        if (ivar_84 != NULL) ivar_84->count++;
        release_bytestrings__bytestring(ivar_78);
        bytestrings__bytestring_t ivar_82;
        ivar_82 = (bytestrings__bytestring_t)bytestrings__doubleplus((bytestrings__bytestring_t)ivar_35, (bytestrings__bytestring_t)ivar_84);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_88 = (bytestrings__bytestring_t)ivar_82;
        if (ivar_88 != NULL) ivar_88->count++;
        release_bytestrings__bytestring(ivar_82);
        bytestrings__bytestring_t ivar_85;
        ivar_85 = (bytestrings__bytestring_t)ivar_7->ftbl->fptr(ivar_7, ivar_88);
        ivar_7->ftbl->rptr(ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_85;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_85);

        
        return result;
}

extern bytestrings__bytestring_t HMAC__hmac256(uint8_t ivar_2, bytestrings__bytestring_t ivar_3, bytestrings__bytestring_t ivar_4){
        bytestrings__bytestring_t  result;
        uint8_t ivar_18;
        ivar_18 = (uint8_t)32;
        HMAC_funtype_0_t ivar_19;
        HMAC_closure_3_t cl1230;
        cl1230 = new_HMAC_closure_3();
        ivar_19 = (HMAC_funtype_0_t)cl1230;
        bytestrings__bytestring_t ivar_14;
        ivar_14 = (bytestrings__bytestring_t)HMAC__hmac((uint8_t)ivar_2, (bytestrings__bytestring_t)ivar_3, (bytestrings__bytestring_t)ivar_4, (uint8_t)ivar_18, (HMAC_funtype_0_t)ivar_19);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_14;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_14);

        
        return result;
}

extern bytestrings__bytestring_t HMAC__test1(void){
        bytestrings__bytestring_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_17;
        ivar_17 = (uint8_t)64;
        bytestrings__bytestring_t ivar_18;
        HMAC_record_5_t ivar_9;
        uint32_t len1240 = 3;
        uint32_t characters1241[3] = {107, 101, 121};
        stringliteral_t string1239 = mk_string(3, characters1241);
        ivar_9 = (HMAC_record_5_t)strings__make_string(len1240, string1239);
        strings__string_t ivar_7;
        //copying to strings__string from HMAC_record_5;
        ivar_7 = (strings__string_t)ivar_9;
        if (ivar_7 != NULL) ivar_7->count++;
        release_HMAC_record_5(ivar_9);
        bytestrings__bytestring_t ivar_6;
        ivar_6 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_7);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_18 = (bytestrings__bytestring_t)ivar_6;
        if (ivar_18 != NULL) ivar_18->count++;
        release_bytestrings__bytestring(ivar_6);
        bytestrings__bytestring_t ivar_19;
        HMAC_record_5_t ivar_15;
        uint32_t len1243 = 43;
        uint32_t characters1244[43] = {84, 104, 101, 32, 113, 117, 105, 99, 107, 32, 98, 114, 111, 119, 110, 32, 102, 111, 120, 32, 106, 117, 109, 112, 115, 32, 111, 118, 101, 114, 32, 116, 104, 101, 32, 108, 97, 122, 121, 32, 100, 111, 103};
        stringliteral_t string1242 = mk_string(43, characters1244);
        ivar_15 = (HMAC_record_5_t)strings__make_string(len1243, string1242);
        strings__string_t ivar_13;
        //copying to strings__string from HMAC_record_5;
        ivar_13 = (strings__string_t)ivar_15;
        if (ivar_13 != NULL) ivar_13->count++;
        release_HMAC_record_5(ivar_15);
        bytestrings__bytestring_t ivar_12;
        ivar_12 = (bytestrings__bytestring_t)bytestrings__mk_bytestring((strings__string_t)ivar_13);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        ivar_19 = (bytestrings__bytestring_t)ivar_12;
        if (ivar_19 != NULL) ivar_19->count++;
        release_bytestrings__bytestring(ivar_12);
        bytestrings__bytestring_t ivar_16;
        ivar_16 = (bytestrings__bytestring_t)HMAC__hmac256((uint8_t)ivar_17, (bytestrings__bytestring_t)ivar_18, (bytestrings__bytestring_t)ivar_19);
        //copying to bytestrings__bytestring from bytestrings__bytestring;
        result = (bytestrings__bytestring_t)ivar_16;
        if (result != NULL) result->count++;
        release_bytestrings__bytestring(ivar_16);

        defined = true;};
        
        return result;
}