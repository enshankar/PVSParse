//Code generated using pvs2ir2c
#include "testlist_c.h"


testlist_record_0_t new_testlist_record_0(void){
        testlist_record_0_t tmp = (testlist_record_0_t) safe_malloc(sizeof(struct testlist_record_0_s));
        tmp->count = 1;
        return tmp;}

void release_testlist_record_0(testlist_record_0_t x){
        x->count--;
        if (x->count <= 0){
         release_list_adt__list_adt(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_testlist_record_0_ptr(pointer_t x, type_actual_t T){
        release_testlist_record_0((testlist_record_0_t)x);
}

testlist_record_0_t copy_testlist_record_0(testlist_record_0_t x){
        testlist_record_0_t y = new_testlist_record_0();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        mpz_set(y->project_2, x->project_2);
        y->count = 1;
        return y;}

bool_t equal_testlist_record_0(testlist_record_0_t x, testlist_record_0_t y){
        bool_t tmp = true;
        tmp = tmp && equal_list_adt__list_adt(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

char * json_testlist_record_0(testlist_record_0_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_list_adt__list_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_mpz(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_testlist_record_0_ptr(pointer_t x, pointer_t y, actual_testlist_record_0_t T){
        return equal_testlist_record_0((testlist_record_0_t)x, (testlist_record_0_t)y);
}

char * json_testlist_record_0_ptr(pointer_t x, actual_testlist_record_0_t T){
        return json_testlist_record_0((testlist_record_0_t)x);
}

testlist_record_0_t update_testlist_record_0_project_1(testlist_record_0_t x, list_adt__list_adt_t v){
        testlist_record_0_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_list_adt__list_adt(x->project_1);};}
        else {y = copy_testlist_record_0(x); x->count--; y->project_1->count--;};
        y->project_1 = (list_adt__list_adt_t)v;
        return y;}

testlist_record_0_t update_testlist_record_0_project_2(testlist_record_0_t x, mpz_ptr_t v){
        testlist_record_0_t y;
        if (x->count == 1){y = x;}
        else {y = copy_testlist_record_0(x); x->count--;};
        mpz_set(y->project_2, v);
        return y;}



void release_testlist_funtype_1(testlist_funtype_1_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

testlist_funtype_1_t copy_testlist_funtype_1(testlist_funtype_1_t x){return x->ftbl->cptr(x);}

bool_t equal_testlist_funtype_1(testlist_funtype_1_t x, testlist_funtype_1_t y){
        return false;}

char* json_testlist_funtype_1(testlist_funtype_1_t x){char * result = safe_malloc(28); sprintf(result, "%s", "\"testlist_funtype_1\""); return result;}


uint32_t f_testlist_closure_2(struct testlist_closure_2_s * closure, testlist_record_0_t bvar){
        list_adt__list_adt_t bvar_1;
        bvar_1 = (list_adt__list_adt_t)bvar->project_1;
        bvar->project_1->count++;
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        release_testlist_record_0(bvar);
        uint32_t result = h_testlist_closure_2(bvar_1, bvar_2); 
        release_list_adt__list_adt(bvar_1);
        release_mpz(bvar_2);
        return result;}

uint32_t m_testlist_closure_2(struct testlist_closure_2_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2){
        return h_testlist_closure_2(bvar_1, bvar_2);}

extern uint32_t h_testlist_closure_2(list_adt__list_adt_t ivar_7, mpz_ptr_t ivar_8){
        uint32_t result;
        list_adt__list_adt_t ivar_18;
        ivar_18 = (list_adt__list_adt_t)list_props_mpq__reverse((list_adt__list_adt_t)ivar_7);
        mpz_clear(tmp11920);

        return result;
}

testlist_closure_2_t new_testlist_closure_2(void){
        static struct testlist_funtype_1_ftbl_s ftbl = {.fptr = (uint32_t (*)(testlist_funtype_1_t, testlist_record_0_t))&f_testlist_closure_2, .mptr = (uint32_t (*)(testlist_funtype_1_t, list_adt__list_adt_t, mpz_ptr_t))&m_testlist_closure_2, .rptr =  (void (*)(testlist_funtype_1_t))&release_testlist_closure_2, .cptr = (testlist_funtype_1_t (*)(testlist_funtype_1_t))&copy_testlist_closure_2};
        testlist_closure_2_t tmp = (testlist_closure_2_t) safe_malloc(sizeof(struct testlist_closure_2_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_2(testlist_funtype_1_t closure){
        testlist_closure_2_t x = (testlist_closure_2_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_2_t copy_testlist_closure_2(testlist_closure_2_t x){
        testlist_closure_2_t y = new_testlist_closure_2();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_1_htbl_t new_htbl = (testlist_funtype_1_htbl_t) safe_malloc(sizeof(struct testlist_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_1_hashentry_t * new_data = (testlist_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_1_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_testlist_funtype_3(testlist_funtype_3_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

testlist_funtype_3_t copy_testlist_funtype_3(testlist_funtype_3_t x){return x->ftbl->cptr(x);}

bool_t equal_testlist_funtype_3(testlist_funtype_3_t x, testlist_funtype_3_t y){
        return false;}

char* json_testlist_funtype_3(testlist_funtype_3_t x){char * result = safe_malloc(28); sprintf(result, "%s", "\"testlist_funtype_3\""); return result;}


mpz_ptr_t f_testlist_closure_4(struct testlist_closure_4_s * closure, testlist_record_0_t bvar){
        list_adt__list_adt_t bvar_1;
        bvar_1 = (list_adt__list_adt_t)bvar->project_1;
        bvar->project_1->count++;
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        release_testlist_record_0(bvar);
        mpz_ptr_t result = h_testlist_closure_4(bvar_1, bvar_2); 
        release_list_adt__list_adt(bvar_1);
        release_mpz(bvar_2);
        return result;}

mpz_ptr_t m_testlist_closure_4(struct testlist_closure_4_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2){
        return h_testlist_closure_4(bvar_1, bvar_2);}

extern mpz_ptr_t h_testlist_closure_4(list_adt__list_adt_t ivar_7, mpz_ptr_t ivar_8){
        mpz_ptr_t result;
        list_adt__list_adt_t ivar_18;
        ivar_18 = (list_adt__list_adt_t)list_props_mpq__reverse((list_adt__list_adt_t)ivar_7);
        mpz_mk_set_q(result, list_props_mpq__nth((list_adt__list_adt_t)ivar_18, (mpz_ptr_t)ivar_8));

        return result;
}

testlist_closure_4_t new_testlist_closure_4(void){
        static struct testlist_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(testlist_funtype_3_t, testlist_record_0_t))&f_testlist_closure_4, .mptr = (mpz_ptr_t (*)(testlist_funtype_3_t, list_adt__list_adt_t, mpz_ptr_t))&m_testlist_closure_4, .rptr =  (void (*)(testlist_funtype_3_t))&release_testlist_closure_4, .cptr = (testlist_funtype_3_t (*)(testlist_funtype_3_t))&copy_testlist_closure_4};
        testlist_closure_4_t tmp = (testlist_closure_4_t) safe_malloc(sizeof(struct testlist_closure_4_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_4(testlist_funtype_3_t closure){
        testlist_closure_4_t x = (testlist_closure_4_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_4_t copy_testlist_closure_4(testlist_closure_4_t x){
        testlist_closure_4_t y = new_testlist_closure_4();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_3_htbl_t new_htbl = (testlist_funtype_3_htbl_t) safe_malloc(sizeof(struct testlist_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_3_hashentry_t * new_data = (testlist_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_testlist_funtype_5(testlist_funtype_5_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

testlist_funtype_5_t copy_testlist_funtype_5(testlist_funtype_5_t x){return x->ftbl->cptr(x);}

bool_t equal_testlist_funtype_5(testlist_funtype_5_t x, testlist_funtype_5_t y){
        return false;}

char* json_testlist_funtype_5(testlist_funtype_5_t x){char * result = safe_malloc(28); sprintf(result, "%s", "\"testlist_funtype_5\""); return result;}


mpq_ptr_t f_testlist_closure_6(struct testlist_closure_6_s * closure, testlist_record_0_t bvar){
        list_adt__list_adt_t bvar_1;
        bvar_1 = (list_adt__list_adt_t)bvar->project_1;
        bvar->project_1->count++;
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        release_testlist_record_0(bvar);
        mpq_ptr_t result = h_testlist_closure_6(bvar_1, bvar_2); 
        release_list_adt__list_adt(bvar_1);
        release_mpz(bvar_2);
        return result;}

mpq_ptr_t m_testlist_closure_6(struct testlist_closure_6_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2){
        return h_testlist_closure_6(bvar_1, bvar_2);}

extern mpq_ptr_t h_testlist_closure_6(list_adt__list_adt_t ivar_7, mpz_ptr_t ivar_8){
        mpq_ptr_t result;
        list_adt__list_adt_t ivar_18;
        ivar_18 = (list_adt__list_adt_t)list_props_mpq__reverse((list_adt__list_adt_t)ivar_7);
        result = (mpq_ptr_t)list_props_mpq__nth((list_adt__list_adt_t)ivar_18, (mpz_ptr_t)ivar_8);

        return result;
}

testlist_closure_6_t new_testlist_closure_6(void){
        static struct testlist_funtype_5_ftbl_s ftbl = {.fptr = (mpq_ptr_t (*)(testlist_funtype_5_t, testlist_record_0_t))&f_testlist_closure_6, .mptr = (mpq_ptr_t (*)(testlist_funtype_5_t, list_adt__list_adt_t, mpz_ptr_t))&m_testlist_closure_6, .rptr =  (void (*)(testlist_funtype_5_t))&release_testlist_closure_6, .cptr = (testlist_funtype_5_t (*)(testlist_funtype_5_t))&copy_testlist_closure_6};
        testlist_closure_6_t tmp = (testlist_closure_6_t) safe_malloc(sizeof(struct testlist_closure_6_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_6(testlist_funtype_5_t closure){
        testlist_closure_6_t x = (testlist_closure_6_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_6_t copy_testlist_closure_6(testlist_closure_6_t x){
        testlist_closure_6_t y = new_testlist_closure_6();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_5_htbl_t new_htbl = (testlist_funtype_5_htbl_t) safe_malloc(sizeof(struct testlist_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_5_hashentry_t * new_data = (testlist_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_testlist_funtype_7(testlist_funtype_7_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

testlist_funtype_7_t copy_testlist_funtype_7(testlist_funtype_7_t x){return x->ftbl->cptr(x);}

uint32_t lookup_testlist_funtype_7(testlist_funtype_7_htbl_t htbl, mpz_ptr_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        testlist_funtype_7_hashentry_t data = htbl->data[hashindex];
        bool_t keyzero;

        int64_t tmp11960 = mpz_cmp_ui(data.key, 0);
        keyzero = (tmp11960 == 0);
        bool_t keymatch;
        int64_t tmp11961 = mpz_cmp(data.key, i);
        keymatch = (tmp11961 == 0);
        while ((!keyzero || data.keyhash != 0) &&
                 (data.keyhash != ihash || !keymatch)){
                hashindex++;
                hashindex = hashindex & mask;
                data = htbl->data[hashindex];

                int64_t tmp11960 = mpz_cmp_ui(data.key, 0);
                keyzero = (tmp11960 == 0);

                int64_t tmp11961 = mpz_cmp(data.key, i);
                keymatch = (tmp11961 == 0);
                }
        return hashindex;
        }

testlist_funtype_7_t dupdate_testlist_funtype_7(testlist_funtype_7_t a, mpz_ptr_t i, uint32_t v){
        testlist_funtype_7_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (testlist_funtype_7_htbl_t)safe_malloc(sizeof(struct testlist_funtype_7_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (testlist_funtype_7_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct testlist_funtype_7_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){mpz_init(htbl->data[j].key);mpz_set_ui(htbl->data[j].key, 0); htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        testlist_funtype_7_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                testlist_funtype_7_hashentry_t * new_data = (testlist_funtype_7_hashentry_t *)safe_malloc(new_size * sizeof(struct testlist_funtype_7_hashentry_s));
                for (uint32_t j = 0; j < new_size; j++){
                        new_data[j].key = 0;
                        new_data[j].keyhash = 0;}
                for (uint32_t j = 0; j < size; j++){//transfer entries
                        uint32_t keyhash = data[j].keyhash;
                        bool_t keyzero;
                        int64_t tmp11962 = mpz_cmp_ui(data[j].key, 0);keyzero = (tmp11962 == 0);
                        if (!keyzero || keyhash != 0){
                                uint32_t new_loc = keyhash ^ new_mask;
                                int64_t tmp11963 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                keyzero = (tmp11963 == 0);
                                while (keyzero && new_data[new_loc].keyhash == 0){
                                        new_loc++;
                                        new_loc = new_loc ^ new_mask;

                                        int64_t tmp11964 = mpz_cmp_ui(new_data[new_loc].key, 0);
                                        keyzero = (tmp11964 == 0);
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
        uint32_t hashindex = lookup_testlist_funtype_7(htbl, i, ihash);
        testlist_funtype_7_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        int64_t tmp11965 = mpz_cmp_ui(hentry.key, 0);hentrykeyzero = (tmp11965 == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {mpz_set(htbl->data[hashindex].key, i); htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint32_t)v; htbl->num_entries++;}
            else {uint32_t tempvalue;tempvalue = (uint32_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint32_t)v;};
        return a;

}

testlist_funtype_7_t update_testlist_funtype_7(testlist_funtype_7_t a, mpz_ptr_t i, uint32_t v){
        if (a->count == 1){
                return dupdate_testlist_funtype_7(a, i, v);
            } else {
                testlist_funtype_7_t x = copy_testlist_funtype_7(a);
                a->count--;
                return dupdate_testlist_funtype_7(x, i, v);
            }}

bool_t equal_testlist_funtype_7(testlist_funtype_7_t x, testlist_funtype_7_t y){
        return false;}

char* json_testlist_funtype_7(testlist_funtype_7_t x){char * result = safe_malloc(28); sprintf(result, "%s", "\"testlist_funtype_7\""); return result;}


testlist_record_8_t new_testlist_record_8(void){
        testlist_record_8_t tmp = (testlist_record_8_t) safe_malloc(sizeof(struct testlist_record_8_s));
        tmp->count = 1;
        return tmp;}

void release_testlist_record_8(testlist_record_8_t x){
        x->count--;
        if (x->count <= 0){
         release_testlist_funtype_7(x->seq);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_testlist_record_8_ptr(pointer_t x, type_actual_t T){
        release_testlist_record_8((testlist_record_8_t)x);
}

testlist_record_8_t copy_testlist_record_8(testlist_record_8_t x){
        testlist_record_8_t y = new_testlist_record_8();
        mpz_set(y->length, x->length);
        y->seq = x->seq;
        if (y->seq != NULL){y->seq->count++;};
        y->count = 1;
        return y;}

bool_t equal_testlist_record_8(testlist_record_8_t x, testlist_record_8_t y){
        bool_t tmp = true;
        tmp = tmp && x->length == y->length;
        tmp = tmp && equal_testlist_funtype_7(x->seq, y->seq);
        return tmp;}

char * json_testlist_record_8(testlist_record_8_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(18);
         sprintf(fld0, "\"length\" : ");
        tmp[0] = safe_strcat(fld0, json_mpz(x->length));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"seq\" : ");
        tmp[1] = safe_strcat(fld1, json_testlist_funtype_7(x->seq));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_testlist_record_8_ptr(pointer_t x, pointer_t y, actual_testlist_record_8_t T){
        return equal_testlist_record_8((testlist_record_8_t)x, (testlist_record_8_t)y);
}

char * json_testlist_record_8_ptr(pointer_t x, actual_testlist_record_8_t T){
        return json_testlist_record_8((testlist_record_8_t)x);
}

testlist_record_8_t update_testlist_record_8_length(testlist_record_8_t x, mpz_ptr_t v){
        testlist_record_8_t y;
        if (x->count == 1){y = x;}
        else {y = copy_testlist_record_8(x); x->count--;};
        mpz_set(y->length, v);
        return y;}

testlist_record_8_t update_testlist_record_8_seq(testlist_record_8_t x, testlist_funtype_7_t v){
        testlist_record_8_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->seq != NULL){release_testlist_funtype_7(x->seq);};}
        else {y = copy_testlist_record_8(x); x->count--; y->seq->count--;};
        y->seq = (testlist_funtype_7_t)v;
        return y;}



void release_testlist_funtype_9(testlist_funtype_9_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

testlist_funtype_9_t copy_testlist_funtype_9(testlist_funtype_9_t x){return x->ftbl->cptr(x);}

bool_t equal_testlist_funtype_9(testlist_funtype_9_t x, testlist_funtype_9_t y){
        return false;}

char* json_testlist_funtype_9(testlist_funtype_9_t x){char * result = safe_malloc(28); sprintf(result, "%s", "\"testlist_funtype_9\""); return result;}


testlist_record_8_t f_testlist_closure_10(struct testlist_closure_10_s * closure, testlist_record_0_t bvar){
        list_adt__list_adt_t bvar_1;
        bvar_1 = (list_adt__list_adt_t)bvar->project_1;
        bvar->project_1->count++;
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        release_testlist_record_0(bvar);
        testlist_record_8_t result = h_testlist_closure_10(bvar_1, bvar_2, closure->fvar_1); 
        release_list_adt__list_adt(bvar_1);
        release_mpz(bvar_2);
        return result;}

testlist_record_8_t m_testlist_closure_10(struct testlist_closure_10_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2){
        return h_testlist_closure_10(bvar_1, bvar_2, closure->fvar_1);}

extern testlist_record_8_t h_testlist_closure_10(list_adt__list_adt_t ivar_10, mpz_ptr_t ivar_11, type_actual_t ivar_5){
        testlist_record_8_t result;
        list_adt__list_adt_t ivar_26;
        ivar_26 = (list_adt__list_adt_t)list_props_mpq__reverse((list_adt__list_adt_t)ivar_5);
        result = (testlist_record_8_t)list_props_mpq__nth((list_adt__list_adt_t)ivar_5, (mpz_ptr_t)ivar_26);

        return result;
}

testlist_closure_10_t new_testlist_closure_10(void){
        static struct testlist_funtype_9_ftbl_s ftbl = {.fptr = (testlist_record_8_t (*)(testlist_funtype_9_t, testlist_record_0_t))&f_testlist_closure_10, .mptr = (testlist_record_8_t (*)(testlist_funtype_9_t, list_adt__list_adt_t, mpz_ptr_t))&m_testlist_closure_10, .rptr =  (void (*)(testlist_funtype_9_t))&release_testlist_closure_10, .cptr = (testlist_funtype_9_t (*)(testlist_funtype_9_t))&copy_testlist_closure_10};
        testlist_closure_10_t tmp = (testlist_closure_10_t) safe_malloc(sizeof(struct testlist_closure_10_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_10(testlist_funtype_9_t closure){
        testlist_closure_10_t x = (testlist_closure_10_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_10_t copy_testlist_closure_10(testlist_closure_10_t x){
        testlist_closure_10_t y = new_testlist_closure_10();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        if (x->htbl != NULL){
            testlist_funtype_9_htbl_t new_htbl = (testlist_funtype_9_htbl_t) safe_malloc(sizeof(struct testlist_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_9_hashentry_t * new_data = (testlist_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_9_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


uint32_t f_testlist_closure_11(struct testlist_closure_11_s * closure, testlist_record_0_t bvar){
        list_adt__list_adt_t bvar_1;
        bvar_1 = (list_adt__list_adt_t)bvar->project_1;
        bvar->project_1->count++;
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        release_testlist_record_0(bvar);
        uint32_t result = h_testlist_closure_11(bvar_1, bvar_2); 
        release_list_adt__list_adt(bvar_1);
        release_mpz(bvar_2);
        return result;}

uint32_t m_testlist_closure_11(struct testlist_closure_11_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2){
        return h_testlist_closure_11(bvar_1, bvar_2);}

extern uint32_t h_testlist_closure_11(list_adt__list_adt_t ivar_59, mpz_ptr_t ivar_60){
        uint32_t result;
        testlist_funtype_1_t tmp11971;
        tmp11971 = (testlist_funtype_1_t)testlist__nthrev32();
        if (tmp11971 != NULL) tmp11971->count++;
        result = (uint32_t)tmp11971->ftbl->mptr(tmp11971, ivar_59, ivar_60);
        tmp11971->ftbl->rptr(tmp11971);

        return result;
}

testlist_closure_11_t new_testlist_closure_11(void){
        static struct testlist_funtype_1_ftbl_s ftbl = {.fptr = (uint32_t (*)(testlist_funtype_1_t, testlist_record_0_t))&f_testlist_closure_11, .mptr = (uint32_t (*)(testlist_funtype_1_t, list_adt__list_adt_t, mpz_ptr_t))&m_testlist_closure_11, .rptr =  (void (*)(testlist_funtype_1_t))&release_testlist_closure_11, .cptr = (testlist_funtype_1_t (*)(testlist_funtype_1_t))&copy_testlist_closure_11};
        testlist_closure_11_t tmp = (testlist_closure_11_t) safe_malloc(sizeof(struct testlist_closure_11_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_11(testlist_funtype_1_t closure){
        testlist_closure_11_t x = (testlist_closure_11_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_11_t copy_testlist_closure_11(testlist_closure_11_t x){
        testlist_closure_11_t y = new_testlist_closure_11();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_1_htbl_t new_htbl = (testlist_funtype_1_htbl_t) safe_malloc(sizeof(struct testlist_funtype_1_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_1_hashentry_t * new_data = (testlist_funtype_1_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_1_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_1_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


mpz_ptr_t f_testlist_closure_12(struct testlist_closure_12_s * closure, testlist_record_0_t bvar){
        list_adt__list_adt_t bvar_1;
        bvar_1 = (list_adt__list_adt_t)bvar->project_1;
        bvar->project_1->count++;
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        release_testlist_record_0(bvar);
        mpz_ptr_t result = h_testlist_closure_12(bvar_1, bvar_2); 
        release_list_adt__list_adt(bvar_1);
        release_mpz(bvar_2);
        return result;}

mpz_ptr_t m_testlist_closure_12(struct testlist_closure_12_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2){
        return h_testlist_closure_12(bvar_1, bvar_2);}

extern mpz_ptr_t h_testlist_closure_12(list_adt__list_adt_t ivar_59, mpz_ptr_t ivar_60){
        mpz_ptr_t result;
        testlist_funtype_3_t tmp11976;
        tmp11976 = (testlist_funtype_3_t)testlist__nthrevnat();
        if (tmp11976 != NULL) tmp11976->count++;
        mpz_mk_set(result, tmp11976->ftbl->mptr(tmp11976, ivar_59, ivar_60));
        tmp11976->ftbl->rptr(tmp11976);

        return result;
}

testlist_closure_12_t new_testlist_closure_12(void){
        static struct testlist_funtype_3_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(testlist_funtype_3_t, testlist_record_0_t))&f_testlist_closure_12, .mptr = (mpz_ptr_t (*)(testlist_funtype_3_t, list_adt__list_adt_t, mpz_ptr_t))&m_testlist_closure_12, .rptr =  (void (*)(testlist_funtype_3_t))&release_testlist_closure_12, .cptr = (testlist_funtype_3_t (*)(testlist_funtype_3_t))&copy_testlist_closure_12};
        testlist_closure_12_t tmp = (testlist_closure_12_t) safe_malloc(sizeof(struct testlist_closure_12_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_12(testlist_funtype_3_t closure){
        testlist_closure_12_t x = (testlist_closure_12_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_12_t copy_testlist_closure_12(testlist_closure_12_t x){
        testlist_closure_12_t y = new_testlist_closure_12();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_3_htbl_t new_htbl = (testlist_funtype_3_htbl_t) safe_malloc(sizeof(struct testlist_funtype_3_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_3_hashentry_t * new_data = (testlist_funtype_3_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_3_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_3_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


mpq_ptr_t f_testlist_closure_13(struct testlist_closure_13_s * closure, testlist_record_0_t bvar){
        list_adt__list_adt_t bvar_1;
        bvar_1 = (list_adt__list_adt_t)bvar->project_1;
        bvar->project_1->count++;
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        release_testlist_record_0(bvar);
        mpq_ptr_t result = h_testlist_closure_13(bvar_1, bvar_2); 
        release_list_adt__list_adt(bvar_1);
        release_mpz(bvar_2);
        return result;}

mpq_ptr_t m_testlist_closure_13(struct testlist_closure_13_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2){
        return h_testlist_closure_13(bvar_1, bvar_2);}

extern mpq_ptr_t h_testlist_closure_13(list_adt__list_adt_t ivar_74, mpz_ptr_t ivar_75){
        mpq_ptr_t result;
        testlist_funtype_5_t tmp11992;
        tmp11992 = (testlist_funtype_5_t)testlist__nthrevreal();
        if (tmp11992 != NULL) tmp11992->count++;
        mpq_mk_set(result, tmp11992->ftbl->mptr(tmp11992, ivar_74, ivar_75));
        tmp11992->ftbl->rptr(tmp11992);

        return result;
}

testlist_closure_13_t new_testlist_closure_13(void){
        static struct testlist_funtype_5_ftbl_s ftbl = {.fptr = (mpq_ptr_t (*)(testlist_funtype_5_t, testlist_record_0_t))&f_testlist_closure_13, .mptr = (mpq_ptr_t (*)(testlist_funtype_5_t, list_adt__list_adt_t, mpz_ptr_t))&m_testlist_closure_13, .rptr =  (void (*)(testlist_funtype_5_t))&release_testlist_closure_13, .cptr = (testlist_funtype_5_t (*)(testlist_funtype_5_t))&copy_testlist_closure_13};
        testlist_closure_13_t tmp = (testlist_closure_13_t) safe_malloc(sizeof(struct testlist_closure_13_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_13(testlist_funtype_5_t closure){
        testlist_closure_13_t x = (testlist_closure_13_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_13_t copy_testlist_closure_13(testlist_closure_13_t x){
        testlist_closure_13_t y = new_testlist_closure_13();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_5_htbl_t new_htbl = (testlist_funtype_5_htbl_t) safe_malloc(sizeof(struct testlist_funtype_5_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_5_hashentry_t * new_data = (testlist_funtype_5_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_5_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_5_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_testlist_funtype_14(testlist_funtype_14_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

testlist_funtype_14_t copy_testlist_funtype_14(testlist_funtype_14_t x){return x->ftbl->cptr(x);}

bool_t equal_testlist_funtype_14(testlist_funtype_14_t x, testlist_funtype_14_t y){
        return false;}

char* json_testlist_funtype_14(testlist_funtype_14_t x){char * result = safe_malloc(29); sprintf(result, "%s", "\"testlist_funtype_14\""); return result;}


testlist_record_8_t f_testlist_closure_15(struct testlist_closure_15_s * closure, list_adt__list_adt_t bvar){
        testlist_record_8_t result = h_testlist_closure_15(bvar); 
        return result;}

testlist_record_8_t m_testlist_closure_15(struct testlist_closure_15_s * closure, list_adt__list_adt_t bvar){
        return h_testlist_closure_15(bvar);}

extern testlist_record_8_t h_testlist_closure_15(list_adt__list_adt_t ivar_23){
        testlist_record_8_t result;
        testlist_funtype_14_t tmp12023;
        tmp12023 = (testlist_funtype_14_t)list2finseq_uint32__list2finseq();
        if (tmp12023 != NULL) tmp12023->count++;
        result = (testlist_record_8_t)tmp12023->ftbl->fptr(tmp12023, ivar_23);
        tmp12023->ftbl->rptr(tmp12023);

        return result;
}

testlist_closure_15_t new_testlist_closure_15(void){
        static struct testlist_funtype_14_ftbl_s ftbl = {.fptr = (testlist_record_8_t (*)(testlist_funtype_14_t, list_adt__list_adt_t))&f_testlist_closure_15, .mptr = (testlist_record_8_t (*)(testlist_funtype_14_t, list_adt__list_adt_t))&m_testlist_closure_15, .rptr =  (void (*)(testlist_funtype_14_t))&release_testlist_closure_15, .cptr = (testlist_funtype_14_t (*)(testlist_funtype_14_t))&copy_testlist_closure_15};
        testlist_closure_15_t tmp = (testlist_closure_15_t) safe_malloc(sizeof(struct testlist_closure_15_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_15(testlist_funtype_14_t closure){
        testlist_closure_15_t x = (testlist_closure_15_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_15_t copy_testlist_closure_15(testlist_closure_15_t x){
        testlist_closure_15_t y = new_testlist_closure_15();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_14_htbl_t new_htbl = (testlist_funtype_14_htbl_t) safe_malloc(sizeof(struct testlist_funtype_14_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_14_hashentry_t * new_data = (testlist_funtype_14_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_14_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_14_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


testlist_record_8_t f_testlist_closure_16(struct testlist_closure_16_s * closure, list_adt__list_adt_t bvar){
        testlist_record_8_t result = h_testlist_closure_16(bvar); 
        return result;}

testlist_record_8_t m_testlist_closure_16(struct testlist_closure_16_s * closure, list_adt__list_adt_t bvar){
        return h_testlist_closure_16(bvar);}

extern testlist_record_8_t h_testlist_closure_16(list_adt__list_adt_t ivar_47){
        testlist_record_8_t result;
        testlist_funtype_14_t tmp12026;
        tmp12026 = (testlist_funtype_14_t)list2finseq_uint32__list2finseq();
        if (tmp12026 != NULL) tmp12026->count++;
        result = (testlist_record_8_t)tmp12026->ftbl->fptr(tmp12026, ivar_47);
        tmp12026->ftbl->rptr(tmp12026);

        return result;
}

testlist_closure_16_t new_testlist_closure_16(void){
        static struct testlist_funtype_14_ftbl_s ftbl = {.fptr = (testlist_record_8_t (*)(testlist_funtype_14_t, list_adt__list_adt_t))&f_testlist_closure_16, .mptr = (testlist_record_8_t (*)(testlist_funtype_14_t, list_adt__list_adt_t))&m_testlist_closure_16, .rptr =  (void (*)(testlist_funtype_14_t))&release_testlist_closure_16, .cptr = (testlist_funtype_14_t (*)(testlist_funtype_14_t))&copy_testlist_closure_16};
        testlist_closure_16_t tmp = (testlist_closure_16_t) safe_malloc(sizeof(struct testlist_closure_16_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_16(testlist_funtype_14_t closure){
        testlist_closure_16_t x = (testlist_closure_16_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_16_t copy_testlist_closure_16(testlist_closure_16_t x){
        testlist_closure_16_t y = new_testlist_closure_16();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_14_htbl_t new_htbl = (testlist_funtype_14_htbl_t) safe_malloc(sizeof(struct testlist_funtype_14_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_14_hashentry_t * new_data = (testlist_funtype_14_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_14_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_14_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


testlist_record_8_t f_testlist_closure_17(struct testlist_closure_17_s * closure, list_adt__list_adt_t bvar){
        testlist_record_8_t result = h_testlist_closure_17(bvar); 
        return result;}

testlist_record_8_t m_testlist_closure_17(struct testlist_closure_17_s * closure, list_adt__list_adt_t bvar){
        return h_testlist_closure_17(bvar);}

extern testlist_record_8_t h_testlist_closure_17(list_adt__list_adt_t ivar_78){
        testlist_record_8_t result;
        testlist_funtype_14_t tmp12029;
        tmp12029 = (testlist_funtype_14_t)list2finseq_uint32__list2finseq();
        if (tmp12029 != NULL) tmp12029->count++;
        result = (testlist_record_8_t)tmp12029->ftbl->fptr(tmp12029, ivar_78);
        tmp12029->ftbl->rptr(tmp12029);

        return result;
}

testlist_closure_17_t new_testlist_closure_17(void){
        static struct testlist_funtype_14_ftbl_s ftbl = {.fptr = (testlist_record_8_t (*)(testlist_funtype_14_t, list_adt__list_adt_t))&f_testlist_closure_17, .mptr = (testlist_record_8_t (*)(testlist_funtype_14_t, list_adt__list_adt_t))&m_testlist_closure_17, .rptr =  (void (*)(testlist_funtype_14_t))&release_testlist_closure_17, .cptr = (testlist_funtype_14_t (*)(testlist_funtype_14_t))&copy_testlist_closure_17};
        testlist_closure_17_t tmp = (testlist_closure_17_t) safe_malloc(sizeof(struct testlist_closure_17_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_17(testlist_funtype_14_t closure){
        testlist_closure_17_t x = (testlist_closure_17_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_17_t copy_testlist_closure_17(testlist_closure_17_t x){
        testlist_closure_17_t y = new_testlist_closure_17();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_14_htbl_t new_htbl = (testlist_funtype_14_htbl_t) safe_malloc(sizeof(struct testlist_funtype_14_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_14_hashentry_t * new_data = (testlist_funtype_14_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_14_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_14_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


testlist_record_8_t f_testlist_closure_18(struct testlist_closure_18_s * closure, list_adt__list_adt_t bvar){
        testlist_record_8_t result = h_testlist_closure_18(bvar); 
        return result;}

testlist_record_8_t m_testlist_closure_18(struct testlist_closure_18_s * closure, list_adt__list_adt_t bvar){
        return h_testlist_closure_18(bvar);}

extern testlist_record_8_t h_testlist_closure_18(list_adt__list_adt_t ivar_116){
        testlist_record_8_t result;
        testlist_funtype_14_t tmp12032;
        tmp12032 = (testlist_funtype_14_t)list2finseq_uint32__list2finseq();
        if (tmp12032 != NULL) tmp12032->count++;
        result = (testlist_record_8_t)tmp12032->ftbl->fptr(tmp12032, ivar_116);
        tmp12032->ftbl->rptr(tmp12032);

        return result;
}

testlist_closure_18_t new_testlist_closure_18(void){
        static struct testlist_funtype_14_ftbl_s ftbl = {.fptr = (testlist_record_8_t (*)(testlist_funtype_14_t, list_adt__list_adt_t))&f_testlist_closure_18, .mptr = (testlist_record_8_t (*)(testlist_funtype_14_t, list_adt__list_adt_t))&m_testlist_closure_18, .rptr =  (void (*)(testlist_funtype_14_t))&release_testlist_closure_18, .cptr = (testlist_funtype_14_t (*)(testlist_funtype_14_t))&copy_testlist_closure_18};
        testlist_closure_18_t tmp = (testlist_closure_18_t) safe_malloc(sizeof(struct testlist_closure_18_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_18(testlist_funtype_14_t closure){
        testlist_closure_18_t x = (testlist_closure_18_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_18_t copy_testlist_closure_18(testlist_closure_18_t x){
        testlist_closure_18_t y = new_testlist_closure_18();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_14_htbl_t new_htbl = (testlist_funtype_14_htbl_t) safe_malloc(sizeof(struct testlist_funtype_14_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_14_hashentry_t * new_data = (testlist_funtype_14_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_14_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_14_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


testlist_record_8_t f_testlist_closure_19(struct testlist_closure_19_s * closure, list_adt__list_adt_t bvar){
        testlist_record_8_t result = h_testlist_closure_19(bvar); 
        return result;}

testlist_record_8_t m_testlist_closure_19(struct testlist_closure_19_s * closure, list_adt__list_adt_t bvar){
        return h_testlist_closure_19(bvar);}

extern testlist_record_8_t h_testlist_closure_19(list_adt__list_adt_t ivar_161){
        testlist_record_8_t result;
        testlist_funtype_14_t tmp12035;
        tmp12035 = (testlist_funtype_14_t)list2finseq_uint32__list2finseq();
        if (tmp12035 != NULL) tmp12035->count++;
        result = (testlist_record_8_t)tmp12035->ftbl->fptr(tmp12035, ivar_161);
        tmp12035->ftbl->rptr(tmp12035);

        return result;
}

testlist_closure_19_t new_testlist_closure_19(void){
        static struct testlist_funtype_14_ftbl_s ftbl = {.fptr = (testlist_record_8_t (*)(testlist_funtype_14_t, list_adt__list_adt_t))&f_testlist_closure_19, .mptr = (testlist_record_8_t (*)(testlist_funtype_14_t, list_adt__list_adt_t))&m_testlist_closure_19, .rptr =  (void (*)(testlist_funtype_14_t))&release_testlist_closure_19, .cptr = (testlist_funtype_14_t (*)(testlist_funtype_14_t))&copy_testlist_closure_19};
        testlist_closure_19_t tmp = (testlist_closure_19_t) safe_malloc(sizeof(struct testlist_closure_19_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_19(testlist_funtype_14_t closure){
        testlist_closure_19_t x = (testlist_closure_19_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_19_t copy_testlist_closure_19(testlist_closure_19_t x){
        testlist_closure_19_t y = new_testlist_closure_19();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_14_htbl_t new_htbl = (testlist_funtype_14_htbl_t) safe_malloc(sizeof(struct testlist_funtype_14_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_14_hashentry_t * new_data = (testlist_funtype_14_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_14_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_14_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


testlist_record_8_t f_testlist_closure_20(struct testlist_closure_20_s * closure, testlist_record_0_t bvar){
        list_adt__list_adt_t bvar_1;
        bvar_1 = (list_adt__list_adt_t)bvar->project_1;
        bvar->project_1->count++;
        mpz_t bvar_2;
        mpz_init(bvar_2);
        mpz_set(bvar_2, bvar->project_2);
        release_testlist_record_0(bvar);
        testlist_record_8_t result = h_testlist_closure_20(bvar_1, bvar_2); 
        release_list_adt__list_adt(bvar_1);
        release_mpz(bvar_2);
        return result;}

testlist_record_8_t m_testlist_closure_20(struct testlist_closure_20_s * closure, list_adt__list_adt_t bvar_1, mpz_ptr_t bvar_2){
        return h_testlist_closure_20(bvar_1, bvar_2);}

extern testlist_record_8_t h_testlist_closure_20(list_adt__list_adt_t ivar_205, mpz_ptr_t ivar_206){
        testlist_record_8_t result;
        testlist_funtype_9_t tmp12038;
        tmp12038 = (testlist_funtype_9_t)testlist__nthrevfin();
        if (tmp12038 != NULL) tmp12038->count++;
        result = (testlist_record_8_t)tmp12038->ftbl->mptr(tmp12038, ivar_205, ivar_206);
        tmp12038->ftbl->rptr(tmp12038);

        return result;
}

testlist_closure_20_t new_testlist_closure_20(void){
        static struct testlist_funtype_9_ftbl_s ftbl = {.fptr = (testlist_record_8_t (*)(testlist_funtype_9_t, testlist_record_0_t))&f_testlist_closure_20, .mptr = (testlist_record_8_t (*)(testlist_funtype_9_t, list_adt__list_adt_t, mpz_ptr_t))&m_testlist_closure_20, .rptr =  (void (*)(testlist_funtype_9_t))&release_testlist_closure_20, .cptr = (testlist_funtype_9_t (*)(testlist_funtype_9_t))&copy_testlist_closure_20};
        testlist_closure_20_t tmp = (testlist_closure_20_t) safe_malloc(sizeof(struct testlist_closure_20_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_testlist_closure_20(testlist_funtype_9_t closure){
        testlist_closure_20_t x = (testlist_closure_20_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

testlist_closure_20_t copy_testlist_closure_20(testlist_closure_20_t x){
        testlist_closure_20_t y = new_testlist_closure_20();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            testlist_funtype_9_htbl_t new_htbl = (testlist_funtype_9_htbl_t) safe_malloc(sizeof(struct testlist_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            testlist_funtype_9_hashentry_t * new_data = (testlist_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct testlist_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct testlist_funtype_9_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern testlist_funtype_1_t testlist__nthrev32(void){
        testlist_funtype_1_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    testlist_funtype_1_t ivar_1;
        ivar_1 = (testlist_funtype_1_t)testlist__nthrev32();
        if (ivar_1 != NULL) ivar_1->count++;
        testlist_funtype_1_t ivar_2;
        testlist_closure_2_t cl11921;
        cl11921 = new_testlist_closure_2();
        ivar_2 = (testlist_funtype_1_t)cl11921;
        result = (testlist_funtype_1_t) equal_testlist_funtype_1(ivar_1, ivar_2);

        defined = true;};
        
        return result;
}

extern testlist_funtype_3_t testlist__nthrevnat(void){
        testlist_funtype_3_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    testlist_funtype_3_t ivar_1;
        ivar_1 = (testlist_funtype_3_t)testlist__nthrevnat();
        if (ivar_1 != NULL) ivar_1->count++;
        testlist_funtype_3_t ivar_2;
        testlist_closure_4_t cl11931;
        cl11931 = new_testlist_closure_4();
        ivar_2 = (testlist_funtype_3_t)cl11931;
        result = (testlist_funtype_3_t) equal_testlist_funtype_3(ivar_1, ivar_2);

        defined = true;};
        
        return result;
}

extern testlist_funtype_5_t testlist__nthrevreal(void){
        testlist_funtype_5_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    testlist_funtype_5_t ivar_1;
        ivar_1 = (testlist_funtype_5_t)testlist__nthrevreal();
        if (ivar_1 != NULL) ivar_1->count++;
        testlist_funtype_5_t ivar_2;
        testlist_closure_6_t cl11941;
        cl11941 = new_testlist_closure_6();
        ivar_2 = (testlist_funtype_5_t)cl11941;
        result = (testlist_funtype_5_t) equal_testlist_funtype_5(ivar_1, ivar_2);

        defined = true;};
        
        return result;
}

extern testlist_funtype_9_t testlist__nthrevfin(void){
        testlist_funtype_9_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    type_actual_t ivar_5;
        ivar_5 = (type_actual_t)actual_testlist_record_8();
        testlist_funtype_9_t ivar_1;
        ivar_1 = (testlist_funtype_9_t)testlist__nthrevfin();
        if (ivar_1 != NULL) ivar_1->count++;
        testlist_funtype_9_t ivar_2;
        testlist_closure_10_t cl11968;
        cl11968 = new_testlist_closure_10();
        cl11968->fvar_1 = (type_actual_t)ivar_5;
        ivar_2 = (testlist_funtype_9_t)cl11968;
        result = (testlist_funtype_9_t) equal_testlist_funtype_9(ivar_1, ivar_2);
        safe_free(ivar_5);

        defined = true;};
        
        return result;
}

extern uint32_t testlist__testnthrev32(void){
        uint32_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint32_t ivar_1;
        ivar_1 = (uint32_t)testlist__testnthrev32();
        uint32_t ivar_2;
        list_adt__list_adt_t ivar_48;
        uint8_t ivar_46;
        ivar_46 = (uint8_t)0;
        list_adt__T_t ivar_43;
        //copying to list_adt__T from uint8;
        ivar_43 = (list_adt__T_t)ivar_46;
        list_adt__list_adt_t ivar_44;
        uint8_t ivar_41;
        ivar_41 = (uint8_t)1;
        list_adt__T_t ivar_38;
        //copying to list_adt__T from uint8;
        ivar_38 = (list_adt__T_t)ivar_41;
        list_adt__list_adt_t ivar_39;
        uint8_t ivar_36;
        ivar_36 = (uint8_t)2;
        list_adt__T_t ivar_33;
        //copying to list_adt__T from uint8;
        ivar_33 = (list_adt__T_t)ivar_36;
        list_adt__list_adt_t ivar_34;
        uint8_t ivar_31;
        ivar_31 = (uint8_t)3;
        list_adt__T_t ivar_28;
        //copying to list_adt__T from uint8;
        ivar_28 = (list_adt__T_t)ivar_31;
        list_adt__list_adt_t ivar_29;
        uint8_t ivar_26;
        ivar_26 = (uint8_t)4;
        list_adt__T_t ivar_23;
        //copying to list_adt__T from uint8;
        ivar_23 = (list_adt__T_t)ivar_26;
        list_adt__list_adt_t ivar_24;
        uint8_t ivar_21;
        ivar_21 = (uint8_t)5;
        list_adt__T_t ivar_18;
        //copying to list_adt__T from uint8;
        ivar_18 = (list_adt__T_t)ivar_21;
        list_adt__list_adt_t ivar_19;
        ivar_19 = (list_adt__list_adt_t)list_adt__null();
        if (ivar_19 != NULL) ivar_19->count++;
        ivar_24 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_18, (list_adt__list_adt_t)ivar_19);
        ivar_29 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_23, (list_adt__list_adt_t)ivar_24);
        ivar_34 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_28, (list_adt__list_adt_t)ivar_29);
        ivar_39 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_33, (list_adt__list_adt_t)ivar_34);
        ivar_44 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_38, (list_adt__list_adt_t)ivar_39);
        ivar_48 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_43, (list_adt__list_adt_t)ivar_44);
        uint8_t ivar_61;
        ivar_61 = (uint8_t)3;
        mpz_ptr_t ivar_49;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_49, ivar_61);
        testlist_funtype_1_t ivar_54;
        testlist_closure_11_t cl11973;
        cl11973 = new_testlist_closure_11();
        ivar_54 = (testlist_funtype_1_t)cl11973;
        ivar_2 = (uint32_t)ivar_54->ftbl->mptr(ivar_54, ivar_48, ivar_49);
        ivar_54->ftbl->rptr(ivar_54);
        result = (ivar_1 == ivar_2);

        defined = true;};
        
        return result;
}

extern mpz_ptr_t testlist__testnthrevnat(void){
        mpz_ptr_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    mpz_ptr_t ivar_1;
        mpz_mk_set(ivar_1, testlist__testnthrevnat());
        mpz_ptr_t ivar_2;
        list_adt__list_adt_t ivar_48;
        uint8_t ivar_46;
        ivar_46 = (uint8_t)0;
        list_adt__T_t ivar_43;
        //copying to list_adt__T from uint8;
        ivar_43 = (list_adt__T_t)ivar_46;
        list_adt__list_adt_t ivar_44;
        uint8_t ivar_41;
        ivar_41 = (uint8_t)1;
        list_adt__T_t ivar_38;
        //copying to list_adt__T from uint8;
        ivar_38 = (list_adt__T_t)ivar_41;
        list_adt__list_adt_t ivar_39;
        uint8_t ivar_36;
        ivar_36 = (uint8_t)2;
        list_adt__T_t ivar_33;
        //copying to list_adt__T from uint8;
        ivar_33 = (list_adt__T_t)ivar_36;
        list_adt__list_adt_t ivar_34;
        uint8_t ivar_31;
        ivar_31 = (uint8_t)3;
        list_adt__T_t ivar_28;
        //copying to list_adt__T from uint8;
        ivar_28 = (list_adt__T_t)ivar_31;
        list_adt__list_adt_t ivar_29;
        uint64_t ivar_26;
        ivar_26 = (uint64_t)4793013040015022;
        list_adt__T_t ivar_23;
        //copying to list_adt__T from uint64;
        ivar_23 = (list_adt__T_t)ivar_26;
        list_adt__list_adt_t ivar_24;
        uint8_t ivar_21;
        ivar_21 = (uint8_t)5;
        list_adt__T_t ivar_18;
        //copying to list_adt__T from uint8;
        ivar_18 = (list_adt__T_t)ivar_21;
        list_adt__list_adt_t ivar_19;
        ivar_19 = (list_adt__list_adt_t)list_adt__null();
        if (ivar_19 != NULL) ivar_19->count++;
        ivar_24 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_18, (list_adt__list_adt_t)ivar_19);
        ivar_29 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_23, (list_adt__list_adt_t)ivar_24);
        ivar_34 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_28, (list_adt__list_adt_t)ivar_29);
        ivar_39 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_33, (list_adt__list_adt_t)ivar_34);
        ivar_44 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_38, (list_adt__list_adt_t)ivar_39);
        ivar_48 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_43, (list_adt__list_adt_t)ivar_44);
        uint8_t ivar_61;
        ivar_61 = (uint8_t)4;
        mpz_ptr_t ivar_49;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_49, ivar_61);
        testlist_funtype_3_t ivar_54;
        testlist_closure_12_t cl11978;
        cl11978 = new_testlist_closure_12();
        ivar_54 = (testlist_funtype_3_t)cl11978;
        mpz_mk_set(ivar_2, ivar_54->ftbl->mptr(ivar_54, ivar_48, ivar_49));
        ivar_54->ftbl->rptr(ivar_54);
        int64_t tmp11979 = mpz_cmp(ivar_1, ivar_2);
        result = (tmp11979 == 0);

        defined = true;};
        
        return result;
}

extern mpq_ptr_t testlist__testnthrevreal(void){
        mpq_ptr_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    mpq_ptr_t ivar_1;
        mpq_mk_set(ivar_1, testlist__testnthrevreal());
        mpq_ptr_t ivar_2;
        list_adt__list_adt_t ivar_63;
        uint8_t ivar_61;
        ivar_61 = (uint8_t)0;
        list_adt__T_t ivar_58;
        //copying to list_adt__T from uint8;
        ivar_58 = (list_adt__T_t)ivar_61;
        list_adt__list_adt_t ivar_59;
        mpq_ptr_t ivar_56;
        uint8_t ivar_9;
        ivar_9 = (uint8_t)1;
        uint8_t ivar_10;
        ivar_10 = (uint8_t)2;
        mpq_t tmp11982;
        mpq_init(tmp11982);
        mpq_t tmp11983;
        mpq_init(tmp11983);
        mpq_set_ui(tmp11982, (uint64_t)ivar_9, 1);
        mpq_set_ui(tmp11983, ivar_10, 1);
        mpq_mk_div(ivar_56, tmp11982, tmp11983);
        mpq_clear(tmp11982);
        mpq_clear(tmp11983);
        list_adt__T_t ivar_53;
        //copying to list_adt__T from mpq;
        ivar_53 = (list_adt__T_t)ivar_56;
        mpq_clear(ivar_56);
        list_adt__list_adt_t ivar_54;
        mpq_ptr_t ivar_51;
        uint8_t ivar_14;
        ivar_14 = (uint8_t)1;
        uint8_t ivar_15;
        ivar_15 = (uint8_t)3;
        mpq_t tmp11984;
        mpq_init(tmp11984);
        mpq_t tmp11985;
        mpq_init(tmp11985);
        mpq_set_ui(tmp11984, (uint64_t)ivar_14, 1);
        mpq_set_ui(tmp11985, ivar_15, 1);
        mpq_mk_div(ivar_51, tmp11984, tmp11985);
        mpq_clear(tmp11984);
        mpq_clear(tmp11985);
        list_adt__T_t ivar_48;
        //copying to list_adt__T from mpq;
        ivar_48 = (list_adt__T_t)ivar_51;
        mpq_clear(ivar_51);
        list_adt__list_adt_t ivar_49;
        mpq_ptr_t ivar_46;
        uint8_t ivar_19;
        ivar_19 = (uint8_t)1;
        uint8_t ivar_20;
        ivar_20 = (uint8_t)4;
        mpq_t tmp11986;
        mpq_init(tmp11986);
        mpq_t tmp11987;
        mpq_init(tmp11987);
        mpq_set_ui(tmp11986, (uint64_t)ivar_19, 1);
        mpq_set_ui(tmp11987, ivar_20, 1);
        mpq_mk_div(ivar_46, tmp11986, tmp11987);
        mpq_clear(tmp11986);
        mpq_clear(tmp11987);
        list_adt__T_t ivar_43;
        //copying to list_adt__T from mpq;
        ivar_43 = (list_adt__T_t)ivar_46;
        mpq_clear(ivar_46);
        list_adt__list_adt_t ivar_44;
        mpq_ptr_t ivar_41;
        uint8_t ivar_24;
        ivar_24 = (uint8_t)1;
        uint8_t ivar_25;
        ivar_25 = (uint8_t)17;
        mpq_t tmp11988;
        mpq_init(tmp11988);
        mpq_t tmp11989;
        mpq_init(tmp11989);
        mpq_set_ui(tmp11988, (uint64_t)ivar_24, 1);
        mpq_set_ui(tmp11989, ivar_25, 1);
        mpq_mk_div(ivar_41, tmp11988, tmp11989);
        mpq_clear(tmp11988);
        mpq_clear(tmp11989);
        list_adt__T_t ivar_38;
        //copying to list_adt__T from mpq;
        ivar_38 = (list_adt__T_t)ivar_41;
        mpq_clear(ivar_41);
        list_adt__list_adt_t ivar_39;
        mpq_ptr_t ivar_36;
        uint8_t ivar_29;
        ivar_29 = (uint8_t)1;
        uint8_t ivar_30;
        ivar_30 = (uint8_t)31;
        mpq_t tmp11990;
        mpq_init(tmp11990);
        mpq_t tmp11991;
        mpq_init(tmp11991);
        mpq_set_ui(tmp11990, (uint64_t)ivar_29, 1);
        mpq_set_ui(tmp11991, ivar_30, 1);
        mpq_mk_div(ivar_36, tmp11990, tmp11991);
        mpq_clear(tmp11990);
        mpq_clear(tmp11991);
        list_adt__T_t ivar_33;
        //copying to list_adt__T from mpq;
        ivar_33 = (list_adt__T_t)ivar_36;
        mpq_clear(ivar_36);
        list_adt__list_adt_t ivar_34;
        ivar_34 = (list_adt__list_adt_t)list_adt__null();
        if (ivar_34 != NULL) ivar_34->count++;
        ivar_39 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_33, (list_adt__list_adt_t)ivar_34);
        ivar_44 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_38, (list_adt__list_adt_t)ivar_39);
        ivar_49 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_43, (list_adt__list_adt_t)ivar_44);
        ivar_54 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_48, (list_adt__list_adt_t)ivar_49);
        ivar_59 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_53, (list_adt__list_adt_t)ivar_54);
        ivar_63 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_58, (list_adt__list_adt_t)ivar_59);
        uint8_t ivar_76;
        ivar_76 = (uint8_t)5;
        mpz_ptr_t ivar_64;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_64, ivar_76);
        testlist_funtype_5_t ivar_69;
        testlist_closure_13_t cl11994;
        cl11994 = new_testlist_closure_13();
        ivar_69 = (testlist_funtype_5_t)cl11994;
        mpq_mk_set(ivar_2, ivar_69->ftbl->mptr(ivar_69, ivar_63, ivar_64));
        ivar_69->ftbl->rptr(ivar_69);
        int64_t tmp11995 = mpq_cmp(ivar_1, ivar_2);
        result = (tmp11995 == 0);

        defined = true;};
        
        return result;
}

extern testlist_record_8_t testlist__testnthrevfin(void){
        testlist_record_8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    type_actual_t ivar_162;
        ivar_162 = (type_actual_t)actual_testlist_record_8();
        testlist_record_8_t ivar_1;
        ivar_1 = (testlist_record_8_t)testlist__testnthrevfin();
        if (ivar_1 != NULL) ivar_1->count++;
        testlist_record_8_t ivar_2;
        list_adt__list_adt_t ivar_191;
        list_adt__T_t ivar_188;
        list_adt__list_adt_t ivar_19;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)0;
        list_adt__T_t ivar_14;
        //copying to list_adt__T from uint8;
        ivar_14 = (list_adt__T_t)ivar_17;
        list_adt__list_adt_t ivar_15;
        ivar_15 = (list_adt__list_adt_t)list_adt__null();
        if (ivar_15 != NULL) ivar_15->count++;
        ivar_19 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_14, (list_adt__list_adt_t)ivar_15);
        testlist_funtype_14_t ivar_20;
        testlist_closure_15_t cl12025;
        cl12025 = new_testlist_closure_15();
        ivar_20 = (testlist_funtype_14_t)cl12025;
        ivar_188 = (list_adt__T_t)ivar_20->ftbl->fptr(ivar_20, ivar_19);
        ivar_20->ftbl->rptr(ivar_20);
        list_adt__list_adt_t ivar_189;
        list_adt__T_t ivar_183;
        list_adt__list_adt_t ivar_43;
        uint8_t ivar_41;
        ivar_41 = (uint8_t)0;
        list_adt__T_t ivar_38;
        //copying to list_adt__T from uint8;
        ivar_38 = (list_adt__T_t)ivar_41;
        list_adt__list_adt_t ivar_39;
        uint8_t ivar_36;
        ivar_36 = (uint8_t)1;
        list_adt__T_t ivar_33;
        //copying to list_adt__T from uint8;
        ivar_33 = (list_adt__T_t)ivar_36;
        list_adt__list_adt_t ivar_34;
        ivar_34 = (list_adt__list_adt_t)list_adt__null();
        if (ivar_34 != NULL) ivar_34->count++;
        ivar_39 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_33, (list_adt__list_adt_t)ivar_34);
        ivar_43 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_38, (list_adt__list_adt_t)ivar_39);
        testlist_funtype_14_t ivar_44;
        testlist_closure_16_t cl12028;
        cl12028 = new_testlist_closure_16();
        ivar_44 = (testlist_funtype_14_t)cl12028;
        ivar_183 = (list_adt__T_t)ivar_44->ftbl->fptr(ivar_44, ivar_43);
        ivar_44->ftbl->rptr(ivar_44);
        list_adt__list_adt_t ivar_184;
        list_adt__T_t ivar_178;
        list_adt__list_adt_t ivar_74;
        uint8_t ivar_72;
        ivar_72 = (uint8_t)0;
        list_adt__T_t ivar_69;
        //copying to list_adt__T from uint8;
        ivar_69 = (list_adt__T_t)ivar_72;
        list_adt__list_adt_t ivar_70;
        uint8_t ivar_67;
        ivar_67 = (uint8_t)1;
        list_adt__T_t ivar_64;
        //copying to list_adt__T from uint8;
        ivar_64 = (list_adt__T_t)ivar_67;
        list_adt__list_adt_t ivar_65;
        uint8_t ivar_62;
        ivar_62 = (uint8_t)2;
        list_adt__T_t ivar_59;
        //copying to list_adt__T from uint8;
        ivar_59 = (list_adt__T_t)ivar_62;
        list_adt__list_adt_t ivar_60;
        ivar_60 = (list_adt__list_adt_t)list_adt__null();
        if (ivar_60 != NULL) ivar_60->count++;
        ivar_65 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_59, (list_adt__list_adt_t)ivar_60);
        ivar_70 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_64, (list_adt__list_adt_t)ivar_65);
        ivar_74 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_69, (list_adt__list_adt_t)ivar_70);
        testlist_funtype_14_t ivar_75;
        testlist_closure_17_t cl12031;
        cl12031 = new_testlist_closure_17();
        ivar_75 = (testlist_funtype_14_t)cl12031;
        ivar_178 = (list_adt__T_t)ivar_75->ftbl->fptr(ivar_75, ivar_74);
        ivar_75->ftbl->rptr(ivar_75);
        list_adt__list_adt_t ivar_179;
        list_adt__T_t ivar_173;
        list_adt__list_adt_t ivar_112;
        uint8_t ivar_110;
        ivar_110 = (uint8_t)0;
        list_adt__T_t ivar_107;
        //copying to list_adt__T from uint8;
        ivar_107 = (list_adt__T_t)ivar_110;
        list_adt__list_adt_t ivar_108;
        uint8_t ivar_105;
        ivar_105 = (uint8_t)1;
        list_adt__T_t ivar_102;
        //copying to list_adt__T from uint8;
        ivar_102 = (list_adt__T_t)ivar_105;
        list_adt__list_adt_t ivar_103;
        uint8_t ivar_100;
        ivar_100 = (uint8_t)2;
        list_adt__T_t ivar_97;
        //copying to list_adt__T from uint8;
        ivar_97 = (list_adt__T_t)ivar_100;
        list_adt__list_adt_t ivar_98;
        uint8_t ivar_95;
        ivar_95 = (uint8_t)3;
        list_adt__T_t ivar_92;
        //copying to list_adt__T from uint8;
        ivar_92 = (list_adt__T_t)ivar_95;
        list_adt__list_adt_t ivar_93;
        ivar_93 = (list_adt__list_adt_t)list_adt__null();
        if (ivar_93 != NULL) ivar_93->count++;
        ivar_98 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_92, (list_adt__list_adt_t)ivar_93);
        ivar_103 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_97, (list_adt__list_adt_t)ivar_98);
        ivar_108 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_102, (list_adt__list_adt_t)ivar_103);
        ivar_112 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_107, (list_adt__list_adt_t)ivar_108);
        testlist_funtype_14_t ivar_113;
        testlist_closure_18_t cl12034;
        cl12034 = new_testlist_closure_18();
        ivar_113 = (testlist_funtype_14_t)cl12034;
        ivar_173 = (list_adt__T_t)ivar_113->ftbl->fptr(ivar_113, ivar_112);
        ivar_113->ftbl->rptr(ivar_113);
        list_adt__list_adt_t ivar_174;
        list_adt__T_t ivar_168;
        list_adt__list_adt_t ivar_157;
        uint8_t ivar_155;
        ivar_155 = (uint8_t)0;
        list_adt__T_t ivar_152;
        //copying to list_adt__T from uint8;
        ivar_152 = (list_adt__T_t)ivar_155;
        list_adt__list_adt_t ivar_153;
        uint8_t ivar_150;
        ivar_150 = (uint8_t)1;
        list_adt__T_t ivar_147;
        //copying to list_adt__T from uint8;
        ivar_147 = (list_adt__T_t)ivar_150;
        list_adt__list_adt_t ivar_148;
        uint8_t ivar_145;
        ivar_145 = (uint8_t)2;
        list_adt__T_t ivar_142;
        //copying to list_adt__T from uint8;
        ivar_142 = (list_adt__T_t)ivar_145;
        list_adt__list_adt_t ivar_143;
        uint8_t ivar_140;
        ivar_140 = (uint8_t)3;
        list_adt__T_t ivar_137;
        //copying to list_adt__T from uint8;
        ivar_137 = (list_adt__T_t)ivar_140;
        list_adt__list_adt_t ivar_138;
        uint8_t ivar_135;
        ivar_135 = (uint8_t)4;
        list_adt__T_t ivar_132;
        //copying to list_adt__T from uint8;
        ivar_132 = (list_adt__T_t)ivar_135;
        list_adt__list_adt_t ivar_133;
        ivar_133 = (list_adt__list_adt_t)list_adt__null();
        if (ivar_133 != NULL) ivar_133->count++;
        ivar_138 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_132, (list_adt__list_adt_t)ivar_133);
        ivar_143 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_137, (list_adt__list_adt_t)ivar_138);
        ivar_148 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_142, (list_adt__list_adt_t)ivar_143);
        ivar_153 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_147, (list_adt__list_adt_t)ivar_148);
        ivar_157 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_152, (list_adt__list_adt_t)ivar_153);
        testlist_funtype_14_t ivar_158;
        testlist_closure_19_t cl12037;
        cl12037 = new_testlist_closure_19();
        ivar_158 = (testlist_funtype_14_t)cl12037;
        ivar_168 = (list_adt__T_t)ivar_158->ftbl->fptr(ivar_158, ivar_157);
        ivar_158->ftbl->rptr(ivar_158);
        list_adt__list_adt_t ivar_169;
        ivar_169 = (list_adt__list_adt_t)list_adt__null();
        ivar_174 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_162, (list_adt__list_adt_t)ivar_168);
        ivar_179 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_162, (list_adt__list_adt_t)ivar_173);
        ivar_184 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_162, (list_adt__list_adt_t)ivar_178);
        ivar_189 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_162, (list_adt__list_adt_t)ivar_183);
        ivar_191 = (list_adt__list_adt_t)list_adt__cons((list_adt__T_t)ivar_162, (list_adt__list_adt_t)ivar_188);
        uint8_t ivar_207;
        ivar_207 = (uint8_t)4;
        mpz_ptr_t ivar_192;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_192, ivar_207);
        testlist_funtype_9_t ivar_198;
        testlist_closure_20_t cl12041;
        cl12041 = new_testlist_closure_20();
        ivar_198 = (testlist_funtype_9_t)cl12041;
        ivar_2 = (testlist_record_8_t)ivar_198->ftbl->mptr(ivar_198, ivar_191, ivar_192);
        ivar_198->ftbl->rptr(ivar_198);
        result = (testlist_record_8_t) equal_testlist_record_8(ivar_1, ivar_2);
        safe_free(ivar_162);

        defined = true;};
        
        return result;
}