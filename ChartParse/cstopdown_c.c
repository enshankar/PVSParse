//Code generated using pvs2ir2c
#include "cstopdown_c.h"


cstopdown__peg_adt_t new_cstopdown__peg_adt(void){
        cstopdown__peg_adt_t tmp = (cstopdown__peg_adt_t) safe_malloc(sizeof(struct cstopdown__peg_adt_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown__peg_adt(cstopdown__peg_adt_t x){
switch (x->cstopdown__peg_adt_index) {
case 2:  release_cstopdown__any((cstopdown__any_t) x); break;
case 3:  release_cstopdown__terminal((cstopdown__terminal_t) x); break;
case 4:  release_cstopdown__concat((cstopdown__concat_t) x); break;
case 5:  release_cstopdown__choice((cstopdown__choice_t) x); break;
case 6:  release_cstopdown__check((cstopdown__check_t) x); break;
case 7:  release_cstopdown__neg((cstopdown__neg_t) x); break;
}}

void release_cstopdown__peg_adt_ptr(pointer_t x, type_actual_t T){
        release_cstopdown__peg_adt((cstopdown__peg_adt_t)x);
}

cstopdown__peg_adt_t copy_cstopdown__peg_adt(cstopdown__peg_adt_t x){
        cstopdown__peg_adt_t y = new_cstopdown__peg_adt();
        y->cstopdown__peg_adt_index = (uint8_t)x->cstopdown__peg_adt_index;
        y->count = 1;
        return y;}

bool_t equal_cstopdown__peg_adt(cstopdown__peg_adt_t x, cstopdown__peg_adt_t y){
        bool_t tmp = x->cstopdown__peg_adt_index == y->cstopdown__peg_adt_index;
        switch  (x->cstopdown__peg_adt_index) {
                case 2: tmp = tmp && equal_cstopdown__any((cstopdown__any_t) x, (cstopdown__any_t) y); break;
                case 3: tmp = tmp && equal_cstopdown__terminal((cstopdown__terminal_t) x, (cstopdown__terminal_t) y); break;
                case 4: tmp = tmp && equal_cstopdown__concat((cstopdown__concat_t) x, (cstopdown__concat_t) y); break;
                case 5: tmp = tmp && equal_cstopdown__choice((cstopdown__choice_t) x, (cstopdown__choice_t) y); break;
                case 6: tmp = tmp && equal_cstopdown__check((cstopdown__check_t) x, (cstopdown__check_t) y); break;
                case 7: tmp = tmp && equal_cstopdown__neg((cstopdown__neg_t) x, (cstopdown__neg_t) y); break;
        }
        return tmp;
}

char * json_cstopdown__peg_adt(cstopdown__peg_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ constructor = %u", x->cstopdown__peg_adt_index);
        switch  (x->cstopdown__peg_adt_index) {
                case 2: tmp = safe_strcat(tmp, json_cstopdown__any((cstopdown__any_t) x)); break;
                case 3: tmp = safe_strcat(tmp, json_cstopdown__terminal((cstopdown__terminal_t) x)); break;
                case 4: tmp = safe_strcat(tmp, json_cstopdown__concat((cstopdown__concat_t) x)); break;
                case 5: tmp = safe_strcat(tmp, json_cstopdown__choice((cstopdown__choice_t) x)); break;
                case 6: tmp = safe_strcat(tmp, json_cstopdown__check((cstopdown__check_t) x)); break;
                case 7: tmp = safe_strcat(tmp, json_cstopdown__neg((cstopdown__neg_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_cstopdown__peg_adt_ptr(pointer_t x, pointer_t y, actual_cstopdown__peg_adt_t T){
        return equal_cstopdown__peg_adt((cstopdown__peg_adt_t)x, (cstopdown__peg_adt_t)y);
}

char * json_cstopdown__peg_adt_ptr(pointer_t x, actual_cstopdown__peg_adt_t T){
        return json_cstopdown__peg_adt((cstopdown__peg_adt_t)x);
}

cstopdown__peg_adt_t update_cstopdown__peg_adt_cstopdown__peg_adt_index(cstopdown__peg_adt_t x, uint8_t v){
        cstopdown__peg_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__peg_adt(x); x->count--;};
        y->cstopdown__peg_adt_index = (uint8_t)v;
        return y;}



void release_cstopdown_funtype_1(cstopdown_funtype_1_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_1_t copy_cstopdown_funtype_1(cstopdown_funtype_1_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdown_funtype_1(cstopdown_funtype_1_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdown_funtype_1_hashentry_t data = htbl->data[hashindex];
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

cstopdown_funtype_1_t dupdate_cstopdown_funtype_1(cstopdown_funtype_1_t a, uint8_t i, bool_t v){
        cstopdown_funtype_1_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdown_funtype_1_htbl_t)safe_malloc(sizeof(struct cstopdown_funtype_1_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdown_funtype_1_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdown_funtype_1_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdown_funtype_1_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdown_funtype_1_hashentry_t * new_data = (cstopdown_funtype_1_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdown_funtype_1_hashentry_s));
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
        uint32_t hashindex = lookup_cstopdown_funtype_1(htbl, i, ihash);
        cstopdown_funtype_1_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

cstopdown_funtype_1_t update_cstopdown_funtype_1(cstopdown_funtype_1_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_cstopdown_funtype_1(a, i, v);
            } else {
                cstopdown_funtype_1_t x = copy_cstopdown_funtype_1(a);
                a->count--;
                return dupdate_cstopdown_funtype_1(x, i, v);
            }}

bool_t equal_cstopdown_funtype_1(cstopdown_funtype_1_t x, cstopdown_funtype_1_t y){
        return false;}

char* json_cstopdown_funtype_1(cstopdown_funtype_1_t x){char * result = safe_malloc(29); sprintf(result, "%s", "\"cstopdown_funtype_1\""); return result;}


cstopdown__any_t new_cstopdown__any(void){
        cstopdown__any_t tmp = (cstopdown__any_t) safe_malloc(sizeof(struct cstopdown__any_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown__any(cstopdown__any_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_1(x->p);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown__any_ptr(pointer_t x, type_actual_t T){
        release_cstopdown__any((cstopdown__any_t)x);
}

cstopdown__any_t copy_cstopdown__any(cstopdown__any_t x){
        cstopdown__any_t y = new_cstopdown__any();
        y->cstopdown__peg_adt_index = (uint8_t)x->cstopdown__peg_adt_index;
        y->p = x->p;
        if (y->p != NULL){y->p->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdown__any(cstopdown__any_t x, cstopdown__any_t y){
        bool_t tmp = true;
        tmp = tmp && x->cstopdown__peg_adt_index == y->cstopdown__peg_adt_index;
        tmp = tmp && equal_cstopdown_funtype_1(x->p, y->p);
        return tmp;}

char * json_cstopdown__any(cstopdown__any_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"cstopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->cstopdown__peg_adt_index));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"p\" : ");
        tmp[1] = safe_strcat(fld1, json_cstopdown_funtype_1(x->p));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown__any_ptr(pointer_t x, pointer_t y, actual_cstopdown__any_t T){
        return equal_cstopdown__any((cstopdown__any_t)x, (cstopdown__any_t)y);
}

char * json_cstopdown__any_ptr(pointer_t x, actual_cstopdown__any_t T){
        return json_cstopdown__any((cstopdown__any_t)x);
}

cstopdown__any_t update_cstopdown__any_cstopdown__peg_adt_index(cstopdown__any_t x, uint8_t v){
        cstopdown__any_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__any(x); x->count--;};
        y->cstopdown__peg_adt_index = (uint8_t)v;
        return y;}

cstopdown__any_t update_cstopdown__any_p(cstopdown__any_t x, cstopdown_funtype_1_t v){
        cstopdown__any_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->p != NULL){release_cstopdown_funtype_1(x->p);};}
        else {y = copy_cstopdown__any(x); x->count--; y->p->count--;};
        y->p = (cstopdown_funtype_1_t)v;
        return y;}




cstopdown__terminal_t new_cstopdown__terminal(void){
        cstopdown__terminal_t tmp = (cstopdown__terminal_t) safe_malloc(sizeof(struct cstopdown__terminal_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown__terminal(cstopdown__terminal_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown__terminal_ptr(pointer_t x, type_actual_t T){
        release_cstopdown__terminal((cstopdown__terminal_t)x);
}

cstopdown__terminal_t copy_cstopdown__terminal(cstopdown__terminal_t x){
        cstopdown__terminal_t y = new_cstopdown__terminal();
        y->cstopdown__peg_adt_index = (uint8_t)x->cstopdown__peg_adt_index;
        y->a = (uint8_t)x->a;
        y->count = 1;
        return y;}

bool_t equal_cstopdown__terminal(cstopdown__terminal_t x, cstopdown__terminal_t y){
        bool_t tmp = true;
        tmp = tmp && x->cstopdown__peg_adt_index == y->cstopdown__peg_adt_index;
        tmp = tmp && x->a == y->a;
        return tmp;}

char * json_cstopdown__terminal(cstopdown__terminal_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"cstopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->cstopdown__peg_adt_index));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"a\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->a));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown__terminal_ptr(pointer_t x, pointer_t y, actual_cstopdown__terminal_t T){
        return equal_cstopdown__terminal((cstopdown__terminal_t)x, (cstopdown__terminal_t)y);
}

char * json_cstopdown__terminal_ptr(pointer_t x, actual_cstopdown__terminal_t T){
        return json_cstopdown__terminal((cstopdown__terminal_t)x);
}

cstopdown__terminal_t update_cstopdown__terminal_cstopdown__peg_adt_index(cstopdown__terminal_t x, uint8_t v){
        cstopdown__terminal_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__terminal(x); x->count--;};
        y->cstopdown__peg_adt_index = (uint8_t)v;
        return y;}

cstopdown__terminal_t update_cstopdown__terminal_a(cstopdown__terminal_t x, uint8_t v){
        cstopdown__terminal_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__terminal(x); x->count--;};
        y->a = (uint8_t)v;
        return y;}




cstopdown__concat_t new_cstopdown__concat(void){
        cstopdown__concat_t tmp = (cstopdown__concat_t) safe_malloc(sizeof(struct cstopdown__concat_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown__concat(cstopdown__concat_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown__concat_ptr(pointer_t x, type_actual_t T){
        release_cstopdown__concat((cstopdown__concat_t)x);
}

cstopdown__concat_t copy_cstopdown__concat(cstopdown__concat_t x){
        cstopdown__concat_t y = new_cstopdown__concat();
        y->cstopdown__peg_adt_index = (uint8_t)x->cstopdown__peg_adt_index;
        y->e1 = (uint8_t)x->e1;
        y->e2 = (uint8_t)x->e2;
        y->count = 1;
        return y;}

bool_t equal_cstopdown__concat(cstopdown__concat_t x, cstopdown__concat_t y){
        bool_t tmp = true;
        tmp = tmp && x->cstopdown__peg_adt_index == y->cstopdown__peg_adt_index;
        tmp = tmp && x->e1 == y->e1;
        tmp = tmp && x->e2 == y->e2;
        return tmp;}

char * json_cstopdown__concat(cstopdown__concat_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"cstopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->cstopdown__peg_adt_index));
        char * fld1 = safe_malloc(14);
         sprintf(fld1, "\"e1\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->e1));
        char * fld2 = safe_malloc(14);
         sprintf(fld2, "\"e2\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->e2));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown__concat_ptr(pointer_t x, pointer_t y, actual_cstopdown__concat_t T){
        return equal_cstopdown__concat((cstopdown__concat_t)x, (cstopdown__concat_t)y);
}

char * json_cstopdown__concat_ptr(pointer_t x, actual_cstopdown__concat_t T){
        return json_cstopdown__concat((cstopdown__concat_t)x);
}

cstopdown__concat_t update_cstopdown__concat_cstopdown__peg_adt_index(cstopdown__concat_t x, uint8_t v){
        cstopdown__concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__concat(x); x->count--;};
        y->cstopdown__peg_adt_index = (uint8_t)v;
        return y;}

cstopdown__concat_t update_cstopdown__concat_e1(cstopdown__concat_t x, uint8_t v){
        cstopdown__concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__concat(x); x->count--;};
        y->e1 = (uint8_t)v;
        return y;}

cstopdown__concat_t update_cstopdown__concat_e2(cstopdown__concat_t x, uint8_t v){
        cstopdown__concat_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__concat(x); x->count--;};
        y->e2 = (uint8_t)v;
        return y;}




cstopdown__choice_t new_cstopdown__choice(void){
        cstopdown__choice_t tmp = (cstopdown__choice_t) safe_malloc(sizeof(struct cstopdown__choice_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown__choice(cstopdown__choice_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown__choice_ptr(pointer_t x, type_actual_t T){
        release_cstopdown__choice((cstopdown__choice_t)x);
}

cstopdown__choice_t copy_cstopdown__choice(cstopdown__choice_t x){
        cstopdown__choice_t y = new_cstopdown__choice();
        y->cstopdown__peg_adt_index = (uint8_t)x->cstopdown__peg_adt_index;
        y->e1 = (uint8_t)x->e1;
        y->e2 = (uint8_t)x->e2;
        y->count = 1;
        return y;}

bool_t equal_cstopdown__choice(cstopdown__choice_t x, cstopdown__choice_t y){
        bool_t tmp = true;
        tmp = tmp && x->cstopdown__peg_adt_index == y->cstopdown__peg_adt_index;
        tmp = tmp && x->e1 == y->e1;
        tmp = tmp && x->e2 == y->e2;
        return tmp;}

char * json_cstopdown__choice(cstopdown__choice_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"cstopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->cstopdown__peg_adt_index));
        char * fld1 = safe_malloc(14);
         sprintf(fld1, "\"e1\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->e1));
        char * fld2 = safe_malloc(14);
         sprintf(fld2, "\"e2\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->e2));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown__choice_ptr(pointer_t x, pointer_t y, actual_cstopdown__choice_t T){
        return equal_cstopdown__choice((cstopdown__choice_t)x, (cstopdown__choice_t)y);
}

char * json_cstopdown__choice_ptr(pointer_t x, actual_cstopdown__choice_t T){
        return json_cstopdown__choice((cstopdown__choice_t)x);
}

cstopdown__choice_t update_cstopdown__choice_cstopdown__peg_adt_index(cstopdown__choice_t x, uint8_t v){
        cstopdown__choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__choice(x); x->count--;};
        y->cstopdown__peg_adt_index = (uint8_t)v;
        return y;}

cstopdown__choice_t update_cstopdown__choice_e1(cstopdown__choice_t x, uint8_t v){
        cstopdown__choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__choice(x); x->count--;};
        y->e1 = (uint8_t)v;
        return y;}

cstopdown__choice_t update_cstopdown__choice_e2(cstopdown__choice_t x, uint8_t v){
        cstopdown__choice_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__choice(x); x->count--;};
        y->e2 = (uint8_t)v;
        return y;}




cstopdown__check_t new_cstopdown__check(void){
        cstopdown__check_t tmp = (cstopdown__check_t) safe_malloc(sizeof(struct cstopdown__check_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown__check(cstopdown__check_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown__check_ptr(pointer_t x, type_actual_t T){
        release_cstopdown__check((cstopdown__check_t)x);
}

cstopdown__check_t copy_cstopdown__check(cstopdown__check_t x){
        cstopdown__check_t y = new_cstopdown__check();
        y->cstopdown__peg_adt_index = (uint8_t)x->cstopdown__peg_adt_index;
        y->e = (uint8_t)x->e;
        y->count = 1;
        return y;}

bool_t equal_cstopdown__check(cstopdown__check_t x, cstopdown__check_t y){
        bool_t tmp = true;
        tmp = tmp && x->cstopdown__peg_adt_index == y->cstopdown__peg_adt_index;
        tmp = tmp && x->e == y->e;
        return tmp;}

char * json_cstopdown__check(cstopdown__check_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"cstopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->cstopdown__peg_adt_index));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"e\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->e));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown__check_ptr(pointer_t x, pointer_t y, actual_cstopdown__check_t T){
        return equal_cstopdown__check((cstopdown__check_t)x, (cstopdown__check_t)y);
}

char * json_cstopdown__check_ptr(pointer_t x, actual_cstopdown__check_t T){
        return json_cstopdown__check((cstopdown__check_t)x);
}

cstopdown__check_t update_cstopdown__check_cstopdown__peg_adt_index(cstopdown__check_t x, uint8_t v){
        cstopdown__check_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__check(x); x->count--;};
        y->cstopdown__peg_adt_index = (uint8_t)v;
        return y;}

cstopdown__check_t update_cstopdown__check_e(cstopdown__check_t x, uint8_t v){
        cstopdown__check_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__check(x); x->count--;};
        y->e = (uint8_t)v;
        return y;}




cstopdown__neg_t new_cstopdown__neg(void){
        cstopdown__neg_t tmp = (cstopdown__neg_t) safe_malloc(sizeof(struct cstopdown__neg_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown__neg(cstopdown__neg_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown__neg_ptr(pointer_t x, type_actual_t T){
        release_cstopdown__neg((cstopdown__neg_t)x);
}

cstopdown__neg_t copy_cstopdown__neg(cstopdown__neg_t x){
        cstopdown__neg_t y = new_cstopdown__neg();
        y->cstopdown__peg_adt_index = (uint8_t)x->cstopdown__peg_adt_index;
        y->e = (uint8_t)x->e;
        y->count = 1;
        return y;}

bool_t equal_cstopdown__neg(cstopdown__neg_t x, cstopdown__neg_t y){
        bool_t tmp = true;
        tmp = tmp && x->cstopdown__peg_adt_index == y->cstopdown__peg_adt_index;
        tmp = tmp && x->e == y->e;
        return tmp;}

char * json_cstopdown__neg(cstopdown__neg_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"cstopdown__peg_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->cstopdown__peg_adt_index));
        char * fld1 = safe_malloc(13);
         sprintf(fld1, "\"e\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->e));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown__neg_ptr(pointer_t x, pointer_t y, actual_cstopdown__neg_t T){
        return equal_cstopdown__neg((cstopdown__neg_t)x, (cstopdown__neg_t)y);
}

char * json_cstopdown__neg_ptr(pointer_t x, actual_cstopdown__neg_t T){
        return json_cstopdown__neg((cstopdown__neg_t)x);
}

cstopdown__neg_t update_cstopdown__neg_cstopdown__peg_adt_index(cstopdown__neg_t x, uint8_t v){
        cstopdown__neg_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__neg(x); x->count--;};
        y->cstopdown__peg_adt_index = (uint8_t)v;
        return y;}

cstopdown__neg_t update_cstopdown__neg_e(cstopdown__neg_t x, uint8_t v){
        cstopdown__neg_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__neg(x); x->count--;};
        y->e = (uint8_t)v;
        return y;}



void release_cstopdown_funtype_8(cstopdown_funtype_8_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_8_t copy_cstopdown_funtype_8(cstopdown_funtype_8_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_8(cstopdown_funtype_8_t x, cstopdown_funtype_8_t y){
        return false;}

char* json_cstopdown_funtype_8(cstopdown_funtype_8_t x){char * result = safe_malloc(29); sprintf(result, "%s", "\"cstopdown_funtype_8\""); return result;}

void release_cstopdown_funtype_9(cstopdown_funtype_9_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_9_t copy_cstopdown_funtype_9(cstopdown_funtype_9_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_9(cstopdown_funtype_9_t x, cstopdown_funtype_9_t y){
        return false;}

char* json_cstopdown_funtype_9(cstopdown_funtype_9_t x){char * result = safe_malloc(29); sprintf(result, "%s", "\"cstopdown_funtype_9\""); return result;}

void release_cstopdown_funtype_10(cstopdown_funtype_10_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_10_t copy_cstopdown_funtype_10(cstopdown_funtype_10_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_10(cstopdown_funtype_10_t x, cstopdown_funtype_10_t y){
        return false;}

char* json_cstopdown_funtype_10(cstopdown_funtype_10_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_10\""); return result;}

void release_cstopdown_funtype_11(cstopdown_funtype_11_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_11_t copy_cstopdown_funtype_11(cstopdown_funtype_11_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdown_funtype_11(cstopdown_funtype_11_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdown_funtype_11_hashentry_t data = htbl->data[hashindex];
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

cstopdown_funtype_11_t dupdate_cstopdown_funtype_11(cstopdown_funtype_11_t a, uint8_t i, mpz_ptr_t v){
        cstopdown_funtype_11_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdown_funtype_11_htbl_t)safe_malloc(sizeof(struct cstopdown_funtype_11_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdown_funtype_11_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdown_funtype_11_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdown_funtype_11_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdown_funtype_11_hashentry_t * new_data = (cstopdown_funtype_11_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdown_funtype_11_hashentry_s));
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
        uint32_t hashindex = lookup_cstopdown_funtype_11(htbl, i, ihash);
        cstopdown_funtype_11_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

cstopdown_funtype_11_t update_cstopdown_funtype_11(cstopdown_funtype_11_t a, uint8_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_cstopdown_funtype_11(a, i, v);
            } else {
                cstopdown_funtype_11_t x = copy_cstopdown_funtype_11(a);
                a->count--;
                return dupdate_cstopdown_funtype_11(x, i, v);
            }}

bool_t equal_cstopdown_funtype_11(cstopdown_funtype_11_t x, cstopdown_funtype_11_t y){
        return false;}

char* json_cstopdown_funtype_11(cstopdown_funtype_11_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_11\""); return result;}


cstopdown_record_12_t new_cstopdown_record_12(void){
        cstopdown_record_12_t tmp = (cstopdown_record_12_t) safe_malloc(sizeof(struct cstopdown_record_12_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_12(cstopdown_record_12_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_12_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_12((cstopdown_record_12_t)x);
}

cstopdown_record_12_t copy_cstopdown_record_12(cstopdown_record_12_t x){
        cstopdown_record_12_t y = new_cstopdown_record_12();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_12(cstopdown_record_12_t x, cstopdown_record_12_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

char * json_cstopdown_record_12(cstopdown_record_12_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_12_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_12_t T){
        return equal_cstopdown_record_12((cstopdown_record_12_t)x, (cstopdown_record_12_t)y);
}

char * json_cstopdown_record_12_ptr(pointer_t x, actual_cstopdown_record_12_t T){
        return json_cstopdown_record_12((cstopdown_record_12_t)x);
}

cstopdown_record_12_t update_cstopdown_record_12_project_1(cstopdown_record_12_t x, uint8_t v){
        cstopdown_record_12_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_12(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

cstopdown_record_12_t update_cstopdown_record_12_project_2(cstopdown_record_12_t x, uint8_t v){
        cstopdown_record_12_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_12(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}



void release_cstopdown_funtype_13(cstopdown_funtype_13_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_13_t copy_cstopdown_funtype_13(cstopdown_funtype_13_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_13(cstopdown_funtype_13_t x, cstopdown_funtype_13_t y){
        return false;}

char* json_cstopdown_funtype_13(cstopdown_funtype_13_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_13\""); return result;}


mpz_ptr_t f_cstopdown_closure_14(struct cstopdown_closure_14_s * closure, cstopdown__peg_adt_t bvar){
        mpz_ptr_t result = h_cstopdown_closure_14(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

mpz_ptr_t m_cstopdown_closure_14(struct cstopdown_closure_14_s * closure, cstopdown__peg_adt_t bvar){
        return h_cstopdown_closure_14(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern mpz_ptr_t h_cstopdown_closure_14(cstopdown__peg_adt_t ivar_17, cstopdown_funtype_11_t ivar_12, cstopdown_funtype_11_t ivar_14, cstopdown_funtype_13_t ivar_10, cstopdown_funtype_13_t ivar_8, cstopdown_funtype_11_t ivar_6, cstopdown_funtype_10_t ivar_3, mpz_ptr_t ivar_2, mpz_ptr_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_47;
        ivar_17->count++;
        ivar_47 = (bool_t)r_cstopdown__epsilonp((cstopdown__peg_adt_t)ivar_17);
        if (ivar_47){ 
             release_cstopdown__peg_adt(ivar_17);
             //copying to mpz from mpz;
             mpz_mk_set(result, ivar_1);
} else {
        
             bool_t ivar_51;
             ivar_17->count++;
             ivar_51 = (bool_t)r_cstopdown__failurep((cstopdown__peg_adt_t)ivar_17);
             if (ivar_51){  
           release_cstopdown__peg_adt(ivar_17);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_2);
} else {
             
           bool_t ivar_67;
           ivar_17->count++;
           ivar_67 = (bool_t)r_cstopdown__anyp((cstopdown__peg_adt_t)ivar_17);
           if (ivar_67){   
           cstopdown_funtype_1_t ivar_55;
           ivar_55 = (cstopdown_funtype_1_t)cstopdown__peg_adt_p((cstopdown__peg_adt_t)ivar_17);
           mpz_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_55));
} else {
           
           bool_t ivar_80;
           ivar_17->count++;
           ivar_80 = (bool_t)r_cstopdown__terminalp((cstopdown__peg_adt_t)ivar_17);
           if (ivar_80){    
            uint8_t ivar_71;
            ivar_71 = (uint8_t)cstopdown__peg_adt_a((cstopdown__peg_adt_t)ivar_17);
            mpz_mk_set(result, ivar_6->ftbl->fptr(ivar_6, ivar_71));
} else {
           
            bool_t ivar_99;
            ivar_17->count++;
            ivar_99 = (bool_t)r_cstopdown__concatp((cstopdown__peg_adt_t)ivar_17);
            if (ivar_99){     
             uint8_t ivar_84;
             ivar_17->count++;
             ivar_84 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_17);
             uint8_t ivar_85;
             ivar_85 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_17);
             mpz_mk_set(result, ivar_8->ftbl->mptr(ivar_8, ivar_84, ivar_85));
} else {
            
             bool_t ivar_118;
             ivar_17->count++;
             ivar_118 = (bool_t)r_cstopdown__orp((cstopdown__peg_adt_t)ivar_17);
             if (ivar_118){      
              uint8_t ivar_103;
              ivar_17->count++;
              ivar_103 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_17);
              uint8_t ivar_104;
              ivar_104 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_17);
              mpz_mk_set(result, ivar_10->ftbl->mptr(ivar_10, ivar_103, ivar_104));
} else {
             
              bool_t ivar_131;
              ivar_17->count++;
              ivar_131 = (bool_t)r_cstopdown__andp((cstopdown__peg_adt_t)ivar_17);
              if (ivar_131){       
               uint8_t ivar_122;
               ivar_122 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_17);
               mpz_mk_set(result, ivar_12->ftbl->fptr(ivar_12, ivar_122));
} else {
              
               uint8_t ivar_135;
               ivar_135 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_17);
               mpz_mk_set(result, ivar_14->ftbl->fptr(ivar_14, ivar_135));
};
};
};
};
};
};
};

        return result;
}

cstopdown_closure_14_t new_cstopdown_closure_14(void){
        static struct cstopdown_funtype_9_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(cstopdown_funtype_9_t, cstopdown__peg_adt_t))&f_cstopdown_closure_14, .mptr = (mpz_ptr_t (*)(cstopdown_funtype_9_t, cstopdown__peg_adt_t))&m_cstopdown_closure_14, .rptr =  (void (*)(cstopdown_funtype_9_t))&release_cstopdown_closure_14, .cptr = (cstopdown_funtype_9_t (*)(cstopdown_funtype_9_t))&copy_cstopdown_closure_14};
        cstopdown_closure_14_t tmp = (cstopdown_closure_14_t) safe_malloc(sizeof(struct cstopdown_closure_14_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_7);
        mpz_init(tmp->fvar_8);
        return tmp;}

void release_cstopdown_closure_14(cstopdown_funtype_9_t closure){
        cstopdown_closure_14_t x = (cstopdown_closure_14_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_11(x->fvar_1);
         release_cstopdown_funtype_11(x->fvar_2);
         release_cstopdown_funtype_13(x->fvar_3);
         release_cstopdown_funtype_13(x->fvar_4);
         release_cstopdown_funtype_11(x->fvar_5);
         release_cstopdown_funtype_10(x->fvar_6);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_14_t copy_cstopdown_closure_14(cstopdown_closure_14_t x){
        cstopdown_closure_14_t y = new_cstopdown_closure_14();
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
            cstopdown_funtype_9_htbl_t new_htbl = (cstopdown_funtype_9_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_9_hashentry_t * new_data = (cstopdown_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_9_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_record_15_t new_cstopdown_record_15(void){
        cstopdown_record_15_t tmp = (cstopdown_record_15_t) safe_malloc(sizeof(struct cstopdown_record_15_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_15(cstopdown_record_15_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_1(x->project_1);
         release_cstopdown__peg_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_15_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_15((cstopdown_record_15_t)x);
}

cstopdown_record_15_t copy_cstopdown_record_15(cstopdown_record_15_t x){
        cstopdown_record_15_t y = new_cstopdown_record_15();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_15(cstopdown_record_15_t x, cstopdown_record_15_t y){
        bool_t tmp = true;
        tmp = tmp && equal_cstopdown_funtype_1(x->project_1, y->project_1);
        tmp = tmp && equal_cstopdown__peg_adt(x->project_2, y->project_2);
        return tmp;}

char * json_cstopdown_record_15(cstopdown_record_15_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_cstopdown_funtype_1(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_cstopdown__peg_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_15_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_15_t T){
        return equal_cstopdown_record_15((cstopdown_record_15_t)x, (cstopdown_record_15_t)y);
}

char * json_cstopdown_record_15_ptr(pointer_t x, actual_cstopdown_record_15_t T){
        return json_cstopdown_record_15((cstopdown_record_15_t)x);
}

cstopdown_record_15_t update_cstopdown_record_15_project_1(cstopdown_record_15_t x, cstopdown_funtype_1_t v){
        cstopdown_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_cstopdown_funtype_1(x->project_1);};}
        else {y = copy_cstopdown_record_15(x); x->count--; y->project_1->count--;};
        y->project_1 = (cstopdown_funtype_1_t)v;
        return y;}

cstopdown_record_15_t update_cstopdown_record_15_project_2(cstopdown_record_15_t x, cstopdown__peg_adt_t v){
        cstopdown_record_15_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_cstopdown__peg_adt(x->project_2);};}
        else {y = copy_cstopdown_record_15(x); x->count--; y->project_2->count--;};
        y->project_2 = (cstopdown__peg_adt_t)v;
        return y;}



void release_cstopdown_funtype_16(cstopdown_funtype_16_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_16_t copy_cstopdown_funtype_16(cstopdown_funtype_16_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_16(cstopdown_funtype_16_t x, cstopdown_funtype_16_t y){
        return false;}

char* json_cstopdown_funtype_16(cstopdown_funtype_16_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_16\""); return result;}


cstopdown_record_17_t new_cstopdown_record_17(void){
        cstopdown_record_17_t tmp = (cstopdown_record_17_t) safe_malloc(sizeof(struct cstopdown_record_17_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_17(cstopdown_record_17_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown__peg_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_17_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_17((cstopdown_record_17_t)x);
}

cstopdown_record_17_t copy_cstopdown_record_17(cstopdown_record_17_t x){
        cstopdown_record_17_t y = new_cstopdown_record_17();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_17(cstopdown_record_17_t x, cstopdown_record_17_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_cstopdown__peg_adt(x->project_2, y->project_2);
        return tmp;}

char * json_cstopdown_record_17(cstopdown_record_17_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_cstopdown__peg_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_17_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_17_t T){
        return equal_cstopdown_record_17((cstopdown_record_17_t)x, (cstopdown_record_17_t)y);
}

char * json_cstopdown_record_17_ptr(pointer_t x, actual_cstopdown_record_17_t T){
        return json_cstopdown_record_17((cstopdown_record_17_t)x);
}

cstopdown_record_17_t update_cstopdown_record_17_project_1(cstopdown_record_17_t x, uint8_t v){
        cstopdown_record_17_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_17(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

cstopdown_record_17_t update_cstopdown_record_17_project_2(cstopdown_record_17_t x, cstopdown__peg_adt_t v){
        cstopdown_record_17_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_cstopdown__peg_adt(x->project_2);};}
        else {y = copy_cstopdown_record_17(x); x->count--; y->project_2->count--;};
        y->project_2 = (cstopdown__peg_adt_t)v;
        return y;}



void release_cstopdown_funtype_18(cstopdown_funtype_18_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_18_t copy_cstopdown_funtype_18(cstopdown_funtype_18_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_18(cstopdown_funtype_18_t x, cstopdown_funtype_18_t y){
        return false;}

char* json_cstopdown_funtype_18(cstopdown_funtype_18_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_18\""); return result;}


cstopdown_record_19_t new_cstopdown_record_19(void){
        cstopdown_record_19_t tmp = (cstopdown_record_19_t) safe_malloc(sizeof(struct cstopdown_record_19_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_19(cstopdown_record_19_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown__peg_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_19_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_19((cstopdown_record_19_t)x);
}

cstopdown_record_19_t copy_cstopdown_record_19(cstopdown_record_19_t x){
        cstopdown_record_19_t y = new_cstopdown_record_19();
        y->project_1 = (uint8_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_19(cstopdown_record_19_t x, cstopdown_record_19_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_cstopdown__peg_adt(x->project_3, y->project_3);
        return tmp;}

char * json_cstopdown_record_19(cstopdown_record_19_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_cstopdown__peg_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_19_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_19_t T){
        return equal_cstopdown_record_19((cstopdown_record_19_t)x, (cstopdown_record_19_t)y);
}

char * json_cstopdown_record_19_ptr(pointer_t x, actual_cstopdown_record_19_t T){
        return json_cstopdown_record_19((cstopdown_record_19_t)x);
}

cstopdown_record_19_t update_cstopdown_record_19_project_1(cstopdown_record_19_t x, uint8_t v){
        cstopdown_record_19_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_19(x); x->count--;};
        y->project_1 = (uint8_t)v;
        return y;}

cstopdown_record_19_t update_cstopdown_record_19_project_2(cstopdown_record_19_t x, uint8_t v){
        cstopdown_record_19_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_19(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

cstopdown_record_19_t update_cstopdown_record_19_project_3(cstopdown_record_19_t x, cstopdown__peg_adt_t v){
        cstopdown_record_19_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_cstopdown__peg_adt(x->project_3);};}
        else {y = copy_cstopdown_record_19(x); x->count--; y->project_3->count--;};
        y->project_3 = (cstopdown__peg_adt_t)v;
        return y;}



void release_cstopdown_funtype_20(cstopdown_funtype_20_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_20_t copy_cstopdown_funtype_20(cstopdown_funtype_20_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_20(cstopdown_funtype_20_t x, cstopdown_funtype_20_t y){
        return false;}

char* json_cstopdown_funtype_20(cstopdown_funtype_20_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_20\""); return result;}


mpz_ptr_t f_cstopdown_closure_21(struct cstopdown_closure_21_s * closure, cstopdown__peg_adt_t bvar){
        mpz_ptr_t result = h_cstopdown_closure_21(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

mpz_ptr_t m_cstopdown_closure_21(struct cstopdown_closure_21_s * closure, cstopdown__peg_adt_t bvar){
        return h_cstopdown_closure_21(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern mpz_ptr_t h_cstopdown_closure_21(cstopdown__peg_adt_t ivar_19, cstopdown_funtype_18_t ivar_14, cstopdown_funtype_18_t ivar_16, cstopdown_funtype_20_t ivar_12, cstopdown_funtype_20_t ivar_10, cstopdown_funtype_18_t ivar_8, cstopdown_funtype_16_t ivar_5, cstopdown_funtype_9_t ivar_3, cstopdown_funtype_9_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_56;
        ivar_19->count++;
        ivar_56 = (bool_t)r_cstopdown__epsilonp((cstopdown__peg_adt_t)ivar_19);
        if (ivar_56){ 
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_19));
} else {
        
             bool_t ivar_65;
             ivar_19->count++;
             ivar_65 = (bool_t)r_cstopdown__failurep((cstopdown__peg_adt_t)ivar_19);
             if (ivar_65){  
           mpz_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_19));
} else {
             
           bool_t ivar_83;
           ivar_19->count++;
           ivar_83 = (bool_t)r_cstopdown__anyp((cstopdown__peg_adt_t)ivar_19);
           if (ivar_83){   
           cstopdown_funtype_1_t ivar_69;
           ivar_19->count++;
           ivar_69 = (cstopdown_funtype_1_t)cstopdown__peg_adt_p((cstopdown__peg_adt_t)ivar_19);
           mpz_mk_set(result, ivar_5->ftbl->mptr(ivar_5, ivar_69, ivar_19));
} else {
           
           bool_t ivar_98;
           ivar_19->count++;
           ivar_98 = (bool_t)r_cstopdown__terminalp((cstopdown__peg_adt_t)ivar_19);
           if (ivar_98){    
            uint8_t ivar_87;
            ivar_19->count++;
            ivar_87 = (uint8_t)cstopdown__peg_adt_a((cstopdown__peg_adt_t)ivar_19);
            mpz_mk_set(result, ivar_8->ftbl->mptr(ivar_8, ivar_87, ivar_19));
} else {
           
            bool_t ivar_119;
            ivar_19->count++;
            ivar_119 = (bool_t)r_cstopdown__concatp((cstopdown__peg_adt_t)ivar_19);
            if (ivar_119){     
             uint8_t ivar_102;
             ivar_19->count++;
             ivar_102 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_19);
             uint8_t ivar_103;
             ivar_19->count++;
             ivar_103 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_19);
             mpz_mk_set(result, ivar_10->ftbl->mptr(ivar_10, ivar_102, ivar_103, ivar_19));
} else {
            
             bool_t ivar_140;
             ivar_19->count++;
             ivar_140 = (bool_t)r_cstopdown__orp((cstopdown__peg_adt_t)ivar_19);
             if (ivar_140){      
              uint8_t ivar_123;
              ivar_19->count++;
              ivar_123 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_19);
              uint8_t ivar_124;
              ivar_19->count++;
              ivar_124 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_19);
              mpz_mk_set(result, ivar_12->ftbl->mptr(ivar_12, ivar_123, ivar_124, ivar_19));
} else {
             
              bool_t ivar_155;
              ivar_19->count++;
              ivar_155 = (bool_t)r_cstopdown__andp((cstopdown__peg_adt_t)ivar_19);
              if (ivar_155){       
               uint8_t ivar_144;
               ivar_19->count++;
               ivar_144 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_19);
               mpz_mk_set(result, ivar_14->ftbl->mptr(ivar_14, ivar_144, ivar_19));
} else {
              
               uint8_t ivar_159;
               ivar_19->count++;
               ivar_159 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_19);
               mpz_mk_set(result, ivar_16->ftbl->mptr(ivar_16, ivar_159, ivar_19));
};
};
};
};
};
};
};

        return result;
}

cstopdown_closure_21_t new_cstopdown_closure_21(void){
        static struct cstopdown_funtype_9_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(cstopdown_funtype_9_t, cstopdown__peg_adt_t))&f_cstopdown_closure_21, .mptr = (mpz_ptr_t (*)(cstopdown_funtype_9_t, cstopdown__peg_adt_t))&m_cstopdown_closure_21, .rptr =  (void (*)(cstopdown_funtype_9_t))&release_cstopdown_closure_21, .cptr = (cstopdown_funtype_9_t (*)(cstopdown_funtype_9_t))&copy_cstopdown_closure_21};
        cstopdown_closure_21_t tmp = (cstopdown_closure_21_t) safe_malloc(sizeof(struct cstopdown_closure_21_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_21(cstopdown_funtype_9_t closure){
        cstopdown_closure_21_t x = (cstopdown_closure_21_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_18(x->fvar_1);
         release_cstopdown_funtype_18(x->fvar_2);
         release_cstopdown_funtype_20(x->fvar_3);
         release_cstopdown_funtype_20(x->fvar_4);
         release_cstopdown_funtype_18(x->fvar_5);
         release_cstopdown_funtype_16(x->fvar_6);
         release_cstopdown_funtype_9(x->fvar_7);
         release_cstopdown_funtype_9(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_21_t copy_cstopdown_closure_21(cstopdown_closure_21_t x){
        cstopdown_closure_21_t y = new_cstopdown_closure_21();
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
            cstopdown_funtype_9_htbl_t new_htbl = (cstopdown_funtype_9_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_9_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_9_hashentry_t * new_data = (cstopdown_funtype_9_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_9_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_9_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_22(cstopdown_funtype_22_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_22_t copy_cstopdown_funtype_22(cstopdown_funtype_22_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_22(cstopdown_funtype_22_t x, cstopdown_funtype_22_t y){
        return false;}

char* json_cstopdown_funtype_22(cstopdown_funtype_22_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_22\""); return result;}

void release_cstopdown_funtype_23(cstopdown_funtype_23_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_23_t copy_cstopdown_funtype_23(cstopdown_funtype_23_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_23(cstopdown_funtype_23_t x, cstopdown_funtype_23_t y){
        return false;}

char* json_cstopdown_funtype_23(cstopdown_funtype_23_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_23\""); return result;}

void release_cstopdown_funtype_24(cstopdown_funtype_24_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_24_t copy_cstopdown_funtype_24(cstopdown_funtype_24_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdown_funtype_24(cstopdown_funtype_24_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdown_funtype_24_hashentry_t data = htbl->data[hashindex];
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

cstopdown_funtype_24_t dupdate_cstopdown_funtype_24(cstopdown_funtype_24_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v){
        cstopdown_funtype_24_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdown_funtype_24_htbl_t)safe_malloc(sizeof(struct cstopdown_funtype_24_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdown_funtype_24_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdown_funtype_24_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdown_funtype_24_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdown_funtype_24_hashentry_t * new_data = (cstopdown_funtype_24_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdown_funtype_24_hashentry_s));
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
        uint32_t hashindex = lookup_cstopdown_funtype_24(htbl, i, ihash);
        cstopdown_funtype_24_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v; htbl->num_entries++;}
            else {ordstruct_adt__ordstruct_adt_t tempvalue;tempvalue = (ordstruct_adt__ordstruct_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ordstruct_adt__ordstruct_adt(tempvalue);};
        return a;

}

cstopdown_funtype_24_t update_cstopdown_funtype_24(cstopdown_funtype_24_t a, uint8_t i, ordstruct_adt__ordstruct_adt_t v){
        if (a->count == 1){
                return dupdate_cstopdown_funtype_24(a, i, v);
            } else {
                cstopdown_funtype_24_t x = copy_cstopdown_funtype_24(a);
                a->count--;
                return dupdate_cstopdown_funtype_24(x, i, v);
            }}

bool_t equal_cstopdown_funtype_24(cstopdown_funtype_24_t x, cstopdown_funtype_24_t y){
        return false;}

char* json_cstopdown_funtype_24(cstopdown_funtype_24_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_24\""); return result;}

void release_cstopdown_funtype_25(cstopdown_funtype_25_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_25_t copy_cstopdown_funtype_25(cstopdown_funtype_25_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_25(cstopdown_funtype_25_t x, cstopdown_funtype_25_t y){
        return false;}

char* json_cstopdown_funtype_25(cstopdown_funtype_25_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_25\""); return result;}


ordstruct_adt__ordstruct_adt_t f_cstopdown_closure_26(struct cstopdown_closure_26_s * closure, cstopdown__peg_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_cstopdown_closure_26(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_cstopdown_closure_26(struct cstopdown_closure_26_s * closure, cstopdown__peg_adt_t bvar){
        return h_cstopdown_closure_26(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern ordstruct_adt__ordstruct_adt_t h_cstopdown_closure_26(cstopdown__peg_adt_t ivar_17, cstopdown_funtype_24_t ivar_12, cstopdown_funtype_24_t ivar_14, cstopdown_funtype_25_t ivar_10, cstopdown_funtype_25_t ivar_8, cstopdown_funtype_24_t ivar_6, cstopdown_funtype_23_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_2, ordstruct_adt__ordstruct_adt_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_47;
        ivar_17->count++;
        ivar_47 = (bool_t)r_cstopdown__epsilonp((cstopdown__peg_adt_t)ivar_17);
        if (ivar_47){ 
             release_cstopdown__peg_adt(ivar_17);
             //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1;
             if (result != NULL) result->count++;
} else {
        
             bool_t ivar_51;
             ivar_17->count++;
             ivar_51 = (bool_t)r_cstopdown__failurep((cstopdown__peg_adt_t)ivar_17);
             if (ivar_51){  
           release_cstopdown__peg_adt(ivar_17);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_2;
           if (result != NULL) result->count++;
} else {
             
           bool_t ivar_67;
           ivar_17->count++;
           ivar_67 = (bool_t)r_cstopdown__anyp((cstopdown__peg_adt_t)ivar_17);
           if (ivar_67){   
           cstopdown_funtype_1_t ivar_55;
           ivar_55 = (cstopdown_funtype_1_t)cstopdown__peg_adt_p((cstopdown__peg_adt_t)ivar_17);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_55);
} else {
           
           bool_t ivar_80;
           ivar_17->count++;
           ivar_80 = (bool_t)r_cstopdown__terminalp((cstopdown__peg_adt_t)ivar_17);
           if (ivar_80){    
            uint8_t ivar_71;
            ivar_71 = (uint8_t)cstopdown__peg_adt_a((cstopdown__peg_adt_t)ivar_17);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_6->ftbl->fptr(ivar_6, ivar_71);
} else {
           
            bool_t ivar_99;
            ivar_17->count++;
            ivar_99 = (bool_t)r_cstopdown__concatp((cstopdown__peg_adt_t)ivar_17);
            if (ivar_99){     
             uint8_t ivar_84;
             ivar_17->count++;
             ivar_84 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_17);
             uint8_t ivar_85;
             ivar_85 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_17);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_8->ftbl->mptr(ivar_8, ivar_84, ivar_85);
} else {
            
             bool_t ivar_118;
             ivar_17->count++;
             ivar_118 = (bool_t)r_cstopdown__orp((cstopdown__peg_adt_t)ivar_17);
             if (ivar_118){      
              uint8_t ivar_103;
              ivar_17->count++;
              ivar_103 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_17);
              uint8_t ivar_104;
              ivar_104 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_17);
              result = (ordstruct_adt__ordstruct_adt_t)ivar_10->ftbl->mptr(ivar_10, ivar_103, ivar_104);
} else {
             
              bool_t ivar_131;
              ivar_17->count++;
              ivar_131 = (bool_t)r_cstopdown__andp((cstopdown__peg_adt_t)ivar_17);
              if (ivar_131){       
               uint8_t ivar_122;
               ivar_122 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_17);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_12->ftbl->fptr(ivar_12, ivar_122);
} else {
              
               uint8_t ivar_135;
               ivar_135 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_17);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_14->ftbl->fptr(ivar_14, ivar_135);
};
};
};
};
};
};
};

        return result;
}

cstopdown_closure_26_t new_cstopdown_closure_26(void){
        static struct cstopdown_funtype_22_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(cstopdown_funtype_22_t, cstopdown__peg_adt_t))&f_cstopdown_closure_26, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(cstopdown_funtype_22_t, cstopdown__peg_adt_t))&m_cstopdown_closure_26, .rptr =  (void (*)(cstopdown_funtype_22_t))&release_cstopdown_closure_26, .cptr = (cstopdown_funtype_22_t (*)(cstopdown_funtype_22_t))&copy_cstopdown_closure_26};
        cstopdown_closure_26_t tmp = (cstopdown_closure_26_t) safe_malloc(sizeof(struct cstopdown_closure_26_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_26(cstopdown_funtype_22_t closure){
        cstopdown_closure_26_t x = (cstopdown_closure_26_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_24(x->fvar_1);
         release_cstopdown_funtype_24(x->fvar_2);
         release_cstopdown_funtype_25(x->fvar_3);
         release_cstopdown_funtype_25(x->fvar_4);
         release_cstopdown_funtype_24(x->fvar_5);
         release_cstopdown_funtype_23(x->fvar_6);
         release_ordstruct_adt__ordstruct_adt(x->fvar_7);
         release_ordstruct_adt__ordstruct_adt(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_26_t copy_cstopdown_closure_26(cstopdown_closure_26_t x){
        cstopdown_closure_26_t y = new_cstopdown_closure_26();
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
            cstopdown_funtype_22_htbl_t new_htbl = (cstopdown_funtype_22_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_22_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_22_hashentry_t * new_data = (cstopdown_funtype_22_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_22_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_22_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_27(cstopdown_funtype_27_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_27_t copy_cstopdown_funtype_27(cstopdown_funtype_27_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_27(cstopdown_funtype_27_t x, cstopdown_funtype_27_t y){
        return false;}

char* json_cstopdown_funtype_27(cstopdown_funtype_27_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_27\""); return result;}

void release_cstopdown_funtype_28(cstopdown_funtype_28_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_28_t copy_cstopdown_funtype_28(cstopdown_funtype_28_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_28(cstopdown_funtype_28_t x, cstopdown_funtype_28_t y){
        return false;}

char* json_cstopdown_funtype_28(cstopdown_funtype_28_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_28\""); return result;}

void release_cstopdown_funtype_29(cstopdown_funtype_29_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_29_t copy_cstopdown_funtype_29(cstopdown_funtype_29_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_29(cstopdown_funtype_29_t x, cstopdown_funtype_29_t y){
        return false;}

char* json_cstopdown_funtype_29(cstopdown_funtype_29_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_29\""); return result;}


ordstruct_adt__ordstruct_adt_t f_cstopdown_closure_30(struct cstopdown_closure_30_s * closure, cstopdown__peg_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_cstopdown_closure_30(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_cstopdown_closure_30(struct cstopdown_closure_30_s * closure, cstopdown__peg_adt_t bvar){
        return h_cstopdown_closure_30(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5, closure->fvar_6, closure->fvar_7, closure->fvar_8);}

extern ordstruct_adt__ordstruct_adt_t h_cstopdown_closure_30(cstopdown__peg_adt_t ivar_19, cstopdown_funtype_28_t ivar_14, cstopdown_funtype_28_t ivar_16, cstopdown_funtype_29_t ivar_12, cstopdown_funtype_29_t ivar_10, cstopdown_funtype_28_t ivar_8, cstopdown_funtype_27_t ivar_5, cstopdown_funtype_22_t ivar_3, cstopdown_funtype_22_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_56;
        ivar_19->count++;
        ivar_56 = (bool_t)r_cstopdown__epsilonp((cstopdown__peg_adt_t)ivar_19);
        if (ivar_56){ 
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_19);
} else {
        
             bool_t ivar_65;
             ivar_19->count++;
             ivar_65 = (bool_t)r_cstopdown__failurep((cstopdown__peg_adt_t)ivar_19);
             if (ivar_65){  
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_19);
} else {
             
           bool_t ivar_83;
           ivar_19->count++;
           ivar_83 = (bool_t)r_cstopdown__anyp((cstopdown__peg_adt_t)ivar_19);
           if (ivar_83){   
           cstopdown_funtype_1_t ivar_69;
           ivar_19->count++;
           ivar_69 = (cstopdown_funtype_1_t)cstopdown__peg_adt_p((cstopdown__peg_adt_t)ivar_19);
           result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_69, ivar_19);
} else {
           
           bool_t ivar_98;
           ivar_19->count++;
           ivar_98 = (bool_t)r_cstopdown__terminalp((cstopdown__peg_adt_t)ivar_19);
           if (ivar_98){    
            uint8_t ivar_87;
            ivar_19->count++;
            ivar_87 = (uint8_t)cstopdown__peg_adt_a((cstopdown__peg_adt_t)ivar_19);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_8->ftbl->mptr(ivar_8, ivar_87, ivar_19);
} else {
           
            bool_t ivar_119;
            ivar_19->count++;
            ivar_119 = (bool_t)r_cstopdown__concatp((cstopdown__peg_adt_t)ivar_19);
            if (ivar_119){     
             uint8_t ivar_102;
             ivar_19->count++;
             ivar_102 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_19);
             uint8_t ivar_103;
             ivar_19->count++;
             ivar_103 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_19);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_10->ftbl->mptr(ivar_10, ivar_102, ivar_103, ivar_19);
} else {
            
             bool_t ivar_140;
             ivar_19->count++;
             ivar_140 = (bool_t)r_cstopdown__orp((cstopdown__peg_adt_t)ivar_19);
             if (ivar_140){      
              uint8_t ivar_123;
              ivar_19->count++;
              ivar_123 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_19);
              uint8_t ivar_124;
              ivar_19->count++;
              ivar_124 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_19);
              result = (ordstruct_adt__ordstruct_adt_t)ivar_12->ftbl->mptr(ivar_12, ivar_123, ivar_124, ivar_19);
} else {
             
              bool_t ivar_155;
              ivar_19->count++;
              ivar_155 = (bool_t)r_cstopdown__andp((cstopdown__peg_adt_t)ivar_19);
              if (ivar_155){       
               uint8_t ivar_144;
               ivar_19->count++;
               ivar_144 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_19);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_14->ftbl->mptr(ivar_14, ivar_144, ivar_19);
} else {
              
               uint8_t ivar_159;
               ivar_19->count++;
               ivar_159 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_19);
               result = (ordstruct_adt__ordstruct_adt_t)ivar_16->ftbl->mptr(ivar_16, ivar_159, ivar_19);
};
};
};
};
};
};
};

        return result;
}

cstopdown_closure_30_t new_cstopdown_closure_30(void){
        static struct cstopdown_funtype_22_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(cstopdown_funtype_22_t, cstopdown__peg_adt_t))&f_cstopdown_closure_30, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(cstopdown_funtype_22_t, cstopdown__peg_adt_t))&m_cstopdown_closure_30, .rptr =  (void (*)(cstopdown_funtype_22_t))&release_cstopdown_closure_30, .cptr = (cstopdown_funtype_22_t (*)(cstopdown_funtype_22_t))&copy_cstopdown_closure_30};
        cstopdown_closure_30_t tmp = (cstopdown_closure_30_t) safe_malloc(sizeof(struct cstopdown_closure_30_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_30(cstopdown_funtype_22_t closure){
        cstopdown_closure_30_t x = (cstopdown_closure_30_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_28(x->fvar_1);
         release_cstopdown_funtype_28(x->fvar_2);
         release_cstopdown_funtype_29(x->fvar_3);
         release_cstopdown_funtype_29(x->fvar_4);
         release_cstopdown_funtype_28(x->fvar_5);
         release_cstopdown_funtype_27(x->fvar_6);
         release_cstopdown_funtype_22(x->fvar_7);
         release_cstopdown_funtype_22(x->fvar_8);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_30_t copy_cstopdown_closure_30(cstopdown_closure_30_t x){
        cstopdown_closure_30_t y = new_cstopdown_closure_30();
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
            cstopdown_funtype_22_htbl_t new_htbl = (cstopdown_funtype_22_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_22_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_22_hashentry_t * new_data = (cstopdown_funtype_22_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_22_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_22_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown__ent_adt_t new_cstopdown__ent_adt(void){
        cstopdown__ent_adt_t tmp = (cstopdown__ent_adt_t) safe_malloc(sizeof(struct cstopdown__ent_adt_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown__ent_adt(cstopdown__ent_adt_t x){
switch (x->cstopdown__ent_adt_index) {
case 0:  release_cstopdown__fail((cstopdown__fail_t) x); break;
case 3:  release_cstopdown__good((cstopdown__good_t) x); break;
case 4:  release_cstopdown__push((cstopdown__push_t) x); break;
}}

void release_cstopdown__ent_adt_ptr(pointer_t x, type_actual_t T){
        release_cstopdown__ent_adt((cstopdown__ent_adt_t)x);
}

cstopdown__ent_adt_t copy_cstopdown__ent_adt(cstopdown__ent_adt_t x){
        cstopdown__ent_adt_t y = new_cstopdown__ent_adt();
        y->cstopdown__ent_adt_index = (uint8_t)x->cstopdown__ent_adt_index;
        y->count = 1;
        return y;}

bool_t equal_cstopdown__ent_adt(cstopdown__ent_adt_t x, cstopdown__ent_adt_t y){
        bool_t tmp = x->cstopdown__ent_adt_index == y->cstopdown__ent_adt_index;
        switch  (x->cstopdown__ent_adt_index) {
                case 0: tmp = tmp && equal_cstopdown__fail((cstopdown__fail_t) x, (cstopdown__fail_t) y); break;
                case 3: tmp = tmp && equal_cstopdown__good((cstopdown__good_t) x, (cstopdown__good_t) y); break;
                case 4: tmp = tmp && equal_cstopdown__push((cstopdown__push_t) x, (cstopdown__push_t) y); break;
        }
        return tmp;
}

char * json_cstopdown__ent_adt(cstopdown__ent_adt_t x){
        char * tmp = safe_malloc(24); sprintf(tmp, "{ constructor = %u", x->cstopdown__ent_adt_index);
        switch  (x->cstopdown__ent_adt_index) {
                case 0: tmp = safe_strcat(tmp, json_cstopdown__fail((cstopdown__fail_t) x)); break;
                case 3: tmp = safe_strcat(tmp, json_cstopdown__good((cstopdown__good_t) x)); break;
                case 4: tmp = safe_strcat(tmp, json_cstopdown__push((cstopdown__push_t) x)); break;
        };
        tmp = safe_strcat(tmp, " }");
        return tmp;
}

bool_t equal_cstopdown__ent_adt_ptr(pointer_t x, pointer_t y, actual_cstopdown__ent_adt_t T){
        return equal_cstopdown__ent_adt((cstopdown__ent_adt_t)x, (cstopdown__ent_adt_t)y);
}

char * json_cstopdown__ent_adt_ptr(pointer_t x, actual_cstopdown__ent_adt_t T){
        return json_cstopdown__ent_adt((cstopdown__ent_adt_t)x);
}

cstopdown__ent_adt_t update_cstopdown__ent_adt_cstopdown__ent_adt_index(cstopdown__ent_adt_t x, uint8_t v){
        cstopdown__ent_adt_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__ent_adt(x); x->count--;};
        y->cstopdown__ent_adt_index = (uint8_t)v;
        return y;}




cstopdown__fail_t new_cstopdown__fail(void){
        cstopdown__fail_t tmp = (cstopdown__fail_t) safe_malloc(sizeof(struct cstopdown__fail_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown__fail(cstopdown__fail_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown__fail_ptr(pointer_t x, type_actual_t T){
        release_cstopdown__fail((cstopdown__fail_t)x);
}

cstopdown__fail_t copy_cstopdown__fail(cstopdown__fail_t x){
        cstopdown__fail_t y = new_cstopdown__fail();
        y->cstopdown__ent_adt_index = (uint8_t)x->cstopdown__ent_adt_index;
        y->dep = (uint64_t)x->dep;
        y->count = 1;
        return y;}

bool_t equal_cstopdown__fail(cstopdown__fail_t x, cstopdown__fail_t y){
        bool_t tmp = true;
        tmp = tmp && x->cstopdown__ent_adt_index == y->cstopdown__ent_adt_index;
        tmp = tmp && x->dep == y->dep;
        return tmp;}

char * json_cstopdown__fail(cstopdown__fail_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"cstopdown__ent_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->cstopdown__ent_adt_index));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"dep\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->dep));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown__fail_ptr(pointer_t x, pointer_t y, actual_cstopdown__fail_t T){
        return equal_cstopdown__fail((cstopdown__fail_t)x, (cstopdown__fail_t)y);
}

char * json_cstopdown__fail_ptr(pointer_t x, actual_cstopdown__fail_t T){
        return json_cstopdown__fail((cstopdown__fail_t)x);
}

cstopdown__fail_t update_cstopdown__fail_cstopdown__ent_adt_index(cstopdown__fail_t x, uint8_t v){
        cstopdown__fail_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__fail(x); x->count--;};
        y->cstopdown__ent_adt_index = (uint8_t)v;
        return y;}

cstopdown__fail_t update_cstopdown__fail_dep(cstopdown__fail_t x, uint64_t v){
        cstopdown__fail_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__fail(x); x->count--;};
        y->dep = (uint64_t)v;
        return y;}




cstopdown__good_t new_cstopdown__good(void){
        cstopdown__good_t tmp = (cstopdown__good_t) safe_malloc(sizeof(struct cstopdown__good_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown__good(cstopdown__good_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown__good_ptr(pointer_t x, type_actual_t T){
        release_cstopdown__good((cstopdown__good_t)x);
}

cstopdown__good_t copy_cstopdown__good(cstopdown__good_t x){
        cstopdown__good_t y = new_cstopdown__good();
        y->cstopdown__ent_adt_index = (uint8_t)x->cstopdown__ent_adt_index;
        y->dep = (uint64_t)x->dep;
        y->span = (uint32_t)x->span;
        y->count = 1;
        return y;}

bool_t equal_cstopdown__good(cstopdown__good_t x, cstopdown__good_t y){
        bool_t tmp = true;
        tmp = tmp && x->cstopdown__ent_adt_index == y->cstopdown__ent_adt_index;
        tmp = tmp && x->dep == y->dep;
        tmp = tmp && x->span == y->span;
        return tmp;}

char * json_cstopdown__good(cstopdown__good_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"cstopdown__ent_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->cstopdown__ent_adt_index));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"dep\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->dep));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"span\" : ");
        tmp[2] = safe_strcat(fld2, json_uint32(x->span));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown__good_ptr(pointer_t x, pointer_t y, actual_cstopdown__good_t T){
        return equal_cstopdown__good((cstopdown__good_t)x, (cstopdown__good_t)y);
}

char * json_cstopdown__good_ptr(pointer_t x, actual_cstopdown__good_t T){
        return json_cstopdown__good((cstopdown__good_t)x);
}

cstopdown__good_t update_cstopdown__good_cstopdown__ent_adt_index(cstopdown__good_t x, uint8_t v){
        cstopdown__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__good(x); x->count--;};
        y->cstopdown__ent_adt_index = (uint8_t)v;
        return y;}

cstopdown__good_t update_cstopdown__good_dep(cstopdown__good_t x, uint64_t v){
        cstopdown__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__good(x); x->count--;};
        y->dep = (uint64_t)v;
        return y;}

cstopdown__good_t update_cstopdown__good_span(cstopdown__good_t x, uint32_t v){
        cstopdown__good_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__good(x); x->count--;};
        y->span = (uint32_t)v;
        return y;}




cstopdown__push_t new_cstopdown__push(void){
        cstopdown__push_t tmp = (cstopdown__push_t) safe_malloc(sizeof(struct cstopdown__push_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown__push(cstopdown__push_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown__push_ptr(pointer_t x, type_actual_t T){
        release_cstopdown__push((cstopdown__push_t)x);
}

cstopdown__push_t copy_cstopdown__push(cstopdown__push_t x){
        cstopdown__push_t y = new_cstopdown__push();
        y->cstopdown__ent_adt_index = (uint8_t)x->cstopdown__ent_adt_index;
        y->pos = (uint32_t)x->pos;
        y->nt = (uint8_t)x->nt;
        y->count = 1;
        return y;}

bool_t equal_cstopdown__push(cstopdown__push_t x, cstopdown__push_t y){
        bool_t tmp = true;
        tmp = tmp && x->cstopdown__ent_adt_index == y->cstopdown__ent_adt_index;
        tmp = tmp && x->pos == y->pos;
        tmp = tmp && x->nt == y->nt;
        return tmp;}

char * json_cstopdown__push(cstopdown__push_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(36);
         sprintf(fld0, "\"cstopdown__ent_adt_index\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->cstopdown__ent_adt_index));
        char * fld1 = safe_malloc(15);
         sprintf(fld1, "\"pos\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->pos));
        char * fld2 = safe_malloc(14);
         sprintf(fld2, "\"nt\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->nt));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown__push_ptr(pointer_t x, pointer_t y, actual_cstopdown__push_t T){
        return equal_cstopdown__push((cstopdown__push_t)x, (cstopdown__push_t)y);
}

char * json_cstopdown__push_ptr(pointer_t x, actual_cstopdown__push_t T){
        return json_cstopdown__push((cstopdown__push_t)x);
}

cstopdown__push_t update_cstopdown__push_cstopdown__ent_adt_index(cstopdown__push_t x, uint8_t v){
        cstopdown__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__push(x); x->count--;};
        y->cstopdown__ent_adt_index = (uint8_t)v;
        return y;}

cstopdown__push_t update_cstopdown__push_pos(cstopdown__push_t x, uint32_t v){
        cstopdown__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__push(x); x->count--;};
        y->pos = (uint32_t)v;
        return y;}

cstopdown__push_t update_cstopdown__push_nt(cstopdown__push_t x, uint8_t v){
        cstopdown__push_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown__push(x); x->count--;};
        y->nt = (uint8_t)v;
        return y;}



void release_cstopdown_funtype_35(cstopdown_funtype_35_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_35_t copy_cstopdown_funtype_35(cstopdown_funtype_35_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_35(cstopdown_funtype_35_t x, cstopdown_funtype_35_t y){
        return false;}

char* json_cstopdown_funtype_35(cstopdown_funtype_35_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_35\""); return result;}

void release_cstopdown_funtype_36(cstopdown_funtype_36_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_36_t copy_cstopdown_funtype_36(cstopdown_funtype_36_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_36(cstopdown_funtype_36_t x, cstopdown_funtype_36_t y){
        return false;}

char* json_cstopdown_funtype_36(cstopdown_funtype_36_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_36\""); return result;}

void release_cstopdown_funtype_37(cstopdown_funtype_37_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_37_t copy_cstopdown_funtype_37(cstopdown_funtype_37_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdown_funtype_37(cstopdown_funtype_37_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdown_funtype_37_hashentry_t data = htbl->data[hashindex];
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

cstopdown_funtype_37_t dupdate_cstopdown_funtype_37(cstopdown_funtype_37_t a, uint64_t i, mpz_ptr_t v){
        cstopdown_funtype_37_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdown_funtype_37_htbl_t)safe_malloc(sizeof(struct cstopdown_funtype_37_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdown_funtype_37_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdown_funtype_37_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdown_funtype_37_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdown_funtype_37_hashentry_t * new_data = (cstopdown_funtype_37_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdown_funtype_37_hashentry_s));
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
        uint32_t hashindex = lookup_cstopdown_funtype_37(htbl, i, ihash);
        cstopdown_funtype_37_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; mpz_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpz_ptr_t tempvalue;mpz_mk_set(tempvalue, htbl->data[hashindex].value);mpz_set(htbl->data[hashindex].value, v);};
        return a;

}

cstopdown_funtype_37_t update_cstopdown_funtype_37(cstopdown_funtype_37_t a, uint64_t i, mpz_ptr_t v){
        if (a->count == 1){
                return dupdate_cstopdown_funtype_37(a, i, v);
            } else {
                cstopdown_funtype_37_t x = copy_cstopdown_funtype_37(a);
                a->count--;
                return dupdate_cstopdown_funtype_37(x, i, v);
            }}

bool_t equal_cstopdown_funtype_37(cstopdown_funtype_37_t x, cstopdown_funtype_37_t y){
        return false;}

char* json_cstopdown_funtype_37(cstopdown_funtype_37_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_37\""); return result;}


cstopdown_record_38_t new_cstopdown_record_38(void){
        cstopdown_record_38_t tmp = (cstopdown_record_38_t) safe_malloc(sizeof(struct cstopdown_record_38_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_38(cstopdown_record_38_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_38_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_38((cstopdown_record_38_t)x);
}

cstopdown_record_38_t copy_cstopdown_record_38(cstopdown_record_38_t x){
        cstopdown_record_38_t y = new_cstopdown_record_38();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_38(cstopdown_record_38_t x, cstopdown_record_38_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

char * json_cstopdown_record_38(cstopdown_record_38_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint64(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_38_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_38_t T){
        return equal_cstopdown_record_38((cstopdown_record_38_t)x, (cstopdown_record_38_t)y);
}

char * json_cstopdown_record_38_ptr(pointer_t x, actual_cstopdown_record_38_t T){
        return json_cstopdown_record_38((cstopdown_record_38_t)x);
}

cstopdown_record_38_t update_cstopdown_record_38_project_1(cstopdown_record_38_t x, uint64_t v){
        cstopdown_record_38_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_38(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

cstopdown_record_38_t update_cstopdown_record_38_project_2(cstopdown_record_38_t x, uint32_t v){
        cstopdown_record_38_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_38(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}



void release_cstopdown_funtype_39(cstopdown_funtype_39_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_39_t copy_cstopdown_funtype_39(cstopdown_funtype_39_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_39(cstopdown_funtype_39_t x, cstopdown_funtype_39_t y){
        return false;}

char* json_cstopdown_funtype_39(cstopdown_funtype_39_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_39\""); return result;}


cstopdown_record_40_t new_cstopdown_record_40(void){
        cstopdown_record_40_t tmp = (cstopdown_record_40_t) safe_malloc(sizeof(struct cstopdown_record_40_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_40(cstopdown_record_40_t x){
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_40_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_40((cstopdown_record_40_t)x);
}

cstopdown_record_40_t copy_cstopdown_record_40(cstopdown_record_40_t x){
        cstopdown_record_40_t y = new_cstopdown_record_40();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_40(cstopdown_record_40_t x, cstopdown_record_40_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        return tmp;}

char * json_cstopdown_record_40(cstopdown_record_40_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_40_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_40_t T){
        return equal_cstopdown_record_40((cstopdown_record_40_t)x, (cstopdown_record_40_t)y);
}

char * json_cstopdown_record_40_ptr(pointer_t x, actual_cstopdown_record_40_t T){
        return json_cstopdown_record_40((cstopdown_record_40_t)x);
}

cstopdown_record_40_t update_cstopdown_record_40_project_1(cstopdown_record_40_t x, uint32_t v){
        cstopdown_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_40(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

cstopdown_record_40_t update_cstopdown_record_40_project_2(cstopdown_record_40_t x, uint8_t v){
        cstopdown_record_40_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_40(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}



void release_cstopdown_funtype_41(cstopdown_funtype_41_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_41_t copy_cstopdown_funtype_41(cstopdown_funtype_41_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_41(cstopdown_funtype_41_t x, cstopdown_funtype_41_t y){
        return false;}

char* json_cstopdown_funtype_41(cstopdown_funtype_41_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_41\""); return result;}


mpz_ptr_t f_cstopdown_closure_42(struct cstopdown_closure_42_s * closure, cstopdown__ent_adt_t bvar){
        mpz_ptr_t result = h_cstopdown_closure_42(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

mpz_ptr_t m_cstopdown_closure_42(struct cstopdown_closure_42_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_42(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern mpz_ptr_t h_cstopdown_closure_42(cstopdown__ent_adt_t ivar_10, cstopdown_funtype_39_t ivar_5, cstopdown_funtype_41_t ivar_7, mpz_ptr_t ivar_4, mpz_ptr_t ivar_3, cstopdown_funtype_37_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_39;
        ivar_10->count++;
        ivar_39 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_10);
        if (ivar_39){ 
             uint64_t ivar_30;
             ivar_30 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_10);
             mpz_mk_set(result, ivar_1->ftbl->fptr(ivar_1, ivar_30));
} else {
        
             bool_t ivar_43;
             ivar_10->count++;
             ivar_43 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_10);
             if (ivar_43){  
           release_cstopdown__ent_adt(ivar_10);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_3);
} else {
             
           bool_t ivar_47;
           ivar_10->count++;
           ivar_47 = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_10);
           if (ivar_47){   
           release_cstopdown__ent_adt(ivar_10);
           //copying to mpz from mpz;
           mpz_mk_set(result, ivar_4);
} else {
           
           bool_t ivar_66;
           ivar_10->count++;
           ivar_66 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_10);
           if (ivar_66){    
            uint64_t ivar_51;
            ivar_10->count++;
            ivar_51 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_10);
            uint32_t ivar_52;
            ivar_52 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_10);
            mpz_mk_set(result, ivar_5->ftbl->mptr(ivar_5, ivar_51, ivar_52));
} else {
           
            uint32_t ivar_70;
            ivar_10->count++;
            ivar_70 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_10);
            uint8_t ivar_71;
            ivar_71 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_10);
            mpz_mk_set(result, ivar_7->ftbl->mptr(ivar_7, ivar_70, ivar_71));
};
};
};
};

        return result;
}

cstopdown_closure_42_t new_cstopdown_closure_42(void){
        static struct cstopdown_funtype_36_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(cstopdown_funtype_36_t, cstopdown__ent_adt_t))&f_cstopdown_closure_42, .mptr = (mpz_ptr_t (*)(cstopdown_funtype_36_t, cstopdown__ent_adt_t))&m_cstopdown_closure_42, .rptr =  (void (*)(cstopdown_funtype_36_t))&release_cstopdown_closure_42, .cptr = (cstopdown_funtype_36_t (*)(cstopdown_funtype_36_t))&copy_cstopdown_closure_42};
        cstopdown_closure_42_t tmp = (cstopdown_closure_42_t) safe_malloc(sizeof(struct cstopdown_closure_42_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        mpz_init(tmp->fvar_3);
        mpz_init(tmp->fvar_4);
        return tmp;}

void release_cstopdown_closure_42(cstopdown_funtype_36_t closure){
        cstopdown_closure_42_t x = (cstopdown_closure_42_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_39(x->fvar_1);
         release_cstopdown_funtype_41(x->fvar_2);
         release_cstopdown_funtype_37(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_42_t copy_cstopdown_closure_42(cstopdown_closure_42_t x){
        cstopdown_closure_42_t y = new_cstopdown_closure_42();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        mpz_set(y->fvar_3, x->fvar_3);
        mpz_set(y->fvar_4, x->fvar_4);
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_36_htbl_t new_htbl = (cstopdown_funtype_36_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_36_hashentry_t * new_data = (cstopdown_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_record_43_t new_cstopdown_record_43(void){
        cstopdown_record_43_t tmp = (cstopdown_record_43_t) safe_malloc(sizeof(struct cstopdown_record_43_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_43(cstopdown_record_43_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown__ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_43_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_43((cstopdown_record_43_t)x);
}

cstopdown_record_43_t copy_cstopdown_record_43(cstopdown_record_43_t x){
        cstopdown_record_43_t y = new_cstopdown_record_43();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_43(cstopdown_record_43_t x, cstopdown_record_43_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && equal_cstopdown__ent_adt(x->project_2, y->project_2);
        return tmp;}

char * json_cstopdown_record_43(cstopdown_record_43_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint64(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_cstopdown__ent_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_43_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_43_t T){
        return equal_cstopdown_record_43((cstopdown_record_43_t)x, (cstopdown_record_43_t)y);
}

char * json_cstopdown_record_43_ptr(pointer_t x, actual_cstopdown_record_43_t T){
        return json_cstopdown_record_43((cstopdown_record_43_t)x);
}

cstopdown_record_43_t update_cstopdown_record_43_project_1(cstopdown_record_43_t x, uint64_t v){
        cstopdown_record_43_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_43(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

cstopdown_record_43_t update_cstopdown_record_43_project_2(cstopdown_record_43_t x, cstopdown__ent_adt_t v){
        cstopdown_record_43_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_cstopdown__ent_adt(x->project_2);};}
        else {y = copy_cstopdown_record_43(x); x->count--; y->project_2->count--;};
        y->project_2 = (cstopdown__ent_adt_t)v;
        return y;}



void release_cstopdown_funtype_44(cstopdown_funtype_44_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_44_t copy_cstopdown_funtype_44(cstopdown_funtype_44_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_44(cstopdown_funtype_44_t x, cstopdown_funtype_44_t y){
        return false;}

char* json_cstopdown_funtype_44(cstopdown_funtype_44_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_44\""); return result;}


cstopdown_record_45_t new_cstopdown_record_45(void){
        cstopdown_record_45_t tmp = (cstopdown_record_45_t) safe_malloc(sizeof(struct cstopdown_record_45_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_45(cstopdown_record_45_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown__ent_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_45_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_45((cstopdown_record_45_t)x);
}

cstopdown_record_45_t copy_cstopdown_record_45(cstopdown_record_45_t x){
        cstopdown_record_45_t y = new_cstopdown_record_45();
        y->project_1 = (uint64_t)x->project_1;
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_45(cstopdown_record_45_t x, cstopdown_record_45_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_cstopdown__ent_adt(x->project_3, y->project_3);
        return tmp;}

char * json_cstopdown_record_45(cstopdown_record_45_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint64(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_cstopdown__ent_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_45_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_45_t T){
        return equal_cstopdown_record_45((cstopdown_record_45_t)x, (cstopdown_record_45_t)y);
}

char * json_cstopdown_record_45_ptr(pointer_t x, actual_cstopdown_record_45_t T){
        return json_cstopdown_record_45((cstopdown_record_45_t)x);
}

cstopdown_record_45_t update_cstopdown_record_45_project_1(cstopdown_record_45_t x, uint64_t v){
        cstopdown_record_45_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_45(x); x->count--;};
        y->project_1 = (uint64_t)v;
        return y;}

cstopdown_record_45_t update_cstopdown_record_45_project_2(cstopdown_record_45_t x, uint32_t v){
        cstopdown_record_45_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_45(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

cstopdown_record_45_t update_cstopdown_record_45_project_3(cstopdown_record_45_t x, cstopdown__ent_adt_t v){
        cstopdown_record_45_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_cstopdown__ent_adt(x->project_3);};}
        else {y = copy_cstopdown_record_45(x); x->count--; y->project_3->count--;};
        y->project_3 = (cstopdown__ent_adt_t)v;
        return y;}



void release_cstopdown_funtype_46(cstopdown_funtype_46_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_46_t copy_cstopdown_funtype_46(cstopdown_funtype_46_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_46(cstopdown_funtype_46_t x, cstopdown_funtype_46_t y){
        return false;}

char* json_cstopdown_funtype_46(cstopdown_funtype_46_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_46\""); return result;}


cstopdown_record_47_t new_cstopdown_record_47(void){
        cstopdown_record_47_t tmp = (cstopdown_record_47_t) safe_malloc(sizeof(struct cstopdown_record_47_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_47(cstopdown_record_47_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown__ent_adt(x->project_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_47_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_47((cstopdown_record_47_t)x);
}

cstopdown_record_47_t copy_cstopdown_record_47(cstopdown_record_47_t x){
        cstopdown_record_47_t y = new_cstopdown_record_47();
        y->project_1 = (uint32_t)x->project_1;
        y->project_2 = (uint8_t)x->project_2;
        y->project_3 = x->project_3;
        if (y->project_3 != NULL){y->project_3->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_47(cstopdown_record_47_t x, cstopdown_record_47_t y){
        bool_t tmp = true;
        tmp = tmp && x->project_1 == y->project_1;
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && equal_cstopdown__ent_adt(x->project_3, y->project_3);
        return tmp;}

char * json_cstopdown_record_47(cstopdown_record_47_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_uint32(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint8(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_cstopdown__ent_adt(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_47_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_47_t T){
        return equal_cstopdown_record_47((cstopdown_record_47_t)x, (cstopdown_record_47_t)y);
}

char * json_cstopdown_record_47_ptr(pointer_t x, actual_cstopdown_record_47_t T){
        return json_cstopdown_record_47((cstopdown_record_47_t)x);
}

cstopdown_record_47_t update_cstopdown_record_47_project_1(cstopdown_record_47_t x, uint32_t v){
        cstopdown_record_47_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_47(x); x->count--;};
        y->project_1 = (uint32_t)v;
        return y;}

cstopdown_record_47_t update_cstopdown_record_47_project_2(cstopdown_record_47_t x, uint8_t v){
        cstopdown_record_47_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_47(x); x->count--;};
        y->project_2 = (uint8_t)v;
        return y;}

cstopdown_record_47_t update_cstopdown_record_47_project_3(cstopdown_record_47_t x, cstopdown__ent_adt_t v){
        cstopdown_record_47_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_3 != NULL){release_cstopdown__ent_adt(x->project_3);};}
        else {y = copy_cstopdown_record_47(x); x->count--; y->project_3->count--;};
        y->project_3 = (cstopdown__ent_adt_t)v;
        return y;}



void release_cstopdown_funtype_48(cstopdown_funtype_48_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_48_t copy_cstopdown_funtype_48(cstopdown_funtype_48_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_48(cstopdown_funtype_48_t x, cstopdown_funtype_48_t y){
        return false;}

char* json_cstopdown_funtype_48(cstopdown_funtype_48_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_48\""); return result;}


mpz_ptr_t f_cstopdown_closure_49(struct cstopdown_closure_49_s * closure, cstopdown__ent_adt_t bvar){
        mpz_ptr_t result = h_cstopdown_closure_49(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

mpz_ptr_t m_cstopdown_closure_49(struct cstopdown_closure_49_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_49(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern mpz_ptr_t h_cstopdown_closure_49(cstopdown__ent_adt_t ivar_12, cstopdown_funtype_46_t ivar_7, cstopdown_funtype_48_t ivar_9, cstopdown_funtype_36_t ivar_5, cstopdown_funtype_36_t ivar_3, cstopdown_funtype_44_t ivar_1){
        mpz_ptr_t result;
        bool_t ivar_45;
        ivar_12->count++;
        ivar_45 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_12);
        if (ivar_45){ 
             uint64_t ivar_34;
             ivar_12->count++;
             ivar_34 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_12);
             mpz_mk_set(result, ivar_1->ftbl->mptr(ivar_1, ivar_34, ivar_12));
} else {
        
             bool_t ivar_54;
             ivar_12->count++;
             ivar_54 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_12);
             if (ivar_54){  
           mpz_mk_set(result, ivar_3->ftbl->fptr(ivar_3, ivar_12));
} else {
             
           bool_t ivar_63;
           ivar_12->count++;
           ivar_63 = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_12);
           if (ivar_63){   
           mpz_mk_set(result, ivar_5->ftbl->fptr(ivar_5, ivar_12));
} else {
           
           bool_t ivar_84;
           ivar_12->count++;
           ivar_84 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_12);
           if (ivar_84){    
            uint64_t ivar_67;
            ivar_12->count++;
            ivar_67 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_12);
            uint32_t ivar_68;
            ivar_12->count++;
            ivar_68 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_12);
            mpz_mk_set(result, ivar_7->ftbl->mptr(ivar_7, ivar_67, ivar_68, ivar_12));
} else {
           
            uint32_t ivar_88;
            ivar_12->count++;
            ivar_88 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_12);
            uint8_t ivar_89;
            ivar_12->count++;
            ivar_89 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_12);
            mpz_mk_set(result, ivar_9->ftbl->mptr(ivar_9, ivar_88, ivar_89, ivar_12));
};
};
};
};

        return result;
}

cstopdown_closure_49_t new_cstopdown_closure_49(void){
        static struct cstopdown_funtype_36_ftbl_s ftbl = {.fptr = (mpz_ptr_t (*)(cstopdown_funtype_36_t, cstopdown__ent_adt_t))&f_cstopdown_closure_49, .mptr = (mpz_ptr_t (*)(cstopdown_funtype_36_t, cstopdown__ent_adt_t))&m_cstopdown_closure_49, .rptr =  (void (*)(cstopdown_funtype_36_t))&release_cstopdown_closure_49, .cptr = (cstopdown_funtype_36_t (*)(cstopdown_funtype_36_t))&copy_cstopdown_closure_49};
        cstopdown_closure_49_t tmp = (cstopdown_closure_49_t) safe_malloc(sizeof(struct cstopdown_closure_49_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_49(cstopdown_funtype_36_t closure){
        cstopdown_closure_49_t x = (cstopdown_closure_49_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_46(x->fvar_1);
         release_cstopdown_funtype_48(x->fvar_2);
         release_cstopdown_funtype_36(x->fvar_3);
         release_cstopdown_funtype_36(x->fvar_4);
         release_cstopdown_funtype_44(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_49_t copy_cstopdown_closure_49(cstopdown_closure_49_t x){
        cstopdown_closure_49_t y = new_cstopdown_closure_49();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_36_htbl_t new_htbl = (cstopdown_funtype_36_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_36_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_36_hashentry_t * new_data = (cstopdown_funtype_36_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_36_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_36_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_50(cstopdown_funtype_50_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_50_t copy_cstopdown_funtype_50(cstopdown_funtype_50_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_50(cstopdown_funtype_50_t x, cstopdown_funtype_50_t y){
        return false;}

char* json_cstopdown_funtype_50(cstopdown_funtype_50_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_50\""); return result;}

void release_cstopdown_funtype_51(cstopdown_funtype_51_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_51_t copy_cstopdown_funtype_51(cstopdown_funtype_51_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdown_funtype_51(cstopdown_funtype_51_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdown_funtype_51_hashentry_t data = htbl->data[hashindex];
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

cstopdown_funtype_51_t dupdate_cstopdown_funtype_51(cstopdown_funtype_51_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v){
        cstopdown_funtype_51_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdown_funtype_51_htbl_t)safe_malloc(sizeof(struct cstopdown_funtype_51_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdown_funtype_51_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdown_funtype_51_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdown_funtype_51_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdown_funtype_51_hashentry_t * new_data = (cstopdown_funtype_51_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdown_funtype_51_hashentry_s));
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
        uint32_t hashindex = lookup_cstopdown_funtype_51(htbl, i, ihash);
        cstopdown_funtype_51_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v; htbl->num_entries++;}
            else {ordstruct_adt__ordstruct_adt_t tempvalue;tempvalue = (ordstruct_adt__ordstruct_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (ordstruct_adt__ordstruct_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_ordstruct_adt__ordstruct_adt(tempvalue);};
        return a;

}

cstopdown_funtype_51_t update_cstopdown_funtype_51(cstopdown_funtype_51_t a, uint64_t i, ordstruct_adt__ordstruct_adt_t v){
        if (a->count == 1){
                return dupdate_cstopdown_funtype_51(a, i, v);
            } else {
                cstopdown_funtype_51_t x = copy_cstopdown_funtype_51(a);
                a->count--;
                return dupdate_cstopdown_funtype_51(x, i, v);
            }}

bool_t equal_cstopdown_funtype_51(cstopdown_funtype_51_t x, cstopdown_funtype_51_t y){
        return false;}

char* json_cstopdown_funtype_51(cstopdown_funtype_51_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_51\""); return result;}

void release_cstopdown_funtype_52(cstopdown_funtype_52_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_52_t copy_cstopdown_funtype_52(cstopdown_funtype_52_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_52(cstopdown_funtype_52_t x, cstopdown_funtype_52_t y){
        return false;}

char* json_cstopdown_funtype_52(cstopdown_funtype_52_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_52\""); return result;}

void release_cstopdown_funtype_53(cstopdown_funtype_53_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_53_t copy_cstopdown_funtype_53(cstopdown_funtype_53_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_53(cstopdown_funtype_53_t x, cstopdown_funtype_53_t y){
        return false;}

char* json_cstopdown_funtype_53(cstopdown_funtype_53_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_53\""); return result;}


ordstruct_adt__ordstruct_adt_t f_cstopdown_closure_54(struct cstopdown_closure_54_s * closure, cstopdown__ent_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_cstopdown_closure_54(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_cstopdown_closure_54(struct cstopdown_closure_54_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_54(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ordstruct_adt__ordstruct_adt_t h_cstopdown_closure_54(cstopdown__ent_adt_t ivar_10, cstopdown_funtype_52_t ivar_5, cstopdown_funtype_53_t ivar_7, ordstruct_adt__ordstruct_adt_t ivar_4, ordstruct_adt__ordstruct_adt_t ivar_3, cstopdown_funtype_51_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_39;
        ivar_10->count++;
        ivar_39 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_10);
        if (ivar_39){ 
             uint64_t ivar_30;
             ivar_30 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_10);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->fptr(ivar_1, ivar_30);
} else {
        
             bool_t ivar_43;
             ivar_10->count++;
             ivar_43 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_10);
             if (ivar_43){  
           release_cstopdown__ent_adt(ivar_10);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3;
           if (result != NULL) result->count++;
} else {
             
           bool_t ivar_47;
           ivar_10->count++;
           ivar_47 = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_10);
           if (ivar_47){   
           release_cstopdown__ent_adt(ivar_10);
           //copying to ordstruct_adt__ordstruct_adt from ordstruct_adt__ordstruct_adt;
           result = (ordstruct_adt__ordstruct_adt_t)ivar_4;
           if (result != NULL) result->count++;
} else {
           
           bool_t ivar_66;
           ivar_10->count++;
           ivar_66 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_10);
           if (ivar_66){    
            uint64_t ivar_51;
            ivar_10->count++;
            ivar_51 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_10);
            uint32_t ivar_52;
            ivar_52 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_10);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->mptr(ivar_5, ivar_51, ivar_52);
} else {
           
            uint32_t ivar_70;
            ivar_10->count++;
            ivar_70 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_10);
            uint8_t ivar_71;
            ivar_71 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_10);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_7->ftbl->mptr(ivar_7, ivar_70, ivar_71);
};
};
};
};

        return result;
}

cstopdown_closure_54_t new_cstopdown_closure_54(void){
        static struct cstopdown_funtype_50_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(cstopdown_funtype_50_t, cstopdown__ent_adt_t))&f_cstopdown_closure_54, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(cstopdown_funtype_50_t, cstopdown__ent_adt_t))&m_cstopdown_closure_54, .rptr =  (void (*)(cstopdown_funtype_50_t))&release_cstopdown_closure_54, .cptr = (cstopdown_funtype_50_t (*)(cstopdown_funtype_50_t))&copy_cstopdown_closure_54};
        cstopdown_closure_54_t tmp = (cstopdown_closure_54_t) safe_malloc(sizeof(struct cstopdown_closure_54_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_54(cstopdown_funtype_50_t closure){
        cstopdown_closure_54_t x = (cstopdown_closure_54_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_52(x->fvar_1);
         release_cstopdown_funtype_53(x->fvar_2);
         release_ordstruct_adt__ordstruct_adt(x->fvar_3);
         release_ordstruct_adt__ordstruct_adt(x->fvar_4);
         release_cstopdown_funtype_51(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_54_t copy_cstopdown_closure_54(cstopdown_closure_54_t x){
        cstopdown_closure_54_t y = new_cstopdown_closure_54();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_50_htbl_t new_htbl = (cstopdown_funtype_50_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_50_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_50_hashentry_t * new_data = (cstopdown_funtype_50_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_50_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_50_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_55(cstopdown_funtype_55_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_55_t copy_cstopdown_funtype_55(cstopdown_funtype_55_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_55(cstopdown_funtype_55_t x, cstopdown_funtype_55_t y){
        return false;}

char* json_cstopdown_funtype_55(cstopdown_funtype_55_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_55\""); return result;}

void release_cstopdown_funtype_56(cstopdown_funtype_56_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_56_t copy_cstopdown_funtype_56(cstopdown_funtype_56_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_56(cstopdown_funtype_56_t x, cstopdown_funtype_56_t y){
        return false;}

char* json_cstopdown_funtype_56(cstopdown_funtype_56_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_56\""); return result;}

void release_cstopdown_funtype_57(cstopdown_funtype_57_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_57_t copy_cstopdown_funtype_57(cstopdown_funtype_57_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_57(cstopdown_funtype_57_t x, cstopdown_funtype_57_t y){
        return false;}

char* json_cstopdown_funtype_57(cstopdown_funtype_57_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_57\""); return result;}


ordstruct_adt__ordstruct_adt_t f_cstopdown_closure_58(struct cstopdown_closure_58_s * closure, cstopdown__ent_adt_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_cstopdown_closure_58(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_cstopdown_closure_58(struct cstopdown_closure_58_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_58(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern ordstruct_adt__ordstruct_adt_t h_cstopdown_closure_58(cstopdown__ent_adt_t ivar_12, cstopdown_funtype_56_t ivar_7, cstopdown_funtype_57_t ivar_9, cstopdown_funtype_50_t ivar_5, cstopdown_funtype_50_t ivar_3, cstopdown_funtype_55_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        bool_t ivar_45;
        ivar_12->count++;
        ivar_45 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_12);
        if (ivar_45){ 
             uint64_t ivar_34;
             ivar_12->count++;
             ivar_34 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_12);
             result = (ordstruct_adt__ordstruct_adt_t)ivar_1->ftbl->mptr(ivar_1, ivar_34, ivar_12);
} else {
        
             bool_t ivar_54;
             ivar_12->count++;
             ivar_54 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_12);
             if (ivar_54){  
           result = (ordstruct_adt__ordstruct_adt_t)ivar_3->ftbl->fptr(ivar_3, ivar_12);
} else {
             
           bool_t ivar_63;
           ivar_12->count++;
           ivar_63 = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_12);
           if (ivar_63){   
           result = (ordstruct_adt__ordstruct_adt_t)ivar_5->ftbl->fptr(ivar_5, ivar_12);
} else {
           
           bool_t ivar_84;
           ivar_12->count++;
           ivar_84 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_12);
           if (ivar_84){    
            uint64_t ivar_67;
            ivar_12->count++;
            ivar_67 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_12);
            uint32_t ivar_68;
            ivar_12->count++;
            ivar_68 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_12);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_7->ftbl->mptr(ivar_7, ivar_67, ivar_68, ivar_12);
} else {
           
            uint32_t ivar_88;
            ivar_12->count++;
            ivar_88 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_12);
            uint8_t ivar_89;
            ivar_12->count++;
            ivar_89 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_12);
            result = (ordstruct_adt__ordstruct_adt_t)ivar_9->ftbl->mptr(ivar_9, ivar_88, ivar_89, ivar_12);
};
};
};
};

        return result;
}

cstopdown_closure_58_t new_cstopdown_closure_58(void){
        static struct cstopdown_funtype_50_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(cstopdown_funtype_50_t, cstopdown__ent_adt_t))&f_cstopdown_closure_58, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(cstopdown_funtype_50_t, cstopdown__ent_adt_t))&m_cstopdown_closure_58, .rptr =  (void (*)(cstopdown_funtype_50_t))&release_cstopdown_closure_58, .cptr = (cstopdown_funtype_50_t (*)(cstopdown_funtype_50_t))&copy_cstopdown_closure_58};
        cstopdown_closure_58_t tmp = (cstopdown_closure_58_t) safe_malloc(sizeof(struct cstopdown_closure_58_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_58(cstopdown_funtype_50_t closure){
        cstopdown_closure_58_t x = (cstopdown_closure_58_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_56(x->fvar_1);
         release_cstopdown_funtype_57(x->fvar_2);
         release_cstopdown_funtype_50(x->fvar_3);
         release_cstopdown_funtype_50(x->fvar_4);
         release_cstopdown_funtype_55(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_58_t copy_cstopdown_closure_58(cstopdown_closure_58_t x){
        cstopdown_closure_58_t y = new_cstopdown_closure_58();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_50_htbl_t new_htbl = (cstopdown_funtype_50_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_50_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_50_hashentry_t * new_data = (cstopdown_funtype_50_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_50_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_50_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_59(cstopdown_funtype_59_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_59_t copy_cstopdown_funtype_59(cstopdown_funtype_59_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_59(cstopdown_funtype_59_t x, cstopdown_funtype_59_t y){
        return false;}

char* json_cstopdown_funtype_59(cstopdown_funtype_59_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_59\""); return result;}


bool_t f_cstopdown_closure_60(struct cstopdown_closure_60_s * closure, cstopdown__ent_adt_t bvar){
        bool_t result = h_cstopdown_closure_60(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_cstopdown_closure_60(struct cstopdown_closure_60_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_60(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_cstopdown_closure_60(cstopdown__ent_adt_t ivar_4, uint32_t ivar_2, uint32_t ivar_1){
        bool_t result;
        mpq_ptr_t ivar_5;
        uint32_t ivar_8;
        ivar_8 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_4);
        mpz_t tmp51318;
        mpz_init(tmp51318);
        mpz_set_ui(tmp51318, (uint64_t)ivar_2);
        mpz_add_ui(tmp51318, tmp51318, (uint64_t)ivar_8);
        mpq_mk_set_z(ivar_5, tmp51318);
        mpz_clear(tmp51318);
        int64_t tmp51319 = mpq_cmp_ui(ivar_5, ivar_1, 1);
        result = (tmp51319 <= 0);

        return result;
}

cstopdown_closure_60_t new_cstopdown_closure_60(void){
        static struct cstopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&f_cstopdown_closure_60, .mptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&m_cstopdown_closure_60, .rptr =  (void (*)(cstopdown_funtype_59_t))&release_cstopdown_closure_60, .cptr = (cstopdown_funtype_59_t (*)(cstopdown_funtype_59_t))&copy_cstopdown_closure_60};
        cstopdown_closure_60_t tmp = (cstopdown_closure_60_t) safe_malloc(sizeof(struct cstopdown_closure_60_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_60(cstopdown_funtype_59_t closure){
        cstopdown_closure_60_t x = (cstopdown_closure_60_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_60_t copy_cstopdown_closure_60(cstopdown_closure_60_t x){
        cstopdown_closure_60_t y = new_cstopdown_closure_60();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            cstopdown_funtype_59_htbl_t new_htbl = (cstopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_59_hashentry_t * new_data = (cstopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_61(struct cstopdown_closure_61_s * closure, cstopdown__ent_adt_t bvar){
        bool_t result = h_cstopdown_closure_61(bvar, closure->fvar_1); 
        return result;}

bool_t m_cstopdown_closure_61(struct cstopdown_closure_61_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_61(bvar, closure->fvar_1);}

extern bool_t h_cstopdown_closure_61(cstopdown__ent_adt_t ivar_3, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_4;
        ivar_3->count++;
        ivar_4 = (bool_t)r_cstopdown__pushp((cstopdown__ent_adt_t)ivar_3);
        if (ivar_4){ 
             bool_t ivar_9;
             uint32_t ivar_11;
             ivar_3->count++;
             ivar_11 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_3);
             ivar_9 = (ivar_11 <= ivar_1);
             if (ivar_9){  
           uint8_t ivar_17;
           ivar_17 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_3);
           uint8_t ivar_18;
           ivar_18 = (uint8_t)cstopdown__num_non_terminals();
           result = (ivar_17 <= ivar_18);
} else {
             
           release_cstopdown__ent_adt(ivar_3);
           result = (bool_t) false;
};
} else {
        
             release_cstopdown__ent_adt(ivar_3);
             result = (bool_t) false;
};

        return result;
}

cstopdown_closure_61_t new_cstopdown_closure_61(void){
        static struct cstopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&f_cstopdown_closure_61, .mptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&m_cstopdown_closure_61, .rptr =  (void (*)(cstopdown_funtype_59_t))&release_cstopdown_closure_61, .cptr = (cstopdown_funtype_59_t (*)(cstopdown_funtype_59_t))&copy_cstopdown_closure_61};
        cstopdown_closure_61_t tmp = (cstopdown_closure_61_t) safe_malloc(sizeof(struct cstopdown_closure_61_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_61(cstopdown_funtype_59_t closure){
        cstopdown_closure_61_t x = (cstopdown_closure_61_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_61_t copy_cstopdown_closure_61(cstopdown_closure_61_t x){
        cstopdown_closure_61_t y = new_cstopdown_closure_61();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            cstopdown_funtype_59_htbl_t new_htbl = (cstopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_59_hashentry_t * new_data = (cstopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_62(struct cstopdown_closure_62_s * closure, cstopdown__ent_adt_t bvar){
        bool_t result = h_cstopdown_closure_62(bvar, closure->fvar_1); 
        return result;}

bool_t m_cstopdown_closure_62(struct cstopdown_closure_62_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_62(bvar, closure->fvar_1);}

extern bool_t h_cstopdown_closure_62(cstopdown__ent_adt_t ivar_3, uint32_t ivar_1){
        bool_t result;
        bool_t ivar_4;
        cstopdown_funtype_59_t ivar_9;
        ivar_9 = (cstopdown_funtype_59_t)cstopdown__good_push_entryp((uint32_t)ivar_1);
        ivar_3->count++;
        ivar_4 = (bool_t)ivar_9->ftbl->fptr(ivar_9, ivar_3);
        ivar_9->ftbl->rptr(ivar_9);
        if (ivar_4){ 
             uint8_t ivar_15;
             ivar_15 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_3);
             uint8_t ivar_16;
             ivar_16 = (uint8_t)cstopdown__num_non_terminals();
             result = (ivar_15 < ivar_16);
} else {
        
             release_cstopdown__ent_adt(ivar_3);
             result = (bool_t) false;
};

        return result;
}

cstopdown_closure_62_t new_cstopdown_closure_62(void){
        static struct cstopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&f_cstopdown_closure_62, .mptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&m_cstopdown_closure_62, .rptr =  (void (*)(cstopdown_funtype_59_t))&release_cstopdown_closure_62, .cptr = (cstopdown_funtype_59_t (*)(cstopdown_funtype_59_t))&copy_cstopdown_closure_62};
        cstopdown_closure_62_t tmp = (cstopdown_closure_62_t) safe_malloc(sizeof(struct cstopdown_closure_62_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_62(cstopdown_funtype_59_t closure){
        cstopdown_closure_62_t x = (cstopdown_closure_62_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_62_t copy_cstopdown_closure_62(cstopdown_closure_62_t x){
        cstopdown_closure_62_t y = new_cstopdown_closure_62();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            cstopdown_funtype_59_htbl_t new_htbl = (cstopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_59_hashentry_t * new_data = (cstopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_63(struct cstopdown_closure_63_s * closure, cstopdown__ent_adt_t bvar){
        bool_t result = h_cstopdown_closure_63(bvar, closure->fvar_1, closure->fvar_2); 
        return result;}

bool_t m_cstopdown_closure_63(struct cstopdown_closure_63_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_63(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_cstopdown_closure_63(cstopdown__ent_adt_t ivar_4, uint32_t ivar_1, uint32_t ivar_2){
        bool_t result;
        bool_t ivar_5;
        bool_t ivar_7;
        ivar_4->count++;
        ivar_7 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_4);
        if (ivar_7){ 
             cstopdown_funtype_59_t ivar_15;
             ivar_15 = (cstopdown_funtype_59_t)cstopdown__good_good_entryp((uint32_t)ivar_1, (uint32_t)ivar_2);
             ivar_4->count++;
             ivar_5 = (bool_t)ivar_15->ftbl->fptr(ivar_15, ivar_4);
             ivar_15->ftbl->rptr(ivar_15);
} else {
        
             ivar_5 = (bool_t) true;
};
        if (ivar_5){ 
             bool_t ivar_24;
             ivar_4->count++;
             ivar_24 = (bool_t)r_cstopdown__pushp((cstopdown__ent_adt_t)ivar_4);
             if (ivar_24){  
           cstopdown_funtype_59_t ivar_32;
           ivar_32 = (cstopdown_funtype_59_t)cstopdown__good_push_entryp((uint32_t)ivar_1);
           result = (bool_t)ivar_32->ftbl->fptr(ivar_32, ivar_4);
           ivar_32->ftbl->rptr(ivar_32);
} else {
             
           release_cstopdown__ent_adt(ivar_4);
           result = (bool_t) true;
};
} else {
        
             release_cstopdown__ent_adt(ivar_4);
             result = (bool_t) false;
};

        return result;
}

cstopdown_closure_63_t new_cstopdown_closure_63(void){
        static struct cstopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&f_cstopdown_closure_63, .mptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&m_cstopdown_closure_63, .rptr =  (void (*)(cstopdown_funtype_59_t))&release_cstopdown_closure_63, .cptr = (cstopdown_funtype_59_t (*)(cstopdown_funtype_59_t))&copy_cstopdown_closure_63};
        cstopdown_closure_63_t tmp = (cstopdown_closure_63_t) safe_malloc(sizeof(struct cstopdown_closure_63_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_63(cstopdown_funtype_59_t closure){
        cstopdown_closure_63_t x = (cstopdown_closure_63_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_63_t copy_cstopdown_closure_63(cstopdown_closure_63_t x){
        cstopdown_closure_63_t y = new_cstopdown_closure_63();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint32_t)x->fvar_2;
        if (x->htbl != NULL){
            cstopdown_funtype_59_htbl_t new_htbl = (cstopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_59_hashentry_t * new_data = (cstopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_64(cstopdown_funtype_64_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_64_t copy_cstopdown_funtype_64(cstopdown_funtype_64_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_64(cstopdown_funtype_64_t x, cstopdown_funtype_64_t y){
        return false;}

char* json_cstopdown_funtype_64(cstopdown_funtype_64_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_64\""); return result;}

void release_cstopdown_funtype_65(cstopdown_funtype_65_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_65_t copy_cstopdown_funtype_65(cstopdown_funtype_65_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdown_funtype_65(cstopdown_funtype_65_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdown_funtype_65_hashentry_t data = htbl->data[hashindex];
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

cstopdown_funtype_65_t dupdate_cstopdown_funtype_65(cstopdown_funtype_65_t a, uint8_t i, cstopdown__ent_adt_t v){
        cstopdown_funtype_65_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdown_funtype_65_htbl_t)safe_malloc(sizeof(struct cstopdown_funtype_65_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdown_funtype_65_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdown_funtype_65_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdown_funtype_65_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdown_funtype_65_hashentry_t * new_data = (cstopdown_funtype_65_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdown_funtype_65_hashentry_s));
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
                                new_data[new_loc].value = (cstopdown__ent_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_cstopdown_funtype_65(htbl, i, ihash);
        cstopdown_funtype_65_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (cstopdown__ent_adt_t)v; htbl->num_entries++;}
            else {cstopdown__ent_adt_t tempvalue;tempvalue = (cstopdown__ent_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (cstopdown__ent_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_cstopdown__ent_adt(tempvalue);};
        return a;

}

cstopdown_funtype_65_t update_cstopdown_funtype_65(cstopdown_funtype_65_t a, uint8_t i, cstopdown__ent_adt_t v){
        if (a->count == 1){
                return dupdate_cstopdown_funtype_65(a, i, v);
            } else {
                cstopdown_funtype_65_t x = copy_cstopdown_funtype_65(a);
                a->count--;
                return dupdate_cstopdown_funtype_65(x, i, v);
            }}

bool_t equal_cstopdown_funtype_65(cstopdown_funtype_65_t x, cstopdown_funtype_65_t y){
        return false;}

char* json_cstopdown_funtype_65(cstopdown_funtype_65_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_65\""); return result;}

void release_cstopdown_funtype_66(cstopdown_funtype_66_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_66_t copy_cstopdown_funtype_66(cstopdown_funtype_66_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdown_funtype_66(cstopdown_funtype_66_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdown_funtype_66_hashentry_t data = htbl->data[hashindex];
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

cstopdown_funtype_66_t dupdate_cstopdown_funtype_66(cstopdown_funtype_66_t a, uint32_t i, cstopdown_funtype_65_t v){
        cstopdown_funtype_66_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdown_funtype_66_htbl_t)safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdown_funtype_66_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdown_funtype_66_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdown_funtype_66_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdown_funtype_66_hashentry_s));
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
                                new_data[new_loc].value = (cstopdown_funtype_65_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, i, ihash);
        cstopdown_funtype_66_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (cstopdown_funtype_65_t)v; htbl->num_entries++;}
            else {cstopdown_funtype_65_t tempvalue;tempvalue = (cstopdown_funtype_65_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (cstopdown_funtype_65_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_cstopdown_funtype_65(tempvalue);};
        return a;

}

cstopdown_funtype_66_t update_cstopdown_funtype_66(cstopdown_funtype_66_t a, uint32_t i, cstopdown_funtype_65_t v){
        if (a->count == 1){
                return dupdate_cstopdown_funtype_66(a, i, v);
            } else {
                cstopdown_funtype_66_t x = copy_cstopdown_funtype_66(a);
                a->count--;
                return dupdate_cstopdown_funtype_66(x, i, v);
            }}

bool_t equal_cstopdown_funtype_66(cstopdown_funtype_66_t x, cstopdown_funtype_66_t y){
        return false;}

char* json_cstopdown_funtype_66(cstopdown_funtype_66_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_66\""); return result;}


bool_t f_cstopdown_closure_67(struct cstopdown_closure_67_s * closure, cstopdown_record_40_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_cstopdown_record_40(bvar);
        bool_t result = h_cstopdown_closure_67(bvar_1, bvar_2, closure->fvar_1); 
        return result;}

bool_t m_cstopdown_closure_67(struct cstopdown_closure_67_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_cstopdown_closure_67(bvar_1, bvar_2, closure->fvar_1);}

extern bool_t h_cstopdown_closure_67(uint32_t ivar_6, uint8_t ivar_7, cstopdown_funtype_66_t ivar_2){
        bool_t result;
        cstopdown__ent_adt_t ivar_22;
        cstopdown_funtype_65_t ivar_12;
        cstopdown_funtype_66_t ivar_18;
        //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
        ivar_18 = (cstopdown_funtype_66_t)ivar_2;
        if (ivar_18 != NULL) ivar_18->count++;
        uint32_t ivar_19;
        //copying to uint32 from uint32;
        ivar_19 = (uint32_t)ivar_6;
        ivar_12 = (cstopdown_funtype_65_t)ivar_18->ftbl->fptr(ivar_18, ivar_19);
        ivar_18->ftbl->rptr(ivar_18);
        ivar_22 = (cstopdown__ent_adt_t)ivar_12->ftbl->fptr(ivar_12, ivar_7);
        ivar_12->ftbl->rptr(ivar_12);
        result = (bool_t)r_cstopdown__pushp((cstopdown__ent_adt_t)ivar_22);

        return result;
}

cstopdown_closure_67_t new_cstopdown_closure_67(void){
        static struct cstopdown_funtype_64_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_64_t, cstopdown_record_40_t))&f_cstopdown_closure_67, .mptr = (bool_t (*)(cstopdown_funtype_64_t, uint32_t, uint8_t))&m_cstopdown_closure_67, .rptr =  (void (*)(cstopdown_funtype_64_t))&release_cstopdown_closure_67, .cptr = (cstopdown_funtype_64_t (*)(cstopdown_funtype_64_t))&copy_cstopdown_closure_67};
        cstopdown_closure_67_t tmp = (cstopdown_closure_67_t) safe_malloc(sizeof(struct cstopdown_closure_67_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_67(cstopdown_funtype_64_t closure){
        cstopdown_closure_67_t x = (cstopdown_closure_67_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_67_t copy_cstopdown_closure_67(cstopdown_closure_67_t x){
        cstopdown_closure_67_t y = new_cstopdown_closure_67();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_64_htbl_t new_htbl = (cstopdown_funtype_64_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_64_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_64_hashentry_t * new_data = (cstopdown_funtype_64_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_64_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_64_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_record_68_t new_cstopdown_record_68(void){
        cstopdown_record_68_t tmp = (cstopdown_record_68_t) safe_malloc(sizeof(struct cstopdown_record_68_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_68(cstopdown_record_68_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown__ent_adt(x->project_1);
         release_cstopdown__ent_adt(x->project_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_68_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_68((cstopdown_record_68_t)x);
}

cstopdown_record_68_t copy_cstopdown_record_68(cstopdown_record_68_t x){
        cstopdown_record_68_t y = new_cstopdown_record_68();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = x->project_2;
        if (y->project_2 != NULL){y->project_2->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_68(cstopdown_record_68_t x, cstopdown_record_68_t y){
        bool_t tmp = true;
        tmp = tmp && equal_cstopdown__ent_adt(x->project_1, y->project_1);
        tmp = tmp && equal_cstopdown__ent_adt(x->project_2, y->project_2);
        return tmp;}

char * json_cstopdown_record_68(cstopdown_record_68_t x){
        char * tmp[2]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_cstopdown__ent_adt(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_cstopdown__ent_adt(x->project_2));
         char * result = json_list_with_sep(tmp, 2,  '{', ',', '}');
         for (uint32_t i = 0; i < 2; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_68_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_68_t T){
        return equal_cstopdown_record_68((cstopdown_record_68_t)x, (cstopdown_record_68_t)y);
}

char * json_cstopdown_record_68_ptr(pointer_t x, actual_cstopdown_record_68_t T){
        return json_cstopdown_record_68((cstopdown_record_68_t)x);
}

cstopdown_record_68_t update_cstopdown_record_68_project_1(cstopdown_record_68_t x, cstopdown__ent_adt_t v){
        cstopdown_record_68_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_cstopdown__ent_adt(x->project_1);};}
        else {y = copy_cstopdown_record_68(x); x->count--; y->project_1->count--;};
        y->project_1 = (cstopdown__ent_adt_t)v;
        return y;}

cstopdown_record_68_t update_cstopdown_record_68_project_2(cstopdown_record_68_t x, cstopdown__ent_adt_t v){
        cstopdown_record_68_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_2 != NULL){release_cstopdown__ent_adt(x->project_2);};}
        else {y = copy_cstopdown_record_68(x); x->count--; y->project_2->count--;};
        y->project_2 = (cstopdown__ent_adt_t)v;
        return y;}



void release_cstopdown_funtype_69(cstopdown_funtype_69_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_69_t copy_cstopdown_funtype_69(cstopdown_funtype_69_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_69(cstopdown_funtype_69_t x, cstopdown_funtype_69_t y){
        return false;}

char* json_cstopdown_funtype_69(cstopdown_funtype_69_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_69\""); return result;}

void release_cstopdown__lang_spec(cstopdown__lang_spec_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown__lang_spec_t copy_cstopdown__lang_spec(cstopdown__lang_spec_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdown__lang_spec(cstopdown__lang_spec_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdown__lang_spec_hashentry_t data = htbl->data[hashindex];
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

cstopdown__lang_spec_t dupdate_cstopdown__lang_spec(cstopdown__lang_spec_t a, uint8_t i, cstopdown__peg_adt_t v){
        cstopdown__lang_spec_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdown__lang_spec_htbl_t)safe_malloc(sizeof(struct cstopdown__lang_spec_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdown__lang_spec_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdown__lang_spec_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdown__lang_spec_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdown__lang_spec_hashentry_t * new_data = (cstopdown__lang_spec_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdown__lang_spec_hashentry_s));
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
                                new_data[new_loc].value = (cstopdown__peg_adt_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_cstopdown__lang_spec(htbl, i, ihash);
        cstopdown__lang_spec_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (cstopdown__peg_adt_t)v; htbl->num_entries++;}
            else {cstopdown__peg_adt_t tempvalue;tempvalue = (cstopdown__peg_adt_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (cstopdown__peg_adt_t)v;if (v != NULL) v->count++;if (tempvalue != NULL)release_cstopdown__peg_adt(tempvalue);};
        return a;

}

cstopdown__lang_spec_t update_cstopdown__lang_spec(cstopdown__lang_spec_t a, uint8_t i, cstopdown__peg_adt_t v){
        if (a->count == 1){
                return dupdate_cstopdown__lang_spec(a, i, v);
            } else {
                cstopdown__lang_spec_t x = copy_cstopdown__lang_spec(a);
                a->count--;
                return dupdate_cstopdown__lang_spec(x, i, v);
            }}

bool_t equal_cstopdown__lang_spec(cstopdown__lang_spec_t x, cstopdown__lang_spec_t y){
        return false;}

char* json_cstopdown__lang_spec(cstopdown__lang_spec_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown__lang_spec\""); return result;}


bool_t f_cstopdown_closure_71(struct cstopdown_closure_71_s * closure, cstopdown_record_68_t bvar){
        cstopdown__ent_adt_t bvar_1;
        bvar_1 = (cstopdown__ent_adt_t)bvar->project_1;
        bvar->project_1->count++;
        cstopdown__ent_adt_t bvar_2;
        bvar_2 = (cstopdown__ent_adt_t)bvar->project_2;
        bvar->project_2->count++;
        release_cstopdown_record_68(bvar);
        bool_t result = h_cstopdown_closure_71(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2); 
        release_cstopdown__ent_adt(bvar_1);
        release_cstopdown__ent_adt(bvar_2);
        return result;}

bool_t m_cstopdown_closure_71(struct cstopdown_closure_71_s * closure, cstopdown__ent_adt_t bvar_1, cstopdown__ent_adt_t bvar_2){
        return h_cstopdown_closure_71(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2);}

extern bool_t h_cstopdown_closure_71(cstopdown__ent_adt_t ivar_7, cstopdown__ent_adt_t ivar_8, cstopdown_funtype_66_t ivar_3, cstopdown__lang_spec_t ivar_2){
        bool_t result;
        /* p1 */ uint32_t ivar_9;
        ivar_7->count++;
        ivar_9 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_7);
        /* nt1 */ uint8_t ivar_13;
        ivar_13 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_7);
        /* p2 */ uint32_t ivar_17;
        ivar_8->count++;
        ivar_17 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_8);
        /* nt2 */ uint8_t ivar_21;
        ivar_21 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_8);
        bool_t ivar_25;
        uint8_t ivar_28;
        ivar_28 = (uint8_t)cstopdown__num_non_terminals();
        ivar_25 = (ivar_13 >= ivar_28);
        if (ivar_25){ 
             result = (bool_t) true;
} else {
        
             cstopdown__peg_adt_t ivar_30;
             ivar_30 = (cstopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_13);
             bool_t ivar_100;
             ivar_30->count++;
             ivar_100 = (bool_t)r_cstopdown__concatp((cstopdown__peg_adt_t)ivar_30);
             if (ivar_100){  
           uint8_t ivar_35;
           ivar_30->count++;
           ivar_35 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_30);
           uint8_t ivar_36;
           ivar_36 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_30);
           bool_t ivar_43;
           bool_t ivar_45;
           ivar_45 = (ivar_17 == ivar_9);
           if (ivar_45){   
           ivar_43 = (ivar_21 == ivar_35);
} else {
           
           ivar_43 = (bool_t) false;
};
           if (ivar_43){   
           result = (bool_t) true;
} else {
           
           bool_t ivar_54;
           cstopdown__ent_adt_t ivar_70;
           cstopdown_funtype_65_t ivar_60;
           cstopdown_funtype_66_t ivar_66;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_66 = (cstopdown_funtype_66_t)ivar_3;
           if (ivar_66 != NULL) ivar_66->count++;
           uint32_t ivar_67;
           //copying to uint32 from uint32;
           ivar_67 = (uint32_t)ivar_9;
           ivar_60 = (cstopdown_funtype_65_t)ivar_66->ftbl->fptr(ivar_66, ivar_67);
           ivar_66->ftbl->rptr(ivar_66);
           ivar_70 = (cstopdown__ent_adt_t)ivar_60->ftbl->fptr(ivar_60, ivar_35);
           ivar_60->ftbl->rptr(ivar_60);
           ivar_54 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_70);
           if (ivar_54){    
            bool_t ivar_71;
            ivar_71 = (ivar_21 == ivar_36);
            if (ivar_71){     
             mpq_ptr_t ivar_77;
             uint32_t ivar_79;
             cstopdown__ent_adt_t ivar_94;
             cstopdown_funtype_65_t ivar_84;
             cstopdown_funtype_66_t ivar_90;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_90 = (cstopdown_funtype_66_t)ivar_3;
             if (ivar_90 != NULL) ivar_90->count++;
             uint32_t ivar_91;
             //copying to uint32 from uint32;
             ivar_91 = (uint32_t)ivar_9;
             ivar_84 = (cstopdown_funtype_65_t)ivar_90->ftbl->fptr(ivar_90, ivar_91);
             ivar_90->ftbl->rptr(ivar_90);
             ivar_94 = (cstopdown__ent_adt_t)ivar_84->ftbl->fptr(ivar_84, ivar_35);
             ivar_84->ftbl->rptr(ivar_84);
             ivar_79 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_94);
             mpz_t tmp51336;
             mpz_init(tmp51336);
             mpz_set_ui(tmp51336, (uint64_t)ivar_9);
             mpz_add_ui(tmp51336, tmp51336, (uint64_t)ivar_79);
             mpq_mk_set_z(ivar_77, tmp51336);
             mpz_clear(tmp51336);
             int64_t tmp51337 = mpq_cmp_ui(ivar_77, ivar_17, 1);
             result = (tmp51337 == 0);
} else {
            
             result = (bool_t) false;
};
} else {
           
            result = (bool_t) false;
};
};
} else {
             
           bool_t ivar_151;
           ivar_30->count++;
           ivar_151 = (bool_t)r_cstopdown__orp((cstopdown__peg_adt_t)ivar_30);
           if (ivar_151){   
           uint8_t ivar_104;
           ivar_30->count++;
           ivar_104 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_30);
           uint8_t ivar_105;
           ivar_105 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_30);
           bool_t ivar_112;
           bool_t ivar_114;
           ivar_114 = (ivar_17 == ivar_9);
           if (ivar_114){    
            ivar_112 = (ivar_21 == ivar_104);
} else {
           
            ivar_112 = (bool_t) false;
};
           if (ivar_112){    
            result = (bool_t) true;
} else {
           
            bool_t ivar_123;
            cstopdown__ent_adt_t ivar_139;
            cstopdown_funtype_65_t ivar_129;
            cstopdown_funtype_66_t ivar_135;
            //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
            ivar_135 = (cstopdown_funtype_66_t)ivar_3;
            if (ivar_135 != NULL) ivar_135->count++;
            uint32_t ivar_136;
            //copying to uint32 from uint32;
            ivar_136 = (uint32_t)ivar_9;
            ivar_129 = (cstopdown_funtype_65_t)ivar_135->ftbl->fptr(ivar_135, ivar_136);
            ivar_135->ftbl->rptr(ivar_135);
            ivar_139 = (cstopdown__ent_adt_t)ivar_129->ftbl->fptr(ivar_129, ivar_104);
            ivar_129->ftbl->rptr(ivar_129);
            ivar_123 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_139);
            if (ivar_123){     
             bool_t ivar_140;
             ivar_140 = (ivar_21 == ivar_105);
             if (ivar_140){      
              result = (ivar_17 == ivar_9);
} else {
             
              result = (bool_t) false;
};
} else {
            
             result = (bool_t) false;
};
};
} else {
           
           bool_t ivar_168;
           ivar_30->count++;
           ivar_168 = (bool_t)r_cstopdown__andp((cstopdown__peg_adt_t)ivar_30);
           if (ivar_168){    
            uint8_t ivar_155;
            ivar_155 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_30);
            bool_t ivar_159;
            ivar_159 = (ivar_21 == ivar_155);
            if (ivar_159){     
             result = (ivar_17 == ivar_9);
} else {
            
             result = (bool_t) false;
};
} else {
           
            bool_t ivar_185;
            ivar_30->count++;
            ivar_185 = (bool_t)r_cstopdown__notp((cstopdown__peg_adt_t)ivar_30);
            if (ivar_185){     
             uint8_t ivar_172;
             ivar_172 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_30);
             bool_t ivar_176;
             ivar_176 = (ivar_21 == ivar_172);
             if (ivar_176){      
              result = (ivar_17 == ivar_9);
} else {
             
              result = (bool_t) false;
};
} else {
            
             release_cstopdown__peg_adt(ivar_30);
             result = (bool_t) false;
};
};
};
};
};

        return result;
}

cstopdown_closure_71_t new_cstopdown_closure_71(void){
        static struct cstopdown_funtype_69_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_69_t, cstopdown_record_68_t))&f_cstopdown_closure_71, .mptr = (bool_t (*)(cstopdown_funtype_69_t, cstopdown__ent_adt_t, cstopdown__ent_adt_t))&m_cstopdown_closure_71, .rptr =  (void (*)(cstopdown_funtype_69_t))&release_cstopdown_closure_71, .cptr = (cstopdown_funtype_69_t (*)(cstopdown_funtype_69_t))&copy_cstopdown_closure_71};
        cstopdown_closure_71_t tmp = (cstopdown_closure_71_t) safe_malloc(sizeof(struct cstopdown_closure_71_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_71(cstopdown_funtype_69_t closure){
        cstopdown_closure_71_t x = (cstopdown_closure_71_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
         release_cstopdown__lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_71_t copy_cstopdown_closure_71(cstopdown_closure_71_t x){
        cstopdown_closure_71_t y = new_cstopdown_closure_71();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_69_htbl_t new_htbl = (cstopdown_funtype_69_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_69_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_69_hashentry_t * new_data = (cstopdown_funtype_69_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_69_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_69_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_72(cstopdown_funtype_72_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_72_t copy_cstopdown_funtype_72(cstopdown_funtype_72_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdown_funtype_72(cstopdown_funtype_72_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdown_funtype_72_hashentry_t data = htbl->data[hashindex];
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

cstopdown_funtype_72_t dupdate_cstopdown_funtype_72(cstopdown_funtype_72_t a, uint32_t i, uint8_t v){
        cstopdown_funtype_72_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdown_funtype_72_htbl_t)safe_malloc(sizeof(struct cstopdown_funtype_72_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdown_funtype_72_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdown_funtype_72_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdown_funtype_72_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdown_funtype_72_hashentry_t * new_data = (cstopdown_funtype_72_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdown_funtype_72_hashentry_s));
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
                                new_data[new_loc].value = (uint8_t)data[j].value;
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_cstopdown_funtype_72(htbl, i, ihash);
        cstopdown_funtype_72_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (uint8_t)v; htbl->num_entries++;}
            else {uint8_t tempvalue;tempvalue = (uint8_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (uint8_t)v;};
        return a;

}

cstopdown_funtype_72_t update_cstopdown_funtype_72(cstopdown_funtype_72_t a, uint32_t i, uint8_t v){
        if (a->count == 1){
                return dupdate_cstopdown_funtype_72(a, i, v);
            } else {
                cstopdown_funtype_72_t x = copy_cstopdown_funtype_72(a);
                a->count--;
                return dupdate_cstopdown_funtype_72(x, i, v);
            }}

bool_t equal_cstopdown_funtype_72(cstopdown_funtype_72_t x, cstopdown_funtype_72_t y){
        return false;}

char* json_cstopdown_funtype_72(cstopdown_funtype_72_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_72\""); return result;}


uint8_t f_cstopdown_closure_73(struct cstopdown_closure_73_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_72_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_72(htbl, bvar, hash);
        cstopdown_funtype_72_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdown_closure_73(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);};

return h_cstopdown_closure_73(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

uint8_t m_cstopdown_closure_73(struct cstopdown_closure_73_s * closure, uint32_t bvar){
        return h_cstopdown_closure_73(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern uint8_t h_cstopdown_closure_73(uint32_t ivar_11, type_actual_t ivar_37, cstopdown_funtype_59_t ivar_5, cstopdown_funtype_66_t ivar_2){
        uint8_t result;
        cstopdown_funtype_75_t ivar_24;
        cstopdown_funtype_76_t ivar_31;
        uint8_t ivar_40;
        ivar_40 = (uint8_t)cstopdown__num_non_terminals();
        mpz_ptr_t ivar_39;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_39, ivar_40);
        ivar_31 = (cstopdown_funtype_76_t)arrayCount__count((type_actual_t)ivar_37, (mpz_ptr_t)ivar_39);
        ivar_5->count++;
        ivar_24 = (cstopdown_funtype_75_t)ivar_31->ftbl->fptr(ivar_31, ivar_5);
        ivar_31->ftbl->rptr(ivar_31);
        cstopdown_array_74_t ivar_42;
        cstopdown_funtype_66_t ivar_18;
        //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
        ivar_18 = (cstopdown_funtype_66_t)ivar_2;
        if (ivar_18 != NULL) ivar_18->count++;
        uint32_t ivar_19;
        //copying to uint32 from uint32;
        ivar_19 = (uint32_t)ivar_11;
        ivar_42 = (cstopdown_array_74_t)ivar_18->ftbl->fptr(ivar_18, ivar_19);
        ivar_18->ftbl->rptr(ivar_18);
        result = (uint8_t)ivar_24->ftbl->fptr(ivar_24, ivar_42);
        ivar_24->ftbl->rptr(ivar_24);

        return result;
}

cstopdown_closure_73_t new_cstopdown_closure_73(void){
        static struct cstopdown_funtype_72_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdown_funtype_72_t, uint32_t))&f_cstopdown_closure_73, .mptr = (uint8_t (*)(cstopdown_funtype_72_t, uint32_t))&m_cstopdown_closure_73, .rptr =  (void (*)(cstopdown_funtype_72_t))&release_cstopdown_closure_73, .cptr = (cstopdown_funtype_72_t (*)(cstopdown_funtype_72_t))&copy_cstopdown_closure_73};
        cstopdown_closure_73_t tmp = (cstopdown_closure_73_t) safe_malloc(sizeof(struct cstopdown_closure_73_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_73(cstopdown_funtype_72_t closure){
        cstopdown_closure_73_t x = (cstopdown_closure_73_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_59(x->fvar_2);
         release_cstopdown_funtype_66(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_73_t copy_cstopdown_closure_73(cstopdown_closure_73_t x){
        cstopdown_closure_73_t y = new_cstopdown_closure_73();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_72_htbl_t new_htbl = (cstopdown_funtype_72_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_72_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_72_hashentry_t * new_data = (cstopdown_funtype_72_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_72_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_72_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_array_74_t new_cstopdown_array_74(uint32_t size){
        cstopdown_array_74_t tmp = (cstopdown_array_74_t) safe_malloc(sizeof(struct cstopdown_array_74_s) + (size * sizeof(cstopdown__ent_adt_t)));
        tmp->count = 1;
        tmp->size = size;
        tmp->max = size;
        return tmp;}

void release_cstopdown_array_74(cstopdown_array_74_t x){
        x->count--;
        if (x->count <= 0){
                for (int i = 0; i < x->size; i++){release_cstopdown__ent_adt(x->elems[i]);};
        //printf("\nFreeing\n");
        safe_free(x);}
}

void release_cstopdown_array_74_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_array_74((cstopdown_array_74_t)x);
}

cstopdown_array_74_t copy_cstopdown_array_74(cstopdown_array_74_t x){
        cstopdown_array_74_t tmp = new_cstopdown_array_74(x->size);
        tmp->count = 1;
        for (uint32_t i = 0; i < x->size; i++){tmp->elems[i] = x->elems[i];
                x->elems[i]->count++;};
         return tmp;}

bool_t equal_cstopdown_array_74(cstopdown_array_74_t x, cstopdown_array_74_t y){
        bool_t tmp = true;
        uint32_t i = 0;
        while (i < x->size && tmp){tmp = equal_cstopdown__ent_adt(x->elems[i], y->elems[i]); i++;};
        return tmp;}

char * json_cstopdown_array_74(cstopdown_array_74_t x){
        char ** tmp = (char **)safe_malloc(sizeof(void *) * x->size);
        for (uint32_t i = 0; i < x->size; i++){tmp[i] = json_cstopdown__ent_adt(x->elems[i]);};
        char * result = json_list_with_sep(tmp, x->size, '[', ',', ']');
        for (uint32_t i = 0; i < x->size; i++) free(tmp[i]);
        free(tmp);
        return result;}

bool_t equal_cstopdown_array_74_ptr(pointer_t x, pointer_t y, type_actual_t T){
        return equal_cstopdown_array_74((cstopdown_array_74_t)x, (cstopdown_array_74_t)y);
}

char * json_cstopdown_array_74_ptr(pointer_t x, type_actual_t T){
        return json_cstopdown_array_74((cstopdown_array_74_t)x);
}

cstopdown_array_74_t update_cstopdown_array_74(cstopdown_array_74_t x, uint32_t i, cstopdown__ent_adt_t v){
         cstopdown_array_74_t y;
         if (x->count == 1){y = x;}
                 else {y = copy_cstopdown_array_74(x);
                      x->count--;};
        cstopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_cstopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}

cstopdown_array_74_t upgrade_cstopdown_array_74(cstopdown_array_74_t x, uint32_t i, cstopdown__ent_adt_t v){
         cstopdown_array_74_t y;
         if (x->count == 1 && i < x->max){y = x;}
                 else if (i > x->max){uint32_t newmax = x->max <= UINT32_MAX/2 ? 2*x->max: UINT32_MAX;
                y = safe_realloc(x, sizeof(struct cstopdown_array_74_s) + (newmax * sizeof(cstopdown__ent_adt_t)));
                y->count = 1;
                y->size = i+1;
                y->max = newmax;
                release_cstopdown_array_74(x);} else {y = copy_cstopdown_array_74(x);
                      x->count--;};
        cstopdown__ent_adt_t * yelems = y->elems;
        if (v != NULL){v->count++;}
        if (yelems[i] != NULL){release_cstopdown__ent_adt(yelems[i]);};
         yelems[i] = v;
         return y;}



void release_cstopdown_funtype_75(cstopdown_funtype_75_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_75_t copy_cstopdown_funtype_75(cstopdown_funtype_75_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_75(cstopdown_funtype_75_t x, cstopdown_funtype_75_t y){
        return false;}

char* json_cstopdown_funtype_75(cstopdown_funtype_75_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_75\""); return result;}

void release_cstopdown_funtype_76(cstopdown_funtype_76_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_76_t copy_cstopdown_funtype_76(cstopdown_funtype_76_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_76(cstopdown_funtype_76_t x, cstopdown_funtype_76_t y){
        return false;}

char* json_cstopdown_funtype_76(cstopdown_funtype_76_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_76\""); return result;}

void release_cstopdown_funtype_77(cstopdown_funtype_77_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_77_t copy_cstopdown_funtype_77(cstopdown_funtype_77_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_77(cstopdown_funtype_77_t x, cstopdown_funtype_77_t y){
        return false;}

char* json_cstopdown_funtype_77(cstopdown_funtype_77_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_77\""); return result;}


uint8_t f_cstopdown_closure_78(struct cstopdown_closure_78_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_72_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_72(htbl, bvar, hash);
        cstopdown_funtype_72_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            uint8_t result;
            result = (uint8_t)entry.value;
            return result;}
        

        return h_cstopdown_closure_78(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);};

return h_cstopdown_closure_78(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

uint8_t m_cstopdown_closure_78(struct cstopdown_closure_78_s * closure, uint32_t bvar){
        return h_cstopdown_closure_78(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern uint8_t h_cstopdown_closure_78(uint32_t ivar_11, type_actual_t ivar_37, cstopdown_funtype_59_t ivar_5, cstopdown_funtype_66_t ivar_2){
        uint8_t result;
        cstopdown_funtype_75_t ivar_24;
        cstopdown_funtype_76_t ivar_31;
        uint8_t ivar_40;
        ivar_40 = (uint8_t)cstopdown__num_non_terminals();
        mpz_ptr_t ivar_39;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_39, ivar_40);
        ivar_31 = (cstopdown_funtype_76_t)arrayCount__count((type_actual_t)ivar_37, (mpz_ptr_t)ivar_39);
        ivar_5->count++;
        ivar_24 = (cstopdown_funtype_75_t)ivar_31->ftbl->fptr(ivar_31, ivar_5);
        ivar_31->ftbl->rptr(ivar_31);
        cstopdown_array_74_t ivar_42;
        cstopdown_funtype_66_t ivar_18;
        //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
        ivar_18 = (cstopdown_funtype_66_t)ivar_2;
        if (ivar_18 != NULL) ivar_18->count++;
        uint32_t ivar_19;
        //copying to uint32 from uint32;
        ivar_19 = (uint32_t)ivar_11;
        ivar_42 = (cstopdown_array_74_t)ivar_18->ftbl->fptr(ivar_18, ivar_19);
        ivar_18->ftbl->rptr(ivar_18);
        result = (uint8_t)ivar_24->ftbl->fptr(ivar_24, ivar_42);
        ivar_24->ftbl->rptr(ivar_24);

        return result;
}

cstopdown_closure_78_t new_cstopdown_closure_78(void){
        static struct cstopdown_funtype_72_ftbl_s ftbl = {.fptr = (uint8_t (*)(cstopdown_funtype_72_t, uint32_t))&f_cstopdown_closure_78, .mptr = (uint8_t (*)(cstopdown_funtype_72_t, uint32_t))&m_cstopdown_closure_78, .rptr =  (void (*)(cstopdown_funtype_72_t))&release_cstopdown_closure_78, .cptr = (cstopdown_funtype_72_t (*)(cstopdown_funtype_72_t))&copy_cstopdown_closure_78};
        cstopdown_closure_78_t tmp = (cstopdown_closure_78_t) safe_malloc(sizeof(struct cstopdown_closure_78_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_78(cstopdown_funtype_72_t closure){
        cstopdown_closure_78_t x = (cstopdown_closure_78_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_59(x->fvar_2);
         release_cstopdown_funtype_66(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_78_t copy_cstopdown_closure_78(cstopdown_closure_78_t x){
        cstopdown_closure_78_t y = new_cstopdown_closure_78();
        y->ftbl = x->ftbl;

        y->fvar_1 = (type_actual_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_72_htbl_t new_htbl = (cstopdown_funtype_72_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_72_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_72_hashentry_t * new_data = (cstopdown_funtype_72_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_72_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_72_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_79(cstopdown_funtype_79_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_79_t copy_cstopdown_funtype_79(cstopdown_funtype_79_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdown_funtype_79(cstopdown_funtype_79_htbl_t htbl, uint32_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdown_funtype_79_hashentry_t data = htbl->data[hashindex];
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

cstopdown_funtype_79_t dupdate_cstopdown_funtype_79(cstopdown_funtype_79_t a, uint32_t i, mpq_ptr_t v){
        cstopdown_funtype_79_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdown_funtype_79_htbl_t)safe_malloc(sizeof(struct cstopdown_funtype_79_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdown_funtype_79_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdown_funtype_79_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint32_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdown_funtype_79_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdown_funtype_79_hashentry_t * new_data = (cstopdown_funtype_79_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdown_funtype_79_hashentry_s));
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
                                mpq_set(new_data[new_loc].value, data[j].value);
                                }}
                htbl->size = new_size;
                htbl->num_entries = num_entries;
                htbl->data = new_data;
                safe_free(data);}
        uint32_t ihash = uint32_hash(i);
        uint32_t hashindex = lookup_cstopdown_funtype_79(htbl, i, ihash);
        cstopdown_funtype_79_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint32_t)i; htbl->data[hashindex].keyhash = ihash; mpq_set(htbl->data[hashindex].value, v); htbl->num_entries++;}
            else {mpq_ptr_t tempvalue;mpq_mk_set(tempvalue, htbl->data[hashindex].value);mpq_set(htbl->data[hashindex].value, v);};
        return a;

}

cstopdown_funtype_79_t update_cstopdown_funtype_79(cstopdown_funtype_79_t a, uint32_t i, mpq_ptr_t v){
        if (a->count == 1){
                return dupdate_cstopdown_funtype_79(a, i, v);
            } else {
                cstopdown_funtype_79_t x = copy_cstopdown_funtype_79(a);
                a->count--;
                return dupdate_cstopdown_funtype_79(x, i, v);
            }}

bool_t equal_cstopdown_funtype_79(cstopdown_funtype_79_t x, cstopdown_funtype_79_t y){
        return false;}

char* json_cstopdown_funtype_79(cstopdown_funtype_79_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_79\""); return result;}


mpq_ptr_t f_cstopdown_closure_80(struct cstopdown_closure_80_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_79_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_79(htbl, bvar, hash);
        cstopdown_funtype_79_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            mpq_ptr_t result;
            mpq_mk_set(result, entry.value);
            return result;}
        

        return h_cstopdown_closure_80(bvar, closure->fvar_1);};

return h_cstopdown_closure_80(bvar, closure->fvar_1);}

mpq_ptr_t m_cstopdown_closure_80(struct cstopdown_closure_80_s * closure, uint32_t bvar){
        return h_cstopdown_closure_80(bvar, closure->fvar_1);}

extern mpq_ptr_t h_cstopdown_closure_80(uint32_t ivar_58, cstopdown_funtype_72_t ivar_55){
        mpq_ptr_t result;
        uint8_t ivar_56;
        ivar_56 = (uint8_t)ivar_55->ftbl->fptr(ivar_55, ivar_58);
        //copying to mpq from uint8;
        mpq_mk_set_ui(result, ivar_56);

        return result;
}

cstopdown_closure_80_t new_cstopdown_closure_80(void){
        static struct cstopdown_funtype_79_ftbl_s ftbl = {.fptr = (mpq_ptr_t (*)(cstopdown_funtype_79_t, uint32_t))&f_cstopdown_closure_80, .mptr = (mpq_ptr_t (*)(cstopdown_funtype_79_t, uint32_t))&m_cstopdown_closure_80, .rptr =  (void (*)(cstopdown_funtype_79_t))&release_cstopdown_closure_80, .cptr = (cstopdown_funtype_79_t (*)(cstopdown_funtype_79_t))&copy_cstopdown_closure_80};
        cstopdown_closure_80_t tmp = (cstopdown_closure_80_t) safe_malloc(sizeof(struct cstopdown_closure_80_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_80(cstopdown_funtype_79_t closure){
        cstopdown_closure_80_t x = (cstopdown_closure_80_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_72(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_80_t copy_cstopdown_closure_80(cstopdown_closure_80_t x){
        cstopdown_closure_80_t y = new_cstopdown_closure_80();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_79_htbl_t new_htbl = (cstopdown_funtype_79_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_79_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_79_hashentry_t * new_data = (cstopdown_funtype_79_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_79_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_79_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_81(struct cstopdown_closure_81_s * closure, cstopdown__ent_adt_t bvar){
        bool_t result = h_cstopdown_closure_81(bvar); 
        return result;}

bool_t m_cstopdown_closure_81(struct cstopdown_closure_81_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_81(bvar);}

extern bool_t h_cstopdown_closure_81(cstopdown__ent_adt_t ivar_18){
        bool_t result;
        result = (bool_t)r_cstopdown__pushp((cstopdown__ent_adt_t)ivar_18);

        return result;
}

cstopdown_closure_81_t new_cstopdown_closure_81(void){
        static struct cstopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&f_cstopdown_closure_81, .mptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&m_cstopdown_closure_81, .rptr =  (void (*)(cstopdown_funtype_59_t))&release_cstopdown_closure_81, .cptr = (cstopdown_funtype_59_t (*)(cstopdown_funtype_59_t))&copy_cstopdown_closure_81};
        cstopdown_closure_81_t tmp = (cstopdown_closure_81_t) safe_malloc(sizeof(struct cstopdown_closure_81_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_81(cstopdown_funtype_59_t closure){
        cstopdown_closure_81_t x = (cstopdown_closure_81_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_81_t copy_cstopdown_closure_81(cstopdown_closure_81_t x){
        cstopdown_closure_81_t y = new_cstopdown_closure_81();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdown_funtype_59_htbl_t new_htbl = (cstopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_59_hashentry_t * new_data = (cstopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_82(struct cstopdown_closure_82_s * closure, cstopdown__ent_adt_t bvar){
        bool_t result = h_cstopdown_closure_82(bvar); 
        return result;}

bool_t m_cstopdown_closure_82(struct cstopdown_closure_82_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_82(bvar);}

extern bool_t h_cstopdown_closure_82(cstopdown__ent_adt_t ivar_10){
        bool_t result;
        result = (bool_t)cstopdown__good_or_failp((cstopdown__ent_adt_t)ivar_10);

        return result;
}

cstopdown_closure_82_t new_cstopdown_closure_82(void){
        static struct cstopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&f_cstopdown_closure_82, .mptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&m_cstopdown_closure_82, .rptr =  (void (*)(cstopdown_funtype_59_t))&release_cstopdown_closure_82, .cptr = (cstopdown_funtype_59_t (*)(cstopdown_funtype_59_t))&copy_cstopdown_closure_82};
        cstopdown_closure_82_t tmp = (cstopdown_closure_82_t) safe_malloc(sizeof(struct cstopdown_closure_82_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_82(cstopdown_funtype_59_t closure){
        cstopdown_closure_82_t x = (cstopdown_closure_82_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_82_t copy_cstopdown_closure_82(cstopdown_closure_82_t x){
        cstopdown_closure_82_t y = new_cstopdown_closure_82();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdown_funtype_59_htbl_t new_htbl = (cstopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_59_hashentry_t * new_data = (cstopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_83(cstopdown_funtype_83_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_83_t copy_cstopdown_funtype_83(cstopdown_funtype_83_t x){return x->ftbl->cptr(x);}

uint32_t lookup_cstopdown_funtype_83(cstopdown_funtype_83_htbl_t htbl, uint64_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask;
        cstopdown_funtype_83_hashentry_t data = htbl->data[hashindex];
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

cstopdown_funtype_83_t dupdate_cstopdown_funtype_83(cstopdown_funtype_83_t a, uint64_t i, bool_t v){
        cstopdown_funtype_83_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (cstopdown_funtype_83_htbl_t)safe_malloc(sizeof(struct cstopdown_funtype_83_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (cstopdown_funtype_83_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct cstopdown_funtype_83_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint64_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        cstopdown_funtype_83_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                cstopdown_funtype_83_hashentry_t * new_data = (cstopdown_funtype_83_hashentry_t *)safe_malloc(new_size * sizeof(struct cstopdown_funtype_83_hashentry_s));
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
        uint32_t hashindex = lookup_cstopdown_funtype_83(htbl, i, ihash);
        cstopdown_funtype_83_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint64_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v; htbl->num_entries++;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;htbl->data[hashindex].value = (bool_t)v;};
        return a;

}

cstopdown_funtype_83_t update_cstopdown_funtype_83(cstopdown_funtype_83_t a, uint64_t i, bool_t v){
        if (a->count == 1){
                return dupdate_cstopdown_funtype_83(a, i, v);
            } else {
                cstopdown_funtype_83_t x = copy_cstopdown_funtype_83(a);
                a->count--;
                return dupdate_cstopdown_funtype_83(x, i, v);
            }}

bool_t equal_cstopdown_funtype_83(cstopdown_funtype_83_t x, cstopdown_funtype_83_t y){
        return false;}

char* json_cstopdown_funtype_83(cstopdown_funtype_83_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_83\""); return result;}


bool_t f_cstopdown_closure_84(struct cstopdown_closure_84_s * closure, uint64_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_83_htbl_t htbl = closure->htbl;
        uint32_t hash = uint64_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_83(htbl, bvar, hash);
        cstopdown_funtype_83_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            bool_t result;
            result = (bool_t)entry.value;
            return result;}
        

        return h_cstopdown_closure_84(bvar, closure->fvar_1, closure->fvar_2);};

return h_cstopdown_closure_84(bvar, closure->fvar_1, closure->fvar_2);}

bool_t m_cstopdown_closure_84(struct cstopdown_closure_84_s * closure, uint64_t bvar){
        return h_cstopdown_closure_84(bvar, closure->fvar_1, closure->fvar_2);}

extern bool_t h_cstopdown_closure_84(uint64_t ivar_6, uint32_t ivar_1, cstopdown_funtype_66_t ivar_2){
        bool_t result;
        uint64_t ivar_7;
        ivar_2->count++;
        ivar_7 = (uint64_t)cstopdown__pushcount((uint32_t)ivar_1, (cstopdown_funtype_66_t)ivar_2);
        result = (ivar_7 == ivar_6);

        return result;
}

cstopdown_closure_84_t new_cstopdown_closure_84(void){
        static struct cstopdown_funtype_83_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_83_t, uint64_t))&f_cstopdown_closure_84, .mptr = (bool_t (*)(cstopdown_funtype_83_t, uint64_t))&m_cstopdown_closure_84, .rptr =  (void (*)(cstopdown_funtype_83_t))&release_cstopdown_closure_84, .cptr = (cstopdown_funtype_83_t (*)(cstopdown_funtype_83_t))&copy_cstopdown_closure_84};
        cstopdown_closure_84_t tmp = (cstopdown_closure_84_t) safe_malloc(sizeof(struct cstopdown_closure_84_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_84(cstopdown_funtype_83_t closure){
        cstopdown_closure_84_t x = (cstopdown_closure_84_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_84_t copy_cstopdown_closure_84(cstopdown_closure_84_t x){
        cstopdown_closure_84_t y = new_cstopdown_closure_84();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_83_htbl_t new_htbl = (cstopdown_funtype_83_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_83_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_83_hashentry_t * new_data = (cstopdown_funtype_83_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_83_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_83_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_85(struct cstopdown_closure_85_s * closure, cstopdown__ent_adt_t bvar){
        bool_t result = h_cstopdown_closure_85(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_cstopdown_closure_85(struct cstopdown_closure_85_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_85(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_cstopdown_closure_85(cstopdown__ent_adt_t ivar_8, cstopdown__lang_spec_t ivar_2, uint32_t ivar_1, cstopdown_funtype_66_t ivar_4, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_9;
        uint8_t ivar_10;
        ivar_8->count++;
        ivar_10 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_8);
        uint8_t ivar_11;
        ivar_11 = (uint8_t)cstopdown__num_non_terminals();
        ivar_9 = (ivar_10 >= ivar_11);
        if (ivar_9){ 
             release_cstopdown__ent_adt(ivar_8);
             uint8_t ivar_17;
             ivar_17 = (uint8_t)0;
             result = (ivar_3 == ivar_17);
} else {
        
             /* entry */ cstopdown__ent_adt_t ivar_19;
             cstopdown_funtype_65_t ivar_26;
             cstopdown_funtype_66_t ivar_35;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_35 = (cstopdown_funtype_66_t)ivar_4;
             if (ivar_35 != NULL) ivar_35->count++;
             uint32_t ivar_37;
             ivar_8->count++;
             ivar_37 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_8);
             uint32_t ivar_36;
             //copying to uint32 from uint32;
             ivar_36 = (uint32_t)ivar_37;
             ivar_26 = (cstopdown_funtype_65_t)ivar_35->ftbl->fptr(ivar_35, ivar_36);
             ivar_35->ftbl->rptr(ivar_35);
             uint8_t ivar_38;
             ivar_8->count++;
             ivar_38 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_8);
             ivar_19 = (cstopdown__ent_adt_t)ivar_26->ftbl->fptr(ivar_26, ivar_38);
             ivar_26->ftbl->rptr(ivar_26);
             bool_t ivar_39;
             cstopdown_funtype_59_t ivar_44;
             ivar_44 = (cstopdown_funtype_59_t)cstopdown__good_push_entryp((uint32_t)ivar_1);
             ivar_19->count++;
             ivar_39 = (bool_t)ivar_44->ftbl->fptr(ivar_44, ivar_19);
             ivar_44->ftbl->rptr(ivar_44);
             if (ivar_39){  
           bool_t ivar_50;
           bool_t ivar_52;
           uint8_t ivar_54;
           ivar_19->count++;
           ivar_54 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_19);
           uint8_t ivar_55;
           ivar_55 = (uint8_t)cstopdown__num_non_terminals();
           ivar_52 = (ivar_54 == ivar_55);
           if (ivar_52){   
           release_cstopdown__ent_adt(ivar_8);
           ivar_50 = (bool_t) true;
} else {
           
           cstopdown_funtype_69_t ivar_64;
           cstopdown_funtype_66_t ivar_72;
           cstopdown_closure_86_t cl51407;
           cl51407 = new_cstopdown_closure_86();
           cl51407->fvar_1 = (cstopdown_funtype_66_t)ivar_4;
           if (cl51407->fvar_1 != NULL) cl51407->fvar_1->count++;
           ivar_72 = (cstopdown_funtype_66_t)cl51407;
           ivar_2->count++;
           ivar_64 = (cstopdown_funtype_69_t)cstopdown__successor((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (cstopdown_funtype_66_t)ivar_72);
           ivar_19->count++;
           ivar_50 = (bool_t)ivar_64->ftbl->mptr(ivar_64, ivar_19, ivar_8);
           ivar_64->ftbl->rptr(ivar_64);
};
           if (ivar_50){   
           bool_t ivar_86;
           uint8_t ivar_89;
           ivar_89 = (uint8_t)0;
           ivar_86 = (ivar_3 > ivar_89);
           if (ivar_86){    
            cstopdown_funtype_59_t ivar_94;
            mpz_ptr_t ivar_121;
            uint8_t ivar_101;
            ivar_101 = (uint8_t)1;
            mpz_mk_set_ui(ivar_121, (uint64_t)ivar_3);
            mpz_sub_ui(ivar_121, ivar_121, (uint64_t)ivar_101);
            uint64_t ivar_106;
            //copying to uint64 from mpz;
            ivar_106 = (uint64_t)mpz_get_ui(ivar_121);
            mpz_clear(ivar_121);
            cstopdown_funtype_66_t ivar_107;
            cstopdown_closure_87_t cl51408;
            cl51408 = new_cstopdown_closure_87();
            cl51408->fvar_1 = (cstopdown_funtype_66_t)ivar_4;
            if (cl51408->fvar_1 != NULL) cl51408->fvar_1->count++;
            ivar_107 = (cstopdown_funtype_66_t)cl51408;
            ivar_2->count++;
            ivar_94 = (cstopdown_funtype_59_t)cstopdown__good_stackp((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (uint64_t)ivar_106, (cstopdown_funtype_66_t)ivar_107);
            result = (bool_t)ivar_94->ftbl->fptr(ivar_94, ivar_19);
            ivar_94->ftbl->rptr(ivar_94);
} else {
           
            release_cstopdown__ent_adt(ivar_19);
            result = (bool_t) false;
};
} else {
           
           release_cstopdown__ent_adt(ivar_19);
           result = (bool_t) false;
};
} else {
             
           release_cstopdown__ent_adt(ivar_19);
           release_cstopdown__ent_adt(ivar_8);
           result = (bool_t) false;
};
};

        return result;
}

cstopdown_closure_85_t new_cstopdown_closure_85(void){
        static struct cstopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&f_cstopdown_closure_85, .mptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&m_cstopdown_closure_85, .rptr =  (void (*)(cstopdown_funtype_59_t))&release_cstopdown_closure_85, .cptr = (cstopdown_funtype_59_t (*)(cstopdown_funtype_59_t))&copy_cstopdown_closure_85};
        cstopdown_closure_85_t tmp = (cstopdown_closure_85_t) safe_malloc(sizeof(struct cstopdown_closure_85_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_85(cstopdown_funtype_59_t closure){
        cstopdown_closure_85_t x = (cstopdown_closure_85_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown__lang_spec(x->fvar_1);
         release_cstopdown_funtype_66(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_85_t copy_cstopdown_closure_85(cstopdown_closure_85_t x){
        cstopdown_closure_85_t y = new_cstopdown_closure_85();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            cstopdown_funtype_59_htbl_t new_htbl = (cstopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_59_hashentry_t * new_data = (cstopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_86(struct cstopdown_closure_86_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_86(bvar, closure->fvar_1);};

return h_cstopdown_closure_86(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_86(struct cstopdown_closure_86_s * closure, uint32_t bvar){
        return h_cstopdown_closure_86(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_86(uint32_t ivar_81, cstopdown_funtype_66_t ivar_4){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_79;
        uint32_t ivar_80;
        //copying to uint32 from uint32;
        ivar_80 = (uint32_t)ivar_81;
        ivar_79 = (cstopdown_funtype_65_t)ivar_4->ftbl->fptr(ivar_4, ivar_80);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_79;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_79);

        return result;
}

cstopdown_closure_86_t new_cstopdown_closure_86(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_86, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_86, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_86, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_86};
        cstopdown_closure_86_t tmp = (cstopdown_closure_86_t) safe_malloc(sizeof(struct cstopdown_closure_86_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_86(cstopdown_funtype_66_t closure){
        cstopdown_closure_86_t x = (cstopdown_closure_86_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_86_t copy_cstopdown_closure_86(cstopdown_closure_86_t x){
        cstopdown_closure_86_t y = new_cstopdown_closure_86();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_87(struct cstopdown_closure_87_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_87(bvar, closure->fvar_1);};

return h_cstopdown_closure_87(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_87(struct cstopdown_closure_87_s * closure, uint32_t bvar){
        return h_cstopdown_closure_87(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_87(uint32_t ivar_119, cstopdown_funtype_66_t ivar_4){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_117;
        uint32_t ivar_118;
        //copying to uint32 from uint32;
        ivar_118 = (uint32_t)ivar_119;
        ivar_117 = (cstopdown_funtype_65_t)ivar_4->ftbl->fptr(ivar_4, ivar_118);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_117;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_117);

        return result;
}

cstopdown_closure_87_t new_cstopdown_closure_87(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_87, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_87, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_87, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_87};
        cstopdown_closure_87_t tmp = (cstopdown_closure_87_t) safe_malloc(sizeof(struct cstopdown_closure_87_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_87(cstopdown_funtype_66_t closure){
        cstopdown_closure_87_t x = (cstopdown_closure_87_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_87_t copy_cstopdown_closure_87(cstopdown_closure_87_t x){
        cstopdown_closure_87_t y = new_cstopdown_closure_87();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_88(struct cstopdown_closure_88_s * closure, cstopdown_record_68_t bvar){
        cstopdown__ent_adt_t bvar_1;
        bvar_1 = (cstopdown__ent_adt_t)bvar->project_1;
        bvar->project_1->count++;
        cstopdown__ent_adt_t bvar_2;
        bvar_2 = (cstopdown__ent_adt_t)bvar->project_2;
        bvar->project_2->count++;
        release_cstopdown_record_68(bvar);
        bool_t result = h_cstopdown_closure_88(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        release_cstopdown__ent_adt(bvar_1);
        release_cstopdown__ent_adt(bvar_2);
        return result;}

bool_t m_cstopdown_closure_88(struct cstopdown_closure_88_s * closure, cstopdown__ent_adt_t bvar_1, cstopdown__ent_adt_t bvar_2){
        return h_cstopdown_closure_88(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_cstopdown_closure_88(cstopdown__ent_adt_t ivar_8, cstopdown__ent_adt_t ivar_9, cstopdown__lang_spec_t ivar_2, uint32_t ivar_1, cstopdown_funtype_66_t ivar_4, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_10;
        uint8_t ivar_11;
        ivar_9->count++;
        ivar_11 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_9);
        uint8_t ivar_12;
        ivar_12 = (uint8_t)cstopdown__num_non_terminals();
        ivar_10 = (ivar_11 >= ivar_12);
        if (ivar_10){ 
             release_cstopdown__ent_adt(ivar_8);
             release_cstopdown__ent_adt(ivar_9);
             result = (bool_t) false;
} else {
        
             bool_t ivar_17;
             ivar_8->count++;
             ivar_9->count++;
             ivar_17 = (bool_t) equal_cstopdown__ent_adt(ivar_8, ivar_9);
             if (ivar_17){  
           release_cstopdown__ent_adt(ivar_8);
           release_cstopdown__ent_adt(ivar_9);
           result = (bool_t) true;
} else {
             
           cstopdown_funtype_69_t ivar_45;
           mpz_ptr_t ivar_72;
           uint8_t ivar_52;
           ivar_52 = (uint8_t)1;
           mpz_mk_set_ui(ivar_72, (uint64_t)ivar_3);
           mpz_sub_ui(ivar_72, ivar_72, (uint64_t)ivar_52);
           uint64_t ivar_57;
           //copying to uint64 from mpz;
           ivar_57 = (uint64_t)mpz_get_ui(ivar_72);
           mpz_clear(ivar_72);
           cstopdown_funtype_66_t ivar_58;
           cstopdown_closure_89_t cl51413;
           cl51413 = new_cstopdown_closure_89();
           cl51413->fvar_1 = (cstopdown_funtype_66_t)ivar_4;
           if (cl51413->fvar_1 != NULL) cl51413->fvar_1->count++;
           ivar_58 = (cstopdown_funtype_66_t)cl51413;
           ivar_2->count++;
           ivar_45 = (cstopdown_funtype_69_t)cstopdown__mem_stackp((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (uint64_t)ivar_57, (cstopdown_funtype_66_t)ivar_58);
           cstopdown__ent_adt_t ivar_74;
           cstopdown_funtype_65_t ivar_30;
           cstopdown_funtype_66_t ivar_39;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_39 = (cstopdown_funtype_66_t)ivar_4;
           if (ivar_39 != NULL) ivar_39->count++;
           uint32_t ivar_41;
           ivar_9->count++;
           ivar_41 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_9);
           uint32_t ivar_40;
           //copying to uint32 from uint32;
           ivar_40 = (uint32_t)ivar_41;
           ivar_30 = (cstopdown_funtype_65_t)ivar_39->ftbl->fptr(ivar_39, ivar_40);
           ivar_39->ftbl->rptr(ivar_39);
           uint8_t ivar_42;
           ivar_42 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_9);
           ivar_74 = (cstopdown__ent_adt_t)ivar_30->ftbl->fptr(ivar_30, ivar_42);
           ivar_30->ftbl->rptr(ivar_30);
           result = (bool_t)ivar_45->ftbl->mptr(ivar_45, ivar_8, ivar_74);
           ivar_45->ftbl->rptr(ivar_45);
};
};

        return result;
}

cstopdown_closure_88_t new_cstopdown_closure_88(void){
        static struct cstopdown_funtype_69_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_69_t, cstopdown_record_68_t))&f_cstopdown_closure_88, .mptr = (bool_t (*)(cstopdown_funtype_69_t, cstopdown__ent_adt_t, cstopdown__ent_adt_t))&m_cstopdown_closure_88, .rptr =  (void (*)(cstopdown_funtype_69_t))&release_cstopdown_closure_88, .cptr = (cstopdown_funtype_69_t (*)(cstopdown_funtype_69_t))&copy_cstopdown_closure_88};
        cstopdown_closure_88_t tmp = (cstopdown_closure_88_t) safe_malloc(sizeof(struct cstopdown_closure_88_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_88(cstopdown_funtype_69_t closure){
        cstopdown_closure_88_t x = (cstopdown_closure_88_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown__lang_spec(x->fvar_1);
         release_cstopdown_funtype_66(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_88_t copy_cstopdown_closure_88(cstopdown_closure_88_t x){
        cstopdown_closure_88_t y = new_cstopdown_closure_88();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            cstopdown_funtype_69_htbl_t new_htbl = (cstopdown_funtype_69_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_69_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_69_hashentry_t * new_data = (cstopdown_funtype_69_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_69_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_69_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_89(struct cstopdown_closure_89_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_89(bvar, closure->fvar_1);};

return h_cstopdown_closure_89(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_89(struct cstopdown_closure_89_s * closure, uint32_t bvar){
        return h_cstopdown_closure_89(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_89(uint32_t ivar_70, cstopdown_funtype_66_t ivar_4){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_68;
        uint32_t ivar_69;
        //copying to uint32 from uint32;
        ivar_69 = (uint32_t)ivar_70;
        ivar_68 = (cstopdown_funtype_65_t)ivar_4->ftbl->fptr(ivar_4, ivar_69);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_68;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_68);

        return result;
}

cstopdown_closure_89_t new_cstopdown_closure_89(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_89, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_89, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_89, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_89};
        cstopdown_closure_89_t tmp = (cstopdown_closure_89_t) safe_malloc(sizeof(struct cstopdown_closure_89_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_89(cstopdown_funtype_66_t closure){
        cstopdown_closure_89_t x = (cstopdown_closure_89_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_89_t copy_cstopdown_closure_89(cstopdown_closure_89_t x){
        cstopdown_closure_89_t y = new_cstopdown_closure_89();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_90(struct cstopdown_closure_90_s * closure, cstopdown__ent_adt_t bvar){
        bool_t result = h_cstopdown_closure_90(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4); 
        return result;}

bool_t m_cstopdown_closure_90(struct cstopdown_closure_90_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_90(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4);}

extern bool_t h_cstopdown_closure_90(cstopdown__ent_adt_t ivar_8, cstopdown_funtype_66_t ivar_4, cstopdown__lang_spec_t ivar_2, uint32_t ivar_1, uint64_t ivar_3){
        bool_t result;
        bool_t ivar_9;
        uint8_t ivar_10;
        ivar_8->count++;
        ivar_10 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_8);
        uint8_t ivar_11;
        ivar_11 = (uint8_t)cstopdown__num_non_terminals();
        ivar_9 = (ivar_10 >= ivar_11);
        if (ivar_9){ 
             release_cstopdown__ent_adt(ivar_8);
             result = (bool_t) true;
} else {
        
             /* rest */ cstopdown__ent_adt_t ivar_16;
             cstopdown_funtype_65_t ivar_23;
             cstopdown_funtype_66_t ivar_32;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_32 = (cstopdown_funtype_66_t)ivar_4;
             if (ivar_32 != NULL) ivar_32->count++;
             uint32_t ivar_34;
             ivar_8->count++;
             ivar_34 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_8);
             uint32_t ivar_33;
             //copying to uint32 from uint32;
             ivar_33 = (uint32_t)ivar_34;
             ivar_23 = (cstopdown_funtype_65_t)ivar_32->ftbl->fptr(ivar_32, ivar_33);
             ivar_32->ftbl->rptr(ivar_32);
             uint8_t ivar_35;
             ivar_8->count++;
             ivar_35 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_8);
             ivar_16 = (cstopdown__ent_adt_t)ivar_23->ftbl->fptr(ivar_23, ivar_35);
             ivar_23->ftbl->rptr(ivar_23);
             bool_t ivar_36;
             bool_t ivar_38;
             cstopdown_funtype_69_t ivar_43;
             mpz_ptr_t ivar_58;
             uint8_t ivar_50;
             ivar_50 = (uint8_t)1;
             mpz_mk_set_ui(ivar_58, (uint64_t)ivar_3);
             mpz_sub_ui(ivar_58, ivar_58, (uint64_t)ivar_50);
             uint64_t ivar_55;
             //copying to uint64 from mpz;
             ivar_55 = (uint64_t)mpz_get_ui(ivar_58);
             mpz_clear(ivar_58);
             ivar_2->count++;
             ivar_4->count++;
             ivar_43 = (cstopdown_funtype_69_t)cstopdown__mem_stackp((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (uint64_t)ivar_55, (cstopdown_funtype_66_t)ivar_4);
             ivar_8->count++;
             ivar_38 = (bool_t)ivar_43->ftbl->mptr(ivar_43, ivar_8, ivar_16);
             ivar_43->ftbl->rptr(ivar_43);
             ivar_36 = !ivar_38;
             if (ivar_36){  
           cstopdown_funtype_59_t ivar_84;
           mpz_ptr_t ivar_111;
           uint8_t ivar_91;
           ivar_91 = (uint8_t)1;
           mpz_mk_set_ui(ivar_111, (uint64_t)ivar_3);
           mpz_sub_ui(ivar_111, ivar_111, (uint64_t)ivar_91);
           uint64_t ivar_96;
           //copying to uint64 from mpz;
           ivar_96 = (uint64_t)mpz_get_ui(ivar_111);
           mpz_clear(ivar_111);
           cstopdown_funtype_66_t ivar_97;
           cstopdown_closure_91_t cl51419;
           cl51419 = new_cstopdown_closure_91();
           cl51419->fvar_1 = (cstopdown_funtype_66_t)ivar_4;
           if (cl51419->fvar_1 != NULL) cl51419->fvar_1->count++;
           ivar_97 = (cstopdown_funtype_66_t)cl51419;
           ivar_2->count++;
           ivar_84 = (cstopdown_funtype_59_t)cstopdown__fine_stackp((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (uint64_t)ivar_96, (cstopdown_funtype_66_t)ivar_97);
           cstopdown__ent_adt_t ivar_112;
           cstopdown_funtype_65_t ivar_69;
           cstopdown_funtype_66_t ivar_78;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_78 = (cstopdown_funtype_66_t)ivar_4;
           if (ivar_78 != NULL) ivar_78->count++;
           uint32_t ivar_80;
           ivar_8->count++;
           ivar_80 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_8);
           uint32_t ivar_79;
           //copying to uint32 from uint32;
           ivar_79 = (uint32_t)ivar_80;
           ivar_69 = (cstopdown_funtype_65_t)ivar_78->ftbl->fptr(ivar_78, ivar_79);
           ivar_78->ftbl->rptr(ivar_78);
           uint8_t ivar_81;
           ivar_81 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_8);
           ivar_112 = (cstopdown__ent_adt_t)ivar_69->ftbl->fptr(ivar_69, ivar_81);
           ivar_69->ftbl->rptr(ivar_69);
           result = (bool_t)ivar_84->ftbl->fptr(ivar_84, ivar_112);
           ivar_84->ftbl->rptr(ivar_84);
} else {
             
           release_cstopdown__ent_adt(ivar_8);
           result = (bool_t) false;
};
};

        return result;
}

cstopdown_closure_90_t new_cstopdown_closure_90(void){
        static struct cstopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&f_cstopdown_closure_90, .mptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&m_cstopdown_closure_90, .rptr =  (void (*)(cstopdown_funtype_59_t))&release_cstopdown_closure_90, .cptr = (cstopdown_funtype_59_t (*)(cstopdown_funtype_59_t))&copy_cstopdown_closure_90};
        cstopdown_closure_90_t tmp = (cstopdown_closure_90_t) safe_malloc(sizeof(struct cstopdown_closure_90_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_90(cstopdown_funtype_59_t closure){
        cstopdown_closure_90_t x = (cstopdown_closure_90_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
         release_cstopdown__lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_90_t copy_cstopdown_closure_90(cstopdown_closure_90_t x){
        cstopdown_closure_90_t y = new_cstopdown_closure_90();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = (uint32_t)x->fvar_3;
        y->fvar_4 = (uint64_t)x->fvar_4;
        if (x->htbl != NULL){
            cstopdown_funtype_59_htbl_t new_htbl = (cstopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_59_hashentry_t * new_data = (cstopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_91(struct cstopdown_closure_91_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_91(bvar, closure->fvar_1);};

return h_cstopdown_closure_91(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_91(struct cstopdown_closure_91_s * closure, uint32_t bvar){
        return h_cstopdown_closure_91(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_91(uint32_t ivar_109, cstopdown_funtype_66_t ivar_4){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_107;
        uint32_t ivar_108;
        //copying to uint32 from uint32;
        ivar_108 = (uint32_t)ivar_109;
        ivar_107 = (cstopdown_funtype_65_t)ivar_4->ftbl->fptr(ivar_4, ivar_108);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_107;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_107);

        return result;
}

cstopdown_closure_91_t new_cstopdown_closure_91(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_91, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_91, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_91, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_91};
        cstopdown_closure_91_t tmp = (cstopdown_closure_91_t) safe_malloc(sizeof(struct cstopdown_closure_91_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_91(cstopdown_funtype_66_t closure){
        cstopdown_closure_91_t x = (cstopdown_closure_91_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_91_t copy_cstopdown_closure_91(cstopdown_closure_91_t x){
        cstopdown_closure_91_t y = new_cstopdown_closure_91();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_record_92_t new_cstopdown_record_92(void){
        cstopdown_record_92_t tmp = (cstopdown_record_92_t) safe_malloc(sizeof(struct cstopdown_record_92_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_92(cstopdown_record_92_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_92_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_92((cstopdown_record_92_t)x);
}

cstopdown_record_92_t copy_cstopdown_record_92(cstopdown_record_92_t x){
        cstopdown_record_92_t y = new_cstopdown_record_92();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = (uint64_t)x->project_4;
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_92(cstopdown_record_92_t x, cstopdown_record_92_t y){
        bool_t tmp = true;
        tmp = tmp && equal_cstopdown_funtype_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && x->project_4 == y->project_4;
        return tmp;}

char * json_cstopdown_record_92(cstopdown_record_92_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_cstopdown_funtype_66(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_uint64(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_92_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_92_t T){
        return equal_cstopdown_record_92((cstopdown_record_92_t)x, (cstopdown_record_92_t)y);
}

char * json_cstopdown_record_92_ptr(pointer_t x, actual_cstopdown_record_92_t T){
        return json_cstopdown_record_92((cstopdown_record_92_t)x);
}

cstopdown_record_92_t update_cstopdown_record_92_project_1(cstopdown_record_92_t x, cstopdown_funtype_66_t v){
        cstopdown_record_92_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_cstopdown_funtype_66(x->project_1);};}
        else {y = copy_cstopdown_record_92(x); x->count--; y->project_1->count--;};
        y->project_1 = (cstopdown_funtype_66_t)v;
        return y;}

cstopdown_record_92_t update_cstopdown_record_92_project_2(cstopdown_record_92_t x, uint32_t v){
        cstopdown_record_92_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_92(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

cstopdown_record_92_t update_cstopdown_record_92_project_3(cstopdown_record_92_t x, uint8_t v){
        cstopdown_record_92_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_92(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

cstopdown_record_92_t update_cstopdown_record_92_project_4(cstopdown_record_92_t x, uint64_t v){
        cstopdown_record_92_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_92(x); x->count--;};
        y->project_4 = (uint64_t)v;
        return y;}



void release_cstopdown_funtype_93(cstopdown_funtype_93_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_93_t copy_cstopdown_funtype_93(cstopdown_funtype_93_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_93(cstopdown_funtype_93_t x, cstopdown_funtype_93_t y){
        return false;}

char* json_cstopdown_funtype_93(cstopdown_funtype_93_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_93\""); return result;}


bool_t f_cstopdown_closure_94(struct cstopdown_closure_94_s * closure, cstopdown_record_92_t bvar){
        cstopdown_funtype_66_t bvar_1;
        bvar_1 = (cstopdown_funtype_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        uint64_t bvar_4;
        bvar_4 = (uint64_t)bvar->project_4;
        release_cstopdown_record_92(bvar);
        bool_t result = h_cstopdown_closure_94(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_cstopdown_funtype_66(bvar_1);
        return result;}

bool_t m_cstopdown_closure_94(struct cstopdown_closure_94_s * closure, cstopdown_funtype_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4){
        return h_cstopdown_closure_94(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_cstopdown_closure_94(cstopdown_funtype_66_t ivar_8, uint32_t ivar_11, uint8_t ivar_12, uint64_t ivar_13, cstopdown_funtype_72_t ivar_3, uint32_t ivar_1, cstopdown__lang_spec_t ivar_2){
        bool_t result;
        cstopdown__peg_adt_t ivar_14;
        ivar_14 = (cstopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_12);
        bool_t ivar_49;
        ivar_14->count++;
        ivar_49 = (bool_t)r_cstopdown__anyp((cstopdown__peg_adt_t)ivar_14);
        if (ivar_49){ 
             release_cstopdown_funtype_66(ivar_8);
             cstopdown_funtype_1_t ivar_19;
             ivar_19 = (cstopdown_funtype_1_t)cstopdown__peg_adt_p((cstopdown__peg_adt_t)ivar_14);
             bool_t ivar_25;
             bool_t ivar_27;
             ivar_27 = (ivar_11 == ivar_1);
             if (ivar_27){  
           release_cstopdown_funtype_1(ivar_19);
           ivar_25 = (bool_t) true;
} else {
             
           bool_t ivar_32;
           uint8_t ivar_42;
           ivar_42 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_11);
           ivar_32 = (bool_t)ivar_19->ftbl->fptr(ivar_19, ivar_42);
           ivar_19->ftbl->rptr(ivar_19);
           ivar_25 = !ivar_32;
};
             if (ivar_25){  
           uint8_t ivar_46;
           ivar_46 = (uint8_t)0;
           result = (ivar_13 == ivar_46);
} else {
             
           result = (bool_t) false;
};
} else {
        
             bool_t ivar_77;
             ivar_14->count++;
             ivar_77 = (bool_t)r_cstopdown__terminalp((cstopdown__peg_adt_t)ivar_14);
             if (ivar_77){  
           release_cstopdown_funtype_66(ivar_8);
           uint8_t ivar_53;
           ivar_53 = (uint8_t)cstopdown__peg_adt_a((cstopdown__peg_adt_t)ivar_14);
           bool_t ivar_57;
           bool_t ivar_59;
           ivar_59 = (ivar_11 == ivar_1);
           if (ivar_59){   
           ivar_57 = (bool_t) true;
} else {
           
           uint8_t ivar_65;
           ivar_65 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_11);
           ivar_57 = (ivar_53 != ivar_65);
};
           if (ivar_57){   
           uint8_t ivar_74;
           ivar_74 = (uint8_t)0;
           result = (ivar_13 == ivar_74);
} else {
           
           result = (bool_t) false;
};
} else {
             
           bool_t ivar_250;
           ivar_14->count++;
           ivar_250 = (bool_t)r_cstopdown__concatp((cstopdown__peg_adt_t)ivar_14);
           if (ivar_250){   
           uint8_t ivar_81;
           ivar_14->count++;
           ivar_81 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_14);
           uint8_t ivar_82;
           ivar_82 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_14);
           bool_t ivar_89;
           bool_t ivar_91;
           cstopdown__ent_adt_t ivar_107;
           cstopdown_funtype_65_t ivar_97;
           cstopdown_funtype_66_t ivar_103;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_103 = (cstopdown_funtype_66_t)ivar_8;
           if (ivar_103 != NULL) ivar_103->count++;
           uint32_t ivar_104;
           //copying to uint32 from uint32;
           ivar_104 = (uint32_t)ivar_11;
           ivar_97 = (cstopdown_funtype_65_t)ivar_103->ftbl->fptr(ivar_103, ivar_104);
           ivar_103->ftbl->rptr(ivar_103);
           ivar_107 = (cstopdown__ent_adt_t)ivar_97->ftbl->fptr(ivar_97, ivar_81);
           ivar_97->ftbl->rptr(ivar_97);
           ivar_91 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_107);
           if (ivar_91){    
            mpz_ptr_t ivar_109;
            uint8_t ivar_110;
            ivar_110 = (uint8_t)1;
            uint64_t ivar_111;
            cstopdown__ent_adt_t ivar_126;
            cstopdown_funtype_65_t ivar_116;
            cstopdown_funtype_66_t ivar_122;
            //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
            ivar_122 = (cstopdown_funtype_66_t)ivar_8;
            if (ivar_122 != NULL) ivar_122->count++;
            uint32_t ivar_123;
            //copying to uint32 from uint32;
            ivar_123 = (uint32_t)ivar_11;
            ivar_116 = (cstopdown_funtype_65_t)ivar_122->ftbl->fptr(ivar_122, ivar_123);
            ivar_122->ftbl->rptr(ivar_122);
            ivar_126 = (cstopdown__ent_adt_t)ivar_116->ftbl->fptr(ivar_116, ivar_81);
            ivar_116->ftbl->rptr(ivar_116);
            ivar_111 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_126);
            mpz_mk_set_ui(ivar_109, (uint64_t)ivar_110);
            mpz_add_ui(ivar_109, ivar_109, (uint64_t)ivar_111);
            int64_t tmp51458 = mpz_cmp_ui(ivar_109, ivar_13);
            ivar_89 = (tmp51458 == 0);
} else {
           
            ivar_89 = (bool_t) false;
};
           if (ivar_89){    
            release_cstopdown_funtype_66(ivar_8);
            result = (bool_t) true;
} else {
           
            bool_t ivar_130;
            cstopdown__ent_adt_t ivar_146;
            cstopdown_funtype_65_t ivar_136;
            cstopdown_funtype_66_t ivar_142;
            //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
            ivar_142 = (cstopdown_funtype_66_t)ivar_8;
            if (ivar_142 != NULL) ivar_142->count++;
            uint32_t ivar_143;
            //copying to uint32 from uint32;
            ivar_143 = (uint32_t)ivar_11;
            ivar_136 = (cstopdown_funtype_65_t)ivar_142->ftbl->fptr(ivar_142, ivar_143);
            ivar_142->ftbl->rptr(ivar_142);
            ivar_146 = (cstopdown__ent_adt_t)ivar_136->ftbl->fptr(ivar_136, ivar_81);
            ivar_136->ftbl->rptr(ivar_136);
            ivar_130 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_146);
            if (ivar_130){     
             bool_t ivar_147;
             cstopdown__ent_adt_t ivar_182;
             cstopdown_funtype_65_t ivar_153;
             cstopdown_funtype_66_t ivar_177;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_177 = (cstopdown_funtype_66_t)ivar_8;
             if (ivar_177 != NULL) ivar_177->count++;
             mpq_ptr_t ivar_179;
             uint32_t ivar_157;
             cstopdown__ent_adt_t ivar_172;
             cstopdown_funtype_65_t ivar_162;
             cstopdown_funtype_66_t ivar_168;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_168 = (cstopdown_funtype_66_t)ivar_8;
             if (ivar_168 != NULL) ivar_168->count++;
             uint32_t ivar_169;
             //copying to uint32 from uint32;
             ivar_169 = (uint32_t)ivar_11;
             ivar_162 = (cstopdown_funtype_65_t)ivar_168->ftbl->fptr(ivar_168, ivar_169);
             ivar_168->ftbl->rptr(ivar_168);
             ivar_172 = (cstopdown__ent_adt_t)ivar_162->ftbl->fptr(ivar_162, ivar_81);
             ivar_162->ftbl->rptr(ivar_162);
             ivar_157 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_172);
             mpz_t tmp51459;
             mpz_init(tmp51459);
             mpz_set_ui(tmp51459, (uint64_t)ivar_11);
             mpz_add_ui(tmp51459, tmp51459, (uint64_t)ivar_157);
             mpq_mk_set_z(ivar_179, tmp51459);
             mpz_clear(tmp51459);
             uint32_t ivar_178;
             //copying to uint32 from mpq;
             ivar_178 = (uint32_t)mpq_get_ui(ivar_179);
             mpq_clear(ivar_179);
             ivar_153 = (cstopdown_funtype_65_t)ivar_177->ftbl->fptr(ivar_177, ivar_178);
             ivar_177->ftbl->rptr(ivar_177);
             ivar_182 = (cstopdown__ent_adt_t)ivar_153->ftbl->fptr(ivar_153, ivar_82);
             ivar_153->ftbl->rptr(ivar_153);
             ivar_147 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_182);
             if (ivar_147){      
              mpz_ptr_t ivar_184;
              uint8_t ivar_185;
              ivar_185 = (uint8_t)1;
              mpq_ptr_t ivar_186;
              uint64_t ivar_244;
              cstopdown__ent_adt_t ivar_203;
              cstopdown_funtype_65_t ivar_193;
              cstopdown_funtype_66_t ivar_199;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_199 = (cstopdown_funtype_66_t)ivar_8;
              if (ivar_199 != NULL) ivar_199->count++;
              uint32_t ivar_200;
              //copying to uint32 from uint32;
              ivar_200 = (uint32_t)ivar_11;
              ivar_193 = (cstopdown_funtype_65_t)ivar_199->ftbl->fptr(ivar_199, ivar_200);
              ivar_199->ftbl->rptr(ivar_199);
              ivar_203 = (cstopdown__ent_adt_t)ivar_193->ftbl->fptr(ivar_193, ivar_81);
              ivar_193->ftbl->rptr(ivar_193);
              ivar_244 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_203);
              mpq_ptr_t ivar_239;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_239, ivar_244);
              uint64_t ivar_243;
              cstopdown__ent_adt_t ivar_237;
              cstopdown_funtype_65_t ivar_208;
              cstopdown_funtype_66_t ivar_232;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_232 = (cstopdown_funtype_66_t)ivar_8;
              if (ivar_232 != NULL) ivar_232->count++;
              mpq_ptr_t ivar_234;
              uint32_t ivar_212;
              cstopdown__ent_adt_t ivar_227;
              cstopdown_funtype_65_t ivar_217;
              cstopdown_funtype_66_t ivar_223;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_223 = (cstopdown_funtype_66_t)ivar_8;
              if (ivar_223 != NULL) ivar_223->count++;
              release_cstopdown_funtype_66(ivar_8);
              uint32_t ivar_224;
              //copying to uint32 from uint32;
              ivar_224 = (uint32_t)ivar_11;
              ivar_217 = (cstopdown_funtype_65_t)ivar_223->ftbl->fptr(ivar_223, ivar_224);
              ivar_223->ftbl->rptr(ivar_223);
              ivar_227 = (cstopdown__ent_adt_t)ivar_217->ftbl->fptr(ivar_217, ivar_81);
              ivar_217->ftbl->rptr(ivar_217);
              ivar_212 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_227);
              mpz_t tmp51460;
              mpz_init(tmp51460);
              mpz_set_ui(tmp51460, (uint64_t)ivar_11);
              mpz_add_ui(tmp51460, tmp51460, (uint64_t)ivar_212);
              mpq_mk_set_z(ivar_234, tmp51460);
              mpz_clear(tmp51460);
              uint32_t ivar_233;
              //copying to uint32 from mpq;
              ivar_233 = (uint32_t)mpq_get_ui(ivar_234);
              mpq_clear(ivar_234);
              ivar_208 = (cstopdown_funtype_65_t)ivar_232->ftbl->fptr(ivar_232, ivar_233);
              ivar_232->ftbl->rptr(ivar_232);
              ivar_237 = (cstopdown__ent_adt_t)ivar_208->ftbl->fptr(ivar_208, ivar_82);
              ivar_208->ftbl->rptr(ivar_208);
              ivar_243 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_237);
              mpq_ptr_t ivar_240;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_240, ivar_243);
              ivar_186 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_239, (mpq_ptr_t)ivar_240);
              mpz_mk_set_q(ivar_184, ivar_186);
              mpz_add_ui(ivar_184, ivar_184, ivar_185);
              int64_t tmp51461 = mpz_cmp_ui(ivar_184, ivar_13);
              result = (tmp51461 == 0);
} else {
             
              release_cstopdown_funtype_66(ivar_8);
              result = (bool_t) false;
};
} else {
            
             release_cstopdown_funtype_66(ivar_8);
             result = (bool_t) false;
};
};
} else {
           
           bool_t ivar_343;
           ivar_14->count++;
           ivar_343 = (bool_t)r_cstopdown__orp((cstopdown__peg_adt_t)ivar_14);
           if (ivar_343){    
            uint8_t ivar_254;
            ivar_14->count++;
            ivar_254 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_14);
            uint8_t ivar_255;
            ivar_255 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_14);
            bool_t ivar_262;
            cstopdown__ent_adt_t ivar_278;
            cstopdown_funtype_65_t ivar_268;
            cstopdown_funtype_66_t ivar_274;
            //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
            ivar_274 = (cstopdown_funtype_66_t)ivar_8;
            if (ivar_274 != NULL) ivar_274->count++;
            uint32_t ivar_275;
            //copying to uint32 from uint32;
            ivar_275 = (uint32_t)ivar_11;
            ivar_268 = (cstopdown_funtype_65_t)ivar_274->ftbl->fptr(ivar_274, ivar_275);
            ivar_274->ftbl->rptr(ivar_274);
            ivar_278 = (cstopdown__ent_adt_t)ivar_268->ftbl->fptr(ivar_268, ivar_254);
            ivar_268->ftbl->rptr(ivar_268);
            ivar_262 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_278);
            if (ivar_262){     
             bool_t ivar_279;
             cstopdown__ent_adt_t ivar_295;
             cstopdown_funtype_65_t ivar_285;
             cstopdown_funtype_66_t ivar_291;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_291 = (cstopdown_funtype_66_t)ivar_8;
             if (ivar_291 != NULL) ivar_291->count++;
             uint32_t ivar_292;
             //copying to uint32 from uint32;
             ivar_292 = (uint32_t)ivar_11;
             ivar_285 = (cstopdown_funtype_65_t)ivar_291->ftbl->fptr(ivar_291, ivar_292);
             ivar_291->ftbl->rptr(ivar_291);
             ivar_295 = (cstopdown__ent_adt_t)ivar_285->ftbl->fptr(ivar_285, ivar_255);
             ivar_285->ftbl->rptr(ivar_285);
             ivar_279 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_295);
             if (ivar_279){      
              mpz_ptr_t ivar_297;
              uint8_t ivar_298;
              ivar_298 = (uint8_t)1;
              mpq_ptr_t ivar_299;
              uint64_t ivar_338;
              cstopdown__ent_adt_t ivar_316;
              cstopdown_funtype_65_t ivar_306;
              cstopdown_funtype_66_t ivar_312;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_312 = (cstopdown_funtype_66_t)ivar_8;
              if (ivar_312 != NULL) ivar_312->count++;
              uint32_t ivar_313;
              //copying to uint32 from uint32;
              ivar_313 = (uint32_t)ivar_11;
              ivar_306 = (cstopdown_funtype_65_t)ivar_312->ftbl->fptr(ivar_312, ivar_313);
              ivar_312->ftbl->rptr(ivar_312);
              ivar_316 = (cstopdown__ent_adt_t)ivar_306->ftbl->fptr(ivar_306, ivar_254);
              ivar_306->ftbl->rptr(ivar_306);
              ivar_338 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_316);
              mpq_ptr_t ivar_333;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_333, ivar_338);
              uint64_t ivar_337;
              cstopdown__ent_adt_t ivar_331;
              cstopdown_funtype_65_t ivar_321;
              cstopdown_funtype_66_t ivar_327;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_327 = (cstopdown_funtype_66_t)ivar_8;
              if (ivar_327 != NULL) ivar_327->count++;
              release_cstopdown_funtype_66(ivar_8);
              uint32_t ivar_328;
              //copying to uint32 from uint32;
              ivar_328 = (uint32_t)ivar_11;
              ivar_321 = (cstopdown_funtype_65_t)ivar_327->ftbl->fptr(ivar_327, ivar_328);
              ivar_327->ftbl->rptr(ivar_327);
              ivar_331 = (cstopdown__ent_adt_t)ivar_321->ftbl->fptr(ivar_321, ivar_255);
              ivar_321->ftbl->rptr(ivar_321);
              ivar_337 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_331);
              mpq_ptr_t ivar_334;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_334, ivar_337);
              ivar_299 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_333, (mpq_ptr_t)ivar_334);
              mpz_mk_set_q(ivar_297, ivar_299);
              mpz_add_ui(ivar_297, ivar_297, ivar_298);
              int64_t tmp51462 = mpz_cmp_ui(ivar_297, ivar_13);
              result = (tmp51462 == 0);
} else {
             
              release_cstopdown_funtype_66(ivar_8);
              result = (bool_t) false;
};
} else {
            
             release_cstopdown_funtype_66(ivar_8);
             result = (bool_t) false;
};
} else {
           
            bool_t ivar_390;
            ivar_14->count++;
            ivar_390 = (bool_t)r_cstopdown__andp((cstopdown__peg_adt_t)ivar_14);
            if (ivar_390){     
             uint8_t ivar_347;
             ivar_347 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_14);
             bool_t ivar_351;
             cstopdown__ent_adt_t ivar_367;
             cstopdown_funtype_65_t ivar_357;
             cstopdown_funtype_66_t ivar_363;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_363 = (cstopdown_funtype_66_t)ivar_8;
             if (ivar_363 != NULL) ivar_363->count++;
             uint32_t ivar_364;
             //copying to uint32 from uint32;
             ivar_364 = (uint32_t)ivar_11;
             ivar_357 = (cstopdown_funtype_65_t)ivar_363->ftbl->fptr(ivar_363, ivar_364);
             ivar_363->ftbl->rptr(ivar_363);
             ivar_367 = (cstopdown__ent_adt_t)ivar_357->ftbl->fptr(ivar_357, ivar_347);
             ivar_357->ftbl->rptr(ivar_357);
             ivar_351 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_367);
             if (ivar_351){      
              mpz_ptr_t ivar_369;
              uint8_t ivar_370;
              ivar_370 = (uint8_t)1;
              uint64_t ivar_371;
              cstopdown__ent_adt_t ivar_386;
              cstopdown_funtype_65_t ivar_376;
              cstopdown_funtype_66_t ivar_382;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_382 = (cstopdown_funtype_66_t)ivar_8;
              if (ivar_382 != NULL) ivar_382->count++;
              release_cstopdown_funtype_66(ivar_8);
              uint32_t ivar_383;
              //copying to uint32 from uint32;
              ivar_383 = (uint32_t)ivar_11;
              ivar_376 = (cstopdown_funtype_65_t)ivar_382->ftbl->fptr(ivar_382, ivar_383);
              ivar_382->ftbl->rptr(ivar_382);
              ivar_386 = (cstopdown__ent_adt_t)ivar_376->ftbl->fptr(ivar_376, ivar_347);
              ivar_376->ftbl->rptr(ivar_376);
              ivar_371 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_386);
              mpz_mk_set_ui(ivar_369, (uint64_t)ivar_370);
              mpz_add_ui(ivar_369, ivar_369, (uint64_t)ivar_371);
              int64_t tmp51463 = mpz_cmp_ui(ivar_369, ivar_13);
              result = (tmp51463 == 0);
} else {
             
              release_cstopdown_funtype_66(ivar_8);
              result = (bool_t) false;
};
} else {
            
             bool_t ivar_437;
             ivar_14->count++;
             ivar_437 = (bool_t)r_cstopdown__notp((cstopdown__peg_adt_t)ivar_14);
             if (ivar_437){      
              uint8_t ivar_394;
              ivar_394 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_14);
              bool_t ivar_398;
              cstopdown__ent_adt_t ivar_414;
              cstopdown_funtype_65_t ivar_404;
              cstopdown_funtype_66_t ivar_410;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_410 = (cstopdown_funtype_66_t)ivar_8;
              if (ivar_410 != NULL) ivar_410->count++;
              uint32_t ivar_411;
              //copying to uint32 from uint32;
              ivar_411 = (uint32_t)ivar_11;
              ivar_404 = (cstopdown_funtype_65_t)ivar_410->ftbl->fptr(ivar_410, ivar_411);
              ivar_410->ftbl->rptr(ivar_410);
              ivar_414 = (cstopdown__ent_adt_t)ivar_404->ftbl->fptr(ivar_404, ivar_394);
              ivar_404->ftbl->rptr(ivar_404);
              ivar_398 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_414);
              if (ivar_398){       
               mpz_ptr_t ivar_416;
               uint8_t ivar_417;
               ivar_417 = (uint8_t)1;
               uint64_t ivar_418;
               cstopdown__ent_adt_t ivar_433;
               cstopdown_funtype_65_t ivar_423;
               cstopdown_funtype_66_t ivar_429;
               //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
               ivar_429 = (cstopdown_funtype_66_t)ivar_8;
               if (ivar_429 != NULL) ivar_429->count++;
               release_cstopdown_funtype_66(ivar_8);
               uint32_t ivar_430;
               //copying to uint32 from uint32;
               ivar_430 = (uint32_t)ivar_11;
               ivar_423 = (cstopdown_funtype_65_t)ivar_429->ftbl->fptr(ivar_429, ivar_430);
               ivar_429->ftbl->rptr(ivar_429);
               ivar_433 = (cstopdown__ent_adt_t)ivar_423->ftbl->fptr(ivar_423, ivar_394);
               ivar_423->ftbl->rptr(ivar_423);
               ivar_418 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_433);
               mpz_mk_set_ui(ivar_416, (uint64_t)ivar_417);
               mpz_add_ui(ivar_416, ivar_416, (uint64_t)ivar_418);
               int64_t tmp51464 = mpz_cmp_ui(ivar_416, ivar_13);
               result = (tmp51464 == 0);
} else {
              
               release_cstopdown_funtype_66(ivar_8);
               result = (bool_t) false;
};
} else {
             
              release_cstopdown_funtype_66(ivar_8);
              bool_t ivar_444;
              ivar_444 = (bool_t)r_cstopdown__failurep((cstopdown__peg_adt_t)ivar_14);
              if (ivar_444){       
               uint8_t ivar_442;
               ivar_442 = (uint8_t)0;
               result = (ivar_13 == ivar_442);
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

cstopdown_closure_94_t new_cstopdown_closure_94(void){
        static struct cstopdown_funtype_93_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_93_t, cstopdown_record_92_t))&f_cstopdown_closure_94, .mptr = (bool_t (*)(cstopdown_funtype_93_t, cstopdown_funtype_66_t, uint32_t, uint8_t, uint64_t))&m_cstopdown_closure_94, .rptr =  (void (*)(cstopdown_funtype_93_t))&release_cstopdown_closure_94, .cptr = (cstopdown_funtype_93_t (*)(cstopdown_funtype_93_t))&copy_cstopdown_closure_94};
        cstopdown_closure_94_t tmp = (cstopdown_closure_94_t) safe_malloc(sizeof(struct cstopdown_closure_94_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_94(cstopdown_funtype_93_t closure){
        cstopdown_closure_94_t x = (cstopdown_closure_94_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_72(x->fvar_1);
         release_cstopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_94_t copy_cstopdown_closure_94(cstopdown_closure_94_t x){
        cstopdown_closure_94_t y = new_cstopdown_closure_94();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = (uint32_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_93_htbl_t new_htbl = (cstopdown_funtype_93_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_93_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_93_hashentry_t * new_data = (cstopdown_funtype_93_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_93_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_93_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_record_95_t new_cstopdown_record_95(void){
        cstopdown_record_95_t tmp = (cstopdown_record_95_t) safe_malloc(sizeof(struct cstopdown_record_95_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_95(cstopdown_record_95_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_95_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_95((cstopdown_record_95_t)x);
}

cstopdown_record_95_t copy_cstopdown_record_95(cstopdown_record_95_t x){
        cstopdown_record_95_t y = new_cstopdown_record_95();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_95(cstopdown_record_95_t x, cstopdown_record_95_t y){
        bool_t tmp = true;
        tmp = tmp && equal_cstopdown_funtype_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        return tmp;}

char * json_cstopdown_record_95(cstopdown_record_95_t x){
        char * tmp[3]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_cstopdown_funtype_66(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
         char * result = json_list_with_sep(tmp, 3,  '{', ',', '}');
         for (uint32_t i = 0; i < 3; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_95_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_95_t T){
        return equal_cstopdown_record_95((cstopdown_record_95_t)x, (cstopdown_record_95_t)y);
}

char * json_cstopdown_record_95_ptr(pointer_t x, actual_cstopdown_record_95_t T){
        return json_cstopdown_record_95((cstopdown_record_95_t)x);
}

cstopdown_record_95_t update_cstopdown_record_95_project_1(cstopdown_record_95_t x, cstopdown_funtype_66_t v){
        cstopdown_record_95_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_cstopdown_funtype_66(x->project_1);};}
        else {y = copy_cstopdown_record_95(x); x->count--; y->project_1->count--;};
        y->project_1 = (cstopdown_funtype_66_t)v;
        return y;}

cstopdown_record_95_t update_cstopdown_record_95_project_2(cstopdown_record_95_t x, uint32_t v){
        cstopdown_record_95_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_95(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

cstopdown_record_95_t update_cstopdown_record_95_project_3(cstopdown_record_95_t x, uint8_t v){
        cstopdown_record_95_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_95(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}



void release_cstopdown_funtype_96(cstopdown_funtype_96_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_96_t copy_cstopdown_funtype_96(cstopdown_funtype_96_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_96(cstopdown_funtype_96_t x, cstopdown_funtype_96_t y){
        return false;}

char* json_cstopdown_funtype_96(cstopdown_funtype_96_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_96\""); return result;}


bool_t f_cstopdown_closure_97(struct cstopdown_closure_97_s * closure, cstopdown_record_95_t bvar){
        cstopdown_funtype_66_t bvar_1;
        bvar_1 = (cstopdown_funtype_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        release_cstopdown_record_95(bvar);
        bool_t result = h_cstopdown_closure_97(bvar_1, bvar_2, bvar_3, closure->fvar_1); 
        release_cstopdown_funtype_66(bvar_1);
        return result;}

bool_t m_cstopdown_closure_97(struct cstopdown_closure_97_s * closure, cstopdown_funtype_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3){
        return h_cstopdown_closure_97(bvar_1, bvar_2, bvar_3, closure->fvar_1);}

extern bool_t h_cstopdown_closure_97(cstopdown_funtype_66_t ivar_6, uint32_t ivar_9, uint8_t ivar_10, cstopdown__lang_spec_t ivar_2){
        bool_t result;
        cstopdown__peg_adt_t ivar_11;
        ivar_11 = (cstopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_10);
        bool_t ivar_94;
        ivar_11->count++;
        ivar_94 = (bool_t)r_cstopdown__concatp((cstopdown__peg_adt_t)ivar_11);
        if (ivar_94){ 
             uint8_t ivar_16;
             ivar_11->count++;
             ivar_16 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_11);
             uint8_t ivar_17;
             ivar_17 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_11);
             bool_t ivar_24;
             cstopdown__ent_adt_t ivar_40;
             cstopdown_funtype_65_t ivar_30;
             cstopdown_funtype_66_t ivar_36;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_36 = (cstopdown_funtype_66_t)ivar_6;
             if (ivar_36 != NULL) ivar_36->count++;
             uint32_t ivar_37;
             //copying to uint32 from uint32;
             ivar_37 = (uint32_t)ivar_9;
             ivar_30 = (cstopdown_funtype_65_t)ivar_36->ftbl->fptr(ivar_36, ivar_37);
             ivar_36->ftbl->rptr(ivar_36);
             ivar_40 = (cstopdown__ent_adt_t)ivar_30->ftbl->fptr(ivar_30, ivar_16);
             ivar_30->ftbl->rptr(ivar_30);
             ivar_24 = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_40);
             if (ivar_24){  
           release_cstopdown_funtype_66(ivar_6);
           result = (bool_t) true;
} else {
             
           bool_t ivar_41;
           cstopdown__ent_adt_t ivar_57;
           cstopdown_funtype_65_t ivar_47;
           cstopdown_funtype_66_t ivar_53;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_53 = (cstopdown_funtype_66_t)ivar_6;
           if (ivar_53 != NULL) ivar_53->count++;
           uint32_t ivar_54;
           //copying to uint32 from uint32;
           ivar_54 = (uint32_t)ivar_9;
           ivar_47 = (cstopdown_funtype_65_t)ivar_53->ftbl->fptr(ivar_53, ivar_54);
           ivar_53->ftbl->rptr(ivar_53);
           ivar_57 = (cstopdown__ent_adt_t)ivar_47->ftbl->fptr(ivar_47, ivar_16);
           ivar_47->ftbl->rptr(ivar_47);
           ivar_41 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_57);
           if (ivar_41){   
           cstopdown__ent_adt_t ivar_91;
           cstopdown_funtype_65_t ivar_62;
           cstopdown_funtype_66_t ivar_86;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_86 = (cstopdown_funtype_66_t)ivar_6;
           if (ivar_86 != NULL) ivar_86->count++;
           mpq_ptr_t ivar_88;
           uint32_t ivar_66;
           cstopdown__ent_adt_t ivar_81;
           cstopdown_funtype_65_t ivar_71;
           cstopdown_funtype_66_t ivar_77;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_77 = (cstopdown_funtype_66_t)ivar_6;
           if (ivar_77 != NULL) ivar_77->count++;
           release_cstopdown_funtype_66(ivar_6);
           uint32_t ivar_78;
           //copying to uint32 from uint32;
           ivar_78 = (uint32_t)ivar_9;
           ivar_71 = (cstopdown_funtype_65_t)ivar_77->ftbl->fptr(ivar_77, ivar_78);
           ivar_77->ftbl->rptr(ivar_77);
           ivar_81 = (cstopdown__ent_adt_t)ivar_71->ftbl->fptr(ivar_71, ivar_16);
           ivar_71->ftbl->rptr(ivar_71);
           ivar_66 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_81);
           mpz_t tmp51480;
           mpz_init(tmp51480);
           mpz_set_ui(tmp51480, (uint64_t)ivar_9);
           mpz_add_ui(tmp51480, tmp51480, (uint64_t)ivar_66);
           mpq_mk_set_z(ivar_88, tmp51480);
           mpz_clear(tmp51480);
           uint32_t ivar_87;
           //copying to uint32 from mpq;
           ivar_87 = (uint32_t)mpq_get_ui(ivar_88);
           mpq_clear(ivar_88);
           ivar_62 = (cstopdown_funtype_65_t)ivar_86->ftbl->fptr(ivar_86, ivar_87);
           ivar_86->ftbl->rptr(ivar_86);
           ivar_91 = (cstopdown__ent_adt_t)ivar_62->ftbl->fptr(ivar_62, ivar_17);
           ivar_62->ftbl->rptr(ivar_62);
           result = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_91);
} else {
           
           release_cstopdown_funtype_66(ivar_6);
           result = (bool_t) false;
};
};
} else {
        
             bool_t ivar_157;
             ivar_11->count++;
             ivar_157 = (bool_t)r_cstopdown__orp((cstopdown__peg_adt_t)ivar_11);
             if (ivar_157){  
           uint8_t ivar_98;
           ivar_11->count++;
           ivar_98 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_11);
           uint8_t ivar_99;
           ivar_99 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_11);
           bool_t ivar_106;
           cstopdown__ent_adt_t ivar_122;
           cstopdown_funtype_65_t ivar_112;
           cstopdown_funtype_66_t ivar_118;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_118 = (cstopdown_funtype_66_t)ivar_6;
           if (ivar_118 != NULL) ivar_118->count++;
           uint32_t ivar_119;
           //copying to uint32 from uint32;
           ivar_119 = (uint32_t)ivar_9;
           ivar_112 = (cstopdown_funtype_65_t)ivar_118->ftbl->fptr(ivar_118, ivar_119);
           ivar_118->ftbl->rptr(ivar_118);
           ivar_122 = (cstopdown__ent_adt_t)ivar_112->ftbl->fptr(ivar_112, ivar_98);
           ivar_112->ftbl->rptr(ivar_112);
           ivar_106 = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_122);
           if (ivar_106){   
           release_cstopdown_funtype_66(ivar_6);
           result = (bool_t) true;
} else {
           
           bool_t ivar_123;
           cstopdown__ent_adt_t ivar_139;
           cstopdown_funtype_65_t ivar_129;
           cstopdown_funtype_66_t ivar_135;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_135 = (cstopdown_funtype_66_t)ivar_6;
           if (ivar_135 != NULL) ivar_135->count++;
           uint32_t ivar_136;
           //copying to uint32 from uint32;
           ivar_136 = (uint32_t)ivar_9;
           ivar_129 = (cstopdown_funtype_65_t)ivar_135->ftbl->fptr(ivar_135, ivar_136);
           ivar_135->ftbl->rptr(ivar_135);
           ivar_139 = (cstopdown__ent_adt_t)ivar_129->ftbl->fptr(ivar_129, ivar_98);
           ivar_129->ftbl->rptr(ivar_129);
           ivar_123 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_139);
           if (ivar_123){    
            cstopdown__ent_adt_t ivar_154;
            cstopdown_funtype_65_t ivar_144;
            cstopdown_funtype_66_t ivar_150;
            //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
            ivar_150 = (cstopdown_funtype_66_t)ivar_6;
            if (ivar_150 != NULL) ivar_150->count++;
            release_cstopdown_funtype_66(ivar_6);
            uint32_t ivar_151;
            //copying to uint32 from uint32;
            ivar_151 = (uint32_t)ivar_9;
            ivar_144 = (cstopdown_funtype_65_t)ivar_150->ftbl->fptr(ivar_150, ivar_151);
            ivar_150->ftbl->rptr(ivar_150);
            ivar_154 = (cstopdown__ent_adt_t)ivar_144->ftbl->fptr(ivar_144, ivar_99);
            ivar_144->ftbl->rptr(ivar_144);
            result = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_154);
} else {
           
            release_cstopdown_funtype_66(ivar_6);
            result = (bool_t) false;
};
};
} else {
             
           bool_t ivar_180;
           ivar_11->count++;
           ivar_180 = (bool_t)r_cstopdown__andp((cstopdown__peg_adt_t)ivar_11);
           if (ivar_180){   
           uint8_t ivar_161;
           ivar_161 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_11);
           cstopdown__ent_adt_t ivar_179;
           cstopdown_funtype_65_t ivar_169;
           cstopdown_funtype_66_t ivar_175;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_175 = (cstopdown_funtype_66_t)ivar_6;
           if (ivar_175 != NULL) ivar_175->count++;
           release_cstopdown_funtype_66(ivar_6);
           uint32_t ivar_176;
           //copying to uint32 from uint32;
           ivar_176 = (uint32_t)ivar_9;
           ivar_169 = (cstopdown_funtype_65_t)ivar_175->ftbl->fptr(ivar_175, ivar_176);
           ivar_175->ftbl->rptr(ivar_175);
           ivar_179 = (cstopdown__ent_adt_t)ivar_169->ftbl->fptr(ivar_169, ivar_161);
           ivar_169->ftbl->rptr(ivar_169);
           result = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_179);
} else {
           
           bool_t ivar_203;
           ivar_11->count++;
           ivar_203 = (bool_t)r_cstopdown__notp((cstopdown__peg_adt_t)ivar_11);
           if (ivar_203){    
            uint8_t ivar_184;
            ivar_184 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_11);
            cstopdown__ent_adt_t ivar_202;
            cstopdown_funtype_65_t ivar_192;
            cstopdown_funtype_66_t ivar_198;
            //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
            ivar_198 = (cstopdown_funtype_66_t)ivar_6;
            if (ivar_198 != NULL) ivar_198->count++;
            release_cstopdown_funtype_66(ivar_6);
            uint32_t ivar_199;
            //copying to uint32 from uint32;
            ivar_199 = (uint32_t)ivar_9;
            ivar_192 = (cstopdown_funtype_65_t)ivar_198->ftbl->fptr(ivar_198, ivar_199);
            ivar_198->ftbl->rptr(ivar_198);
            ivar_202 = (cstopdown__ent_adt_t)ivar_192->ftbl->fptr(ivar_192, ivar_184);
            ivar_192->ftbl->rptr(ivar_192);
            result = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_202);
} else {
           
            release_cstopdown__peg_adt(ivar_11);
            release_cstopdown_funtype_66(ivar_6);
            result = (bool_t) false;
};
};
};
};

        return result;
}

cstopdown_closure_97_t new_cstopdown_closure_97(void){
        static struct cstopdown_funtype_96_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_96_t, cstopdown_record_95_t))&f_cstopdown_closure_97, .mptr = (bool_t (*)(cstopdown_funtype_96_t, cstopdown_funtype_66_t, uint32_t, uint8_t))&m_cstopdown_closure_97, .rptr =  (void (*)(cstopdown_funtype_96_t))&release_cstopdown_closure_97, .cptr = (cstopdown_funtype_96_t (*)(cstopdown_funtype_96_t))&copy_cstopdown_closure_97};
        cstopdown_closure_97_t tmp = (cstopdown_closure_97_t) safe_malloc(sizeof(struct cstopdown_closure_97_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_97(cstopdown_funtype_96_t closure){
        cstopdown_closure_97_t x = (cstopdown_closure_97_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown__lang_spec(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_97_t copy_cstopdown_closure_97(cstopdown_closure_97_t x){
        cstopdown_closure_97_t y = new_cstopdown_closure_97();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_96_htbl_t new_htbl = (cstopdown_funtype_96_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_96_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_96_hashentry_t * new_data = (cstopdown_funtype_96_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_96_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_96_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_record_98_t new_cstopdown_record_98(void){
        cstopdown_record_98_t tmp = (cstopdown_record_98_t) safe_malloc(sizeof(struct cstopdown_record_98_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_98(cstopdown_record_98_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->project_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_98_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_98((cstopdown_record_98_t)x);
}

cstopdown_record_98_t copy_cstopdown_record_98(cstopdown_record_98_t x){
        cstopdown_record_98_t y = new_cstopdown_record_98();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = (uint64_t)x->project_4;
        mpz_set(y->project_5, x->project_5);
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_98(cstopdown_record_98_t x, cstopdown_record_98_t y){
        bool_t tmp = true;
        tmp = tmp && equal_cstopdown_funtype_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && x->project_4 == y->project_4;
        tmp = tmp && x->project_5 == y->project_5;
        return tmp;}

char * json_cstopdown_record_98(cstopdown_record_98_t x){
        char * tmp[5]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_cstopdown_funtype_66(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_uint64(x->project_4));
        char * fld4 = safe_malloc(21);
         sprintf(fld4, "\"project_5\" : ");
        tmp[4] = safe_strcat(fld4, json_mpz(x->project_5));
         char * result = json_list_with_sep(tmp, 5,  '{', ',', '}');
         for (uint32_t i = 0; i < 5; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_98_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_98_t T){
        return equal_cstopdown_record_98((cstopdown_record_98_t)x, (cstopdown_record_98_t)y);
}

char * json_cstopdown_record_98_ptr(pointer_t x, actual_cstopdown_record_98_t T){
        return json_cstopdown_record_98((cstopdown_record_98_t)x);
}

cstopdown_record_98_t update_cstopdown_record_98_project_1(cstopdown_record_98_t x, cstopdown_funtype_66_t v){
        cstopdown_record_98_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_cstopdown_funtype_66(x->project_1);};}
        else {y = copy_cstopdown_record_98(x); x->count--; y->project_1->count--;};
        y->project_1 = (cstopdown_funtype_66_t)v;
        return y;}

cstopdown_record_98_t update_cstopdown_record_98_project_2(cstopdown_record_98_t x, uint32_t v){
        cstopdown_record_98_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_98(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

cstopdown_record_98_t update_cstopdown_record_98_project_3(cstopdown_record_98_t x, uint8_t v){
        cstopdown_record_98_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_98(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

cstopdown_record_98_t update_cstopdown_record_98_project_4(cstopdown_record_98_t x, uint64_t v){
        cstopdown_record_98_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_98(x); x->count--;};
        y->project_4 = (uint64_t)v;
        return y;}

cstopdown_record_98_t update_cstopdown_record_98_project_5(cstopdown_record_98_t x, mpz_ptr_t v){
        cstopdown_record_98_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_98(x); x->count--;};
        mpz_set(y->project_5, v);
        return y;}



void release_cstopdown_funtype_99(cstopdown_funtype_99_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_99_t copy_cstopdown_funtype_99(cstopdown_funtype_99_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_99(cstopdown_funtype_99_t x, cstopdown_funtype_99_t y){
        return false;}

char* json_cstopdown_funtype_99(cstopdown_funtype_99_t x){char * result = safe_malloc(30); sprintf(result, "%s", "\"cstopdown_funtype_99\""); return result;}


bool_t f_cstopdown_closure_100(struct cstopdown_closure_100_s * closure, cstopdown_record_98_t bvar){
        cstopdown_funtype_66_t bvar_1;
        bvar_1 = (cstopdown_funtype_66_t)bvar->project_1;
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
        release_cstopdown_record_98(bvar);
        bool_t result = h_cstopdown_closure_100(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2); 
        release_cstopdown_funtype_66(bvar_1);
        release_mpz(bvar_5);
        return result;}

bool_t m_cstopdown_closure_100(struct cstopdown_closure_100_s * closure, cstopdown_funtype_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, uint64_t bvar_4, mpz_ptr_t bvar_5){
        return h_cstopdown_closure_100(bvar_1, bvar_2, bvar_3, bvar_4, bvar_5, closure->fvar_1, closure->fvar_2);}

extern bool_t h_cstopdown_closure_100(cstopdown_funtype_66_t ivar_11, uint32_t ivar_14, uint8_t ivar_15, uint64_t ivar_16, mpz_ptr_t ivar_17, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2){
        bool_t result;
        cstopdown__peg_adt_t ivar_21;
        ivar_21 = (cstopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_15);
        bool_t ivar_35;
        ivar_21->count++;
        ivar_35 = (bool_t)r_cstopdown__epsilonp((cstopdown__peg_adt_t)ivar_21);
        if (ivar_35){ 
             release_cstopdown_funtype_66(ivar_11);
             release_cstopdown__peg_adt(ivar_21);
             bool_t ivar_26;
             uint8_t ivar_29;
             ivar_29 = (uint8_t)0;
             int64_t tmp51510 = mpz_cmp_ui(ivar_17, ivar_29);
             ivar_26 = (tmp51510 == 0);
             if (ivar_26){  
           uint8_t ivar_32;
           ivar_32 = (uint8_t)0;
           result = (ivar_16 == ivar_32);
} else {
             
           result = (bool_t) false;
};
} else {
        
             bool_t ivar_67;
             ivar_21->count++;
             ivar_67 = (bool_t)r_cstopdown__anyp((cstopdown__peg_adt_t)ivar_21);
             if (ivar_67){  
           release_cstopdown_funtype_66(ivar_11);
           cstopdown_funtype_1_t ivar_39;
           ivar_39 = (cstopdown_funtype_1_t)cstopdown__peg_adt_p((cstopdown__peg_adt_t)ivar_21);
           bool_t ivar_45;
           uint8_t ivar_48;
           ivar_48 = (uint8_t)1;
           int64_t tmp51511 = mpz_cmp_ui(ivar_17, ivar_48);
           ivar_45 = (tmp51511 == 0);
           if (ivar_45){   
           bool_t ivar_50;
           uint8_t ivar_61;
           ivar_61 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_14);
           ivar_50 = (bool_t)ivar_39->ftbl->fptr(ivar_39, ivar_61);
           ivar_39->ftbl->rptr(ivar_39);
           if (ivar_50){    
            uint8_t ivar_63;
            ivar_63 = (uint8_t)0;
            result = (ivar_16 == ivar_63);
} else {
           
            result = (bool_t) false;
};
} else {
           
           release_cstopdown_funtype_1(ivar_39);
           result = (bool_t) false;
};
} else {
             
           bool_t ivar_95;
           ivar_21->count++;
           ivar_95 = (bool_t)r_cstopdown__terminalp((cstopdown__peg_adt_t)ivar_21);
           if (ivar_95){   
           release_cstopdown_funtype_66(ivar_11);
           uint8_t ivar_71;
           ivar_71 = (uint8_t)cstopdown__peg_adt_a((cstopdown__peg_adt_t)ivar_21);
           bool_t ivar_75;
           uint8_t ivar_78;
           ivar_78 = (uint8_t)1;
           int64_t tmp51512 = mpz_cmp_ui(ivar_17, ivar_78);
           ivar_75 = (tmp51512 == 0);
           if (ivar_75){    
            bool_t ivar_80;
            uint8_t ivar_82;
            ivar_82 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_14);
            ivar_80 = (ivar_82 == ivar_71);
            if (ivar_80){     
             uint8_t ivar_91;
             ivar_91 = (uint8_t)0;
             result = (ivar_16 == ivar_91);
} else {
            
             result = (bool_t) false;
};
} else {
           
            result = (bool_t) false;
};
} else {
           
           bool_t ivar_226;
           ivar_21->count++;
           ivar_226 = (bool_t)r_cstopdown__concatp((cstopdown__peg_adt_t)ivar_21);
           if (ivar_226){    
            uint8_t ivar_99;
            ivar_21->count++;
            ivar_99 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_21);
            uint8_t ivar_100;
            ivar_100 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_21);
            bool_t ivar_107;
            cstopdown__ent_adt_t ivar_123;
            cstopdown_funtype_65_t ivar_113;
            cstopdown_funtype_66_t ivar_119;
            //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
            ivar_119 = (cstopdown_funtype_66_t)ivar_11;
            if (ivar_119 != NULL) ivar_119->count++;
            uint32_t ivar_120;
            //copying to uint32 from uint32;
            ivar_120 = (uint32_t)ivar_14;
            ivar_113 = (cstopdown_funtype_65_t)ivar_119->ftbl->fptr(ivar_119, ivar_120);
            ivar_119->ftbl->rptr(ivar_119);
            ivar_123 = (cstopdown__ent_adt_t)ivar_113->ftbl->fptr(ivar_113, ivar_99);
            ivar_113->ftbl->rptr(ivar_113);
            ivar_107 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_123);
            if (ivar_107){     
             bool_t ivar_124;
             cstopdown__ent_adt_t ivar_159;
             cstopdown_funtype_65_t ivar_130;
             cstopdown_funtype_66_t ivar_154;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_154 = (cstopdown_funtype_66_t)ivar_11;
             if (ivar_154 != NULL) ivar_154->count++;
             mpq_ptr_t ivar_156;
             uint32_t ivar_134;
             cstopdown__ent_adt_t ivar_149;
             cstopdown_funtype_65_t ivar_139;
             cstopdown_funtype_66_t ivar_145;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_145 = (cstopdown_funtype_66_t)ivar_11;
             if (ivar_145 != NULL) ivar_145->count++;
             uint32_t ivar_146;
             //copying to uint32 from uint32;
             ivar_146 = (uint32_t)ivar_14;
             ivar_139 = (cstopdown_funtype_65_t)ivar_145->ftbl->fptr(ivar_145, ivar_146);
             ivar_145->ftbl->rptr(ivar_145);
             ivar_149 = (cstopdown__ent_adt_t)ivar_139->ftbl->fptr(ivar_139, ivar_99);
             ivar_139->ftbl->rptr(ivar_139);
             ivar_134 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_149);
             mpz_t tmp51513;
             mpz_init(tmp51513);
             mpz_set_ui(tmp51513, (uint64_t)ivar_14);
             mpz_add_ui(tmp51513, tmp51513, (uint64_t)ivar_134);
             mpq_mk_set_z(ivar_156, tmp51513);
             mpz_clear(tmp51513);
             uint32_t ivar_155;
             //copying to uint32 from mpq;
             ivar_155 = (uint32_t)mpq_get_ui(ivar_156);
             mpq_clear(ivar_156);
             ivar_130 = (cstopdown_funtype_65_t)ivar_154->ftbl->fptr(ivar_154, ivar_155);
             ivar_154->ftbl->rptr(ivar_154);
             ivar_159 = (cstopdown__ent_adt_t)ivar_130->ftbl->fptr(ivar_130, ivar_100);
             ivar_130->ftbl->rptr(ivar_130);
             ivar_124 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_159);
             if (ivar_124){      
              mpz_ptr_t ivar_161;
              uint8_t ivar_162;
              ivar_162 = (uint8_t)1;
              mpq_ptr_t ivar_163;
              uint64_t ivar_221;
              cstopdown__ent_adt_t ivar_180;
              cstopdown_funtype_65_t ivar_170;
              cstopdown_funtype_66_t ivar_176;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_176 = (cstopdown_funtype_66_t)ivar_11;
              if (ivar_176 != NULL) ivar_176->count++;
              uint32_t ivar_177;
              //copying to uint32 from uint32;
              ivar_177 = (uint32_t)ivar_14;
              ivar_170 = (cstopdown_funtype_65_t)ivar_176->ftbl->fptr(ivar_176, ivar_177);
              ivar_176->ftbl->rptr(ivar_176);
              ivar_180 = (cstopdown__ent_adt_t)ivar_170->ftbl->fptr(ivar_170, ivar_99);
              ivar_170->ftbl->rptr(ivar_170);
              ivar_221 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_180);
              mpq_ptr_t ivar_216;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_216, ivar_221);
              uint64_t ivar_220;
              cstopdown__ent_adt_t ivar_214;
              cstopdown_funtype_65_t ivar_185;
              cstopdown_funtype_66_t ivar_209;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_209 = (cstopdown_funtype_66_t)ivar_11;
              if (ivar_209 != NULL) ivar_209->count++;
              mpq_ptr_t ivar_211;
              uint32_t ivar_189;
              cstopdown__ent_adt_t ivar_204;
              cstopdown_funtype_65_t ivar_194;
              cstopdown_funtype_66_t ivar_200;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_200 = (cstopdown_funtype_66_t)ivar_11;
              if (ivar_200 != NULL) ivar_200->count++;
              release_cstopdown_funtype_66(ivar_11);
              uint32_t ivar_201;
              //copying to uint32 from uint32;
              ivar_201 = (uint32_t)ivar_14;
              ivar_194 = (cstopdown_funtype_65_t)ivar_200->ftbl->fptr(ivar_200, ivar_201);
              ivar_200->ftbl->rptr(ivar_200);
              ivar_204 = (cstopdown__ent_adt_t)ivar_194->ftbl->fptr(ivar_194, ivar_99);
              ivar_194->ftbl->rptr(ivar_194);
              ivar_189 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_204);
              mpz_t tmp51514;
              mpz_init(tmp51514);
              mpz_set_ui(tmp51514, (uint64_t)ivar_14);
              mpz_add_ui(tmp51514, tmp51514, (uint64_t)ivar_189);
              mpq_mk_set_z(ivar_211, tmp51514);
              mpz_clear(tmp51514);
              uint32_t ivar_210;
              //copying to uint32 from mpq;
              ivar_210 = (uint32_t)mpq_get_ui(ivar_211);
              mpq_clear(ivar_211);
              ivar_185 = (cstopdown_funtype_65_t)ivar_209->ftbl->fptr(ivar_209, ivar_210);
              ivar_209->ftbl->rptr(ivar_209);
              ivar_214 = (cstopdown__ent_adt_t)ivar_185->ftbl->fptr(ivar_185, ivar_100);
              ivar_185->ftbl->rptr(ivar_185);
              ivar_220 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_214);
              mpq_ptr_t ivar_217;
              //copying to mpq from uint64;
              mpq_mk_set_ui(ivar_217, ivar_220);
              ivar_163 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_216, (mpq_ptr_t)ivar_217);
              mpz_mk_set_q(ivar_161, ivar_163);
              mpz_add_ui(ivar_161, ivar_161, ivar_162);
              int64_t tmp51515 = mpz_cmp_ui(ivar_161, ivar_16);
              result = (tmp51515 == 0);
} else {
             
              release_cstopdown_funtype_66(ivar_11);
              result = (bool_t) false;
};
} else {
            
             release_cstopdown_funtype_66(ivar_11);
             result = (bool_t) false;
};
} else {
           
            bool_t ivar_361;
            ivar_21->count++;
            ivar_361 = (bool_t)r_cstopdown__orp((cstopdown__peg_adt_t)ivar_21);
            if (ivar_361){     
             uint8_t ivar_230;
             ivar_21->count++;
             ivar_230 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_21);
             uint8_t ivar_231;
             ivar_231 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_21);
             bool_t ivar_238;
             bool_t ivar_240;
             cstopdown__ent_adt_t ivar_256;
             cstopdown_funtype_65_t ivar_246;
             cstopdown_funtype_66_t ivar_252;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_252 = (cstopdown_funtype_66_t)ivar_11;
             if (ivar_252 != NULL) ivar_252->count++;
             uint32_t ivar_253;
             //copying to uint32 from uint32;
             ivar_253 = (uint32_t)ivar_14;
             ivar_246 = (cstopdown_funtype_65_t)ivar_252->ftbl->fptr(ivar_252, ivar_253);
             ivar_252->ftbl->rptr(ivar_252);
             ivar_256 = (cstopdown__ent_adt_t)ivar_246->ftbl->fptr(ivar_246, ivar_230);
             ivar_246->ftbl->rptr(ivar_246);
             ivar_240 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_256);
             if (ivar_240){      
              mpz_ptr_t ivar_258;
              uint8_t ivar_259;
              ivar_259 = (uint8_t)1;
              uint64_t ivar_260;
              cstopdown__ent_adt_t ivar_275;
              cstopdown_funtype_65_t ivar_265;
              cstopdown_funtype_66_t ivar_271;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_271 = (cstopdown_funtype_66_t)ivar_11;
              if (ivar_271 != NULL) ivar_271->count++;
              uint32_t ivar_272;
              //copying to uint32 from uint32;
              ivar_272 = (uint32_t)ivar_14;
              ivar_265 = (cstopdown_funtype_65_t)ivar_271->ftbl->fptr(ivar_271, ivar_272);
              ivar_271->ftbl->rptr(ivar_271);
              ivar_275 = (cstopdown__ent_adt_t)ivar_265->ftbl->fptr(ivar_265, ivar_230);
              ivar_265->ftbl->rptr(ivar_265);
              ivar_260 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_275);
              mpz_mk_set_ui(ivar_258, (uint64_t)ivar_259);
              mpz_add_ui(ivar_258, ivar_258, (uint64_t)ivar_260);
              int64_t tmp51516 = mpz_cmp_ui(ivar_258, ivar_16);
              ivar_238 = (tmp51516 == 0);
} else {
             
              ivar_238 = (bool_t) false;
};
             if (ivar_238){      
              release_cstopdown_funtype_66(ivar_11);
              result = (bool_t) true;
} else {
             
              bool_t ivar_279;
              cstopdown__ent_adt_t ivar_295;
              cstopdown_funtype_65_t ivar_285;
              cstopdown_funtype_66_t ivar_291;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_291 = (cstopdown_funtype_66_t)ivar_11;
              if (ivar_291 != NULL) ivar_291->count++;
              uint32_t ivar_292;
              //copying to uint32 from uint32;
              ivar_292 = (uint32_t)ivar_14;
              ivar_285 = (cstopdown_funtype_65_t)ivar_291->ftbl->fptr(ivar_291, ivar_292);
              ivar_291->ftbl->rptr(ivar_291);
              ivar_295 = (cstopdown__ent_adt_t)ivar_285->ftbl->fptr(ivar_285, ivar_230);
              ivar_285->ftbl->rptr(ivar_285);
              ivar_279 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_295);
              if (ivar_279){       
               bool_t ivar_296;
               cstopdown__ent_adt_t ivar_312;
               cstopdown_funtype_65_t ivar_302;
               cstopdown_funtype_66_t ivar_308;
               //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
               ivar_308 = (cstopdown_funtype_66_t)ivar_11;
               if (ivar_308 != NULL) ivar_308->count++;
               uint32_t ivar_309;
               //copying to uint32 from uint32;
               ivar_309 = (uint32_t)ivar_14;
               ivar_302 = (cstopdown_funtype_65_t)ivar_308->ftbl->fptr(ivar_308, ivar_309);
               ivar_308->ftbl->rptr(ivar_308);
               ivar_312 = (cstopdown__ent_adt_t)ivar_302->ftbl->fptr(ivar_302, ivar_231);
               ivar_302->ftbl->rptr(ivar_302);
               ivar_296 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_312);
               if (ivar_296){        
                mpz_ptr_t ivar_314;
                uint8_t ivar_315;
                ivar_315 = (uint8_t)1;
                mpq_ptr_t ivar_316;
                uint64_t ivar_355;
                cstopdown__ent_adt_t ivar_333;
                cstopdown_funtype_65_t ivar_323;
                cstopdown_funtype_66_t ivar_329;
                //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
                ivar_329 = (cstopdown_funtype_66_t)ivar_11;
                if (ivar_329 != NULL) ivar_329->count++;
                uint32_t ivar_330;
                //copying to uint32 from uint32;
                ivar_330 = (uint32_t)ivar_14;
                ivar_323 = (cstopdown_funtype_65_t)ivar_329->ftbl->fptr(ivar_329, ivar_330);
                ivar_329->ftbl->rptr(ivar_329);
                ivar_333 = (cstopdown__ent_adt_t)ivar_323->ftbl->fptr(ivar_323, ivar_230);
                ivar_323->ftbl->rptr(ivar_323);
                ivar_355 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_333);
                mpq_ptr_t ivar_350;
                //copying to mpq from uint64;
                mpq_mk_set_ui(ivar_350, ivar_355);
                uint64_t ivar_354;
                cstopdown__ent_adt_t ivar_348;
                cstopdown_funtype_65_t ivar_338;
                cstopdown_funtype_66_t ivar_344;
                //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
                ivar_344 = (cstopdown_funtype_66_t)ivar_11;
                if (ivar_344 != NULL) ivar_344->count++;
                release_cstopdown_funtype_66(ivar_11);
                uint32_t ivar_345;
                //copying to uint32 from uint32;
                ivar_345 = (uint32_t)ivar_14;
                ivar_338 = (cstopdown_funtype_65_t)ivar_344->ftbl->fptr(ivar_344, ivar_345);
                ivar_344->ftbl->rptr(ivar_344);
                ivar_348 = (cstopdown__ent_adt_t)ivar_338->ftbl->fptr(ivar_338, ivar_231);
                ivar_338->ftbl->rptr(ivar_338);
                ivar_354 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_348);
                mpq_ptr_t ivar_351;
                //copying to mpq from uint64;
                mpq_mk_set_ui(ivar_351, ivar_354);
                ivar_316 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_350, (mpq_ptr_t)ivar_351);
                mpz_mk_set_q(ivar_314, ivar_316);
                mpz_add_ui(ivar_314, ivar_314, ivar_315);
                int64_t tmp51517 = mpz_cmp_ui(ivar_314, ivar_16);
                result = (tmp51517 == 0);
} else {
               
                release_cstopdown_funtype_66(ivar_11);
                result = (bool_t) false;
};
} else {
              
               release_cstopdown_funtype_66(ivar_11);
               result = (bool_t) false;
};
};
} else {
            
             bool_t ivar_414;
             ivar_21->count++;
             ivar_414 = (bool_t)r_cstopdown__andp((cstopdown__peg_adt_t)ivar_21);
             if (ivar_414){      
              uint8_t ivar_365;
              ivar_365 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_21);
              bool_t ivar_369;
              cstopdown__ent_adt_t ivar_385;
              cstopdown_funtype_65_t ivar_375;
              cstopdown_funtype_66_t ivar_381;
              //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
              ivar_381 = (cstopdown_funtype_66_t)ivar_11;
              if (ivar_381 != NULL) ivar_381->count++;
              uint32_t ivar_382;
              //copying to uint32 from uint32;
              ivar_382 = (uint32_t)ivar_14;
              ivar_375 = (cstopdown_funtype_65_t)ivar_381->ftbl->fptr(ivar_381, ivar_382);
              ivar_381->ftbl->rptr(ivar_381);
              ivar_385 = (cstopdown__ent_adt_t)ivar_375->ftbl->fptr(ivar_375, ivar_365);
              ivar_375->ftbl->rptr(ivar_375);
              ivar_369 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_385);
              if (ivar_369){       
               bool_t ivar_386;
               uint8_t ivar_389;
               ivar_389 = (uint8_t)0;
               int64_t tmp51518 = mpz_cmp_ui(ivar_17, ivar_389);
               ivar_386 = (tmp51518 == 0);
               if (ivar_386){        
                mpz_ptr_t ivar_392;
                uint8_t ivar_393;
                ivar_393 = (uint8_t)1;
                uint64_t ivar_394;
                cstopdown__ent_adt_t ivar_409;
                cstopdown_funtype_65_t ivar_399;
                cstopdown_funtype_66_t ivar_405;
                //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
                ivar_405 = (cstopdown_funtype_66_t)ivar_11;
                if (ivar_405 != NULL) ivar_405->count++;
                release_cstopdown_funtype_66(ivar_11);
                uint32_t ivar_406;
                //copying to uint32 from uint32;
                ivar_406 = (uint32_t)ivar_14;
                ivar_399 = (cstopdown_funtype_65_t)ivar_405->ftbl->fptr(ivar_405, ivar_406);
                ivar_405->ftbl->rptr(ivar_405);
                ivar_409 = (cstopdown__ent_adt_t)ivar_399->ftbl->fptr(ivar_399, ivar_365);
                ivar_399->ftbl->rptr(ivar_399);
                ivar_394 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_409);
                mpz_mk_set_ui(ivar_392, (uint64_t)ivar_393);
                mpz_add_ui(ivar_392, ivar_392, (uint64_t)ivar_394);
                int64_t tmp51519 = mpz_cmp_ui(ivar_392, ivar_16);
                result = (tmp51519 == 0);
} else {
               
                release_cstopdown_funtype_66(ivar_11);
                result = (bool_t) false;
};
} else {
              
               release_cstopdown_funtype_66(ivar_11);
               result = (bool_t) false;
};
} else {
             
              bool_t ivar_467;
              ivar_21->count++;
              ivar_467 = (bool_t)r_cstopdown__notp((cstopdown__peg_adt_t)ivar_21);
              if (ivar_467){       
               uint8_t ivar_418;
               ivar_418 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_21);
               bool_t ivar_422;
               cstopdown__ent_adt_t ivar_438;
               cstopdown_funtype_65_t ivar_428;
               cstopdown_funtype_66_t ivar_434;
               //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
               ivar_434 = (cstopdown_funtype_66_t)ivar_11;
               if (ivar_434 != NULL) ivar_434->count++;
               uint32_t ivar_435;
               //copying to uint32 from uint32;
               ivar_435 = (uint32_t)ivar_14;
               ivar_428 = (cstopdown_funtype_65_t)ivar_434->ftbl->fptr(ivar_434, ivar_435);
               ivar_434->ftbl->rptr(ivar_434);
               ivar_438 = (cstopdown__ent_adt_t)ivar_428->ftbl->fptr(ivar_428, ivar_418);
               ivar_428->ftbl->rptr(ivar_428);
               ivar_422 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_438);
               if (ivar_422){        
                bool_t ivar_439;
                uint8_t ivar_442;
                ivar_442 = (uint8_t)0;
                int64_t tmp51520 = mpz_cmp_ui(ivar_17, ivar_442);
                ivar_439 = (tmp51520 == 0);
                if (ivar_439){         
                 mpz_ptr_t ivar_445;
                 uint8_t ivar_446;
                 ivar_446 = (uint8_t)1;
                 uint64_t ivar_447;
                 cstopdown__ent_adt_t ivar_462;
                 cstopdown_funtype_65_t ivar_452;
                 cstopdown_funtype_66_t ivar_458;
                 //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
                 ivar_458 = (cstopdown_funtype_66_t)ivar_11;
                 if (ivar_458 != NULL) ivar_458->count++;
                 release_cstopdown_funtype_66(ivar_11);
                 uint32_t ivar_459;
                 //copying to uint32 from uint32;
                 ivar_459 = (uint32_t)ivar_14;
                 ivar_452 = (cstopdown_funtype_65_t)ivar_458->ftbl->fptr(ivar_458, ivar_459);
                 ivar_458->ftbl->rptr(ivar_458);
                 ivar_462 = (cstopdown__ent_adt_t)ivar_452->ftbl->fptr(ivar_452, ivar_418);
                 ivar_452->ftbl->rptr(ivar_452);
                 ivar_447 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_462);
                 mpz_mk_set_ui(ivar_445, (uint64_t)ivar_446);
                 mpz_add_ui(ivar_445, ivar_445, (uint64_t)ivar_447);
                 int64_t tmp51521 = mpz_cmp_ui(ivar_445, ivar_16);
                 result = (tmp51521 == 0);
} else {
                
                 release_cstopdown_funtype_66(ivar_11);
                 result = (bool_t) false;
};
} else {
               
                release_cstopdown_funtype_66(ivar_11);
                result = (bool_t) false;
};
} else {
              
               release_cstopdown__peg_adt(ivar_21);
               release_cstopdown_funtype_66(ivar_11);
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

cstopdown_closure_100_t new_cstopdown_closure_100(void){
        static struct cstopdown_funtype_99_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_99_t, cstopdown_record_98_t))&f_cstopdown_closure_100, .mptr = (bool_t (*)(cstopdown_funtype_99_t, cstopdown_funtype_66_t, uint32_t, uint8_t, uint64_t, mpz_ptr_t))&m_cstopdown_closure_100, .rptr =  (void (*)(cstopdown_funtype_99_t))&release_cstopdown_closure_100, .cptr = (cstopdown_funtype_99_t (*)(cstopdown_funtype_99_t))&copy_cstopdown_closure_100};
        cstopdown_closure_100_t tmp = (cstopdown_closure_100_t) safe_malloc(sizeof(struct cstopdown_closure_100_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_100(cstopdown_funtype_99_t closure){
        cstopdown_closure_100_t x = (cstopdown_closure_100_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_72(x->fvar_1);
         release_cstopdown__lang_spec(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_100_t copy_cstopdown_closure_100(cstopdown_closure_100_t x){
        cstopdown_closure_100_t y = new_cstopdown_closure_100();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_99_htbl_t new_htbl = (cstopdown_funtype_99_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_99_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_99_hashentry_t * new_data = (cstopdown_funtype_99_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_99_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_99_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_record_101_t new_cstopdown_record_101(void){
        cstopdown_record_101_t tmp = (cstopdown_record_101_t) safe_malloc(sizeof(struct cstopdown_record_101_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_101(cstopdown_record_101_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->project_1);
         release_cstopdown__ent_adt(x->project_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_101_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_101((cstopdown_record_101_t)x);
}

cstopdown_record_101_t copy_cstopdown_record_101(cstopdown_record_101_t x){
        cstopdown_record_101_t y = new_cstopdown_record_101();
        y->project_1 = x->project_1;
        if (y->project_1 != NULL){y->project_1->count++;};
        y->project_2 = (uint32_t)x->project_2;
        y->project_3 = (uint8_t)x->project_3;
        y->project_4 = x->project_4;
        if (y->project_4 != NULL){y->project_4->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_101(cstopdown_record_101_t x, cstopdown_record_101_t y){
        bool_t tmp = true;
        tmp = tmp && equal_cstopdown_funtype_66(x->project_1, y->project_1);
        tmp = tmp && x->project_2 == y->project_2;
        tmp = tmp && x->project_3 == y->project_3;
        tmp = tmp && equal_cstopdown__ent_adt(x->project_4, y->project_4);
        return tmp;}

char * json_cstopdown_record_101(cstopdown_record_101_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(21);
         sprintf(fld0, "\"project_1\" : ");
        tmp[0] = safe_strcat(fld0, json_cstopdown_funtype_66(x->project_1));
        char * fld1 = safe_malloc(21);
         sprintf(fld1, "\"project_2\" : ");
        tmp[1] = safe_strcat(fld1, json_uint32(x->project_2));
        char * fld2 = safe_malloc(21);
         sprintf(fld2, "\"project_3\" : ");
        tmp[2] = safe_strcat(fld2, json_uint8(x->project_3));
        char * fld3 = safe_malloc(21);
         sprintf(fld3, "\"project_4\" : ");
        tmp[3] = safe_strcat(fld3, json_cstopdown__ent_adt(x->project_4));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_101_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_101_t T){
        return equal_cstopdown_record_101((cstopdown_record_101_t)x, (cstopdown_record_101_t)y);
}

char * json_cstopdown_record_101_ptr(pointer_t x, actual_cstopdown_record_101_t T){
        return json_cstopdown_record_101((cstopdown_record_101_t)x);
}

cstopdown_record_101_t update_cstopdown_record_101_project_1(cstopdown_record_101_t x, cstopdown_funtype_66_t v){
        cstopdown_record_101_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_1 != NULL){release_cstopdown_funtype_66(x->project_1);};}
        else {y = copy_cstopdown_record_101(x); x->count--; y->project_1->count--;};
        y->project_1 = (cstopdown_funtype_66_t)v;
        return y;}

cstopdown_record_101_t update_cstopdown_record_101_project_2(cstopdown_record_101_t x, uint32_t v){
        cstopdown_record_101_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_101(x); x->count--;};
        y->project_2 = (uint32_t)v;
        return y;}

cstopdown_record_101_t update_cstopdown_record_101_project_3(cstopdown_record_101_t x, uint8_t v){
        cstopdown_record_101_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_101(x); x->count--;};
        y->project_3 = (uint8_t)v;
        return y;}

cstopdown_record_101_t update_cstopdown_record_101_project_4(cstopdown_record_101_t x, cstopdown__ent_adt_t v){
        cstopdown_record_101_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->project_4 != NULL){release_cstopdown__ent_adt(x->project_4);};}
        else {y = copy_cstopdown_record_101(x); x->count--; y->project_4->count--;};
        y->project_4 = (cstopdown__ent_adt_t)v;
        return y;}



void release_cstopdown_funtype_102(cstopdown_funtype_102_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_102_t copy_cstopdown_funtype_102(cstopdown_funtype_102_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_102(cstopdown_funtype_102_t x, cstopdown_funtype_102_t y){
        return false;}

char* json_cstopdown_funtype_102(cstopdown_funtype_102_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"cstopdown_funtype_102\""); return result;}


bool_t f_cstopdown_closure_103(struct cstopdown_closure_103_s * closure, cstopdown_record_101_t bvar){
        cstopdown_funtype_66_t bvar_1;
        bvar_1 = (cstopdown_funtype_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        cstopdown__ent_adt_t bvar_4;
        bvar_4 = (cstopdown__ent_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_cstopdown_record_101(bvar);
        bool_t result = h_cstopdown_closure_103(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_cstopdown_funtype_66(bvar_1);
        release_cstopdown__ent_adt(bvar_4);
        return result;}

bool_t m_cstopdown_closure_103(struct cstopdown_closure_103_s * closure, cstopdown_funtype_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, cstopdown__ent_adt_t bvar_4){
        return h_cstopdown_closure_103(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_cstopdown_closure_103(cstopdown_funtype_66_t ivar_8, uint32_t ivar_11, uint8_t ivar_12, cstopdown__ent_adt_t ivar_13, uint32_t ivar_1, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_47;
        ivar_13->count++;
        ivar_47 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_13);
        if (ivar_47){ 
             uint64_t ivar_15;
             ivar_15 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_13);
             cstopdown_funtype_93_t ivar_27;
             ivar_2->count++;
             ivar_3->count++;
             ivar_27 = (cstopdown_funtype_93_t)cstopdown__good_failp((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (cstopdown_funtype_72_t)ivar_3);
             cstopdown_funtype_66_t ivar_38;
             cstopdown_closure_104_t cl51541;
             cl51541 = new_cstopdown_closure_104();
             cl51541->fvar_1 = (cstopdown_funtype_66_t)ivar_8;
             if (cl51541->fvar_1 != NULL) cl51541->fvar_1->count++;
             release_cstopdown_funtype_66(ivar_8);
             ivar_38 = (cstopdown_funtype_66_t)cl51541;
             result = (bool_t)ivar_27->ftbl->mptr(ivar_27, ivar_38, ivar_11, ivar_12, ivar_15);
             ivar_27->ftbl->rptr(ivar_27);
} else {
        
             bool_t ivar_72;
             ivar_13->count++;
             ivar_72 = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_13);
             if (ivar_72){  
           release_cstopdown__ent_adt(ivar_13);
           cstopdown_funtype_66_t ivar_59;
           cstopdown_closure_105_t cl51542;
           cl51542 = new_cstopdown_closure_105();
           cl51542->fvar_1 = (cstopdown_funtype_66_t)ivar_8;
           if (cl51542->fvar_1 != NULL) cl51542->fvar_1->count++;
           release_cstopdown_funtype_66(ivar_8);
           ivar_59 = (cstopdown_funtype_66_t)cl51542;
           ivar_2->count++;
           result = (bool_t)cstopdown__loop_readyp((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (cstopdown_funtype_66_t)ivar_59, (uint32_t)ivar_11, (uint8_t)ivar_12);
} else {
             
           bool_t ivar_129;
           ivar_13->count++;
           ivar_129 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_13);
           if (ivar_129){   
           uint64_t ivar_76;
           ivar_13->count++;
           ivar_76 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_13);
           uint32_t ivar_77;
           ivar_77 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_13);
           bool_t ivar_84;
           mpq_ptr_t ivar_87;
           mpz_t tmp51543;
           mpz_init(tmp51543);
           mpz_set_ui(tmp51543, (uint64_t)ivar_1);
           mpz_sub_ui(tmp51543, tmp51543, (uint64_t)ivar_11);
           mpq_mk_set_z(ivar_87, tmp51543);
           mpz_clear(tmp51543);
           int64_t tmp51544 = mpq_cmp_ui(ivar_87, ivar_77, 1);
           ivar_84 = (tmp51544 <= 0);
           if (ivar_84){    
            cstopdown_funtype_99_t ivar_104;
            ivar_2->count++;
            ivar_3->count++;
            ivar_104 = (cstopdown_funtype_99_t)cstopdown__good_goodp((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (cstopdown_funtype_72_t)ivar_3);
            cstopdown_funtype_66_t ivar_118;
            cstopdown_closure_106_t cl51545;
            cl51545 = new_cstopdown_closure_106();
            cl51545->fvar_1 = (cstopdown_funtype_66_t)ivar_8;
            if (cl51545->fvar_1 != NULL) cl51545->fvar_1->count++;
            release_cstopdown_funtype_66(ivar_8);
            ivar_118 = (cstopdown_funtype_66_t)cl51545;
            mpz_ptr_t ivar_122;
            //copying to mpz from uint32;
            mpz_mk_set_ui(ivar_122, ivar_77);
            result = (bool_t)ivar_104->ftbl->mptr(ivar_104, ivar_118, ivar_11, ivar_12, ivar_76, ivar_122);
            ivar_104->ftbl->rptr(ivar_104);
} else {
           
            release_cstopdown_funtype_66(ivar_8);
            result = (bool_t) false;
};
} else {
           
           release_cstopdown_funtype_66(ivar_8);
           release_cstopdown__ent_adt(ivar_13);
           result = (bool_t) true;
};
};
};

        return result;
}

cstopdown_closure_103_t new_cstopdown_closure_103(void){
        static struct cstopdown_funtype_102_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_102_t, cstopdown_record_101_t))&f_cstopdown_closure_103, .mptr = (bool_t (*)(cstopdown_funtype_102_t, cstopdown_funtype_66_t, uint32_t, uint8_t, cstopdown__ent_adt_t))&m_cstopdown_closure_103, .rptr =  (void (*)(cstopdown_funtype_102_t))&release_cstopdown_closure_103, .cptr = (cstopdown_funtype_102_t (*)(cstopdown_funtype_102_t))&copy_cstopdown_closure_103};
        cstopdown_closure_103_t tmp = (cstopdown_closure_103_t) safe_malloc(sizeof(struct cstopdown_closure_103_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_103(cstopdown_funtype_102_t closure){
        cstopdown_closure_103_t x = (cstopdown_closure_103_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_72(x->fvar_2);
         release_cstopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_103_t copy_cstopdown_closure_103(cstopdown_closure_103_t x){
        cstopdown_closure_103_t y = new_cstopdown_closure_103();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_102_htbl_t new_htbl = (cstopdown_funtype_102_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_102_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_102_hashentry_t * new_data = (cstopdown_funtype_102_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_102_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_102_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_104(struct cstopdown_closure_104_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_104(bvar, closure->fvar_1);};

return h_cstopdown_closure_104(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_104(struct cstopdown_closure_104_s * closure, uint32_t bvar){
        return h_cstopdown_closure_104(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_104(uint32_t ivar_45, cstopdown_funtype_66_t ivar_8){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_43;
        uint32_t ivar_44;
        //copying to uint32 from uint32;
        ivar_44 = (uint32_t)ivar_45;
        ivar_43 = (cstopdown_funtype_65_t)ivar_8->ftbl->fptr(ivar_8, ivar_44);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_43;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_43);

        return result;
}

cstopdown_closure_104_t new_cstopdown_closure_104(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_104, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_104, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_104, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_104};
        cstopdown_closure_104_t tmp = (cstopdown_closure_104_t) safe_malloc(sizeof(struct cstopdown_closure_104_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_104(cstopdown_funtype_66_t closure){
        cstopdown_closure_104_t x = (cstopdown_closure_104_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_104_t copy_cstopdown_closure_104(cstopdown_closure_104_t x){
        cstopdown_closure_104_t y = new_cstopdown_closure_104();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_105(struct cstopdown_closure_105_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_105(bvar, closure->fvar_1);};

return h_cstopdown_closure_105(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_105(struct cstopdown_closure_105_s * closure, uint32_t bvar){
        return h_cstopdown_closure_105(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_105(uint32_t ivar_70, cstopdown_funtype_66_t ivar_8){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_68;
        uint32_t ivar_69;
        //copying to uint32 from uint32;
        ivar_69 = (uint32_t)ivar_70;
        ivar_68 = (cstopdown_funtype_65_t)ivar_8->ftbl->fptr(ivar_8, ivar_69);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_68;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_68);

        return result;
}

cstopdown_closure_105_t new_cstopdown_closure_105(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_105, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_105, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_105, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_105};
        cstopdown_closure_105_t tmp = (cstopdown_closure_105_t) safe_malloc(sizeof(struct cstopdown_closure_105_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_105(cstopdown_funtype_66_t closure){
        cstopdown_closure_105_t x = (cstopdown_closure_105_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_105_t copy_cstopdown_closure_105(cstopdown_closure_105_t x){
        cstopdown_closure_105_t y = new_cstopdown_closure_105();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_106(struct cstopdown_closure_106_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_106(bvar, closure->fvar_1);};

return h_cstopdown_closure_106(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_106(struct cstopdown_closure_106_s * closure, uint32_t bvar){
        return h_cstopdown_closure_106(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_106(uint32_t ivar_126, cstopdown_funtype_66_t ivar_8){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_124;
        uint32_t ivar_125;
        //copying to uint32 from uint32;
        ivar_125 = (uint32_t)ivar_126;
        ivar_124 = (cstopdown_funtype_65_t)ivar_8->ftbl->fptr(ivar_8, ivar_125);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_124;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_124);

        return result;
}

cstopdown_closure_106_t new_cstopdown_closure_106(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_106, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_106, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_106, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_106};
        cstopdown_closure_106_t tmp = (cstopdown_closure_106_t) safe_malloc(sizeof(struct cstopdown_closure_106_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_106(cstopdown_funtype_66_t closure){
        cstopdown_closure_106_t x = (cstopdown_closure_106_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_106_t copy_cstopdown_closure_106(cstopdown_closure_106_t x){
        cstopdown_closure_106_t y = new_cstopdown_closure_106();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_107(struct cstopdown_closure_107_s * closure, cstopdown_record_101_t bvar){
        cstopdown_funtype_66_t bvar_1;
        bvar_1 = (cstopdown_funtype_66_t)bvar->project_1;
        bvar->project_1->count++;
        uint32_t bvar_2;
        bvar_2 = (uint32_t)bvar->project_2;
        uint8_t bvar_3;
        bvar_3 = (uint8_t)bvar->project_3;
        cstopdown__ent_adt_t bvar_4;
        bvar_4 = (cstopdown__ent_adt_t)bvar->project_4;
        bvar->project_4->count++;
        release_cstopdown_record_101(bvar);
        bool_t result = h_cstopdown_closure_107(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        release_cstopdown_funtype_66(bvar_1);
        release_cstopdown__ent_adt(bvar_4);
        return result;}

bool_t m_cstopdown_closure_107(struct cstopdown_closure_107_s * closure, cstopdown_funtype_66_t bvar_1, uint32_t bvar_2, uint8_t bvar_3, cstopdown__ent_adt_t bvar_4){
        return h_cstopdown_closure_107(bvar_1, bvar_2, bvar_3, bvar_4, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern bool_t h_cstopdown_closure_107(cstopdown_funtype_66_t ivar_8, uint32_t ivar_11, uint8_t ivar_12, cstopdown__ent_adt_t ivar_13, uint32_t ivar_1, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_47;
        ivar_13->count++;
        ivar_47 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_13);
        if (ivar_47){ 
             uint64_t ivar_15;
             ivar_15 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_13);
             cstopdown_funtype_93_t ivar_27;
             ivar_2->count++;
             ivar_3->count++;
             ivar_27 = (cstopdown_funtype_93_t)cstopdown__good_failp((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (cstopdown_funtype_72_t)ivar_3);
             cstopdown_funtype_66_t ivar_38;
             cstopdown_closure_108_t cl51566;
             cl51566 = new_cstopdown_closure_108();
             cl51566->fvar_1 = (cstopdown_funtype_66_t)ivar_8;
             if (cl51566->fvar_1 != NULL) cl51566->fvar_1->count++;
             release_cstopdown_funtype_66(ivar_8);
             ivar_38 = (cstopdown_funtype_66_t)cl51566;
             result = (bool_t)ivar_27->ftbl->mptr(ivar_27, ivar_38, ivar_11, ivar_12, ivar_15);
             ivar_27->ftbl->rptr(ivar_27);
} else {
        
             bool_t ivar_72;
             ivar_13->count++;
             ivar_72 = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_13);
             if (ivar_72){  
           release_cstopdown__ent_adt(ivar_13);
           release_cstopdown__ent_adt(ivar_13);
           cstopdown_funtype_66_t ivar_59;
           cstopdown_closure_109_t cl51567;
           cl51567 = new_cstopdown_closure_109();
           cl51567->fvar_1 = (cstopdown_funtype_66_t)ivar_8;
           if (cl51567->fvar_1 != NULL) cl51567->fvar_1->count++;
           release_cstopdown_funtype_66(ivar_8);
           ivar_59 = (cstopdown_funtype_66_t)cl51567;
           ivar_2->count++;
           result = (bool_t)cstopdown__loop_readyp((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (cstopdown_funtype_66_t)ivar_59, (uint32_t)ivar_11, (uint8_t)ivar_12);
} else {
             
           bool_t ivar_129;
           ivar_13->count++;
           ivar_129 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_13);
           if (ivar_129){   
           uint64_t ivar_76;
           ivar_13->count++;
           ivar_76 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_13);
           uint32_t ivar_77;
           ivar_77 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_13);
           bool_t ivar_84;
           mpq_ptr_t ivar_87;
           mpz_t tmp51568;
           mpz_init(tmp51568);
           mpz_set_ui(tmp51568, (uint64_t)ivar_1);
           mpz_sub_ui(tmp51568, tmp51568, (uint64_t)ivar_11);
           mpq_mk_set_z(ivar_87, tmp51568);
           mpz_clear(tmp51568);
           int64_t tmp51569 = mpq_cmp_ui(ivar_87, ivar_77, 1);
           ivar_84 = (tmp51569 <= 0);
           if (ivar_84){    
            cstopdown_funtype_99_t ivar_104;
            ivar_2->count++;
            ivar_3->count++;
            ivar_104 = (cstopdown_funtype_99_t)cstopdown__good_goodp((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (cstopdown_funtype_72_t)ivar_3);
            cstopdown_funtype_66_t ivar_118;
            cstopdown_closure_110_t cl51570;
            cl51570 = new_cstopdown_closure_110();
            cl51570->fvar_1 = (cstopdown_funtype_66_t)ivar_8;
            if (cl51570->fvar_1 != NULL) cl51570->fvar_1->count++;
            release_cstopdown_funtype_66(ivar_8);
            ivar_118 = (cstopdown_funtype_66_t)cl51570;
            mpz_ptr_t ivar_122;
            //copying to mpz from uint32;
            mpz_mk_set_ui(ivar_122, ivar_77);
            result = (bool_t)ivar_104->ftbl->mptr(ivar_104, ivar_118, ivar_11, ivar_12, ivar_76, ivar_122);
            ivar_104->ftbl->rptr(ivar_104);
} else {
           
            release_cstopdown_funtype_66(ivar_8);
            result = (bool_t) false;
};
} else {
           
           bool_t ivar_133;
           ivar_133 = (bool_t)r_cstopdown__pushp((cstopdown__ent_adt_t)ivar_13);
           if (ivar_133){    
            cstopdown__ent_adt_t ivar_152;
            cstopdown_funtype_65_t ivar_142;
            cstopdown_funtype_66_t ivar_148;
            //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
            ivar_148 = (cstopdown_funtype_66_t)ivar_8;
            if (ivar_148 != NULL) ivar_148->count++;
            release_cstopdown_funtype_66(ivar_8);
            uint32_t ivar_149;
            //copying to uint32 from uint32;
            ivar_149 = (uint32_t)ivar_11;
            ivar_142 = (cstopdown_funtype_65_t)ivar_148->ftbl->fptr(ivar_148, ivar_149);
            ivar_148->ftbl->rptr(ivar_148);
            ivar_152 = (cstopdown__ent_adt_t)ivar_142->ftbl->fptr(ivar_142, ivar_12);
            ivar_142->ftbl->rptr(ivar_142);
            result = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_152);
} else {
           
            release_cstopdown_funtype_66(ivar_8);
            result = (bool_t) false;
};
};
};
};

        return result;
}

cstopdown_closure_107_t new_cstopdown_closure_107(void){
        static struct cstopdown_funtype_102_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_102_t, cstopdown_record_101_t))&f_cstopdown_closure_107, .mptr = (bool_t (*)(cstopdown_funtype_102_t, cstopdown_funtype_66_t, uint32_t, uint8_t, cstopdown__ent_adt_t))&m_cstopdown_closure_107, .rptr =  (void (*)(cstopdown_funtype_102_t))&release_cstopdown_closure_107, .cptr = (cstopdown_funtype_102_t (*)(cstopdown_funtype_102_t))&copy_cstopdown_closure_107};
        cstopdown_closure_107_t tmp = (cstopdown_closure_107_t) safe_malloc(sizeof(struct cstopdown_closure_107_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_107(cstopdown_funtype_102_t closure){
        cstopdown_closure_107_t x = (cstopdown_closure_107_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_72(x->fvar_2);
         release_cstopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_107_t copy_cstopdown_closure_107(cstopdown_closure_107_t x){
        cstopdown_closure_107_t y = new_cstopdown_closure_107();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_102_htbl_t new_htbl = (cstopdown_funtype_102_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_102_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_102_hashentry_t * new_data = (cstopdown_funtype_102_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_102_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_102_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_108(struct cstopdown_closure_108_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_108(bvar, closure->fvar_1);};

return h_cstopdown_closure_108(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_108(struct cstopdown_closure_108_s * closure, uint32_t bvar){
        return h_cstopdown_closure_108(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_108(uint32_t ivar_45, cstopdown_funtype_66_t ivar_8){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_43;
        uint32_t ivar_44;
        //copying to uint32 from uint32;
        ivar_44 = (uint32_t)ivar_45;
        ivar_43 = (cstopdown_funtype_65_t)ivar_8->ftbl->fptr(ivar_8, ivar_44);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_43;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_43);

        return result;
}

cstopdown_closure_108_t new_cstopdown_closure_108(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_108, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_108, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_108, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_108};
        cstopdown_closure_108_t tmp = (cstopdown_closure_108_t) safe_malloc(sizeof(struct cstopdown_closure_108_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_108(cstopdown_funtype_66_t closure){
        cstopdown_closure_108_t x = (cstopdown_closure_108_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_108_t copy_cstopdown_closure_108(cstopdown_closure_108_t x){
        cstopdown_closure_108_t y = new_cstopdown_closure_108();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_109(struct cstopdown_closure_109_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_109(bvar, closure->fvar_1);};

return h_cstopdown_closure_109(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_109(struct cstopdown_closure_109_s * closure, uint32_t bvar){
        return h_cstopdown_closure_109(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_109(uint32_t ivar_70, cstopdown_funtype_66_t ivar_8){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_68;
        uint32_t ivar_69;
        //copying to uint32 from uint32;
        ivar_69 = (uint32_t)ivar_70;
        ivar_68 = (cstopdown_funtype_65_t)ivar_8->ftbl->fptr(ivar_8, ivar_69);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_68;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_68);

        return result;
}

cstopdown_closure_109_t new_cstopdown_closure_109(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_109, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_109, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_109, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_109};
        cstopdown_closure_109_t tmp = (cstopdown_closure_109_t) safe_malloc(sizeof(struct cstopdown_closure_109_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_109(cstopdown_funtype_66_t closure){
        cstopdown_closure_109_t x = (cstopdown_closure_109_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_109_t copy_cstopdown_closure_109(cstopdown_closure_109_t x){
        cstopdown_closure_109_t y = new_cstopdown_closure_109();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_110(struct cstopdown_closure_110_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_110(bvar, closure->fvar_1);};

return h_cstopdown_closure_110(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_110(struct cstopdown_closure_110_s * closure, uint32_t bvar){
        return h_cstopdown_closure_110(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_110(uint32_t ivar_126, cstopdown_funtype_66_t ivar_8){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_124;
        uint32_t ivar_125;
        //copying to uint32 from uint32;
        ivar_125 = (uint32_t)ivar_126;
        ivar_124 = (cstopdown_funtype_65_t)ivar_8->ftbl->fptr(ivar_8, ivar_125);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_124;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_124);

        return result;
}

cstopdown_closure_110_t new_cstopdown_closure_110(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_110, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_110, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_110, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_110};
        cstopdown_closure_110_t tmp = (cstopdown_closure_110_t) safe_malloc(sizeof(struct cstopdown_closure_110_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_110(cstopdown_funtype_66_t closure){
        cstopdown_closure_110_t x = (cstopdown_closure_110_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_110_t copy_cstopdown_closure_110(cstopdown_closure_110_t x){
        cstopdown_closure_110_t y = new_cstopdown_closure_110();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_111(cstopdown_funtype_111_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_111_t copy_cstopdown_funtype_111(cstopdown_funtype_111_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_111(cstopdown_funtype_111_t x, cstopdown_funtype_111_t y){
        return false;}

char* json_cstopdown_funtype_111(cstopdown_funtype_111_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"cstopdown_funtype_111\""); return result;}


bool_t f_cstopdown_closure_112(struct cstopdown_closure_112_s * closure, cstopdown_funtype_66_t bvar){
        bool_t result = h_cstopdown_closure_112(bvar); 
        return result;}

bool_t m_cstopdown_closure_112(struct cstopdown_closure_112_s * closure, cstopdown_funtype_66_t bvar){
        return h_cstopdown_closure_112(bvar);}

extern bool_t h_cstopdown_closure_112(cstopdown_funtype_66_t ivar_8){
        bool_t result;
        result = (bool_t)u_undef_quant_expr();

        return result;
}

cstopdown_closure_112_t new_cstopdown_closure_112(void){
        static struct cstopdown_funtype_111_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_111_t, cstopdown_funtype_66_t))&f_cstopdown_closure_112, .mptr = (bool_t (*)(cstopdown_funtype_111_t, cstopdown_funtype_66_t))&m_cstopdown_closure_112, .rptr =  (void (*)(cstopdown_funtype_111_t))&release_cstopdown_closure_112, .cptr = (cstopdown_funtype_111_t (*)(cstopdown_funtype_111_t))&copy_cstopdown_closure_112};
        cstopdown_closure_112_t tmp = (cstopdown_closure_112_t) safe_malloc(sizeof(struct cstopdown_closure_112_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_112(cstopdown_funtype_111_t closure){
        cstopdown_closure_112_t x = (cstopdown_closure_112_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_112_t copy_cstopdown_closure_112(cstopdown_closure_112_t x){
        cstopdown_closure_112_t y = new_cstopdown_closure_112();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdown_funtype_111_htbl_t new_htbl = (cstopdown_funtype_111_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_111_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_111_hashentry_t * new_data = (cstopdown_funtype_111_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_111_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_111_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_113(struct cstopdown_closure_113_s * closure, cstopdown_record_40_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_cstopdown_record_40(bvar);
        bool_t result = h_cstopdown_closure_113(bvar_1, bvar_2, closure->fvar_1); 
        return result;}

bool_t m_cstopdown_closure_113(struct cstopdown_closure_113_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_cstopdown_closure_113(bvar_1, bvar_2, closure->fvar_1);}

extern bool_t h_cstopdown_closure_113(uint32_t ivar_6, uint8_t ivar_7, cstopdown_funtype_66_t ivar_2){
        bool_t result;
        bool_t ivar_8;
        cstopdown__ent_adt_t ivar_23;
        cstopdown_funtype_65_t ivar_13;
        cstopdown_funtype_66_t ivar_19;
        //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
        ivar_19 = (cstopdown_funtype_66_t)ivar_2;
        if (ivar_19 != NULL) ivar_19->count++;
        uint32_t ivar_20;
        //copying to uint32 from uint32;
        ivar_20 = (uint32_t)ivar_6;
        ivar_13 = (cstopdown_funtype_65_t)ivar_19->ftbl->fptr(ivar_19, ivar_20);
        ivar_19->ftbl->rptr(ivar_19);
        ivar_23 = (cstopdown__ent_adt_t)ivar_13->ftbl->fptr(ivar_13, ivar_7);
        ivar_13->ftbl->rptr(ivar_13);
        ivar_8 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_23);
        result = !ivar_8;

        return result;
}

cstopdown_closure_113_t new_cstopdown_closure_113(void){
        static struct cstopdown_funtype_64_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_64_t, cstopdown_record_40_t))&f_cstopdown_closure_113, .mptr = (bool_t (*)(cstopdown_funtype_64_t, uint32_t, uint8_t))&m_cstopdown_closure_113, .rptr =  (void (*)(cstopdown_funtype_64_t))&release_cstopdown_closure_113, .cptr = (cstopdown_funtype_64_t (*)(cstopdown_funtype_64_t))&copy_cstopdown_closure_113};
        cstopdown_closure_113_t tmp = (cstopdown_closure_113_t) safe_malloc(sizeof(struct cstopdown_closure_113_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_113(cstopdown_funtype_64_t closure){
        cstopdown_closure_113_t x = (cstopdown_closure_113_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_113_t copy_cstopdown_closure_113(cstopdown_closure_113_t x){
        cstopdown_closure_113_t y = new_cstopdown_closure_113();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_64_htbl_t new_htbl = (cstopdown_funtype_64_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_64_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_64_hashentry_t * new_data = (cstopdown_funtype_64_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_64_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_64_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_114(cstopdown_funtype_114_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_114_t copy_cstopdown_funtype_114(cstopdown_funtype_114_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_114(cstopdown_funtype_114_t x, cstopdown_funtype_114_t y){
        return false;}

char* json_cstopdown_funtype_114(cstopdown_funtype_114_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"cstopdown_funtype_114\""); return result;}


cstopdown_funtype_111_t f_cstopdown_closure_115(struct cstopdown_closure_115_s * closure, cstopdown_record_40_t bvar){
        uint32_t bvar_1;
        bvar_1 = (uint32_t)bvar->project_1;
        uint8_t bvar_2;
        bvar_2 = (uint8_t)bvar->project_2;
        release_cstopdown_record_40(bvar);
        cstopdown_funtype_111_t result = h_cstopdown_closure_115(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

cstopdown_funtype_111_t m_cstopdown_closure_115(struct cstopdown_closure_115_s * closure, uint32_t bvar_1, uint8_t bvar_2){
        return h_cstopdown_closure_115(bvar_1, bvar_2, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern cstopdown_funtype_111_t h_cstopdown_closure_115(uint32_t ivar_9, uint8_t ivar_10, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3, uint32_t ivar_1){
        cstopdown_funtype_111_t result;
        cstopdown_closure_116_t cl51593;
        cl51593 = new_cstopdown_closure_116();
        cl51593->fvar_1 = (uint32_t)ivar_1;
        cl51593->fvar_2 = (uint8_t)ivar_10;
        cl51593->fvar_3 = (uint32_t)ivar_9;
        cl51593->fvar_4 = (cstopdown_funtype_72_t)ivar_3;
        if (cl51593->fvar_4 != NULL) cl51593->fvar_4->count++;
        cl51593->fvar_5 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51593->fvar_5 != NULL) cl51593->fvar_5->count++;
        result = (cstopdown_funtype_111_t)cl51593;

        return result;
}

cstopdown_closure_115_t new_cstopdown_closure_115(void){
        static struct cstopdown_funtype_114_ftbl_s ftbl = {.fptr = (cstopdown_funtype_111_t (*)(cstopdown_funtype_114_t, cstopdown_record_40_t))&f_cstopdown_closure_115, .mptr = (cstopdown_funtype_111_t (*)(cstopdown_funtype_114_t, uint32_t, uint8_t))&m_cstopdown_closure_115, .rptr =  (void (*)(cstopdown_funtype_114_t))&release_cstopdown_closure_115, .cptr = (cstopdown_funtype_114_t (*)(cstopdown_funtype_114_t))&copy_cstopdown_closure_115};
        cstopdown_closure_115_t tmp = (cstopdown_closure_115_t) safe_malloc(sizeof(struct cstopdown_closure_115_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_115(cstopdown_funtype_114_t closure){
        cstopdown_closure_115_t x = (cstopdown_closure_115_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown__lang_spec(x->fvar_1);
         release_cstopdown_funtype_72(x->fvar_2);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_115_t copy_cstopdown_closure_115(cstopdown_closure_115_t x){
        cstopdown_closure_115_t y = new_cstopdown_closure_115();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = (uint32_t)x->fvar_3;
        if (x->htbl != NULL){
            cstopdown_funtype_114_htbl_t new_htbl = (cstopdown_funtype_114_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_114_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_114_hashentry_t * new_data = (cstopdown_funtype_114_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_114_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_114_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_116(struct cstopdown_closure_116_s * closure, cstopdown_funtype_66_t bvar){
        bool_t result = h_cstopdown_closure_116(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

bool_t m_cstopdown_closure_116(struct cstopdown_closure_116_s * closure, cstopdown_funtype_66_t bvar){
        return h_cstopdown_closure_116(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern bool_t h_cstopdown_closure_116(cstopdown_funtype_66_t ivar_14, uint32_t ivar_1, uint8_t ivar_10, uint32_t ivar_9, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2){
        bool_t result;
        bool_t ivar_17;
        cstopdown_funtype_64_t ivar_23;
        cstopdown_funtype_66_t ivar_29;
        cstopdown_closure_117_t cl51591;
        cl51591 = new_cstopdown_closure_117();
        cl51591->fvar_1 = (cstopdown_funtype_66_t)ivar_14;
        if (cl51591->fvar_1 != NULL) cl51591->fvar_1->count++;
        ivar_29 = (cstopdown_funtype_66_t)cl51591;
        ivar_23 = (cstopdown_funtype_64_t)cstopdown__good_rootp((uint32_t)ivar_1, (cstopdown_funtype_66_t)ivar_29);
        ivar_17 = (bool_t)ivar_23->ftbl->mptr(ivar_23, ivar_9, ivar_10);
        ivar_23->ftbl->rptr(ivar_23);
        if (ivar_17){ 
             cstopdown_funtype_111_t ivar_47;
             ivar_2->count++;
             ivar_3->count++;
             ivar_47 = (cstopdown_funtype_111_t)cstopdown__good_tscaffoldp((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (cstopdown_funtype_72_t)ivar_3);
             cstopdown_funtype_66_t ivar_58;
             cstopdown_closure_118_t cl51592;
             cl51592 = new_cstopdown_closure_118();
             cl51592->fvar_1 = (cstopdown_funtype_66_t)ivar_14;
             if (cl51592->fvar_1 != NULL) cl51592->fvar_1->count++;
             release_cstopdown_funtype_66(ivar_14);
             ivar_58 = (cstopdown_funtype_66_t)cl51592;
             result = (bool_t)ivar_47->ftbl->fptr(ivar_47, ivar_58);
             ivar_47->ftbl->rptr(ivar_47);
} else {
        
             release_cstopdown_funtype_66(ivar_14);
             result = (bool_t) false;
};

        return result;
}

cstopdown_closure_116_t new_cstopdown_closure_116(void){
        static struct cstopdown_funtype_111_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_111_t, cstopdown_funtype_66_t))&f_cstopdown_closure_116, .mptr = (bool_t (*)(cstopdown_funtype_111_t, cstopdown_funtype_66_t))&m_cstopdown_closure_116, .rptr =  (void (*)(cstopdown_funtype_111_t))&release_cstopdown_closure_116, .cptr = (cstopdown_funtype_111_t (*)(cstopdown_funtype_111_t))&copy_cstopdown_closure_116};
        cstopdown_closure_116_t tmp = (cstopdown_closure_116_t) safe_malloc(sizeof(struct cstopdown_closure_116_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_116(cstopdown_funtype_111_t closure){
        cstopdown_closure_116_t x = (cstopdown_closure_116_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_72(x->fvar_4);
         release_cstopdown__lang_spec(x->fvar_5);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_116_t copy_cstopdown_closure_116(cstopdown_closure_116_t x){
        cstopdown_closure_116_t y = new_cstopdown_closure_116();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint8_t)x->fvar_2;
        y->fvar_3 = (uint32_t)x->fvar_3;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = x->fvar_5; x->fvar_5->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_111_htbl_t new_htbl = (cstopdown_funtype_111_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_111_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_111_hashentry_t * new_data = (cstopdown_funtype_111_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_111_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_111_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_117(struct cstopdown_closure_117_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_117(bvar, closure->fvar_1);};

return h_cstopdown_closure_117(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_117(struct cstopdown_closure_117_s * closure, uint32_t bvar){
        return h_cstopdown_closure_117(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_117(uint32_t ivar_38, cstopdown_funtype_66_t ivar_14){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_36;
        uint32_t ivar_37;
        //copying to uint32 from uint32;
        ivar_37 = (uint32_t)ivar_38;
        ivar_36 = (cstopdown_funtype_65_t)ivar_14->ftbl->fptr(ivar_14, ivar_37);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_36;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_36);

        return result;
}

cstopdown_closure_117_t new_cstopdown_closure_117(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_117, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_117, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_117, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_117};
        cstopdown_closure_117_t tmp = (cstopdown_closure_117_t) safe_malloc(sizeof(struct cstopdown_closure_117_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_117(cstopdown_funtype_66_t closure){
        cstopdown_closure_117_t x = (cstopdown_closure_117_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_117_t copy_cstopdown_closure_117(cstopdown_closure_117_t x){
        cstopdown_closure_117_t y = new_cstopdown_closure_117();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_118(struct cstopdown_closure_118_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_118(bvar, closure->fvar_1);};

return h_cstopdown_closure_118(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_118(struct cstopdown_closure_118_s * closure, uint32_t bvar){
        return h_cstopdown_closure_118(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_118(uint32_t ivar_62, cstopdown_funtype_66_t ivar_14){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_60;
        uint32_t ivar_61;
        //copying to uint32 from uint32;
        ivar_61 = (uint32_t)ivar_62;
        ivar_60 = (cstopdown_funtype_65_t)ivar_14->ftbl->fptr(ivar_14, ivar_61);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_60;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_60);

        return result;
}

cstopdown_closure_118_t new_cstopdown_closure_118(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_118, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_118, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_118, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_118};
        cstopdown_closure_118_t tmp = (cstopdown_closure_118_t) safe_malloc(sizeof(struct cstopdown_closure_118_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_118(cstopdown_funtype_66_t closure){
        cstopdown_closure_118_t x = (cstopdown_closure_118_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_118_t copy_cstopdown_closure_118(cstopdown_closure_118_t x){
        cstopdown_closure_118_t y = new_cstopdown_closure_118();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_record_119_t new_cstopdown_record_119(void){
        cstopdown_record_119_t tmp = (cstopdown_record_119_t) safe_malloc(sizeof(struct cstopdown_record_119_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_119(cstopdown_record_119_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->scaf);
         release_cstopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_119_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_119((cstopdown_record_119_t)x);
}

cstopdown_record_119_t copy_cstopdown_record_119(cstopdown_record_119_t x){
        cstopdown_record_119_t y = new_cstopdown_record_119();
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->depth = (uint64_t)x->depth;
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->lflag = (bool_t)x->lflag;
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_119(cstopdown_record_119_t x, cstopdown_record_119_t y){
        bool_t tmp = true;
        tmp = tmp && equal_cstopdown_funtype_66(x->scaf, y->scaf);
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && equal_cstopdown__ent_adt(x->stack, y->stack);
        tmp = tmp && x->lflag == y->lflag;
        return tmp;}

char * json_cstopdown_record_119(cstopdown_record_119_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(16);
         sprintf(fld0, "\"scaf\" : ");
        tmp[0] = safe_strcat(fld0, json_cstopdown_funtype_66(x->scaf));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"depth\" : ");
        tmp[1] = safe_strcat(fld1, json_uint64(x->depth));
        char * fld2 = safe_malloc(17);
         sprintf(fld2, "\"stack\" : ");
        tmp[2] = safe_strcat(fld2, json_cstopdown__ent_adt(x->stack));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"lflag\" : ");
        tmp[3] = safe_strcat(fld3, json_bool(x->lflag));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_119_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_119_t T){
        return equal_cstopdown_record_119((cstopdown_record_119_t)x, (cstopdown_record_119_t)y);
}

char * json_cstopdown_record_119_ptr(pointer_t x, actual_cstopdown_record_119_t T){
        return json_cstopdown_record_119((cstopdown_record_119_t)x);
}

cstopdown_record_119_t update_cstopdown_record_119_scaf(cstopdown_record_119_t x, cstopdown_funtype_66_t v){
        cstopdown_record_119_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_cstopdown_funtype_66(x->scaf);};}
        else {y = copy_cstopdown_record_119(x); x->count--; y->scaf->count--;};
        y->scaf = (cstopdown_funtype_66_t)v;
        return y;}

cstopdown_record_119_t update_cstopdown_record_119_depth(cstopdown_record_119_t x, uint64_t v){
        cstopdown_record_119_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_119(x); x->count--;};
        y->depth = (uint64_t)v;
        return y;}

cstopdown_record_119_t update_cstopdown_record_119_stack(cstopdown_record_119_t x, cstopdown__ent_adt_t v){
        cstopdown_record_119_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_cstopdown__ent_adt(x->stack);};}
        else {y = copy_cstopdown_record_119(x); x->count--; y->stack->count--;};
        y->stack = (cstopdown__ent_adt_t)v;
        return y;}

cstopdown_record_119_t update_cstopdown_record_119_lflag(cstopdown_record_119_t x, bool_t v){
        cstopdown_record_119_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_119(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}



void release_cstopdown_funtype_120(cstopdown_funtype_120_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_120_t copy_cstopdown_funtype_120(cstopdown_funtype_120_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_120(cstopdown_funtype_120_t x, cstopdown_funtype_120_t y){
        return false;}

char* json_cstopdown_funtype_120(cstopdown_funtype_120_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"cstopdown_funtype_120\""); return result;}


cstopdown_record_119_t f_cstopdown_closure_121(struct cstopdown_closure_121_s * closure, cstopdown_record_119_t bvar){
        cstopdown_record_119_t result = h_cstopdown_closure_121(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3); 
        return result;}

cstopdown_record_119_t m_cstopdown_closure_121(struct cstopdown_closure_121_s * closure, cstopdown_record_119_t bvar){
        return h_cstopdown_closure_121(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3);}

extern cstopdown_record_119_t h_cstopdown_closure_121(cstopdown_record_119_t ivar_12, uint32_t ivar_1, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2){
        cstopdown_record_119_t result;
        cstopdown_funtype_66_t ivar_1490;
        cstopdown_record_119_t ivar_22;
        //copying to cstopdown_record_119 from cstopdown_record_119;
        ivar_22 = (cstopdown_record_119_t)ivar_12;
        if (ivar_22 != NULL) ivar_22->count++;
        ivar_1490 = (cstopdown_funtype_66_t)ivar_22->scaf;
        ivar_1490->count++;
        release_cstopdown_record_119(ivar_22);
        cstopdown_funtype_66_t ivar_1491;
        //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
        ivar_1491 = (cstopdown_funtype_66_t)ivar_1490;
        if (ivar_1491 != NULL) ivar_1491->count++;
        release_cstopdown_funtype_66(ivar_1490);
        /* scaf */ cstopdown_funtype_66_t ivar_17;
        cstopdown_closure_122_t cl51656;
        cl51656 = new_cstopdown_closure_122();
        cl51656->fvar_1 = (cstopdown_funtype_66_t)ivar_1491;
        if (cl51656->fvar_1 != NULL) cl51656->fvar_1->count++;
        ivar_17 = (cstopdown_funtype_66_t)cl51656;
        /* stack */ cstopdown__ent_adt_t ivar_25;
        cstopdown_record_119_t ivar_26;
        //copying to cstopdown_record_119 from cstopdown_record_119;
        ivar_26 = (cstopdown_record_119_t)ivar_12;
        if (ivar_26 != NULL) ivar_26->count++;
        ivar_25 = (cstopdown__ent_adt_t)ivar_26->stack;
        ivar_25->count++;
        release_cstopdown_record_119(ivar_26);
        /* depth */ uint64_t ivar_29;
        cstopdown_record_119_t ivar_30;
        //copying to cstopdown_record_119 from cstopdown_record_119;
        ivar_30 = (cstopdown_record_119_t)ivar_12;
        if (ivar_30 != NULL) ivar_30->count++;
        ivar_29 = (uint64_t)ivar_30->depth;
        release_cstopdown_record_119(ivar_30);
        bool_t ivar_37;
        ivar_25->count++;
        ivar_37 = (bool_t)cstopdown__emptyp((cstopdown__ent_adt_t)ivar_25);
        if (ivar_37){ 
             release_cstopdown__ent_adt(ivar_25);
             release_cstopdown_funtype_66(ivar_17);
             //copying to cstopdown_record_119 from cstopdown_record_119;
             result = (cstopdown_record_119_t)ivar_12;
             if (result != NULL) result->count++;
             release_cstopdown_record_119(ivar_12);
} else {
        
             /* pos */ uint32_t ivar_41;
             ivar_25->count++;
             ivar_41 = (uint32_t)cstopdown__ent_adt_pos((cstopdown__ent_adt_t)ivar_25);
             /* cur */ uint8_t ivar_45;
             ivar_25->count++;
             ivar_45 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_25);
             /* rest */ cstopdown__ent_adt_t ivar_49;
             cstopdown_funtype_65_t ivar_53;
             cstopdown_funtype_66_t ivar_59;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_59 = (cstopdown_funtype_66_t)ivar_17;
             if (ivar_59 != NULL) ivar_59->count++;
             uint32_t ivar_60;
             //copying to uint32 from uint32;
             ivar_60 = (uint32_t)ivar_41;
             ivar_53 = (cstopdown_funtype_65_t)ivar_59->ftbl->fptr(ivar_59, ivar_60);
             ivar_59->ftbl->rptr(ivar_59);
             ivar_49 = (cstopdown__ent_adt_t)ivar_53->ftbl->fptr(ivar_53, ivar_45);
             ivar_53->ftbl->rptr(ivar_53);
             cstopdown__peg_adt_t ivar_62;
             ivar_62 = (cstopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_45);
             bool_t ivar_109;
             ivar_62->count++;
             ivar_109 = (bool_t)r_cstopdown__epsilonp((cstopdown__peg_adt_t)ivar_62);
             if (ivar_109){  
           release_cstopdown__ent_adt(ivar_25);
           release_cstopdown_funtype_66(ivar_17);
           release_cstopdown__peg_adt(ivar_62);
           cstopdown__ent_adt_t ivar_69;
           uint8_t ivar_80;
           ivar_80 = (uint8_t)0;
           uint64_t ivar_75;
           //copying to uint64 from uint8;
           ivar_75 = (uint64_t)ivar_80;
           uint8_t ivar_79;
           ivar_79 = (uint8_t)0;
           uint32_t ivar_76;
           //copying to uint32 from uint8;
           ivar_76 = (uint32_t)ivar_79;
           ivar_69 = (cstopdown__ent_adt_t)cstopdown__good((uint64_t)ivar_75, (uint32_t)ivar_76);
           uint64_t ivar_71;
           uint8_t ivar_82;
           ivar_82 = (uint8_t)1;
           ivar_71 = (uint64_t)(ivar_29 - ivar_82);
           cstopdown_record_119_t ivar_84;
           //copying to cstopdown_record_119 from cstopdown_record_119;
           ivar_84 = (cstopdown_record_119_t)ivar_12;
           if (ivar_84 != NULL) ivar_84->count++;
           release_cstopdown_record_119(ivar_12);
           cstopdown_record_119_t ivar_99;
           cstopdown_funtype_66_t ivar_85;
           ivar_85 = (cstopdown_funtype_66_t)ivar_84->scaf;
           ivar_85->count++;
           cstopdown_record_119_t ivar_96;
           cstopdown_funtype_66_t ivar_98;
           ivar_98 = NULL;
           ivar_96 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_84, ivar_98);
           if (ivar_98 != NULL) ivar_98->count--;
           cstopdown_funtype_66_t ivar_97;
           uint32_t ivar_92;
           //copying to uint32 from uint32;
           ivar_92 = (uint32_t)ivar_41;
           cstopdown_funtype_65_t ivar_86;
           ivar_86 = (cstopdown_funtype_65_t)ivar_85->ftbl->fptr(ivar_85, ivar_92);
           cstopdown_funtype_66_t ivar_93;
           cstopdown_funtype_65_t ivar_95;
           ivar_95 = NULL;
           ivar_93 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_85, ivar_92, ivar_95);
           if (ivar_95 != NULL) ivar_95->count--;
           cstopdown_funtype_65_t ivar_94;
           cstopdown_funtype_65_t ivar_89;
           cstopdown__ent_adt_t ivar_91;
           ivar_91 = NULL;
           ivar_89 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_86, ivar_45, ivar_91);
           if (ivar_91 != NULL) ivar_91->count--;
           ivar_94 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_89, ivar_45, ivar_69);
           if (ivar_69 != NULL) ivar_69->count--;
           ivar_97 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_93, ivar_92, ivar_94);
           if (ivar_94 != NULL) ivar_94->count--;
           ivar_99 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_96, ivar_97);
           if (ivar_97 != NULL) ivar_97->count--;
           cstopdown_record_119_t ivar_104;
           cstopdown_record_119_t ivar_101;
           cstopdown__ent_adt_t ivar_103;
           ivar_103 = NULL;
           ivar_101 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_99, ivar_103);
           if (ivar_103 != NULL) ivar_103->count--;
           ivar_104 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_101, ivar_49);
           if (ivar_49 != NULL) ivar_49->count--;
           result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_104, ivar_71);
} else {
             
           bool_t ivar_151;
           ivar_62->count++;
           ivar_151 = (bool_t)r_cstopdown__failurep((cstopdown__peg_adt_t)ivar_62);
           if (ivar_151){   
           release_cstopdown__ent_adt(ivar_25);
           release_cstopdown_funtype_66(ivar_17);
           release_cstopdown__peg_adt(ivar_62);
           cstopdown__ent_adt_t ivar_115;
           uint8_t ivar_122;
           ivar_122 = (uint8_t)0;
           uint64_t ivar_120;
           //copying to uint64 from uint8;
           ivar_120 = (uint64_t)ivar_122;
           ivar_115 = (cstopdown__ent_adt_t)cstopdown__fail((uint64_t)ivar_120);
           uint64_t ivar_117;
           uint8_t ivar_124;
           ivar_124 = (uint8_t)1;
           ivar_117 = (uint64_t)(ivar_29 - ivar_124);
           cstopdown_record_119_t ivar_126;
           //copying to cstopdown_record_119 from cstopdown_record_119;
           ivar_126 = (cstopdown_record_119_t)ivar_12;
           if (ivar_126 != NULL) ivar_126->count++;
           release_cstopdown_record_119(ivar_12);
           cstopdown_record_119_t ivar_141;
           cstopdown_funtype_66_t ivar_127;
           ivar_127 = (cstopdown_funtype_66_t)ivar_126->scaf;
           ivar_127->count++;
           cstopdown_record_119_t ivar_138;
           cstopdown_funtype_66_t ivar_140;
           ivar_140 = NULL;
           ivar_138 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_126, ivar_140);
           if (ivar_140 != NULL) ivar_140->count--;
           cstopdown_funtype_66_t ivar_139;
           uint32_t ivar_134;
           //copying to uint32 from uint32;
           ivar_134 = (uint32_t)ivar_41;
           cstopdown_funtype_65_t ivar_128;
           ivar_128 = (cstopdown_funtype_65_t)ivar_127->ftbl->fptr(ivar_127, ivar_134);
           cstopdown_funtype_66_t ivar_135;
           cstopdown_funtype_65_t ivar_137;
           ivar_137 = NULL;
           ivar_135 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_127, ivar_134, ivar_137);
           if (ivar_137 != NULL) ivar_137->count--;
           cstopdown_funtype_65_t ivar_136;
           cstopdown_funtype_65_t ivar_131;
           cstopdown__ent_adt_t ivar_133;
           ivar_133 = NULL;
           ivar_131 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_128, ivar_45, ivar_133);
           if (ivar_133 != NULL) ivar_133->count--;
           ivar_136 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_131, ivar_45, ivar_115);
           if (ivar_115 != NULL) ivar_115->count--;
           ivar_139 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_135, ivar_134, ivar_136);
           if (ivar_136 != NULL) ivar_136->count--;
           ivar_141 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_138, ivar_139);
           if (ivar_139 != NULL) ivar_139->count--;
           cstopdown_record_119_t ivar_146;
           cstopdown_record_119_t ivar_143;
           cstopdown__ent_adt_t ivar_145;
           ivar_145 = NULL;
           ivar_143 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_141, ivar_145);
           if (ivar_145 != NULL) ivar_145->count--;
           ivar_146 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_143, ivar_49);
           if (ivar_49 != NULL) ivar_49->count--;
           result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_146, ivar_117);
} else {
           
           bool_t ivar_228;
           ivar_62->count++;
           ivar_228 = (bool_t)r_cstopdown__anyp((cstopdown__peg_adt_t)ivar_62);
           if (ivar_228){    
            release_cstopdown__ent_adt(ivar_25);
            release_cstopdown_funtype_66(ivar_17);
            cstopdown_funtype_1_t ivar_155;
            ivar_155 = (cstopdown_funtype_1_t)cstopdown__peg_adt_p((cstopdown__peg_adt_t)ivar_62);
            /* v */ cstopdown__ent_adt_t ivar_161;
            bool_t ivar_162;
            bool_t ivar_163;
            ivar_163 = (ivar_41 == ivar_1);
            if (ivar_163){     
             release_cstopdown_funtype_1(ivar_155);
             ivar_162 = (bool_t) true;
} else {
            
             bool_t ivar_168;
             uint8_t ivar_178;
             ivar_178 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_41);
             ivar_168 = (bool_t)ivar_155->ftbl->fptr(ivar_155, ivar_178);
             ivar_155->ftbl->rptr(ivar_155);
             ivar_162 = !ivar_168;
};
            if (ivar_162){     
             uint8_t ivar_185;
             ivar_185 = (uint8_t)0;
             uint64_t ivar_183;
             //copying to uint64 from uint8;
             ivar_183 = (uint64_t)ivar_185;
             ivar_161 = (cstopdown__ent_adt_t)cstopdown__fail((uint64_t)ivar_183);
} else {
            
             uint8_t ivar_194;
             ivar_194 = (uint8_t)0;
             uint64_t ivar_189;
             //copying to uint64 from uint8;
             ivar_189 = (uint64_t)ivar_194;
             uint8_t ivar_193;
             ivar_193 = (uint8_t)1;
             uint32_t ivar_190;
             //copying to uint32 from uint8;
             ivar_190 = (uint32_t)ivar_193;
             ivar_161 = (cstopdown__ent_adt_t)cstopdown__good((uint64_t)ivar_189, (uint32_t)ivar_190);
};
            uint64_t ivar_199;
            uint8_t ivar_201;
            ivar_201 = (uint8_t)1;
            ivar_199 = (uint64_t)(ivar_29 - ivar_201);
            cstopdown_record_119_t ivar_203;
            //copying to cstopdown_record_119 from cstopdown_record_119;
            ivar_203 = (cstopdown_record_119_t)ivar_12;
            if (ivar_203 != NULL) ivar_203->count++;
            release_cstopdown_record_119(ivar_12);
            cstopdown_record_119_t ivar_218;
            cstopdown_funtype_66_t ivar_204;
            ivar_204 = (cstopdown_funtype_66_t)ivar_203->scaf;
            ivar_204->count++;
            cstopdown_record_119_t ivar_215;
            cstopdown_funtype_66_t ivar_217;
            ivar_217 = NULL;
            ivar_215 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_203, ivar_217);
            if (ivar_217 != NULL) ivar_217->count--;
            cstopdown_funtype_66_t ivar_216;
            uint32_t ivar_211;
            //copying to uint32 from uint32;
            ivar_211 = (uint32_t)ivar_41;
            cstopdown_funtype_65_t ivar_205;
            ivar_205 = (cstopdown_funtype_65_t)ivar_204->ftbl->fptr(ivar_204, ivar_211);
            cstopdown_funtype_66_t ivar_212;
            cstopdown_funtype_65_t ivar_214;
            ivar_214 = NULL;
            ivar_212 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_204, ivar_211, ivar_214);
            if (ivar_214 != NULL) ivar_214->count--;
            cstopdown_funtype_65_t ivar_213;
            cstopdown_funtype_65_t ivar_208;
            cstopdown__ent_adt_t ivar_210;
            ivar_210 = NULL;
            ivar_208 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_205, ivar_45, ivar_210);
            if (ivar_210 != NULL) ivar_210->count--;
            ivar_213 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_208, ivar_45, ivar_161);
            if (ivar_161 != NULL) ivar_161->count--;
            ivar_216 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_212, ivar_211, ivar_213);
            if (ivar_213 != NULL) ivar_213->count--;
            ivar_218 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_215, ivar_216);
            if (ivar_216 != NULL) ivar_216->count--;
            cstopdown_record_119_t ivar_223;
            cstopdown_record_119_t ivar_220;
            cstopdown__ent_adt_t ivar_222;
            ivar_222 = NULL;
            ivar_220 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_218, ivar_222);
            if (ivar_222 != NULL) ivar_222->count--;
            ivar_223 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_220, ivar_49);
            if (ivar_49 != NULL) ivar_49->count--;
            result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_223, ivar_199);
} else {
           
            bool_t ivar_299;
            ivar_62->count++;
            ivar_299 = (bool_t)r_cstopdown__terminalp((cstopdown__peg_adt_t)ivar_62);
            if (ivar_299){     
             release_cstopdown__ent_adt(ivar_25);
             release_cstopdown_funtype_66(ivar_17);
             uint8_t ivar_232;
             ivar_232 = (uint8_t)cstopdown__peg_adt_a((cstopdown__peg_adt_t)ivar_62);
             /* v */ cstopdown__ent_adt_t ivar_236;
             bool_t ivar_237;
             bool_t ivar_238;
             ivar_238 = (ivar_41 == ivar_1);
             if (ivar_238){      
              ivar_237 = (bool_t) true;
} else {
             
              uint8_t ivar_244;
              ivar_244 = (uint8_t)ivar_3->ftbl->fptr(ivar_3, ivar_41);
              ivar_237 = (ivar_232 != ivar_244);
};
             if (ivar_237){      
              uint8_t ivar_256;
              ivar_256 = (uint8_t)0;
              uint64_t ivar_254;
              //copying to uint64 from uint8;
              ivar_254 = (uint64_t)ivar_256;
              ivar_236 = (cstopdown__ent_adt_t)cstopdown__fail((uint64_t)ivar_254);
} else {
             
              uint8_t ivar_265;
              ivar_265 = (uint8_t)0;
              uint64_t ivar_260;
              //copying to uint64 from uint8;
              ivar_260 = (uint64_t)ivar_265;
              uint8_t ivar_264;
              ivar_264 = (uint8_t)1;
              uint32_t ivar_261;
              //copying to uint32 from uint8;
              ivar_261 = (uint32_t)ivar_264;
              ivar_236 = (cstopdown__ent_adt_t)cstopdown__good((uint64_t)ivar_260, (uint32_t)ivar_261);
};
             uint64_t ivar_270;
             uint8_t ivar_272;
             ivar_272 = (uint8_t)1;
             ivar_270 = (uint64_t)(ivar_29 - ivar_272);
             cstopdown_record_119_t ivar_274;
             //copying to cstopdown_record_119 from cstopdown_record_119;
             ivar_274 = (cstopdown_record_119_t)ivar_12;
             if (ivar_274 != NULL) ivar_274->count++;
             release_cstopdown_record_119(ivar_12);
             cstopdown_record_119_t ivar_289;
             cstopdown_funtype_66_t ivar_275;
             ivar_275 = (cstopdown_funtype_66_t)ivar_274->scaf;
             ivar_275->count++;
             cstopdown_record_119_t ivar_286;
             cstopdown_funtype_66_t ivar_288;
             ivar_288 = NULL;
             ivar_286 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_274, ivar_288);
             if (ivar_288 != NULL) ivar_288->count--;
             cstopdown_funtype_66_t ivar_287;
             uint32_t ivar_282;
             //copying to uint32 from uint32;
             ivar_282 = (uint32_t)ivar_41;
             cstopdown_funtype_65_t ivar_276;
             ivar_276 = (cstopdown_funtype_65_t)ivar_275->ftbl->fptr(ivar_275, ivar_282);
             cstopdown_funtype_66_t ivar_283;
             cstopdown_funtype_65_t ivar_285;
             ivar_285 = NULL;
             ivar_283 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_275, ivar_282, ivar_285);
             if (ivar_285 != NULL) ivar_285->count--;
             cstopdown_funtype_65_t ivar_284;
             cstopdown_funtype_65_t ivar_279;
             cstopdown__ent_adt_t ivar_281;
             ivar_281 = NULL;
             ivar_279 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_276, ivar_45, ivar_281);
             if (ivar_281 != NULL) ivar_281->count--;
             ivar_284 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_279, ivar_45, ivar_236);
             if (ivar_236 != NULL) ivar_236->count--;
             ivar_287 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_283, ivar_282, ivar_284);
             if (ivar_284 != NULL) ivar_284->count--;
             ivar_289 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_286, ivar_287);
             if (ivar_287 != NULL) ivar_287->count--;
             cstopdown_record_119_t ivar_294;
             cstopdown_record_119_t ivar_291;
             cstopdown__ent_adt_t ivar_293;
             ivar_293 = NULL;
             ivar_291 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_289, ivar_293);
             if (ivar_293 != NULL) ivar_293->count--;
             ivar_294 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_291, ivar_49);
             if (ivar_49 != NULL) ivar_49->count--;
             result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_294, ivar_270);
} else {
            
             bool_t ivar_701;
             ivar_62->count++;
             ivar_701 = (bool_t)r_cstopdown__concatp((cstopdown__peg_adt_t)ivar_62);
             if (ivar_701){      
              release_cstopdown_funtype_66(ivar_17);
              uint8_t ivar_303;
              ivar_62->count++;
              ivar_303 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_62);
              uint8_t ivar_304;
              ivar_304 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_62);
              cstopdown__ent_adt_t ivar_311;
              cstopdown_funtype_65_t ivar_315;
              cstopdown_funtype_66_t ivar_321;
              cstopdown_record_119_t ivar_322;
              //copying to cstopdown_record_119 from cstopdown_record_119;
              ivar_322 = (cstopdown_record_119_t)ivar_12;
              if (ivar_322 != NULL) ivar_322->count++;
              ivar_321 = (cstopdown_funtype_66_t)ivar_322->scaf;
              ivar_321->count++;
              release_cstopdown_record_119(ivar_322);
              uint32_t ivar_325;
              //copying to uint32 from uint32;
              ivar_325 = (uint32_t)ivar_41;
              ivar_315 = (cstopdown_funtype_65_t)ivar_321->ftbl->fptr(ivar_321, ivar_325);
              ivar_321->ftbl->rptr(ivar_321);
              ivar_311 = (cstopdown__ent_adt_t)ivar_315->ftbl->fptr(ivar_315, ivar_303);
              ivar_315->ftbl->rptr(ivar_315);
              bool_t ivar_372;
              ivar_311->count++;
              ivar_372 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_311);
              if (ivar_372){       
               release_cstopdown__ent_adt(ivar_25);
               uint64_t ivar_327;
               ivar_327 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_311);
               cstopdown__ent_adt_t ivar_333;
               mpz_ptr_t ivar_343;
               uint8_t ivar_338;
               ivar_338 = (uint8_t)1;
               mpz_mk_set_ui(ivar_343, (uint64_t)ivar_327);
               mpz_add_ui(ivar_343, ivar_343, (uint64_t)ivar_338);
               uint64_t ivar_341;
               //copying to uint64 from mpz;
               ivar_341 = (uint64_t)mpz_get_ui(ivar_343);
               mpz_clear(ivar_343);
               ivar_333 = (cstopdown__ent_adt_t)cstopdown__fail((uint64_t)ivar_341);
               uint64_t ivar_335;
               uint8_t ivar_345;
               ivar_345 = (uint8_t)1;
               ivar_335 = (uint64_t)(ivar_29 - ivar_345);
               cstopdown_record_119_t ivar_347;
               //copying to cstopdown_record_119 from cstopdown_record_119;
               ivar_347 = (cstopdown_record_119_t)ivar_12;
               if (ivar_347 != NULL) ivar_347->count++;
               release_cstopdown_record_119(ivar_12);
               cstopdown_record_119_t ivar_362;
               cstopdown_funtype_66_t ivar_348;
               ivar_348 = (cstopdown_funtype_66_t)ivar_347->scaf;
               ivar_348->count++;
               cstopdown_record_119_t ivar_359;
               cstopdown_funtype_66_t ivar_361;
               ivar_361 = NULL;
               ivar_359 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_347, ivar_361);
               if (ivar_361 != NULL) ivar_361->count--;
               cstopdown_funtype_66_t ivar_360;
               uint32_t ivar_355;
               //copying to uint32 from uint32;
               ivar_355 = (uint32_t)ivar_41;
               cstopdown_funtype_65_t ivar_349;
               ivar_349 = (cstopdown_funtype_65_t)ivar_348->ftbl->fptr(ivar_348, ivar_355);
               cstopdown_funtype_66_t ivar_356;
               cstopdown_funtype_65_t ivar_358;
               ivar_358 = NULL;
               ivar_356 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_348, ivar_355, ivar_358);
               if (ivar_358 != NULL) ivar_358->count--;
               cstopdown_funtype_65_t ivar_357;
               cstopdown_funtype_65_t ivar_352;
               cstopdown__ent_adt_t ivar_354;
               ivar_354 = NULL;
               ivar_352 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_349, ivar_45, ivar_354);
               if (ivar_354 != NULL) ivar_354->count--;
               ivar_357 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_352, ivar_45, ivar_333);
               if (ivar_333 != NULL) ivar_333->count--;
               ivar_360 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_356, ivar_355, ivar_357);
               if (ivar_357 != NULL) ivar_357->count--;
               ivar_362 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_359, ivar_360);
               if (ivar_360 != NULL) ivar_360->count--;
               cstopdown_record_119_t ivar_367;
               cstopdown_record_119_t ivar_364;
               cstopdown__ent_adt_t ivar_366;
               ivar_366 = NULL;
               ivar_364 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_362, ivar_366);
               if (ivar_366 != NULL) ivar_366->count--;
               ivar_367 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_364, ivar_49);
               if (ivar_49 != NULL) ivar_49->count--;
               result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_367, ivar_335);
} else {
              
               bool_t ivar_617;
               ivar_311->count++;
               ivar_617 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_311);
               if (ivar_617){        
                release_cstopdown__ent_adt(ivar_25);
                uint64_t ivar_376;
                ivar_311->count++;
                ivar_376 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_311);
                uint32_t ivar_377;
                ivar_377 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_311);
                cstopdown__ent_adt_t ivar_384;
                cstopdown_funtype_65_t ivar_388;
                cstopdown_funtype_66_t ivar_397;
                cstopdown_record_119_t ivar_398;
                //copying to cstopdown_record_119 from cstopdown_record_119;
                ivar_398 = (cstopdown_record_119_t)ivar_12;
                if (ivar_398 != NULL) ivar_398->count++;
                ivar_397 = (cstopdown_funtype_66_t)ivar_398->scaf;
                ivar_397->count++;
                release_cstopdown_record_119(ivar_398);
                mpq_ptr_t ivar_402;
                mpz_t tmp51657;
                mpz_init(tmp51657);
                mpz_set_ui(tmp51657, (uint64_t)ivar_41);
                mpz_add_ui(tmp51657, tmp51657, (uint64_t)ivar_377);
                mpq_mk_set_z(ivar_402, tmp51657);
                mpz_clear(tmp51657);
                uint32_t ivar_401;
                //copying to uint32 from mpq;
                ivar_401 = (uint32_t)mpq_get_ui(ivar_402);
                mpq_clear(ivar_402);
                ivar_388 = (cstopdown_funtype_65_t)ivar_397->ftbl->fptr(ivar_397, ivar_401);
                ivar_397->ftbl->rptr(ivar_397);
                ivar_384 = (cstopdown__ent_adt_t)ivar_388->ftbl->fptr(ivar_388, ivar_304);
                ivar_388->ftbl->rptr(ivar_388);
                bool_t ivar_454;
                ivar_384->count++;
                ivar_454 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_384);
                if (ivar_454){         
                 uint64_t ivar_404;
                 ivar_404 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_384);
                 cstopdown__ent_adt_t ivar_410;
                 mpz_ptr_t ivar_425;
                 uint8_t ivar_414;
                 ivar_414 = (uint8_t)1;
                 mpq_ptr_t ivar_415;
                 mpq_ptr_t ivar_419;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_419, ivar_376);
                 mpq_ptr_t ivar_420;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_420, ivar_404);
                 ivar_415 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_419, (mpq_ptr_t)ivar_420);
                 mpz_mk_set_q(ivar_425, ivar_415);
                 mpz_add_ui(ivar_425, ivar_425, ivar_414);
                 uint64_t ivar_423;
                 //copying to uint64 from mpz;
                 ivar_423 = (uint64_t)mpz_get_ui(ivar_425);
                 mpz_clear(ivar_425);
                 ivar_410 = (cstopdown__ent_adt_t)cstopdown__fail((uint64_t)ivar_423);
                 uint64_t ivar_412;
                 uint8_t ivar_427;
                 ivar_427 = (uint8_t)1;
                 ivar_412 = (uint64_t)(ivar_29 - ivar_427);
                 cstopdown_record_119_t ivar_429;
                 //copying to cstopdown_record_119 from cstopdown_record_119;
                 ivar_429 = (cstopdown_record_119_t)ivar_12;
                 if (ivar_429 != NULL) ivar_429->count++;
                 release_cstopdown_record_119(ivar_12);
                 cstopdown_record_119_t ivar_444;
                 cstopdown_funtype_66_t ivar_430;
                 ivar_430 = (cstopdown_funtype_66_t)ivar_429->scaf;
                 ivar_430->count++;
                 cstopdown_record_119_t ivar_441;
                 cstopdown_funtype_66_t ivar_443;
                 ivar_443 = NULL;
                 ivar_441 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_429, ivar_443);
                 if (ivar_443 != NULL) ivar_443->count--;
                 cstopdown_funtype_66_t ivar_442;
                 uint32_t ivar_437;
                 //copying to uint32 from uint32;
                 ivar_437 = (uint32_t)ivar_41;
                 cstopdown_funtype_65_t ivar_431;
                 ivar_431 = (cstopdown_funtype_65_t)ivar_430->ftbl->fptr(ivar_430, ivar_437);
                 cstopdown_funtype_66_t ivar_438;
                 cstopdown_funtype_65_t ivar_440;
                 ivar_440 = NULL;
                 ivar_438 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_430, ivar_437, ivar_440);
                 if (ivar_440 != NULL) ivar_440->count--;
                 cstopdown_funtype_65_t ivar_439;
                 cstopdown_funtype_65_t ivar_434;
                 cstopdown__ent_adt_t ivar_436;
                 ivar_436 = NULL;
                 ivar_434 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_431, ivar_45, ivar_436);
                 if (ivar_436 != NULL) ivar_436->count--;
                 ivar_439 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_434, ivar_45, ivar_410);
                 if (ivar_410 != NULL) ivar_410->count--;
                 ivar_442 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_438, ivar_437, ivar_439);
                 if (ivar_439 != NULL) ivar_439->count--;
                 ivar_444 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_441, ivar_442);
                 if (ivar_442 != NULL) ivar_442->count--;
                 cstopdown_record_119_t ivar_449;
                 cstopdown_record_119_t ivar_446;
                 cstopdown__ent_adt_t ivar_448;
                 ivar_448 = NULL;
                 ivar_446 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_444, ivar_448);
                 if (ivar_448 != NULL) ivar_448->count--;
                 ivar_449 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_446, ivar_49);
                 if (ivar_49 != NULL) ivar_49->count--;
                 result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_449, ivar_412);
} else {
                
                 bool_t ivar_519;
                 ivar_384->count++;
                 ivar_519 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_384);
                 if (ivar_519){          
                  uint64_t ivar_458;
                  ivar_384->count++;
                  ivar_458 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_384);
                  uint32_t ivar_459;
                  ivar_459 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_384);
                  cstopdown__ent_adt_t ivar_468;
                  mpz_ptr_t ivar_490;
                  uint8_t ivar_473;
                  ivar_473 = (uint8_t)1;
                  mpq_ptr_t ivar_474;
                  mpq_ptr_t ivar_478;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_478, ivar_376);
                  mpq_ptr_t ivar_479;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_479, ivar_458);
                  ivar_474 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_478, (mpq_ptr_t)ivar_479);
                  mpz_mk_set_q(ivar_490, ivar_474);
                  mpz_add_ui(ivar_490, ivar_490, ivar_473);
                  uint64_t ivar_485;
                  //copying to uint64 from mpz;
                  ivar_485 = (uint64_t)mpz_get_ui(ivar_490);
                  mpz_clear(ivar_490);
                  mpq_ptr_t ivar_489;
                  mpz_t tmp51658;
                  mpz_init(tmp51658);
                  mpz_set_ui(tmp51658, (uint64_t)ivar_377);
                  mpz_add_ui(tmp51658, tmp51658, (uint64_t)ivar_459);
                  mpq_mk_set_z(ivar_489, tmp51658);
                  mpz_clear(tmp51658);
                  uint32_t ivar_486;
                  //copying to uint32 from mpq;
                  ivar_486 = (uint32_t)mpq_get_ui(ivar_489);
                  mpq_clear(ivar_489);
                  ivar_468 = (cstopdown__ent_adt_t)cstopdown__good((uint64_t)ivar_485, (uint32_t)ivar_486);
                  uint64_t ivar_470;
                  uint8_t ivar_492;
                  ivar_492 = (uint8_t)1;
                  ivar_470 = (uint64_t)(ivar_29 - ivar_492);
                  cstopdown_record_119_t ivar_494;
                  //copying to cstopdown_record_119 from cstopdown_record_119;
                  ivar_494 = (cstopdown_record_119_t)ivar_12;
                  if (ivar_494 != NULL) ivar_494->count++;
                  release_cstopdown_record_119(ivar_12);
                  cstopdown_record_119_t ivar_509;
                  cstopdown_funtype_66_t ivar_495;
                  ivar_495 = (cstopdown_funtype_66_t)ivar_494->scaf;
                  ivar_495->count++;
                  cstopdown_record_119_t ivar_506;
                  cstopdown_funtype_66_t ivar_508;
                  ivar_508 = NULL;
                  ivar_506 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_494, ivar_508);
                  if (ivar_508 != NULL) ivar_508->count--;
                  cstopdown_funtype_66_t ivar_507;
                  uint32_t ivar_502;
                  //copying to uint32 from uint32;
                  ivar_502 = (uint32_t)ivar_41;
                  cstopdown_funtype_65_t ivar_496;
                  ivar_496 = (cstopdown_funtype_65_t)ivar_495->ftbl->fptr(ivar_495, ivar_502);
                  cstopdown_funtype_66_t ivar_503;
                  cstopdown_funtype_65_t ivar_505;
                  ivar_505 = NULL;
                  ivar_503 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_495, ivar_502, ivar_505);
                  if (ivar_505 != NULL) ivar_505->count--;
                  cstopdown_funtype_65_t ivar_504;
                  cstopdown_funtype_65_t ivar_499;
                  cstopdown__ent_adt_t ivar_501;
                  ivar_501 = NULL;
                  ivar_499 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_496, ivar_45, ivar_501);
                  if (ivar_501 != NULL) ivar_501->count--;
                  ivar_504 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_499, ivar_45, ivar_468);
                  if (ivar_468 != NULL) ivar_468->count--;
                  ivar_507 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_503, ivar_502, ivar_504);
                  if (ivar_504 != NULL) ivar_504->count--;
                  ivar_509 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_506, ivar_507);
                  if (ivar_507 != NULL) ivar_507->count--;
                  cstopdown_record_119_t ivar_514;
                  cstopdown_record_119_t ivar_511;
                  cstopdown__ent_adt_t ivar_513;
                  ivar_513 = NULL;
                  ivar_511 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_509, ivar_513);
                  if (ivar_513 != NULL) ivar_513->count--;
                  ivar_514 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_511, ivar_49);
                  if (ivar_49 != NULL) ivar_49->count--;
                  result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_514, ivar_470);
} else {
                 
                  bool_t ivar_575;
                  ivar_575 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_384);
                  if (ivar_575){           
                   release_cstopdown__ent_adt(ivar_49);
                   cstopdown__ent_adt_t ivar_525;
                   mpq_ptr_t ivar_537;
                   mpz_t tmp51659;
                   mpz_init(tmp51659);
                   mpz_set_ui(tmp51659, (uint64_t)ivar_41);
                   mpz_add_ui(tmp51659, tmp51659, (uint64_t)ivar_377);
                   mpq_mk_set_z(ivar_537, tmp51659);
                   mpz_clear(tmp51659);
                   uint32_t ivar_534;
                   //copying to uint32 from mpq;
                   ivar_534 = (uint32_t)mpq_get_ui(ivar_537);
                   mpq_clear(ivar_537);
                   ivar_525 = (cstopdown__ent_adt_t)cstopdown__push((uint32_t)ivar_534, (uint8_t)ivar_304);
                   uint64_t ivar_526;
                   uint64_t ivar_538;
                   cstopdown_record_119_t ivar_540;
                   //copying to cstopdown_record_119 from cstopdown_record_119;
                   ivar_540 = (cstopdown_record_119_t)ivar_12;
                   if (ivar_540 != NULL) ivar_540->count++;
                   ivar_538 = (uint64_t)ivar_540->depth;
                   release_cstopdown_record_119(ivar_540);
                   uint8_t ivar_539;
                   ivar_539 = (uint8_t)1;
                   ivar_526 = (uint64_t)(ivar_538 + ivar_539);
                   cstopdown__ent_adt_t ivar_527;
                   cstopdown_record_119_t ivar_544;
                   //copying to cstopdown_record_119 from cstopdown_record_119;
                   ivar_544 = (cstopdown_record_119_t)ivar_12;
                   if (ivar_544 != NULL) ivar_544->count++;
                   ivar_527 = (cstopdown__ent_adt_t)ivar_544->stack;
                   ivar_527->count++;
                   release_cstopdown_record_119(ivar_544);
                   cstopdown_record_119_t ivar_547;
                   //copying to cstopdown_record_119 from cstopdown_record_119;
                   ivar_547 = (cstopdown_record_119_t)ivar_12;
                   if (ivar_547 != NULL) ivar_547->count++;
                   release_cstopdown_record_119(ivar_12);
                   cstopdown_record_119_t ivar_552;
                   cstopdown_record_119_t ivar_549;
                   cstopdown__ent_adt_t ivar_551;
                   ivar_551 = NULL;
                   ivar_549 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_547, ivar_551);
                   if (ivar_551 != NULL) ivar_551->count--;
                   ivar_552 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_549, ivar_525);
                   if (ivar_525 != NULL) ivar_525->count--;
                   cstopdown_record_119_t ivar_556;
                   ivar_556 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_552, ivar_526);
                   cstopdown_funtype_66_t ivar_557;
                   ivar_557 = (cstopdown_funtype_66_t)ivar_556->scaf;
                   ivar_557->count++;
                   cstopdown_record_119_t ivar_571;
                   cstopdown_funtype_66_t ivar_573;
                   ivar_573 = NULL;
                   ivar_571 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_556, ivar_573);
                   if (ivar_573 != NULL) ivar_573->count--;
                   cstopdown_funtype_66_t ivar_572;
                   uint32_t ivar_564;
                   ivar_564 = (uint32_t)(ivar_41 + ivar_377);
                   cstopdown_funtype_65_t ivar_558;
                   ivar_558 = (cstopdown_funtype_65_t)ivar_557->ftbl->fptr(ivar_557, ivar_564);
                   cstopdown_funtype_66_t ivar_568;
                   cstopdown_funtype_65_t ivar_570;
                   ivar_570 = NULL;
                   ivar_568 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_557, ivar_564, ivar_570);
                   if (ivar_570 != NULL) ivar_570->count--;
                   cstopdown_funtype_65_t ivar_569;
                   cstopdown_funtype_65_t ivar_561;
                   cstopdown__ent_adt_t ivar_563;
                   ivar_563 = NULL;
                   ivar_561 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_558, ivar_304, ivar_563);
                   if (ivar_563 != NULL) ivar_563->count--;
                   ivar_569 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_561, ivar_304, ivar_527);
                   if (ivar_527 != NULL) ivar_527->count--;
                   ivar_572 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_568, ivar_564, ivar_569);
                   if (ivar_569 != NULL) ivar_569->count--;
                   result = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_571, ivar_572);
                   if (ivar_572 != NULL) ivar_572->count--;
} else {
                  
                   cstopdown__ent_adt_t ivar_581;
                   ivar_581 = (cstopdown__ent_adt_t)cstopdown__loop();
                   if (ivar_581 != NULL) ivar_581->count++;
                   uint64_t ivar_582;
                   uint8_t ivar_586;
                   ivar_586 = (uint8_t)1;
                   ivar_582 = (uint64_t)(ivar_29 - ivar_586);
                   bool_t ivar_584;
                   ivar_584 = (bool_t) true;
                   cstopdown_record_119_t ivar_588;
                   //copying to cstopdown_record_119 from cstopdown_record_119;
                   ivar_588 = (cstopdown_record_119_t)ivar_12;
                   if (ivar_588 != NULL) ivar_588->count++;
                   release_cstopdown_record_119(ivar_12);
                   cstopdown_record_119_t ivar_603;
                   cstopdown_funtype_66_t ivar_589;
                   ivar_589 = (cstopdown_funtype_66_t)ivar_588->scaf;
                   ivar_589->count++;
                   cstopdown_record_119_t ivar_600;
                   cstopdown_funtype_66_t ivar_602;
                   ivar_602 = NULL;
                   ivar_600 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_588, ivar_602);
                   if (ivar_602 != NULL) ivar_602->count--;
                   cstopdown_funtype_66_t ivar_601;
                   uint32_t ivar_596;
                   //copying to uint32 from uint32;
                   ivar_596 = (uint32_t)ivar_41;
                   cstopdown_funtype_65_t ivar_590;
                   ivar_590 = (cstopdown_funtype_65_t)ivar_589->ftbl->fptr(ivar_589, ivar_596);
                   cstopdown_funtype_66_t ivar_597;
                   cstopdown_funtype_65_t ivar_599;
                   ivar_599 = NULL;
                   ivar_597 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_589, ivar_596, ivar_599);
                   if (ivar_599 != NULL) ivar_599->count--;
                   cstopdown_funtype_65_t ivar_598;
                   cstopdown_funtype_65_t ivar_593;
                   cstopdown__ent_adt_t ivar_595;
                   ivar_595 = NULL;
                   ivar_593 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_590, ivar_45, ivar_595);
                   if (ivar_595 != NULL) ivar_595->count--;
                   ivar_598 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_593, ivar_45, ivar_581);
                   if (ivar_581 != NULL) ivar_581->count--;
                   ivar_601 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_597, ivar_596, ivar_598);
                   if (ivar_598 != NULL) ivar_598->count--;
                   ivar_603 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_600, ivar_601);
                   if (ivar_601 != NULL) ivar_601->count--;
                   cstopdown_record_119_t ivar_607;
                   ivar_607 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_603, ivar_582);
                   cstopdown_record_119_t ivar_612;
                   cstopdown_record_119_t ivar_609;
                   cstopdown__ent_adt_t ivar_611;
                   ivar_611 = NULL;
                   ivar_609 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_607, ivar_611);
                   if (ivar_611 != NULL) ivar_611->count--;
                   ivar_612 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_609, ivar_49);
                   if (ivar_49 != NULL) ivar_49->count--;
                   result = (cstopdown_record_119_t)update_cstopdown_record_119_lflag(ivar_612, ivar_584);
};
};
};
} else {
               
                bool_t ivar_659;
                ivar_659 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_311);
                if (ivar_659){         
                 release_cstopdown__ent_adt(ivar_49);
                 cstopdown__ent_adt_t ivar_623;
                 ivar_623 = (cstopdown__ent_adt_t)cstopdown__push((uint32_t)ivar_41, (uint8_t)ivar_303);
                 uint64_t ivar_624;
                 uint8_t ivar_632;
                 ivar_632 = (uint8_t)1;
                 ivar_624 = (uint64_t)(ivar_29 + ivar_632);
                 cstopdown_record_119_t ivar_634;
                 //copying to cstopdown_record_119 from cstopdown_record_119;
                 ivar_634 = (cstopdown_record_119_t)ivar_12;
                 if (ivar_634 != NULL) ivar_634->count++;
                 release_cstopdown_record_119(ivar_12);
                 cstopdown_record_119_t ivar_639;
                 cstopdown_record_119_t ivar_636;
                 cstopdown__ent_adt_t ivar_638;
                 ivar_638 = NULL;
                 ivar_636 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_634, ivar_638);
                 if (ivar_638 != NULL) ivar_638->count--;
                 ivar_639 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_636, ivar_623);
                 if (ivar_623 != NULL) ivar_623->count--;
                 cstopdown_record_119_t ivar_643;
                 ivar_643 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_639, ivar_624);
                 cstopdown_funtype_66_t ivar_644;
                 ivar_644 = (cstopdown_funtype_66_t)ivar_643->scaf;
                 ivar_644->count++;
                 cstopdown_record_119_t ivar_655;
                 cstopdown_funtype_66_t ivar_657;
                 ivar_657 = NULL;
                 ivar_655 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_643, ivar_657);
                 if (ivar_657 != NULL) ivar_657->count--;
                 cstopdown_funtype_66_t ivar_656;
                 uint32_t ivar_651;
                 //copying to uint32 from uint32;
                 ivar_651 = (uint32_t)ivar_41;
                 cstopdown_funtype_65_t ivar_645;
                 ivar_645 = (cstopdown_funtype_65_t)ivar_644->ftbl->fptr(ivar_644, ivar_651);
                 cstopdown_funtype_66_t ivar_652;
                 cstopdown_funtype_65_t ivar_654;
                 ivar_654 = NULL;
                 ivar_652 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_644, ivar_651, ivar_654);
                 if (ivar_654 != NULL) ivar_654->count--;
                 cstopdown_funtype_65_t ivar_653;
                 cstopdown_funtype_65_t ivar_648;
                 cstopdown__ent_adt_t ivar_650;
                 ivar_650 = NULL;
                 ivar_648 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_645, ivar_303, ivar_650);
                 if (ivar_650 != NULL) ivar_650->count--;
                 ivar_653 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_648, ivar_303, ivar_25);
                 if (ivar_25 != NULL) ivar_25->count--;
                 ivar_656 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_652, ivar_651, ivar_653);
                 if (ivar_653 != NULL) ivar_653->count--;
                 result = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_655, ivar_656);
                 if (ivar_656 != NULL) ivar_656->count--;
} else {
                
                 release_cstopdown__ent_adt(ivar_25);
                 cstopdown__ent_adt_t ivar_665;
                 ivar_665 = (cstopdown__ent_adt_t)cstopdown__loop();
                 if (ivar_665 != NULL) ivar_665->count++;
                 uint64_t ivar_666;
                 uint8_t ivar_670;
                 ivar_670 = (uint8_t)1;
                 ivar_666 = (uint64_t)(ivar_29 - ivar_670);
                 bool_t ivar_668;
                 ivar_668 = (bool_t) true;
                 cstopdown_record_119_t ivar_672;
                 //copying to cstopdown_record_119 from cstopdown_record_119;
                 ivar_672 = (cstopdown_record_119_t)ivar_12;
                 if (ivar_672 != NULL) ivar_672->count++;
                 release_cstopdown_record_119(ivar_12);
                 cstopdown_record_119_t ivar_687;
                 cstopdown_funtype_66_t ivar_673;
                 ivar_673 = (cstopdown_funtype_66_t)ivar_672->scaf;
                 ivar_673->count++;
                 cstopdown_record_119_t ivar_684;
                 cstopdown_funtype_66_t ivar_686;
                 ivar_686 = NULL;
                 ivar_684 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_672, ivar_686);
                 if (ivar_686 != NULL) ivar_686->count--;
                 cstopdown_funtype_66_t ivar_685;
                 uint32_t ivar_680;
                 //copying to uint32 from uint32;
                 ivar_680 = (uint32_t)ivar_41;
                 cstopdown_funtype_65_t ivar_674;
                 ivar_674 = (cstopdown_funtype_65_t)ivar_673->ftbl->fptr(ivar_673, ivar_680);
                 cstopdown_funtype_66_t ivar_681;
                 cstopdown_funtype_65_t ivar_683;
                 ivar_683 = NULL;
                 ivar_681 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_673, ivar_680, ivar_683);
                 if (ivar_683 != NULL) ivar_683->count--;
                 cstopdown_funtype_65_t ivar_682;
                 cstopdown_funtype_65_t ivar_677;
                 cstopdown__ent_adt_t ivar_679;
                 ivar_679 = NULL;
                 ivar_677 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_674, ivar_45, ivar_679);
                 if (ivar_679 != NULL) ivar_679->count--;
                 ivar_682 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_677, ivar_45, ivar_665);
                 if (ivar_665 != NULL) ivar_665->count--;
                 ivar_685 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_681, ivar_680, ivar_682);
                 if (ivar_682 != NULL) ivar_682->count--;
                 ivar_687 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_684, ivar_685);
                 if (ivar_685 != NULL) ivar_685->count--;
                 cstopdown_record_119_t ivar_691;
                 ivar_691 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_687, ivar_666);
                 cstopdown_record_119_t ivar_696;
                 cstopdown_record_119_t ivar_693;
                 cstopdown__ent_adt_t ivar_695;
                 ivar_695 = NULL;
                 ivar_693 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_691, ivar_695);
                 if (ivar_695 != NULL) ivar_695->count--;
                 ivar_696 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_693, ivar_49);
                 if (ivar_49 != NULL) ivar_49->count--;
                 result = (cstopdown_record_119_t)update_cstopdown_record_119_lflag(ivar_696, ivar_668);
};
};
};
} else {
             
              bool_t ivar_1076;
              ivar_62->count++;
              ivar_1076 = (bool_t)r_cstopdown__orp((cstopdown__peg_adt_t)ivar_62);
              if (ivar_1076){       
               uint8_t ivar_705;
               ivar_62->count++;
               ivar_705 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_62);
               uint8_t ivar_706;
               ivar_706 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_62);
               cstopdown__ent_adt_t ivar_713;
               cstopdown_funtype_65_t ivar_717;
               cstopdown_funtype_66_t ivar_723;
               //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
               ivar_723 = (cstopdown_funtype_66_t)ivar_17;
               if (ivar_723 != NULL) ivar_723->count++;
               uint32_t ivar_724;
               //copying to uint32 from uint32;
               ivar_724 = (uint32_t)ivar_41;
               ivar_717 = (cstopdown_funtype_65_t)ivar_723->ftbl->fptr(ivar_723, ivar_724);
               ivar_723->ftbl->rptr(ivar_723);
               ivar_713 = (cstopdown__ent_adt_t)ivar_717->ftbl->fptr(ivar_717, ivar_705);
               ivar_717->ftbl->rptr(ivar_717);
               bool_t ivar_937;
               ivar_713->count++;
               ivar_937 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_713);
               if (ivar_937){        
                uint64_t ivar_726;
                ivar_726 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_713);
                cstopdown__ent_adt_t ivar_730;
                cstopdown_funtype_65_t ivar_734;
                cstopdown_funtype_66_t ivar_740;
                //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
                ivar_740 = (cstopdown_funtype_66_t)ivar_17;
                if (ivar_740 != NULL) ivar_740->count++;
                release_cstopdown_funtype_66(ivar_17);
                uint32_t ivar_741;
                //copying to uint32 from uint32;
                ivar_741 = (uint32_t)ivar_41;
                ivar_734 = (cstopdown_funtype_65_t)ivar_740->ftbl->fptr(ivar_740, ivar_741);
                ivar_740->ftbl->rptr(ivar_740);
                ivar_730 = (cstopdown__ent_adt_t)ivar_734->ftbl->fptr(ivar_734, ivar_706);
                ivar_734->ftbl->rptr(ivar_734);
                bool_t ivar_793;
                ivar_730->count++;
                ivar_793 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_730);
                if (ivar_793){         
                 release_cstopdown__ent_adt(ivar_25);
                 uint64_t ivar_743;
                 ivar_743 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_730);
                 cstopdown__ent_adt_t ivar_749;
                 mpz_ptr_t ivar_764;
                 mpq_ptr_t ivar_753;
                 mpq_ptr_t ivar_758;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_758, ivar_726);
                 mpq_ptr_t ivar_759;
                 //copying to mpq from uint64;
                 mpq_mk_set_ui(ivar_759, ivar_743);
                 ivar_753 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_758, (mpq_ptr_t)ivar_759);
                 uint8_t ivar_754;
                 ivar_754 = (uint8_t)1;
                 mpz_mk_set_q(ivar_764, ivar_753);
                 mpz_add_ui(ivar_764, ivar_764, (uint64_t)ivar_754);
                 uint64_t ivar_762;
                 //copying to uint64 from mpz;
                 ivar_762 = (uint64_t)mpz_get_ui(ivar_764);
                 mpz_clear(ivar_764);
                 ivar_749 = (cstopdown__ent_adt_t)cstopdown__fail((uint64_t)ivar_762);
                 uint64_t ivar_751;
                 uint8_t ivar_766;
                 ivar_766 = (uint8_t)1;
                 ivar_751 = (uint64_t)(ivar_29 - ivar_766);
                 cstopdown_record_119_t ivar_768;
                 //copying to cstopdown_record_119 from cstopdown_record_119;
                 ivar_768 = (cstopdown_record_119_t)ivar_12;
                 if (ivar_768 != NULL) ivar_768->count++;
                 release_cstopdown_record_119(ivar_12);
                 cstopdown_record_119_t ivar_783;
                 cstopdown_funtype_66_t ivar_769;
                 ivar_769 = (cstopdown_funtype_66_t)ivar_768->scaf;
                 ivar_769->count++;
                 cstopdown_record_119_t ivar_780;
                 cstopdown_funtype_66_t ivar_782;
                 ivar_782 = NULL;
                 ivar_780 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_768, ivar_782);
                 if (ivar_782 != NULL) ivar_782->count--;
                 cstopdown_funtype_66_t ivar_781;
                 uint32_t ivar_776;
                 //copying to uint32 from uint32;
                 ivar_776 = (uint32_t)ivar_41;
                 cstopdown_funtype_65_t ivar_770;
                 ivar_770 = (cstopdown_funtype_65_t)ivar_769->ftbl->fptr(ivar_769, ivar_776);
                 cstopdown_funtype_66_t ivar_777;
                 cstopdown_funtype_65_t ivar_779;
                 ivar_779 = NULL;
                 ivar_777 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_769, ivar_776, ivar_779);
                 if (ivar_779 != NULL) ivar_779->count--;
                 cstopdown_funtype_65_t ivar_778;
                 cstopdown_funtype_65_t ivar_773;
                 cstopdown__ent_adt_t ivar_775;
                 ivar_775 = NULL;
                 ivar_773 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_770, ivar_45, ivar_775);
                 if (ivar_775 != NULL) ivar_775->count--;
                 ivar_778 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_773, ivar_45, ivar_749);
                 if (ivar_749 != NULL) ivar_749->count--;
                 ivar_781 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_777, ivar_776, ivar_778);
                 if (ivar_778 != NULL) ivar_778->count--;
                 ivar_783 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_780, ivar_781);
                 if (ivar_781 != NULL) ivar_781->count--;
                 cstopdown_record_119_t ivar_788;
                 cstopdown_record_119_t ivar_785;
                 cstopdown__ent_adt_t ivar_787;
                 ivar_787 = NULL;
                 ivar_785 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_783, ivar_787);
                 if (ivar_787 != NULL) ivar_787->count--;
                 ivar_788 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_785, ivar_49);
                 if (ivar_49 != NULL) ivar_49->count--;
                 result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_788, ivar_751);
} else {
                
                 bool_t ivar_853;
                 ivar_730->count++;
                 ivar_853 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_730);
                 if (ivar_853){          
                  release_cstopdown__ent_adt(ivar_25);
                  uint64_t ivar_797;
                  ivar_730->count++;
                  ivar_797 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_730);
                  uint32_t ivar_798;
                  ivar_798 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_730);
                  cstopdown__ent_adt_t ivar_807;
                  mpz_ptr_t ivar_824;
                  mpq_ptr_t ivar_812;
                  mpq_ptr_t ivar_817;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_817, ivar_726);
                  mpq_ptr_t ivar_818;
                  //copying to mpq from uint64;
                  mpq_mk_set_ui(ivar_818, ivar_797);
                  ivar_812 = (mpq_ptr_t)real_defs__max((mpq_ptr_t)ivar_817, (mpq_ptr_t)ivar_818);
                  uint8_t ivar_813;
                  ivar_813 = (uint8_t)1;
                  mpz_mk_set_q(ivar_824, ivar_812);
                  mpz_add_ui(ivar_824, ivar_824, (uint64_t)ivar_813);
                  uint64_t ivar_821;
                  //copying to uint64 from mpz;
                  ivar_821 = (uint64_t)mpz_get_ui(ivar_824);
                  mpz_clear(ivar_824);
                  ivar_807 = (cstopdown__ent_adt_t)cstopdown__good((uint64_t)ivar_821, (uint32_t)ivar_798);
                  uint64_t ivar_809;
                  uint8_t ivar_826;
                  ivar_826 = (uint8_t)1;
                  ivar_809 = (uint64_t)(ivar_29 - ivar_826);
                  cstopdown_record_119_t ivar_828;
                  //copying to cstopdown_record_119 from cstopdown_record_119;
                  ivar_828 = (cstopdown_record_119_t)ivar_12;
                  if (ivar_828 != NULL) ivar_828->count++;
                  release_cstopdown_record_119(ivar_12);
                  cstopdown_record_119_t ivar_843;
                  cstopdown_funtype_66_t ivar_829;
                  ivar_829 = (cstopdown_funtype_66_t)ivar_828->scaf;
                  ivar_829->count++;
                  cstopdown_record_119_t ivar_840;
                  cstopdown_funtype_66_t ivar_842;
                  ivar_842 = NULL;
                  ivar_840 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_828, ivar_842);
                  if (ivar_842 != NULL) ivar_842->count--;
                  cstopdown_funtype_66_t ivar_841;
                  uint32_t ivar_836;
                  //copying to uint32 from uint32;
                  ivar_836 = (uint32_t)ivar_41;
                  cstopdown_funtype_65_t ivar_830;
                  ivar_830 = (cstopdown_funtype_65_t)ivar_829->ftbl->fptr(ivar_829, ivar_836);
                  cstopdown_funtype_66_t ivar_837;
                  cstopdown_funtype_65_t ivar_839;
                  ivar_839 = NULL;
                  ivar_837 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_829, ivar_836, ivar_839);
                  if (ivar_839 != NULL) ivar_839->count--;
                  cstopdown_funtype_65_t ivar_838;
                  cstopdown_funtype_65_t ivar_833;
                  cstopdown__ent_adt_t ivar_835;
                  ivar_835 = NULL;
                  ivar_833 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_830, ivar_45, ivar_835);
                  if (ivar_835 != NULL) ivar_835->count--;
                  ivar_838 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_833, ivar_45, ivar_807);
                  if (ivar_807 != NULL) ivar_807->count--;
                  ivar_841 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_837, ivar_836, ivar_838);
                  if (ivar_838 != NULL) ivar_838->count--;
                  ivar_843 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_840, ivar_841);
                  if (ivar_841 != NULL) ivar_841->count--;
                  cstopdown_record_119_t ivar_848;
                  cstopdown_record_119_t ivar_845;
                  cstopdown__ent_adt_t ivar_847;
                  ivar_847 = NULL;
                  ivar_845 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_843, ivar_847);
                  if (ivar_847 != NULL) ivar_847->count--;
                  ivar_848 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_845, ivar_49);
                  if (ivar_49 != NULL) ivar_49->count--;
                  result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_848, ivar_809);
} else {
                 
                  bool_t ivar_895;
                  ivar_895 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_730);
                  if (ivar_895){           
                   release_cstopdown__ent_adt(ivar_49);
                   cstopdown__ent_adt_t ivar_859;
                   ivar_859 = (cstopdown__ent_adt_t)cstopdown__push((uint32_t)ivar_41, (uint8_t)ivar_706);
                   uint64_t ivar_860;
                   uint8_t ivar_868;
                   ivar_868 = (uint8_t)1;
                   ivar_860 = (uint64_t)(ivar_29 + ivar_868);
                   cstopdown_record_119_t ivar_870;
                   //copying to cstopdown_record_119 from cstopdown_record_119;
                   ivar_870 = (cstopdown_record_119_t)ivar_12;
                   if (ivar_870 != NULL) ivar_870->count++;
                   release_cstopdown_record_119(ivar_12);
                   cstopdown_record_119_t ivar_875;
                   cstopdown_record_119_t ivar_872;
                   cstopdown__ent_adt_t ivar_874;
                   ivar_874 = NULL;
                   ivar_872 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_870, ivar_874);
                   if (ivar_874 != NULL) ivar_874->count--;
                   ivar_875 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_872, ivar_859);
                   if (ivar_859 != NULL) ivar_859->count--;
                   cstopdown_record_119_t ivar_879;
                   ivar_879 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_875, ivar_860);
                   cstopdown_funtype_66_t ivar_880;
                   ivar_880 = (cstopdown_funtype_66_t)ivar_879->scaf;
                   ivar_880->count++;
                   cstopdown_record_119_t ivar_891;
                   cstopdown_funtype_66_t ivar_893;
                   ivar_893 = NULL;
                   ivar_891 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_879, ivar_893);
                   if (ivar_893 != NULL) ivar_893->count--;
                   cstopdown_funtype_66_t ivar_892;
                   uint32_t ivar_887;
                   //copying to uint32 from uint32;
                   ivar_887 = (uint32_t)ivar_41;
                   cstopdown_funtype_65_t ivar_881;
                   ivar_881 = (cstopdown_funtype_65_t)ivar_880->ftbl->fptr(ivar_880, ivar_887);
                   cstopdown_funtype_66_t ivar_888;
                   cstopdown_funtype_65_t ivar_890;
                   ivar_890 = NULL;
                   ivar_888 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_880, ivar_887, ivar_890);
                   if (ivar_890 != NULL) ivar_890->count--;
                   cstopdown_funtype_65_t ivar_889;
                   cstopdown_funtype_65_t ivar_884;
                   cstopdown__ent_adt_t ivar_886;
                   ivar_886 = NULL;
                   ivar_884 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_881, ivar_706, ivar_886);
                   if (ivar_886 != NULL) ivar_886->count--;
                   ivar_889 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_884, ivar_706, ivar_25);
                   if (ivar_25 != NULL) ivar_25->count--;
                   ivar_892 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_888, ivar_887, ivar_889);
                   if (ivar_889 != NULL) ivar_889->count--;
                   result = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_891, ivar_892);
                   if (ivar_892 != NULL) ivar_892->count--;
} else {
                  
                   release_cstopdown__ent_adt(ivar_25);
                   cstopdown__ent_adt_t ivar_901;
                   ivar_901 = (cstopdown__ent_adt_t)cstopdown__loop();
                   if (ivar_901 != NULL) ivar_901->count++;
                   uint64_t ivar_902;
                   uint8_t ivar_906;
                   ivar_906 = (uint8_t)1;
                   ivar_902 = (uint64_t)(ivar_29 - ivar_906);
                   bool_t ivar_904;
                   ivar_904 = (bool_t) true;
                   cstopdown_record_119_t ivar_908;
                   //copying to cstopdown_record_119 from cstopdown_record_119;
                   ivar_908 = (cstopdown_record_119_t)ivar_12;
                   if (ivar_908 != NULL) ivar_908->count++;
                   release_cstopdown_record_119(ivar_12);
                   cstopdown_record_119_t ivar_923;
                   cstopdown_funtype_66_t ivar_909;
                   ivar_909 = (cstopdown_funtype_66_t)ivar_908->scaf;
                   ivar_909->count++;
                   cstopdown_record_119_t ivar_920;
                   cstopdown_funtype_66_t ivar_922;
                   ivar_922 = NULL;
                   ivar_920 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_908, ivar_922);
                   if (ivar_922 != NULL) ivar_922->count--;
                   cstopdown_funtype_66_t ivar_921;
                   uint32_t ivar_916;
                   //copying to uint32 from uint32;
                   ivar_916 = (uint32_t)ivar_41;
                   cstopdown_funtype_65_t ivar_910;
                   ivar_910 = (cstopdown_funtype_65_t)ivar_909->ftbl->fptr(ivar_909, ivar_916);
                   cstopdown_funtype_66_t ivar_917;
                   cstopdown_funtype_65_t ivar_919;
                   ivar_919 = NULL;
                   ivar_917 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_909, ivar_916, ivar_919);
                   if (ivar_919 != NULL) ivar_919->count--;
                   cstopdown_funtype_65_t ivar_918;
                   cstopdown_funtype_65_t ivar_913;
                   cstopdown__ent_adt_t ivar_915;
                   ivar_915 = NULL;
                   ivar_913 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_910, ivar_45, ivar_915);
                   if (ivar_915 != NULL) ivar_915->count--;
                   ivar_918 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_913, ivar_45, ivar_901);
                   if (ivar_901 != NULL) ivar_901->count--;
                   ivar_921 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_917, ivar_916, ivar_918);
                   if (ivar_918 != NULL) ivar_918->count--;
                   ivar_923 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_920, ivar_921);
                   if (ivar_921 != NULL) ivar_921->count--;
                   cstopdown_record_119_t ivar_927;
                   ivar_927 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_923, ivar_902);
                   cstopdown_record_119_t ivar_932;
                   cstopdown_record_119_t ivar_929;
                   cstopdown__ent_adt_t ivar_931;
                   ivar_931 = NULL;
                   ivar_929 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_927, ivar_931);
                   if (ivar_931 != NULL) ivar_931->count--;
                   ivar_932 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_929, ivar_49);
                   if (ivar_49 != NULL) ivar_49->count--;
                   result = (cstopdown_record_119_t)update_cstopdown_record_119_lflag(ivar_932, ivar_904);
};
};
};
} else {
               
                release_cstopdown_funtype_66(ivar_17);
                bool_t ivar_992;
                ivar_713->count++;
                ivar_992 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_713);
                if (ivar_992){         
                 release_cstopdown__ent_adt(ivar_25);
                 uint64_t ivar_941;
                 ivar_713->count++;
                 ivar_941 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_713);
                 uint32_t ivar_942;
                 ivar_942 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_713);
                 cstopdown__ent_adt_t ivar_951;
                 mpz_ptr_t ivar_963;
                 uint8_t ivar_957;
                 ivar_957 = (uint8_t)1;
                 mpz_mk_set_ui(ivar_963, (uint64_t)ivar_941);
                 mpz_add_ui(ivar_963, ivar_963, (uint64_t)ivar_957);
                 uint64_t ivar_960;
                 //copying to uint64 from mpz;
                 ivar_960 = (uint64_t)mpz_get_ui(ivar_963);
                 mpz_clear(ivar_963);
                 ivar_951 = (cstopdown__ent_adt_t)cstopdown__good((uint64_t)ivar_960, (uint32_t)ivar_942);
                 uint64_t ivar_953;
                 uint8_t ivar_965;
                 ivar_965 = (uint8_t)1;
                 ivar_953 = (uint64_t)(ivar_29 - ivar_965);
                 cstopdown_record_119_t ivar_967;
                 //copying to cstopdown_record_119 from cstopdown_record_119;
                 ivar_967 = (cstopdown_record_119_t)ivar_12;
                 if (ivar_967 != NULL) ivar_967->count++;
                 release_cstopdown_record_119(ivar_12);
                 cstopdown_record_119_t ivar_982;
                 cstopdown_funtype_66_t ivar_968;
                 ivar_968 = (cstopdown_funtype_66_t)ivar_967->scaf;
                 ivar_968->count++;
                 cstopdown_record_119_t ivar_979;
                 cstopdown_funtype_66_t ivar_981;
                 ivar_981 = NULL;
                 ivar_979 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_967, ivar_981);
                 if (ivar_981 != NULL) ivar_981->count--;
                 cstopdown_funtype_66_t ivar_980;
                 uint32_t ivar_975;
                 //copying to uint32 from uint32;
                 ivar_975 = (uint32_t)ivar_41;
                 cstopdown_funtype_65_t ivar_969;
                 ivar_969 = (cstopdown_funtype_65_t)ivar_968->ftbl->fptr(ivar_968, ivar_975);
                 cstopdown_funtype_66_t ivar_976;
                 cstopdown_funtype_65_t ivar_978;
                 ivar_978 = NULL;
                 ivar_976 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_968, ivar_975, ivar_978);
                 if (ivar_978 != NULL) ivar_978->count--;
                 cstopdown_funtype_65_t ivar_977;
                 cstopdown_funtype_65_t ivar_972;
                 cstopdown__ent_adt_t ivar_974;
                 ivar_974 = NULL;
                 ivar_972 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_969, ivar_45, ivar_974);
                 if (ivar_974 != NULL) ivar_974->count--;
                 ivar_977 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_972, ivar_45, ivar_951);
                 if (ivar_951 != NULL) ivar_951->count--;
                 ivar_980 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_976, ivar_975, ivar_977);
                 if (ivar_977 != NULL) ivar_977->count--;
                 ivar_982 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_979, ivar_980);
                 if (ivar_980 != NULL) ivar_980->count--;
                 cstopdown_record_119_t ivar_987;
                 cstopdown_record_119_t ivar_984;
                 cstopdown__ent_adt_t ivar_986;
                 ivar_986 = NULL;
                 ivar_984 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_982, ivar_986);
                 if (ivar_986 != NULL) ivar_986->count--;
                 ivar_987 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_984, ivar_49);
                 if (ivar_49 != NULL) ivar_49->count--;
                 result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_987, ivar_953);
} else {
                
                 bool_t ivar_1034;
                 ivar_1034 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_713);
                 if (ivar_1034){          
                  release_cstopdown__ent_adt(ivar_49);
                  cstopdown__ent_adt_t ivar_998;
                  ivar_998 = (cstopdown__ent_adt_t)cstopdown__push((uint32_t)ivar_41, (uint8_t)ivar_705);
                  uint64_t ivar_999;
                  uint8_t ivar_1007;
                  ivar_1007 = (uint8_t)1;
                  ivar_999 = (uint64_t)(ivar_29 + ivar_1007);
                  cstopdown_record_119_t ivar_1009;
                  //copying to cstopdown_record_119 from cstopdown_record_119;
                  ivar_1009 = (cstopdown_record_119_t)ivar_12;
                  if (ivar_1009 != NULL) ivar_1009->count++;
                  release_cstopdown_record_119(ivar_12);
                  cstopdown_record_119_t ivar_1014;
                  cstopdown_record_119_t ivar_1011;
                  cstopdown__ent_adt_t ivar_1013;
                  ivar_1013 = NULL;
                  ivar_1011 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1009, ivar_1013);
                  if (ivar_1013 != NULL) ivar_1013->count--;
                  ivar_1014 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1011, ivar_998);
                  if (ivar_998 != NULL) ivar_998->count--;
                  cstopdown_record_119_t ivar_1018;
                  ivar_1018 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_1014, ivar_999);
                  cstopdown_funtype_66_t ivar_1019;
                  ivar_1019 = (cstopdown_funtype_66_t)ivar_1018->scaf;
                  ivar_1019->count++;
                  cstopdown_record_119_t ivar_1030;
                  cstopdown_funtype_66_t ivar_1032;
                  ivar_1032 = NULL;
                  ivar_1030 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1018, ivar_1032);
                  if (ivar_1032 != NULL) ivar_1032->count--;
                  cstopdown_funtype_66_t ivar_1031;
                  uint32_t ivar_1026;
                  //copying to uint32 from uint32;
                  ivar_1026 = (uint32_t)ivar_41;
                  cstopdown_funtype_65_t ivar_1020;
                  ivar_1020 = (cstopdown_funtype_65_t)ivar_1019->ftbl->fptr(ivar_1019, ivar_1026);
                  cstopdown_funtype_66_t ivar_1027;
                  cstopdown_funtype_65_t ivar_1029;
                  ivar_1029 = NULL;
                  ivar_1027 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1019, ivar_1026, ivar_1029);
                  if (ivar_1029 != NULL) ivar_1029->count--;
                  cstopdown_funtype_65_t ivar_1028;
                  cstopdown_funtype_65_t ivar_1023;
                  cstopdown__ent_adt_t ivar_1025;
                  ivar_1025 = NULL;
                  ivar_1023 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1020, ivar_705, ivar_1025);
                  if (ivar_1025 != NULL) ivar_1025->count--;
                  ivar_1028 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1023, ivar_705, ivar_25);
                  if (ivar_25 != NULL) ivar_25->count--;
                  ivar_1031 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1027, ivar_1026, ivar_1028);
                  if (ivar_1028 != NULL) ivar_1028->count--;
                  result = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1030, ivar_1031);
                  if (ivar_1031 != NULL) ivar_1031->count--;
} else {
                 
                  release_cstopdown__ent_adt(ivar_25);
                  cstopdown__ent_adt_t ivar_1040;
                  ivar_1040 = (cstopdown__ent_adt_t)cstopdown__loop();
                  if (ivar_1040 != NULL) ivar_1040->count++;
                  uint64_t ivar_1041;
                  uint8_t ivar_1045;
                  ivar_1045 = (uint8_t)1;
                  ivar_1041 = (uint64_t)(ivar_29 - ivar_1045);
                  bool_t ivar_1043;
                  ivar_1043 = (bool_t) true;
                  cstopdown_record_119_t ivar_1047;
                  //copying to cstopdown_record_119 from cstopdown_record_119;
                  ivar_1047 = (cstopdown_record_119_t)ivar_12;
                  if (ivar_1047 != NULL) ivar_1047->count++;
                  release_cstopdown_record_119(ivar_12);
                  cstopdown_record_119_t ivar_1062;
                  cstopdown_funtype_66_t ivar_1048;
                  ivar_1048 = (cstopdown_funtype_66_t)ivar_1047->scaf;
                  ivar_1048->count++;
                  cstopdown_record_119_t ivar_1059;
                  cstopdown_funtype_66_t ivar_1061;
                  ivar_1061 = NULL;
                  ivar_1059 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1047, ivar_1061);
                  if (ivar_1061 != NULL) ivar_1061->count--;
                  cstopdown_funtype_66_t ivar_1060;
                  uint32_t ivar_1055;
                  //copying to uint32 from uint32;
                  ivar_1055 = (uint32_t)ivar_41;
                  cstopdown_funtype_65_t ivar_1049;
                  ivar_1049 = (cstopdown_funtype_65_t)ivar_1048->ftbl->fptr(ivar_1048, ivar_1055);
                  cstopdown_funtype_66_t ivar_1056;
                  cstopdown_funtype_65_t ivar_1058;
                  ivar_1058 = NULL;
                  ivar_1056 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1048, ivar_1055, ivar_1058);
                  if (ivar_1058 != NULL) ivar_1058->count--;
                  cstopdown_funtype_65_t ivar_1057;
                  cstopdown_funtype_65_t ivar_1052;
                  cstopdown__ent_adt_t ivar_1054;
                  ivar_1054 = NULL;
                  ivar_1052 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1049, ivar_45, ivar_1054);
                  if (ivar_1054 != NULL) ivar_1054->count--;
                  ivar_1057 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1052, ivar_45, ivar_1040);
                  if (ivar_1040 != NULL) ivar_1040->count--;
                  ivar_1060 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1056, ivar_1055, ivar_1057);
                  if (ivar_1057 != NULL) ivar_1057->count--;
                  ivar_1062 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1059, ivar_1060);
                  if (ivar_1060 != NULL) ivar_1060->count--;
                  cstopdown_record_119_t ivar_1066;
                  ivar_1066 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_1062, ivar_1041);
                  cstopdown_record_119_t ivar_1071;
                  cstopdown_record_119_t ivar_1068;
                  cstopdown__ent_adt_t ivar_1070;
                  ivar_1070 = NULL;
                  ivar_1068 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1066, ivar_1070);
                  if (ivar_1070 != NULL) ivar_1070->count--;
                  ivar_1071 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1068, ivar_49);
                  if (ivar_49 != NULL) ivar_49->count--;
                  result = (cstopdown_record_119_t)update_cstopdown_record_119_lflag(ivar_1071, ivar_1043);
};
};
};
} else {
              
               bool_t ivar_1283;
               ivar_62->count++;
               ivar_1283 = (bool_t)r_cstopdown__andp((cstopdown__peg_adt_t)ivar_62);
               if (ivar_1283){        
                uint8_t ivar_1080;
                ivar_1080 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_62);
                cstopdown__ent_adt_t ivar_1084;
                cstopdown_funtype_65_t ivar_1088;
                cstopdown_funtype_66_t ivar_1094;
                //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
                ivar_1094 = (cstopdown_funtype_66_t)ivar_17;
                if (ivar_1094 != NULL) ivar_1094->count++;
                release_cstopdown_funtype_66(ivar_17);
                uint32_t ivar_1095;
                //copying to uint32 from uint32;
                ivar_1095 = (uint32_t)ivar_41;
                ivar_1088 = (cstopdown_funtype_65_t)ivar_1094->ftbl->fptr(ivar_1094, ivar_1095);
                ivar_1094->ftbl->rptr(ivar_1094);
                ivar_1084 = (cstopdown__ent_adt_t)ivar_1088->ftbl->fptr(ivar_1088, ivar_1080);
                ivar_1088->ftbl->rptr(ivar_1088);
                bool_t ivar_1142;
                ivar_1084->count++;
                ivar_1142 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_1084);
                if (ivar_1142){         
                 release_cstopdown__ent_adt(ivar_25);
                 uint64_t ivar_1097;
                 ivar_1097 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_1084);
                 cstopdown__ent_adt_t ivar_1103;
                 mpz_ptr_t ivar_1113;
                 uint8_t ivar_1108;
                 ivar_1108 = (uint8_t)1;
                 mpz_mk_set_ui(ivar_1113, (uint64_t)ivar_1097);
                 mpz_add_ui(ivar_1113, ivar_1113, (uint64_t)ivar_1108);
                 uint64_t ivar_1111;
                 //copying to uint64 from mpz;
                 ivar_1111 = (uint64_t)mpz_get_ui(ivar_1113);
                 mpz_clear(ivar_1113);
                 ivar_1103 = (cstopdown__ent_adt_t)cstopdown__fail((uint64_t)ivar_1111);
                 uint64_t ivar_1105;
                 uint8_t ivar_1115;
                 ivar_1115 = (uint8_t)1;
                 ivar_1105 = (uint64_t)(ivar_29 - ivar_1115);
                 cstopdown_record_119_t ivar_1117;
                 //copying to cstopdown_record_119 from cstopdown_record_119;
                 ivar_1117 = (cstopdown_record_119_t)ivar_12;
                 if (ivar_1117 != NULL) ivar_1117->count++;
                 release_cstopdown_record_119(ivar_12);
                 cstopdown_record_119_t ivar_1132;
                 cstopdown_funtype_66_t ivar_1118;
                 ivar_1118 = (cstopdown_funtype_66_t)ivar_1117->scaf;
                 ivar_1118->count++;
                 cstopdown_record_119_t ivar_1129;
                 cstopdown_funtype_66_t ivar_1131;
                 ivar_1131 = NULL;
                 ivar_1129 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1117, ivar_1131);
                 if (ivar_1131 != NULL) ivar_1131->count--;
                 cstopdown_funtype_66_t ivar_1130;
                 uint32_t ivar_1125;
                 //copying to uint32 from uint32;
                 ivar_1125 = (uint32_t)ivar_41;
                 cstopdown_funtype_65_t ivar_1119;
                 ivar_1119 = (cstopdown_funtype_65_t)ivar_1118->ftbl->fptr(ivar_1118, ivar_1125);
                 cstopdown_funtype_66_t ivar_1126;
                 cstopdown_funtype_65_t ivar_1128;
                 ivar_1128 = NULL;
                 ivar_1126 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1118, ivar_1125, ivar_1128);
                 if (ivar_1128 != NULL) ivar_1128->count--;
                 cstopdown_funtype_65_t ivar_1127;
                 cstopdown_funtype_65_t ivar_1122;
                 cstopdown__ent_adt_t ivar_1124;
                 ivar_1124 = NULL;
                 ivar_1122 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1119, ivar_45, ivar_1124);
                 if (ivar_1124 != NULL) ivar_1124->count--;
                 ivar_1127 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1122, ivar_45, ivar_1103);
                 if (ivar_1103 != NULL) ivar_1103->count--;
                 ivar_1130 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1126, ivar_1125, ivar_1127);
                 if (ivar_1127 != NULL) ivar_1127->count--;
                 ivar_1132 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1129, ivar_1130);
                 if (ivar_1130 != NULL) ivar_1130->count--;
                 cstopdown_record_119_t ivar_1137;
                 cstopdown_record_119_t ivar_1134;
                 cstopdown__ent_adt_t ivar_1136;
                 ivar_1136 = NULL;
                 ivar_1134 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1132, ivar_1136);
                 if (ivar_1136 != NULL) ivar_1136->count--;
                 ivar_1137 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1134, ivar_49);
                 if (ivar_49 != NULL) ivar_49->count--;
                 result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_1137, ivar_1105);
} else {
                
                 bool_t ivar_1199;
                 ivar_1084->count++;
                 ivar_1199 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_1084);
                 if (ivar_1199){          
                  release_cstopdown__ent_adt(ivar_25);
                  uint64_t ivar_1146;
                  ivar_1084->count++;
                  ivar_1146 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_1084);
                  cstopdown__ent_adt_t ivar_1156;
                  mpz_ptr_t ivar_1170;
                  uint8_t ivar_1162;
                  ivar_1162 = (uint8_t)1;
                  mpz_mk_set_ui(ivar_1170, (uint64_t)ivar_1146);
                  mpz_add_ui(ivar_1170, ivar_1170, (uint64_t)ivar_1162);
                  uint64_t ivar_1165;
                  //copying to uint64 from mpz;
                  ivar_1165 = (uint64_t)mpz_get_ui(ivar_1170);
                  mpz_clear(ivar_1170);
                  uint8_t ivar_1169;
                  ivar_1169 = (uint8_t)0;
                  uint32_t ivar_1166;
                  //copying to uint32 from uint8;
                  ivar_1166 = (uint32_t)ivar_1169;
                  ivar_1156 = (cstopdown__ent_adt_t)cstopdown__good((uint64_t)ivar_1165, (uint32_t)ivar_1166);
                  uint64_t ivar_1158;
                  uint8_t ivar_1172;
                  ivar_1172 = (uint8_t)1;
                  ivar_1158 = (uint64_t)(ivar_29 - ivar_1172);
                  cstopdown_record_119_t ivar_1174;
                  //copying to cstopdown_record_119 from cstopdown_record_119;
                  ivar_1174 = (cstopdown_record_119_t)ivar_12;
                  if (ivar_1174 != NULL) ivar_1174->count++;
                  release_cstopdown_record_119(ivar_12);
                  cstopdown_record_119_t ivar_1189;
                  cstopdown_funtype_66_t ivar_1175;
                  ivar_1175 = (cstopdown_funtype_66_t)ivar_1174->scaf;
                  ivar_1175->count++;
                  cstopdown_record_119_t ivar_1186;
                  cstopdown_funtype_66_t ivar_1188;
                  ivar_1188 = NULL;
                  ivar_1186 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1174, ivar_1188);
                  if (ivar_1188 != NULL) ivar_1188->count--;
                  cstopdown_funtype_66_t ivar_1187;
                  uint32_t ivar_1182;
                  //copying to uint32 from uint32;
                  ivar_1182 = (uint32_t)ivar_41;
                  cstopdown_funtype_65_t ivar_1176;
                  ivar_1176 = (cstopdown_funtype_65_t)ivar_1175->ftbl->fptr(ivar_1175, ivar_1182);
                  cstopdown_funtype_66_t ivar_1183;
                  cstopdown_funtype_65_t ivar_1185;
                  ivar_1185 = NULL;
                  ivar_1183 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1175, ivar_1182, ivar_1185);
                  if (ivar_1185 != NULL) ivar_1185->count--;
                  cstopdown_funtype_65_t ivar_1184;
                  cstopdown_funtype_65_t ivar_1179;
                  cstopdown__ent_adt_t ivar_1181;
                  ivar_1181 = NULL;
                  ivar_1179 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1176, ivar_45, ivar_1181);
                  if (ivar_1181 != NULL) ivar_1181->count--;
                  ivar_1184 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1179, ivar_45, ivar_1156);
                  if (ivar_1156 != NULL) ivar_1156->count--;
                  ivar_1187 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1183, ivar_1182, ivar_1184);
                  if (ivar_1184 != NULL) ivar_1184->count--;
                  ivar_1189 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1186, ivar_1187);
                  if (ivar_1187 != NULL) ivar_1187->count--;
                  cstopdown_record_119_t ivar_1194;
                  cstopdown_record_119_t ivar_1191;
                  cstopdown__ent_adt_t ivar_1193;
                  ivar_1193 = NULL;
                  ivar_1191 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1189, ivar_1193);
                  if (ivar_1193 != NULL) ivar_1193->count--;
                  ivar_1194 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1191, ivar_49);
                  if (ivar_49 != NULL) ivar_49->count--;
                  result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_1194, ivar_1158);
} else {
                 
                  bool_t ivar_1241;
                  ivar_1241 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_1084);
                  if (ivar_1241){           
                   release_cstopdown__ent_adt(ivar_49);
                   cstopdown__ent_adt_t ivar_1205;
                   ivar_1205 = (cstopdown__ent_adt_t)cstopdown__push((uint32_t)ivar_41, (uint8_t)ivar_1080);
                   uint64_t ivar_1206;
                   uint8_t ivar_1214;
                   ivar_1214 = (uint8_t)1;
                   ivar_1206 = (uint64_t)(ivar_29 + ivar_1214);
                   cstopdown_record_119_t ivar_1216;
                   //copying to cstopdown_record_119 from cstopdown_record_119;
                   ivar_1216 = (cstopdown_record_119_t)ivar_12;
                   if (ivar_1216 != NULL) ivar_1216->count++;
                   release_cstopdown_record_119(ivar_12);
                   cstopdown_record_119_t ivar_1221;
                   cstopdown_record_119_t ivar_1218;
                   cstopdown__ent_adt_t ivar_1220;
                   ivar_1220 = NULL;
                   ivar_1218 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1216, ivar_1220);
                   if (ivar_1220 != NULL) ivar_1220->count--;
                   ivar_1221 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1218, ivar_1205);
                   if (ivar_1205 != NULL) ivar_1205->count--;
                   cstopdown_record_119_t ivar_1225;
                   ivar_1225 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_1221, ivar_1206);
                   cstopdown_funtype_66_t ivar_1226;
                   ivar_1226 = (cstopdown_funtype_66_t)ivar_1225->scaf;
                   ivar_1226->count++;
                   cstopdown_record_119_t ivar_1237;
                   cstopdown_funtype_66_t ivar_1239;
                   ivar_1239 = NULL;
                   ivar_1237 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1225, ivar_1239);
                   if (ivar_1239 != NULL) ivar_1239->count--;
                   cstopdown_funtype_66_t ivar_1238;
                   uint32_t ivar_1233;
                   //copying to uint32 from uint32;
                   ivar_1233 = (uint32_t)ivar_41;
                   cstopdown_funtype_65_t ivar_1227;
                   ivar_1227 = (cstopdown_funtype_65_t)ivar_1226->ftbl->fptr(ivar_1226, ivar_1233);
                   cstopdown_funtype_66_t ivar_1234;
                   cstopdown_funtype_65_t ivar_1236;
                   ivar_1236 = NULL;
                   ivar_1234 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1226, ivar_1233, ivar_1236);
                   if (ivar_1236 != NULL) ivar_1236->count--;
                   cstopdown_funtype_65_t ivar_1235;
                   cstopdown_funtype_65_t ivar_1230;
                   cstopdown__ent_adt_t ivar_1232;
                   ivar_1232 = NULL;
                   ivar_1230 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1227, ivar_1080, ivar_1232);
                   if (ivar_1232 != NULL) ivar_1232->count--;
                   ivar_1235 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1230, ivar_1080, ivar_25);
                   if (ivar_25 != NULL) ivar_25->count--;
                   ivar_1238 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1234, ivar_1233, ivar_1235);
                   if (ivar_1235 != NULL) ivar_1235->count--;
                   result = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1237, ivar_1238);
                   if (ivar_1238 != NULL) ivar_1238->count--;
} else {
                  
                   release_cstopdown__ent_adt(ivar_25);
                   cstopdown__ent_adt_t ivar_1247;
                   ivar_1247 = (cstopdown__ent_adt_t)cstopdown__loop();
                   if (ivar_1247 != NULL) ivar_1247->count++;
                   uint64_t ivar_1248;
                   uint8_t ivar_1252;
                   ivar_1252 = (uint8_t)1;
                   ivar_1248 = (uint64_t)(ivar_29 - ivar_1252);
                   bool_t ivar_1250;
                   ivar_1250 = (bool_t) true;
                   cstopdown_record_119_t ivar_1254;
                   //copying to cstopdown_record_119 from cstopdown_record_119;
                   ivar_1254 = (cstopdown_record_119_t)ivar_12;
                   if (ivar_1254 != NULL) ivar_1254->count++;
                   release_cstopdown_record_119(ivar_12);
                   cstopdown_record_119_t ivar_1269;
                   cstopdown_funtype_66_t ivar_1255;
                   ivar_1255 = (cstopdown_funtype_66_t)ivar_1254->scaf;
                   ivar_1255->count++;
                   cstopdown_record_119_t ivar_1266;
                   cstopdown_funtype_66_t ivar_1268;
                   ivar_1268 = NULL;
                   ivar_1266 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1254, ivar_1268);
                   if (ivar_1268 != NULL) ivar_1268->count--;
                   cstopdown_funtype_66_t ivar_1267;
                   uint32_t ivar_1262;
                   //copying to uint32 from uint32;
                   ivar_1262 = (uint32_t)ivar_41;
                   cstopdown_funtype_65_t ivar_1256;
                   ivar_1256 = (cstopdown_funtype_65_t)ivar_1255->ftbl->fptr(ivar_1255, ivar_1262);
                   cstopdown_funtype_66_t ivar_1263;
                   cstopdown_funtype_65_t ivar_1265;
                   ivar_1265 = NULL;
                   ivar_1263 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1255, ivar_1262, ivar_1265);
                   if (ivar_1265 != NULL) ivar_1265->count--;
                   cstopdown_funtype_65_t ivar_1264;
                   cstopdown_funtype_65_t ivar_1259;
                   cstopdown__ent_adt_t ivar_1261;
                   ivar_1261 = NULL;
                   ivar_1259 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1256, ivar_45, ivar_1261);
                   if (ivar_1261 != NULL) ivar_1261->count--;
                   ivar_1264 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1259, ivar_45, ivar_1247);
                   if (ivar_1247 != NULL) ivar_1247->count--;
                   ivar_1267 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1263, ivar_1262, ivar_1264);
                   if (ivar_1264 != NULL) ivar_1264->count--;
                   ivar_1269 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1266, ivar_1267);
                   if (ivar_1267 != NULL) ivar_1267->count--;
                   cstopdown_record_119_t ivar_1273;
                   ivar_1273 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_1269, ivar_1248);
                   cstopdown_record_119_t ivar_1278;
                   cstopdown_record_119_t ivar_1275;
                   cstopdown__ent_adt_t ivar_1277;
                   ivar_1277 = NULL;
                   ivar_1275 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1273, ivar_1277);
                   if (ivar_1277 != NULL) ivar_1277->count--;
                   ivar_1278 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1275, ivar_49);
                   if (ivar_49 != NULL) ivar_49->count--;
                   result = (cstopdown_record_119_t)update_cstopdown_record_119_lflag(ivar_1278, ivar_1250);
};
};
};
} else {
               
                uint8_t ivar_1287;
                ivar_1287 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_62);
                cstopdown__ent_adt_t ivar_1291;
                cstopdown_funtype_65_t ivar_1295;
                cstopdown_funtype_66_t ivar_1301;
                //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
                ivar_1301 = (cstopdown_funtype_66_t)ivar_17;
                if (ivar_1301 != NULL) ivar_1301->count++;
                release_cstopdown_funtype_66(ivar_17);
                uint32_t ivar_1302;
                //copying to uint32 from uint32;
                ivar_1302 = (uint32_t)ivar_41;
                ivar_1295 = (cstopdown_funtype_65_t)ivar_1301->ftbl->fptr(ivar_1301, ivar_1302);
                ivar_1301->ftbl->rptr(ivar_1301);
                ivar_1291 = (cstopdown__ent_adt_t)ivar_1295->ftbl->fptr(ivar_1295, ivar_1287);
                ivar_1295->ftbl->rptr(ivar_1295);
                bool_t ivar_1353;
                ivar_1291->count++;
                ivar_1353 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_1291);
                if (ivar_1353){         
                 release_cstopdown__ent_adt(ivar_25);
                 uint64_t ivar_1304;
                 ivar_1304 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_1291);
                 cstopdown__ent_adt_t ivar_1310;
                 mpz_ptr_t ivar_1324;
                 uint8_t ivar_1316;
                 ivar_1316 = (uint8_t)1;
                 mpz_mk_set_ui(ivar_1324, (uint64_t)ivar_1304);
                 mpz_add_ui(ivar_1324, ivar_1324, (uint64_t)ivar_1316);
                 uint64_t ivar_1319;
                 //copying to uint64 from mpz;
                 ivar_1319 = (uint64_t)mpz_get_ui(ivar_1324);
                 mpz_clear(ivar_1324);
                 uint8_t ivar_1323;
                 ivar_1323 = (uint8_t)0;
                 uint32_t ivar_1320;
                 //copying to uint32 from uint8;
                 ivar_1320 = (uint32_t)ivar_1323;
                 ivar_1310 = (cstopdown__ent_adt_t)cstopdown__good((uint64_t)ivar_1319, (uint32_t)ivar_1320);
                 uint64_t ivar_1312;
                 uint8_t ivar_1326;
                 ivar_1326 = (uint8_t)1;
                 ivar_1312 = (uint64_t)(ivar_29 - ivar_1326);
                 cstopdown_record_119_t ivar_1328;
                 //copying to cstopdown_record_119 from cstopdown_record_119;
                 ivar_1328 = (cstopdown_record_119_t)ivar_12;
                 if (ivar_1328 != NULL) ivar_1328->count++;
                 release_cstopdown_record_119(ivar_12);
                 cstopdown_record_119_t ivar_1343;
                 cstopdown_funtype_66_t ivar_1329;
                 ivar_1329 = (cstopdown_funtype_66_t)ivar_1328->scaf;
                 ivar_1329->count++;
                 cstopdown_record_119_t ivar_1340;
                 cstopdown_funtype_66_t ivar_1342;
                 ivar_1342 = NULL;
                 ivar_1340 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1328, ivar_1342);
                 if (ivar_1342 != NULL) ivar_1342->count--;
                 cstopdown_funtype_66_t ivar_1341;
                 uint32_t ivar_1336;
                 //copying to uint32 from uint32;
                 ivar_1336 = (uint32_t)ivar_41;
                 cstopdown_funtype_65_t ivar_1330;
                 ivar_1330 = (cstopdown_funtype_65_t)ivar_1329->ftbl->fptr(ivar_1329, ivar_1336);
                 cstopdown_funtype_66_t ivar_1337;
                 cstopdown_funtype_65_t ivar_1339;
                 ivar_1339 = NULL;
                 ivar_1337 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1329, ivar_1336, ivar_1339);
                 if (ivar_1339 != NULL) ivar_1339->count--;
                 cstopdown_funtype_65_t ivar_1338;
                 cstopdown_funtype_65_t ivar_1333;
                 cstopdown__ent_adt_t ivar_1335;
                 ivar_1335 = NULL;
                 ivar_1333 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1330, ivar_45, ivar_1335);
                 if (ivar_1335 != NULL) ivar_1335->count--;
                 ivar_1338 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1333, ivar_45, ivar_1310);
                 if (ivar_1310 != NULL) ivar_1310->count--;
                 ivar_1341 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1337, ivar_1336, ivar_1338);
                 if (ivar_1338 != NULL) ivar_1338->count--;
                 ivar_1343 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1340, ivar_1341);
                 if (ivar_1341 != NULL) ivar_1341->count--;
                 cstopdown_record_119_t ivar_1348;
                 cstopdown_record_119_t ivar_1345;
                 cstopdown__ent_adt_t ivar_1347;
                 ivar_1347 = NULL;
                 ivar_1345 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1343, ivar_1347);
                 if (ivar_1347 != NULL) ivar_1347->count--;
                 ivar_1348 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1345, ivar_49);
                 if (ivar_49 != NULL) ivar_49->count--;
                 result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_1348, ivar_1312);
} else {
                
                 bool_t ivar_1406;
                 ivar_1291->count++;
                 ivar_1406 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_1291);
                 if (ivar_1406){          
                  release_cstopdown__ent_adt(ivar_25);
                  uint64_t ivar_1357;
                  ivar_1291->count++;
                  ivar_1357 = (uint64_t)cstopdown__ent_adt_dep((cstopdown__ent_adt_t)ivar_1291);
                  cstopdown__ent_adt_t ivar_1367;
                  mpz_ptr_t ivar_1377;
                  uint8_t ivar_1372;
                  ivar_1372 = (uint8_t)1;
                  mpz_mk_set_ui(ivar_1377, (uint64_t)ivar_1357);
                  mpz_add_ui(ivar_1377, ivar_1377, (uint64_t)ivar_1372);
                  uint64_t ivar_1375;
                  //copying to uint64 from mpz;
                  ivar_1375 = (uint64_t)mpz_get_ui(ivar_1377);
                  mpz_clear(ivar_1377);
                  ivar_1367 = (cstopdown__ent_adt_t)cstopdown__fail((uint64_t)ivar_1375);
                  uint64_t ivar_1369;
                  uint8_t ivar_1379;
                  ivar_1379 = (uint8_t)1;
                  ivar_1369 = (uint64_t)(ivar_29 - ivar_1379);
                  cstopdown_record_119_t ivar_1381;
                  //copying to cstopdown_record_119 from cstopdown_record_119;
                  ivar_1381 = (cstopdown_record_119_t)ivar_12;
                  if (ivar_1381 != NULL) ivar_1381->count++;
                  release_cstopdown_record_119(ivar_12);
                  cstopdown_record_119_t ivar_1396;
                  cstopdown_funtype_66_t ivar_1382;
                  ivar_1382 = (cstopdown_funtype_66_t)ivar_1381->scaf;
                  ivar_1382->count++;
                  cstopdown_record_119_t ivar_1393;
                  cstopdown_funtype_66_t ivar_1395;
                  ivar_1395 = NULL;
                  ivar_1393 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1381, ivar_1395);
                  if (ivar_1395 != NULL) ivar_1395->count--;
                  cstopdown_funtype_66_t ivar_1394;
                  uint32_t ivar_1389;
                  //copying to uint32 from uint32;
                  ivar_1389 = (uint32_t)ivar_41;
                  cstopdown_funtype_65_t ivar_1383;
                  ivar_1383 = (cstopdown_funtype_65_t)ivar_1382->ftbl->fptr(ivar_1382, ivar_1389);
                  cstopdown_funtype_66_t ivar_1390;
                  cstopdown_funtype_65_t ivar_1392;
                  ivar_1392 = NULL;
                  ivar_1390 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1382, ivar_1389, ivar_1392);
                  if (ivar_1392 != NULL) ivar_1392->count--;
                  cstopdown_funtype_65_t ivar_1391;
                  cstopdown_funtype_65_t ivar_1386;
                  cstopdown__ent_adt_t ivar_1388;
                  ivar_1388 = NULL;
                  ivar_1386 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1383, ivar_45, ivar_1388);
                  if (ivar_1388 != NULL) ivar_1388->count--;
                  ivar_1391 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1386, ivar_45, ivar_1367);
                  if (ivar_1367 != NULL) ivar_1367->count--;
                  ivar_1394 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1390, ivar_1389, ivar_1391);
                  if (ivar_1391 != NULL) ivar_1391->count--;
                  ivar_1396 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1393, ivar_1394);
                  if (ivar_1394 != NULL) ivar_1394->count--;
                  cstopdown_record_119_t ivar_1401;
                  cstopdown_record_119_t ivar_1398;
                  cstopdown__ent_adt_t ivar_1400;
                  ivar_1400 = NULL;
                  ivar_1398 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1396, ivar_1400);
                  if (ivar_1400 != NULL) ivar_1400->count--;
                  ivar_1401 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1398, ivar_49);
                  if (ivar_49 != NULL) ivar_49->count--;
                  result = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_1401, ivar_1369);
} else {
                 
                  bool_t ivar_1448;
                  ivar_1448 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_1291);
                  if (ivar_1448){           
                   release_cstopdown__ent_adt(ivar_49);
                   cstopdown__ent_adt_t ivar_1412;
                   ivar_1412 = (cstopdown__ent_adt_t)cstopdown__push((uint32_t)ivar_41, (uint8_t)ivar_1287);
                   uint64_t ivar_1413;
                   uint8_t ivar_1421;
                   ivar_1421 = (uint8_t)1;
                   ivar_1413 = (uint64_t)(ivar_29 + ivar_1421);
                   cstopdown_record_119_t ivar_1423;
                   //copying to cstopdown_record_119 from cstopdown_record_119;
                   ivar_1423 = (cstopdown_record_119_t)ivar_12;
                   if (ivar_1423 != NULL) ivar_1423->count++;
                   release_cstopdown_record_119(ivar_12);
                   cstopdown_record_119_t ivar_1428;
                   cstopdown_record_119_t ivar_1425;
                   cstopdown__ent_adt_t ivar_1427;
                   ivar_1427 = NULL;
                   ivar_1425 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1423, ivar_1427);
                   if (ivar_1427 != NULL) ivar_1427->count--;
                   ivar_1428 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1425, ivar_1412);
                   if (ivar_1412 != NULL) ivar_1412->count--;
                   cstopdown_record_119_t ivar_1432;
                   ivar_1432 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_1428, ivar_1413);
                   cstopdown_funtype_66_t ivar_1433;
                   ivar_1433 = (cstopdown_funtype_66_t)ivar_1432->scaf;
                   ivar_1433->count++;
                   cstopdown_record_119_t ivar_1444;
                   cstopdown_funtype_66_t ivar_1446;
                   ivar_1446 = NULL;
                   ivar_1444 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1432, ivar_1446);
                   if (ivar_1446 != NULL) ivar_1446->count--;
                   cstopdown_funtype_66_t ivar_1445;
                   uint32_t ivar_1440;
                   //copying to uint32 from uint32;
                   ivar_1440 = (uint32_t)ivar_41;
                   cstopdown_funtype_65_t ivar_1434;
                   ivar_1434 = (cstopdown_funtype_65_t)ivar_1433->ftbl->fptr(ivar_1433, ivar_1440);
                   cstopdown_funtype_66_t ivar_1441;
                   cstopdown_funtype_65_t ivar_1443;
                   ivar_1443 = NULL;
                   ivar_1441 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1433, ivar_1440, ivar_1443);
                   if (ivar_1443 != NULL) ivar_1443->count--;
                   cstopdown_funtype_65_t ivar_1442;
                   cstopdown_funtype_65_t ivar_1437;
                   cstopdown__ent_adt_t ivar_1439;
                   ivar_1439 = NULL;
                   ivar_1437 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1434, ivar_1287, ivar_1439);
                   if (ivar_1439 != NULL) ivar_1439->count--;
                   ivar_1442 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1437, ivar_1287, ivar_25);
                   if (ivar_25 != NULL) ivar_25->count--;
                   ivar_1445 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1441, ivar_1440, ivar_1442);
                   if (ivar_1442 != NULL) ivar_1442->count--;
                   result = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1444, ivar_1445);
                   if (ivar_1445 != NULL) ivar_1445->count--;
} else {
                  
                   release_cstopdown__ent_adt(ivar_25);
                   cstopdown__ent_adt_t ivar_1454;
                   ivar_1454 = (cstopdown__ent_adt_t)cstopdown__loop();
                   if (ivar_1454 != NULL) ivar_1454->count++;
                   uint64_t ivar_1455;
                   uint8_t ivar_1459;
                   ivar_1459 = (uint8_t)1;
                   ivar_1455 = (uint64_t)(ivar_29 - ivar_1459);
                   bool_t ivar_1457;
                   ivar_1457 = (bool_t) true;
                   cstopdown_record_119_t ivar_1461;
                   //copying to cstopdown_record_119 from cstopdown_record_119;
                   ivar_1461 = (cstopdown_record_119_t)ivar_12;
                   if (ivar_1461 != NULL) ivar_1461->count++;
                   release_cstopdown_record_119(ivar_12);
                   cstopdown_record_119_t ivar_1476;
                   cstopdown_funtype_66_t ivar_1462;
                   ivar_1462 = (cstopdown_funtype_66_t)ivar_1461->scaf;
                   ivar_1462->count++;
                   cstopdown_record_119_t ivar_1473;
                   cstopdown_funtype_66_t ivar_1475;
                   ivar_1475 = NULL;
                   ivar_1473 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1461, ivar_1475);
                   if (ivar_1475 != NULL) ivar_1475->count--;
                   cstopdown_funtype_66_t ivar_1474;
                   uint32_t ivar_1469;
                   //copying to uint32 from uint32;
                   ivar_1469 = (uint32_t)ivar_41;
                   cstopdown_funtype_65_t ivar_1463;
                   ivar_1463 = (cstopdown_funtype_65_t)ivar_1462->ftbl->fptr(ivar_1462, ivar_1469);
                   cstopdown_funtype_66_t ivar_1470;
                   cstopdown_funtype_65_t ivar_1472;
                   ivar_1472 = NULL;
                   ivar_1470 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1462, ivar_1469, ivar_1472);
                   if (ivar_1472 != NULL) ivar_1472->count--;
                   cstopdown_funtype_65_t ivar_1471;
                   cstopdown_funtype_65_t ivar_1466;
                   cstopdown__ent_adt_t ivar_1468;
                   ivar_1468 = NULL;
                   ivar_1466 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1463, ivar_45, ivar_1468);
                   if (ivar_1468 != NULL) ivar_1468->count--;
                   ivar_1471 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_1466, ivar_45, ivar_1454);
                   if (ivar_1454 != NULL) ivar_1454->count--;
                   ivar_1474 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_1470, ivar_1469, ivar_1471);
                   if (ivar_1471 != NULL) ivar_1471->count--;
                   ivar_1476 = (cstopdown_record_119_t)update_cstopdown_record_119_scaf(ivar_1473, ivar_1474);
                   if (ivar_1474 != NULL) ivar_1474->count--;
                   cstopdown_record_119_t ivar_1480;
                   ivar_1480 = (cstopdown_record_119_t)update_cstopdown_record_119_depth(ivar_1476, ivar_1455);
                   cstopdown_record_119_t ivar_1485;
                   cstopdown_record_119_t ivar_1482;
                   cstopdown__ent_adt_t ivar_1484;
                   ivar_1484 = NULL;
                   ivar_1482 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1480, ivar_1484);
                   if (ivar_1484 != NULL) ivar_1484->count--;
                   ivar_1485 = (cstopdown_record_119_t)update_cstopdown_record_119_stack(ivar_1482, ivar_49);
                   if (ivar_49 != NULL) ivar_49->count--;
                   result = (cstopdown_record_119_t)update_cstopdown_record_119_lflag(ivar_1485, ivar_1457);
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

cstopdown_closure_121_t new_cstopdown_closure_121(void){
        static struct cstopdown_funtype_120_ftbl_s ftbl = {.fptr = (cstopdown_record_119_t (*)(cstopdown_funtype_120_t, cstopdown_record_119_t))&f_cstopdown_closure_121, .mptr = (cstopdown_record_119_t (*)(cstopdown_funtype_120_t, cstopdown_record_119_t))&m_cstopdown_closure_121, .rptr =  (void (*)(cstopdown_funtype_120_t))&release_cstopdown_closure_121, .cptr = (cstopdown_funtype_120_t (*)(cstopdown_funtype_120_t))&copy_cstopdown_closure_121};
        cstopdown_closure_121_t tmp = (cstopdown_closure_121_t) safe_malloc(sizeof(struct cstopdown_closure_121_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_121(cstopdown_funtype_120_t closure){
        cstopdown_closure_121_t x = (cstopdown_closure_121_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_72(x->fvar_2);
         release_cstopdown__lang_spec(x->fvar_3);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_121_t copy_cstopdown_closure_121(cstopdown_closure_121_t x){
        cstopdown_closure_121_t y = new_cstopdown_closure_121();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = x->fvar_2; x->fvar_2->count++;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_120_htbl_t new_htbl = (cstopdown_funtype_120_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_120_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_120_hashentry_t * new_data = (cstopdown_funtype_120_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_120_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_120_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_122(struct cstopdown_closure_122_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_122(bvar, closure->fvar_1);};

return h_cstopdown_closure_122(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_122(struct cstopdown_closure_122_s * closure, uint32_t bvar){
        return h_cstopdown_closure_122(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_122(uint32_t ivar_1494, cstopdown_funtype_66_t ivar_1491){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_1492;
        uint32_t ivar_1493;
        //copying to uint32 from uint32;
        ivar_1493 = (uint32_t)ivar_1494;
        ivar_1492 = (cstopdown_funtype_65_t)ivar_1491->ftbl->fptr(ivar_1491, ivar_1493);
        cstopdown_funtype_65_t ivar_1495;
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        ivar_1495 = (cstopdown_funtype_65_t)ivar_1492;
        if (ivar_1495 != NULL) ivar_1495->count++;
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_1495;
        if (result != NULL) result->count++;

        return result;
}

cstopdown_closure_122_t new_cstopdown_closure_122(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_122, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_122, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_122, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_122};
        cstopdown_closure_122_t tmp = (cstopdown_closure_122_t) safe_malloc(sizeof(struct cstopdown_closure_122_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_122(cstopdown_funtype_66_t closure){
        cstopdown_closure_122_t x = (cstopdown_closure_122_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_122_t copy_cstopdown_closure_122(cstopdown_closure_122_t x){
        cstopdown_closure_122_t y = new_cstopdown_closure_122();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

void release_cstopdown_funtype_123(cstopdown_funtype_123_t x){
        x->count--;
            if (x->count <= 0)

                x->ftbl->rptr(x);}

cstopdown_funtype_123_t copy_cstopdown_funtype_123(cstopdown_funtype_123_t x){return x->ftbl->cptr(x);}

bool_t equal_cstopdown_funtype_123(cstopdown_funtype_123_t x, cstopdown_funtype_123_t y){
        return false;}

char* json_cstopdown_funtype_123(cstopdown_funtype_123_t x){char * result = safe_malloc(31); sprintf(result, "%s", "\"cstopdown_funtype_123\""); return result;}


ordstruct_adt__ordstruct_adt_t f_cstopdown_closure_124(struct cstopdown_closure_124_s * closure, cstopdown_record_119_t bvar){
        ordstruct_adt__ordstruct_adt_t result = h_cstopdown_closure_124(bvar, closure->fvar_1); 
        return result;}

ordstruct_adt__ordstruct_adt_t m_cstopdown_closure_124(struct cstopdown_closure_124_s * closure, cstopdown_record_119_t bvar){
        return h_cstopdown_closure_124(bvar, closure->fvar_1);}

extern ordstruct_adt__ordstruct_adt_t h_cstopdown_closure_124(cstopdown_record_119_t ivar_10, uint32_t ivar_1){
        ordstruct_adt__ordstruct_adt_t result;
        uint64_t ivar_59;
        cstopdown_funtype_66_t ivar_38;
        cstopdown_record_119_t ivar_19;
        //copying to cstopdown_record_119 from cstopdown_record_119;
        ivar_19 = (cstopdown_record_119_t)ivar_10;
        if (ivar_19 != NULL) ivar_19->count++;
        ivar_38 = (cstopdown_funtype_66_t)ivar_19->scaf;
        ivar_38->count++;
        release_cstopdown_record_119(ivar_19);
        cstopdown_funtype_66_t ivar_30;
        cstopdown_closure_125_t cl51668;
        cl51668 = new_cstopdown_closure_125();
        cl51668->fvar_1 = (cstopdown_funtype_66_t)ivar_38;
        if (cl51668->fvar_1 != NULL) cl51668->fvar_1->count++;
        release_cstopdown_funtype_66(ivar_38);
        ivar_30 = (cstopdown_funtype_66_t)cl51668;
        cstopdown_funtype_59_t ivar_31;
        cstopdown_closure_126_t cl51669;
        cl51669 = new_cstopdown_closure_126();
        ivar_31 = (cstopdown_funtype_59_t)cl51669;
        ivar_59 = (uint64_t)cstopdown__scafcount((uint32_t)ivar_1, (cstopdown_funtype_66_t)ivar_30, (cstopdown_funtype_59_t)ivar_31, (uint32_t)ivar_1);
        mpz_ptr_t ivar_56;
        //copying to mpz from uint64;
        mpz_mk_set_ui(ivar_56, ivar_59);
        mpz_ptr_t ivar_57;
        uint64_t ivar_43;
        uint64_t ivar_45;
        uint8_t ivar_48;
        ivar_48 = (uint8_t)1;
        ivar_45 = (uint64_t)(ivar_1 + ivar_48);
        uint8_t ivar_46;
        ivar_46 = (uint8_t)cstopdown__num_non_terminals();
        ivar_43 = (uint64_t)((uint64_t)ivar_45 * (uint64_t)ivar_46);
        uint64_t ivar_44;
        cstopdown_record_119_t ivar_51;
        //copying to cstopdown_record_119 from cstopdown_record_119;
        ivar_51 = (cstopdown_record_119_t)ivar_10;
        if (ivar_51 != NULL) ivar_51->count++;
        release_cstopdown_record_119(ivar_10);
        ivar_44 = (uint64_t)ivar_51->depth;
        release_cstopdown_record_119(ivar_51);
        mpz_mk_set_ui(ivar_57, (uint64_t)ivar_43);
        mpz_sub_ui(ivar_57, ivar_57, (uint64_t)ivar_44);
        result = (ordstruct_adt__ordstruct_adt_t)lex2__lex2((mpz_ptr_t)ivar_56, (mpz_ptr_t)ivar_57);

        return result;
}

cstopdown_closure_124_t new_cstopdown_closure_124(void){
        static struct cstopdown_funtype_123_ftbl_s ftbl = {.fptr = (ordstruct_adt__ordstruct_adt_t (*)(cstopdown_funtype_123_t, cstopdown_record_119_t))&f_cstopdown_closure_124, .mptr = (ordstruct_adt__ordstruct_adt_t (*)(cstopdown_funtype_123_t, cstopdown_record_119_t))&m_cstopdown_closure_124, .rptr =  (void (*)(cstopdown_funtype_123_t))&release_cstopdown_closure_124, .cptr = (cstopdown_funtype_123_t (*)(cstopdown_funtype_123_t))&copy_cstopdown_closure_124};
        cstopdown_closure_124_t tmp = (cstopdown_closure_124_t) safe_malloc(sizeof(struct cstopdown_closure_124_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_124(cstopdown_funtype_123_t closure){
        cstopdown_closure_124_t x = (cstopdown_closure_124_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_124_t copy_cstopdown_closure_124(cstopdown_closure_124_t x){
        cstopdown_closure_124_t y = new_cstopdown_closure_124();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        if (x->htbl != NULL){
            cstopdown_funtype_123_htbl_t new_htbl = (cstopdown_funtype_123_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_123_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_123_hashentry_t * new_data = (cstopdown_funtype_123_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_123_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_123_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_funtype_65_t f_cstopdown_closure_125(struct cstopdown_closure_125_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_125(bvar, closure->fvar_1);};

return h_cstopdown_closure_125(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_125(struct cstopdown_closure_125_s * closure, uint32_t bvar){
        return h_cstopdown_closure_125(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_125(uint32_t ivar_41, cstopdown_funtype_66_t ivar_38){
        cstopdown_funtype_65_t result;
        cstopdown_funtype_65_t ivar_39;
        uint32_t ivar_40;
        //copying to uint32 from uint32;
        ivar_40 = (uint32_t)ivar_41;
        ivar_39 = (cstopdown_funtype_65_t)ivar_38->ftbl->fptr(ivar_38, ivar_40);
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_39;
        if (result != NULL) result->count++;
        release_cstopdown_funtype_65(ivar_39);

        return result;
}

cstopdown_closure_125_t new_cstopdown_closure_125(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_125, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_125, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_125, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_125};
        cstopdown_closure_125_t tmp = (cstopdown_closure_125_t) safe_malloc(sizeof(struct cstopdown_closure_125_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_125(cstopdown_funtype_66_t closure){
        cstopdown_closure_125_t x = (cstopdown_closure_125_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_125_t copy_cstopdown_closure_125(cstopdown_closure_125_t x){
        cstopdown_closure_125_t y = new_cstopdown_closure_125();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


bool_t f_cstopdown_closure_126(struct cstopdown_closure_126_s * closure, cstopdown__ent_adt_t bvar){
        bool_t result = h_cstopdown_closure_126(bvar); 
        return result;}

bool_t m_cstopdown_closure_126(struct cstopdown_closure_126_s * closure, cstopdown__ent_adt_t bvar){
        return h_cstopdown_closure_126(bvar);}

extern bool_t h_cstopdown_closure_126(cstopdown__ent_adt_t ivar_23){
        bool_t result;
        result = (bool_t)cstopdown__push_or_pendingp((cstopdown__ent_adt_t)ivar_23);

        return result;
}

cstopdown_closure_126_t new_cstopdown_closure_126(void){
        static struct cstopdown_funtype_59_ftbl_s ftbl = {.fptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&f_cstopdown_closure_126, .mptr = (bool_t (*)(cstopdown_funtype_59_t, cstopdown__ent_adt_t))&m_cstopdown_closure_126, .rptr =  (void (*)(cstopdown_funtype_59_t))&release_cstopdown_closure_126, .cptr = (cstopdown_funtype_59_t (*)(cstopdown_funtype_59_t))&copy_cstopdown_closure_126};
        cstopdown_closure_126_t tmp = (cstopdown_closure_126_t) safe_malloc(sizeof(struct cstopdown_closure_126_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_126(cstopdown_funtype_59_t closure){
        cstopdown_closure_126_t x = (cstopdown_closure_126_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_126_t copy_cstopdown_closure_126(cstopdown_closure_126_t x){
        cstopdown_closure_126_t y = new_cstopdown_closure_126();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdown_funtype_59_htbl_t new_htbl = (cstopdown_funtype_59_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_59_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_59_hashentry_t * new_data = (cstopdown_funtype_59_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_59_hashentry_s)));
            new_htbl->data = new_data;;
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_record_119_t f_cstopdown_closure_127(struct cstopdown_closure_127_s * closure, cstopdown_record_119_t bvar){
        cstopdown_record_119_t result = h_cstopdown_closure_127(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5); 
        return result;}

cstopdown_record_119_t m_cstopdown_closure_127(struct cstopdown_closure_127_s * closure, cstopdown_record_119_t bvar){
        return h_cstopdown_closure_127(bvar, closure->fvar_1, closure->fvar_2, closure->fvar_3, closure->fvar_4, closure->fvar_5);}

extern cstopdown_record_119_t h_cstopdown_closure_127(cstopdown_record_119_t ivar_12, uint32_t ivar_5, uint8_t ivar_6, cstopdown_funtype_72_t ivar_3, cstopdown__lang_spec_t ivar_2, uint32_t ivar_1){
        cstopdown_record_119_t result;
        bool_t ivar_17;
        uint64_t ivar_18;
        cstopdown_record_119_t ivar_20;
        //copying to cstopdown_record_119 from cstopdown_record_119;
        ivar_20 = (cstopdown_record_119_t)ivar_12;
        if (ivar_20 != NULL) ivar_20->count++;
        ivar_18 = (uint64_t)ivar_20->depth;
        release_cstopdown_record_119(ivar_20);
        uint8_t ivar_19;
        ivar_19 = (uint8_t)0;
        ivar_17 = (ivar_18 == ivar_19);
        if (ivar_17){ 
             //copying to cstopdown_record_119 from cstopdown_record_119;
             result = (cstopdown_record_119_t)ivar_12;
             if (result != NULL) result->count++;
             release_cstopdown_record_119(ivar_12);
} else {
        
             cstopdown_funtype_120_t ivar_62;
             ivar_2->count++;
             ivar_3->count++;
             ivar_62 = (cstopdown_funtype_120_t)cstopdown__parse((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (cstopdown_funtype_72_t)ivar_3, (uint32_t)ivar_5, (uint8_t)ivar_6);
             cstopdown_record_119_t ivar_81;
             cstopdown_funtype_120_t ivar_36;
             ivar_2->count++;
             ivar_3->count++;
             ivar_36 = (cstopdown_funtype_120_t)cstopdown__step((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (cstopdown_funtype_72_t)ivar_3, (uint32_t)ivar_5, (uint8_t)ivar_6);
             cstopdown_record_119_t ivar_53;
             //copying to cstopdown_record_119 from cstopdown_record_119;
             ivar_53 = (cstopdown_record_119_t)ivar_12;
             if (ivar_53 != NULL) ivar_53->count++;
             release_cstopdown_record_119(ivar_12);
             ivar_81 = (cstopdown_record_119_t)ivar_36->ftbl->fptr(ivar_36, ivar_53);
             ivar_36->ftbl->rptr(ivar_36);
             cstopdown_record_119_t ivar_80;
             //copying to cstopdown_record_119 from cstopdown_record_119;
             ivar_80 = (cstopdown_record_119_t)ivar_81;
             if (ivar_80 != NULL) ivar_80->count++;
             release_cstopdown_record_119(ivar_81);
             result = (cstopdown_record_119_t)ivar_62->ftbl->fptr(ivar_62, ivar_80);
             ivar_62->ftbl->rptr(ivar_62);
};

        return result;
}

cstopdown_closure_127_t new_cstopdown_closure_127(void){
        static struct cstopdown_funtype_120_ftbl_s ftbl = {.fptr = (cstopdown_record_119_t (*)(cstopdown_funtype_120_t, cstopdown_record_119_t))&f_cstopdown_closure_127, .mptr = (cstopdown_record_119_t (*)(cstopdown_funtype_120_t, cstopdown_record_119_t))&m_cstopdown_closure_127, .rptr =  (void (*)(cstopdown_funtype_120_t))&release_cstopdown_closure_127, .cptr = (cstopdown_funtype_120_t (*)(cstopdown_funtype_120_t))&copy_cstopdown_closure_127};
        cstopdown_closure_127_t tmp = (cstopdown_closure_127_t) safe_malloc(sizeof(struct cstopdown_closure_127_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_127(cstopdown_funtype_120_t closure){
        cstopdown_closure_127_t x = (cstopdown_closure_127_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_72(x->fvar_3);
         release_cstopdown__lang_spec(x->fvar_4);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_127_t copy_cstopdown_closure_127(cstopdown_closure_127_t x){
        cstopdown_closure_127_t y = new_cstopdown_closure_127();
        y->ftbl = x->ftbl;

        y->fvar_1 = (uint32_t)x->fvar_1;
        y->fvar_2 = (uint8_t)x->fvar_2;
        y->fvar_3 = x->fvar_3; x->fvar_3->count++;
        y->fvar_4 = x->fvar_4; x->fvar_4->count++;
        y->fvar_5 = (uint32_t)x->fvar_5;
        if (x->htbl != NULL){
            cstopdown_funtype_120_htbl_t new_htbl = (cstopdown_funtype_120_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_120_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_120_hashentry_t * new_data = (cstopdown_funtype_120_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_120_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_120_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown__ent_adt_t f_cstopdown_closure_128(struct cstopdown_closure_128_s * closure, uint8_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_65_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_65(htbl, bvar, hash);
        cstopdown_funtype_65_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown__ent_adt_t result;
            result = (cstopdown__ent_adt_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_128(bvar);};

return h_cstopdown_closure_128(bvar);}

cstopdown__ent_adt_t m_cstopdown_closure_128(struct cstopdown_closure_128_s * closure, uint8_t bvar){
        return h_cstopdown_closure_128(bvar);}

extern cstopdown__ent_adt_t h_cstopdown_closure_128(uint8_t ivar_11){
        cstopdown__ent_adt_t result;
        result = (cstopdown__ent_adt_t)cstopdown__pending();
        if (result != NULL) result->count++;

        return result;
}

cstopdown_closure_128_t new_cstopdown_closure_128(void){
        static struct cstopdown_funtype_65_ftbl_s ftbl = {.fptr = (cstopdown__ent_adt_t (*)(cstopdown_funtype_65_t, uint8_t))&f_cstopdown_closure_128, .mptr = (cstopdown__ent_adt_t (*)(cstopdown_funtype_65_t, uint8_t))&m_cstopdown_closure_128, .rptr =  (void (*)(cstopdown_funtype_65_t))&release_cstopdown_closure_128, .cptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_65_t))&copy_cstopdown_closure_128};
        cstopdown_closure_128_t tmp = (cstopdown_closure_128_t) safe_malloc(sizeof(struct cstopdown_closure_128_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_128(cstopdown_funtype_65_t closure){
        cstopdown_closure_128_t x = (cstopdown_closure_128_t)closure;
        x->count--;
        if (x->count <= 0){
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_128_t copy_cstopdown_closure_128(cstopdown_closure_128_t x){
        cstopdown_closure_128_t y = new_cstopdown_closure_128();
        y->ftbl = x->ftbl;

        if (x->htbl != NULL){
            cstopdown_funtype_65_htbl_t new_htbl = (cstopdown_funtype_65_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_65_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_65_hashentry_t * new_data = (cstopdown_funtype_65_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_65_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_65_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}


cstopdown_record_129_t new_cstopdown_record_129(void){
        cstopdown_record_129_t tmp = (cstopdown_record_129_t) safe_malloc(sizeof(struct cstopdown_record_129_s));
        tmp->count = 1;
        return tmp;}

void release_cstopdown_record_129(cstopdown_record_129_t x){
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_66(x->scaf);
         release_cstopdown__ent_adt(x->stack);
        //printf("\nFreeing\n");
        safe_free(x);}}

void release_cstopdown_record_129_ptr(pointer_t x, type_actual_t T){
        release_cstopdown_record_129((cstopdown_record_129_t)x);
}

cstopdown_record_129_t copy_cstopdown_record_129(cstopdown_record_129_t x){
        cstopdown_record_129_t y = new_cstopdown_record_129();
        y->depth = (uint8_t)x->depth;
        y->lflag = (bool_t)x->lflag;
        y->scaf = x->scaf;
        if (y->scaf != NULL){y->scaf->count++;};
        y->stack = x->stack;
        if (y->stack != NULL){y->stack->count++;};
        y->count = 1;
        return y;}

bool_t equal_cstopdown_record_129(cstopdown_record_129_t x, cstopdown_record_129_t y){
        bool_t tmp = true;
        tmp = tmp && x->depth == y->depth;
        tmp = tmp && x->lflag == y->lflag;
        tmp = tmp && equal_cstopdown_funtype_66(x->scaf, y->scaf);
        tmp = tmp && equal_cstopdown__ent_adt(x->stack, y->stack);
        return tmp;}

char * json_cstopdown_record_129(cstopdown_record_129_t x){
        char * tmp[4]; 
        char * fld0 = safe_malloc(17);
         sprintf(fld0, "\"depth\" : ");
        tmp[0] = safe_strcat(fld0, json_uint8(x->depth));
        char * fld1 = safe_malloc(17);
         sprintf(fld1, "\"lflag\" : ");
        tmp[1] = safe_strcat(fld1, json_bool(x->lflag));
        char * fld2 = safe_malloc(16);
         sprintf(fld2, "\"scaf\" : ");
        tmp[2] = safe_strcat(fld2, json_cstopdown_funtype_66(x->scaf));
        char * fld3 = safe_malloc(17);
         sprintf(fld3, "\"stack\" : ");
        tmp[3] = safe_strcat(fld3, json_cstopdown__ent_adt(x->stack));
         char * result = json_list_with_sep(tmp, 4,  '{', ',', '}');
         for (uint32_t i = 0; i < 4; i++) free(tmp[i]);
        return result;}

bool_t equal_cstopdown_record_129_ptr(pointer_t x, pointer_t y, actual_cstopdown_record_129_t T){
        return equal_cstopdown_record_129((cstopdown_record_129_t)x, (cstopdown_record_129_t)y);
}

char * json_cstopdown_record_129_ptr(pointer_t x, actual_cstopdown_record_129_t T){
        return json_cstopdown_record_129((cstopdown_record_129_t)x);
}

cstopdown_record_129_t update_cstopdown_record_129_depth(cstopdown_record_129_t x, uint8_t v){
        cstopdown_record_129_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_129(x); x->count--;};
        y->depth = (uint8_t)v;
        return y;}

cstopdown_record_129_t update_cstopdown_record_129_lflag(cstopdown_record_129_t x, bool_t v){
        cstopdown_record_129_t y;
        if (x->count == 1){y = x;}
        else {y = copy_cstopdown_record_129(x); x->count--;};
        y->lflag = (bool_t)v;
        return y;}

cstopdown_record_129_t update_cstopdown_record_129_scaf(cstopdown_record_129_t x, cstopdown_funtype_66_t v){
        cstopdown_record_129_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->scaf != NULL){release_cstopdown_funtype_66(x->scaf);};}
        else {y = copy_cstopdown_record_129(x); x->count--; y->scaf->count--;};
        y->scaf = (cstopdown_funtype_66_t)v;
        return y;}

cstopdown_record_129_t update_cstopdown_record_129_stack(cstopdown_record_129_t x, cstopdown__ent_adt_t v){
        cstopdown_record_129_t y;
        if (v != NULL){v->count++;};
        if (x->count == 1){y = x; if (x->stack != NULL){release_cstopdown__ent_adt(x->stack);};}
        else {y = copy_cstopdown_record_129(x); x->count--; y->stack->count--;};
        y->stack = (cstopdown__ent_adt_t)v;
        return y;}




cstopdown_funtype_65_t f_cstopdown_closure_130(struct cstopdown_closure_130_s * closure, uint32_t bvar){
if (closure->htbl != NULL){
        cstopdown_funtype_66_htbl_t htbl = closure->htbl;
        uint32_t hash = uint32_hash(bvar);
        uint32_t hashindex = lookup_cstopdown_funtype_66(htbl, bvar, hash);
        cstopdown_funtype_66_hashentry_t entry = htbl->data[hashindex];
        bool_t keyzero;
         keyzero = (entry.key == 0);
        if (!keyzero || entry.keyhash != 0){
            cstopdown_funtype_65_t result;
            result = (cstopdown_funtype_65_t)entry.value;
            if (result != NULL) result->count++;
            return result;}
        

        return h_cstopdown_closure_130(bvar, closure->fvar_1);};

return h_cstopdown_closure_130(bvar, closure->fvar_1);}

cstopdown_funtype_65_t m_cstopdown_closure_130(struct cstopdown_closure_130_s * closure, uint32_t bvar){
        return h_cstopdown_closure_130(bvar, closure->fvar_1);}

extern cstopdown_funtype_65_t h_cstopdown_closure_130(uint32_t ivar_23, cstopdown_funtype_65_t ivar_8){
        cstopdown_funtype_65_t result;
        //copying to cstopdown_funtype_65 from cstopdown_funtype_65;
        result = (cstopdown_funtype_65_t)ivar_8;
        if (result != NULL) result->count++;

        return result;
}

cstopdown_closure_130_t new_cstopdown_closure_130(void){
        static struct cstopdown_funtype_66_ftbl_s ftbl = {.fptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&f_cstopdown_closure_130, .mptr = (cstopdown_funtype_65_t (*)(cstopdown_funtype_66_t, uint32_t))&m_cstopdown_closure_130, .rptr =  (void (*)(cstopdown_funtype_66_t))&release_cstopdown_closure_130, .cptr = (cstopdown_funtype_66_t (*)(cstopdown_funtype_66_t))&copy_cstopdown_closure_130};
        cstopdown_closure_130_t tmp = (cstopdown_closure_130_t) safe_malloc(sizeof(struct cstopdown_closure_130_s));
        tmp->count = 1;
        tmp->ftbl = &ftbl;
        tmp->htbl = NULL;
        return tmp;}

void release_cstopdown_closure_130(cstopdown_funtype_66_t closure){
        cstopdown_closure_130_t x = (cstopdown_closure_130_t)closure;
        x->count--;
        if (x->count <= 0){
         release_cstopdown_funtype_65(x->fvar_1);
        //printf("\nFreeing\n");
        safe_free(x);}}

cstopdown_closure_130_t copy_cstopdown_closure_130(cstopdown_closure_130_t x){
        cstopdown_closure_130_t y = new_cstopdown_closure_130();
        y->ftbl = x->ftbl;

        y->fvar_1 = x->fvar_1; x->fvar_1->count++;
        if (x->htbl != NULL){
            cstopdown_funtype_66_htbl_t new_htbl = (cstopdown_funtype_66_htbl_t) safe_malloc(sizeof(struct cstopdown_funtype_66_htbl_s));
            new_htbl->size = x->htbl->size;
            new_htbl->num_entries = x->htbl->num_entries;
            cstopdown_funtype_66_hashentry_t * new_data = (cstopdown_funtype_66_hashentry_t *) safe_malloc(new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s));
            memcpy(new_data, x->htbl->data, (new_htbl->size * sizeof(struct cstopdown_funtype_66_hashentry_s)));
            new_htbl->data = new_data;
            for (uint32_t j = 0; j < new_htbl->size; j++){
                        if ((new_htbl->data[j].key != 0) || new_htbl->data[j].keyhash != 0) new_htbl->data[j].value->count++;};
            y->htbl = new_htbl;
        } else
            {y->htbl = NULL;};
        return y;
}

extern uint8_t cstopdown__num_non_terminals(void){
        uint8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    result = (uint8_t)255;

        defined = true;};
        
        return result;
}

extern bool_t r_cstopdown__epsilonp(cstopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__peg_adt_index;
        release_cstopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_cstopdown__failurep(cstopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__peg_adt_index;
        release_cstopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_cstopdown__anyp(cstopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__peg_adt_index;
        release_cstopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_cstopdown__terminalp(cstopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)3;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__peg_adt_index;
        release_cstopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_cstopdown__concatp(cstopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)4;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__peg_adt_index;
        release_cstopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_cstopdown__orp(cstopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)5;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__peg_adt_index;
        release_cstopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_cstopdown__andp(cstopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)6;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__peg_adt_index;
        release_cstopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_cstopdown__notp(cstopdown__peg_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)7;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__peg_adt_index;
        release_cstopdown__peg_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern cstopdown__any_t update_cstopdown__peg_adt_p(cstopdown__peg_adt_t ivar_1, cstopdown_funtype_1_t ivar_4){
        cstopdown__any_t  result;
        cstopdown__any_t ivar_3;
        //copying to cstopdown__any from cstopdown__peg_adt;
        ivar_3 = (cstopdown__any_t)ivar_1;
        if (ivar_3 != NULL) ivar_3->count++;
        release_cstopdown__peg_adt(ivar_1);
        result = (cstopdown__any_t)update_cstopdown__any_p(ivar_3, ivar_4);

        
        return result;
}

extern cstopdown_funtype_1_t cstopdown__peg_adt_p(cstopdown__peg_adt_t ivar_1){
        cstopdown_funtype_1_t  result;
        cstopdown__any_t ivar_3;
        //copying to cstopdown__any from cstopdown__peg_adt;
        ivar_3 = (cstopdown__any_t)ivar_1;
        if (ivar_3 != NULL) ivar_3->count++;
        release_cstopdown__peg_adt(ivar_1);
        result = (cstopdown_funtype_1_t)ivar_3->p;
        result->count++;
        release_cstopdown__any(ivar_3);

        
        return result;
}

extern cstopdown__terminal_t update_cstopdown__peg_adt_a(cstopdown__peg_adt_t ivar_1, uint8_t ivar_3){
        cstopdown__terminal_t  result;
        cstopdown__terminal_t ivar_2;
        //copying to cstopdown__terminal from cstopdown__peg_adt;
        ivar_2 = (cstopdown__terminal_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_cstopdown__peg_adt(ivar_1);
        result = (cstopdown__terminal_t)update_cstopdown__terminal_a(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t cstopdown__peg_adt_a(cstopdown__peg_adt_t ivar_1){
        uint8_t  result;
        cstopdown__terminal_t ivar_2;
        //copying to cstopdown__terminal from cstopdown__peg_adt;
        ivar_2 = (cstopdown__terminal_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_cstopdown__peg_adt(ivar_1);
        result = (uint8_t)ivar_2->a;
        release_cstopdown__terminal(ivar_2);

        
        return result;
}

extern cstopdown__peg_adt_t update_cstopdown__peg_adt_e1(cstopdown__peg_adt_t ivar_1, uint8_t ivar_7){
        cstopdown__peg_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->cstopdown__peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)4;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             cstopdown__concat_t ivar_8;
             //copying to cstopdown__concat from cstopdown__peg_adt;
             ivar_8 = (cstopdown__concat_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (cstopdown__peg_adt_t)update_cstopdown__concat_e1(ivar_8, ivar_7);
} else {
        
             cstopdown__choice_t ivar_12;
             //copying to cstopdown__choice from cstopdown__peg_adt;
             ivar_12 = (cstopdown__choice_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (cstopdown__peg_adt_t)update_cstopdown__choice_e1(ivar_12, ivar_7);
};

        
        return result;
}

extern uint8_t cstopdown__peg_adt_e1(cstopdown__peg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->cstopdown__peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)4;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             cstopdown__concat_t ivar_2;
             //copying to cstopdown__concat from cstopdown__peg_adt;
             ivar_2 = (cstopdown__concat_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e1;
             release_cstopdown__concat(ivar_2);
} else {
        
             cstopdown__choice_t ivar_6;
             //copying to cstopdown__choice from cstopdown__peg_adt;
             ivar_6 = (cstopdown__choice_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e1;
             release_cstopdown__choice(ivar_6);
};

        
        return result;
}

extern cstopdown__peg_adt_t update_cstopdown__peg_adt_e2(cstopdown__peg_adt_t ivar_1, uint8_t ivar_7){
        cstopdown__peg_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->cstopdown__peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)4;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             cstopdown__concat_t ivar_8;
             //copying to cstopdown__concat from cstopdown__peg_adt;
             ivar_8 = (cstopdown__concat_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (cstopdown__peg_adt_t)update_cstopdown__concat_e2(ivar_8, ivar_7);
} else {
        
             cstopdown__choice_t ivar_12;
             //copying to cstopdown__choice from cstopdown__peg_adt;
             ivar_12 = (cstopdown__choice_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (cstopdown__peg_adt_t)update_cstopdown__choice_e2(ivar_12, ivar_7);
};

        
        return result;
}

extern uint8_t cstopdown__peg_adt_e2(cstopdown__peg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->cstopdown__peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)4;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             cstopdown__concat_t ivar_2;
             //copying to cstopdown__concat from cstopdown__peg_adt;
             ivar_2 = (cstopdown__concat_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e2;
             release_cstopdown__concat(ivar_2);
} else {
        
             cstopdown__choice_t ivar_6;
             //copying to cstopdown__choice from cstopdown__peg_adt;
             ivar_6 = (cstopdown__choice_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e2;
             release_cstopdown__choice(ivar_6);
};

        
        return result;
}

extern cstopdown__peg_adt_t update_cstopdown__peg_adt_e(cstopdown__peg_adt_t ivar_1, uint8_t ivar_7){
        cstopdown__peg_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->cstopdown__peg_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)6;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             cstopdown__check_t ivar_8;
             //copying to cstopdown__check from cstopdown__peg_adt;
             ivar_8 = (cstopdown__check_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (cstopdown__peg_adt_t)update_cstopdown__check_e(ivar_8, ivar_7);
} else {
        
             cstopdown__neg_t ivar_12;
             //copying to cstopdown__neg from cstopdown__peg_adt;
             ivar_12 = (cstopdown__neg_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (cstopdown__peg_adt_t)update_cstopdown__neg_e(ivar_12, ivar_7);
};

        
        return result;
}

extern uint8_t cstopdown__peg_adt_e(cstopdown__peg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->cstopdown__peg_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)6;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             cstopdown__check_t ivar_2;
             //copying to cstopdown__check from cstopdown__peg_adt;
             ivar_2 = (cstopdown__check_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_2->e;
             release_cstopdown__check(ivar_2);
} else {
        
             cstopdown__neg_t ivar_6;
             //copying to cstopdown__neg from cstopdown__peg_adt;
             ivar_6 = (cstopdown__neg_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_cstopdown__peg_adt(ivar_1);
             result = (uint8_t)ivar_6->e;
             release_cstopdown__neg(ivar_6);
};

        
        return result;
}

extern cstopdown__peg_adt_t cstopdown__epsilon(void){
        cstopdown__peg_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        cstopdown__peg_adt_t tmp51286 = new_cstopdown__peg_adt();;
        result = (cstopdown__peg_adt_t)tmp51286;
        tmp51286->cstopdown__peg_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern cstopdown__peg_adt_t cstopdown__failure(void){
        cstopdown__peg_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        cstopdown__peg_adt_t tmp51287 = new_cstopdown__peg_adt();;
        result = (cstopdown__peg_adt_t)tmp51287;
        tmp51287->cstopdown__peg_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern cstopdown__peg_adt_t cstopdown__any(cstopdown_funtype_1_t ivar_2){
        cstopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        cstopdown__any_t tmp51288 = new_cstopdown__any();;
        result = (cstopdown__peg_adt_t)tmp51288;
        tmp51288->cstopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp51288->p = (cstopdown_funtype_1_t)ivar_2;

        
        return result;
}

extern cstopdown__peg_adt_t cstopdown__terminal(uint8_t ivar_2){
        cstopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)3;
        cstopdown__terminal_t tmp51289 = new_cstopdown__terminal();;
        result = (cstopdown__peg_adt_t)tmp51289;
        tmp51289->cstopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp51289->a = (uint8_t)ivar_2;

        
        return result;
}

extern cstopdown__peg_adt_t cstopdown__concat(uint8_t ivar_2, uint8_t ivar_3){
        cstopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)4;
        cstopdown__concat_t tmp51290 = new_cstopdown__concat();;
        result = (cstopdown__peg_adt_t)tmp51290;
        tmp51290->cstopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp51290->e1 = (uint8_t)ivar_2;
        tmp51290->e2 = (uint8_t)ivar_3;

        
        return result;
}

extern cstopdown__peg_adt_t cstopdown__choice(uint8_t ivar_2, uint8_t ivar_3){
        cstopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)5;
        cstopdown__choice_t tmp51291 = new_cstopdown__choice();;
        result = (cstopdown__peg_adt_t)tmp51291;
        tmp51291->cstopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp51291->e1 = (uint8_t)ivar_2;
        tmp51291->e2 = (uint8_t)ivar_3;

        
        return result;
}

extern cstopdown__peg_adt_t cstopdown__check(uint8_t ivar_2){
        cstopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)6;
        cstopdown__check_t tmp51292 = new_cstopdown__check();;
        result = (cstopdown__peg_adt_t)tmp51292;
        tmp51292->cstopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp51292->e = (uint8_t)ivar_2;

        
        return result;
}

extern cstopdown__peg_adt_t cstopdown__neg(uint8_t ivar_2){
        cstopdown__peg_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)7;
        cstopdown__neg_t tmp51293 = new_cstopdown__neg();;
        result = (cstopdown__peg_adt_t)tmp51293;
        tmp51293->cstopdown__peg_adt_index = (uint8_t)ivar_1;
        tmp51293->e = (uint8_t)ivar_2;

        
        return result;
}

extern cstopdown_funtype_8_t cstopdown__peg_ord(void){
        cstopdown_funtype_8_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t cstopdown__ord__1(cstopdown__peg_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_3;
        ivar_1->count++;
        ivar_3 = (bool_t)r_cstopdown__epsilonp((cstopdown__peg_adt_t)ivar_1);
        if (ivar_3){ 
             release_cstopdown__peg_adt(ivar_1);
             result = (uint8_t)0;
} else {
        
             bool_t ivar_7;
             ivar_1->count++;
             ivar_7 = (bool_t)r_cstopdown__failurep((cstopdown__peg_adt_t)ivar_1);
             if (ivar_7){  
           release_cstopdown__peg_adt(ivar_1);
           result = (uint8_t)1;
} else {
             
           bool_t ivar_17;
           ivar_1->count++;
           ivar_17 = (bool_t)r_cstopdown__anyp((cstopdown__peg_adt_t)ivar_1);
           if (ivar_17){   
           result = (uint8_t)2;
} else {
           
           bool_t ivar_25;
           ivar_1->count++;
           ivar_25 = (bool_t)r_cstopdown__terminalp((cstopdown__peg_adt_t)ivar_1);
           if (ivar_25){    
            result = (uint8_t)3;
} else {
           
            bool_t ivar_37;
            ivar_1->count++;
            ivar_37 = (bool_t)r_cstopdown__concatp((cstopdown__peg_adt_t)ivar_1);
            if (ivar_37){     
             result = (uint8_t)4;
} else {
            
             bool_t ivar_49;
             ivar_1->count++;
             ivar_49 = (bool_t)r_cstopdown__orp((cstopdown__peg_adt_t)ivar_1);
             if (ivar_49){      
              result = (uint8_t)5;
} else {
             
              bool_t ivar_57;
              ivar_1->count++;
              ivar_57 = (bool_t)r_cstopdown__andp((cstopdown__peg_adt_t)ivar_1);
              if (ivar_57){       
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

extern bool_t cstopdown__subterm__1(cstopdown__peg_adt_t ivar_1, cstopdown__peg_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_cstopdown__peg_adt(ivar_1, ivar_2);

        
        return result;
}

extern bool_t cstopdown__doublelessp__1(cstopdown__peg_adt_t ivar_1, cstopdown__peg_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

extern cstopdown_funtype_9_t cstopdown__reduce_nat__1(mpz_ptr_t ivar_1, mpz_ptr_t ivar_2, cstopdown_funtype_10_t ivar_3, cstopdown_funtype_11_t ivar_6, cstopdown_funtype_13_t ivar_8, cstopdown_funtype_13_t ivar_10, cstopdown_funtype_11_t ivar_12, cstopdown_funtype_11_t ivar_14){
        cstopdown_funtype_9_t  result;
        cstopdown_closure_14_t cl51296;
        cl51296 = new_cstopdown_closure_14();
        cl51296->fvar_1 = (cstopdown_funtype_11_t)ivar_12;
        if (cl51296->fvar_1 != NULL) cl51296->fvar_1->count++;
        cl51296->fvar_2 = (cstopdown_funtype_11_t)ivar_14;
        if (cl51296->fvar_2 != NULL) cl51296->fvar_2->count++;
        cl51296->fvar_3 = (cstopdown_funtype_13_t)ivar_10;
        if (cl51296->fvar_3 != NULL) cl51296->fvar_3->count++;
        cl51296->fvar_4 = (cstopdown_funtype_13_t)ivar_8;
        if (cl51296->fvar_4 != NULL) cl51296->fvar_4->count++;
        cl51296->fvar_5 = (cstopdown_funtype_11_t)ivar_6;
        if (cl51296->fvar_5 != NULL) cl51296->fvar_5->count++;
        cl51296->fvar_6 = (cstopdown_funtype_10_t)ivar_3;
        if (cl51296->fvar_6 != NULL) cl51296->fvar_6->count++;
        mpz_set(cl51296->fvar_7, ivar_2);
        mpz_set(cl51296->fvar_8, ivar_1);
        release_cstopdown_funtype_11(ivar_12);
        release_cstopdown_funtype_11(ivar_14);
        release_cstopdown_funtype_13(ivar_10);
        release_cstopdown_funtype_13(ivar_8);
        release_cstopdown_funtype_11(ivar_6);
        release_cstopdown_funtype_10(ivar_3);
        result = (cstopdown_funtype_9_t)cl51296;

        
        return result;
}

extern cstopdown_funtype_9_t cstopdown__REDUCE_nat__1(cstopdown_funtype_9_t ivar_1, cstopdown_funtype_9_t ivar_3, cstopdown_funtype_16_t ivar_5, cstopdown_funtype_18_t ivar_8, cstopdown_funtype_20_t ivar_10, cstopdown_funtype_20_t ivar_12, cstopdown_funtype_18_t ivar_14, cstopdown_funtype_18_t ivar_16){
        cstopdown_funtype_9_t  result;
        cstopdown_closure_21_t cl51298;
        cl51298 = new_cstopdown_closure_21();
        cl51298->fvar_1 = (cstopdown_funtype_18_t)ivar_14;
        if (cl51298->fvar_1 != NULL) cl51298->fvar_1->count++;
        cl51298->fvar_2 = (cstopdown_funtype_18_t)ivar_16;
        if (cl51298->fvar_2 != NULL) cl51298->fvar_2->count++;
        cl51298->fvar_3 = (cstopdown_funtype_20_t)ivar_12;
        if (cl51298->fvar_3 != NULL) cl51298->fvar_3->count++;
        cl51298->fvar_4 = (cstopdown_funtype_20_t)ivar_10;
        if (cl51298->fvar_4 != NULL) cl51298->fvar_4->count++;
        cl51298->fvar_5 = (cstopdown_funtype_18_t)ivar_8;
        if (cl51298->fvar_5 != NULL) cl51298->fvar_5->count++;
        cl51298->fvar_6 = (cstopdown_funtype_16_t)ivar_5;
        if (cl51298->fvar_6 != NULL) cl51298->fvar_6->count++;
        cl51298->fvar_7 = (cstopdown_funtype_9_t)ivar_3;
        if (cl51298->fvar_7 != NULL) cl51298->fvar_7->count++;
        cl51298->fvar_8 = (cstopdown_funtype_9_t)ivar_1;
        if (cl51298->fvar_8 != NULL) cl51298->fvar_8->count++;
        release_cstopdown_funtype_18(ivar_14);
        release_cstopdown_funtype_18(ivar_16);
        release_cstopdown_funtype_20(ivar_12);
        release_cstopdown_funtype_20(ivar_10);
        release_cstopdown_funtype_18(ivar_8);
        release_cstopdown_funtype_16(ivar_5);
        release_cstopdown_funtype_9(ivar_3);
        release_cstopdown_funtype_9(ivar_1);
        result = (cstopdown_funtype_9_t)cl51298;

        
        return result;
}

extern cstopdown_funtype_22_t cstopdown__reduce_ordinal__1(ordstruct_adt__ordstruct_adt_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_2, cstopdown_funtype_23_t ivar_3, cstopdown_funtype_24_t ivar_6, cstopdown_funtype_25_t ivar_8, cstopdown_funtype_25_t ivar_10, cstopdown_funtype_24_t ivar_12, cstopdown_funtype_24_t ivar_14){
        cstopdown_funtype_22_t  result;
        cstopdown_closure_26_t cl51300;
        cl51300 = new_cstopdown_closure_26();
        cl51300->fvar_1 = (cstopdown_funtype_24_t)ivar_12;
        if (cl51300->fvar_1 != NULL) cl51300->fvar_1->count++;
        cl51300->fvar_2 = (cstopdown_funtype_24_t)ivar_14;
        if (cl51300->fvar_2 != NULL) cl51300->fvar_2->count++;
        cl51300->fvar_3 = (cstopdown_funtype_25_t)ivar_10;
        if (cl51300->fvar_3 != NULL) cl51300->fvar_3->count++;
        cl51300->fvar_4 = (cstopdown_funtype_25_t)ivar_8;
        if (cl51300->fvar_4 != NULL) cl51300->fvar_4->count++;
        cl51300->fvar_5 = (cstopdown_funtype_24_t)ivar_6;
        if (cl51300->fvar_5 != NULL) cl51300->fvar_5->count++;
        cl51300->fvar_6 = (cstopdown_funtype_23_t)ivar_3;
        if (cl51300->fvar_6 != NULL) cl51300->fvar_6->count++;
        cl51300->fvar_7 = (ordstruct_adt__ordstruct_adt_t)ivar_2;
        if (cl51300->fvar_7 != NULL) cl51300->fvar_7->count++;
        cl51300->fvar_8 = (ordstruct_adt__ordstruct_adt_t)ivar_1;
        if (cl51300->fvar_8 != NULL) cl51300->fvar_8->count++;
        release_cstopdown_funtype_24(ivar_12);
        release_cstopdown_funtype_24(ivar_14);
        release_cstopdown_funtype_25(ivar_10);
        release_cstopdown_funtype_25(ivar_8);
        release_cstopdown_funtype_24(ivar_6);
        release_cstopdown_funtype_23(ivar_3);
        release_ordstruct_adt__ordstruct_adt(ivar_2);
        release_ordstruct_adt__ordstruct_adt(ivar_1);
        result = (cstopdown_funtype_22_t)cl51300;

        
        return result;
}

extern cstopdown_funtype_22_t cstopdown__REDUCE_ordinal__1(cstopdown_funtype_22_t ivar_1, cstopdown_funtype_22_t ivar_3, cstopdown_funtype_27_t ivar_5, cstopdown_funtype_28_t ivar_8, cstopdown_funtype_29_t ivar_10, cstopdown_funtype_29_t ivar_12, cstopdown_funtype_28_t ivar_14, cstopdown_funtype_28_t ivar_16){
        cstopdown_funtype_22_t  result;
        cstopdown_closure_30_t cl51302;
        cl51302 = new_cstopdown_closure_30();
        cl51302->fvar_1 = (cstopdown_funtype_28_t)ivar_14;
        if (cl51302->fvar_1 != NULL) cl51302->fvar_1->count++;
        cl51302->fvar_2 = (cstopdown_funtype_28_t)ivar_16;
        if (cl51302->fvar_2 != NULL) cl51302->fvar_2->count++;
        cl51302->fvar_3 = (cstopdown_funtype_29_t)ivar_12;
        if (cl51302->fvar_3 != NULL) cl51302->fvar_3->count++;
        cl51302->fvar_4 = (cstopdown_funtype_29_t)ivar_10;
        if (cl51302->fvar_4 != NULL) cl51302->fvar_4->count++;
        cl51302->fvar_5 = (cstopdown_funtype_28_t)ivar_8;
        if (cl51302->fvar_5 != NULL) cl51302->fvar_5->count++;
        cl51302->fvar_6 = (cstopdown_funtype_27_t)ivar_5;
        if (cl51302->fvar_6 != NULL) cl51302->fvar_6->count++;
        cl51302->fvar_7 = (cstopdown_funtype_22_t)ivar_3;
        if (cl51302->fvar_7 != NULL) cl51302->fvar_7->count++;
        cl51302->fvar_8 = (cstopdown_funtype_22_t)ivar_1;
        if (cl51302->fvar_8 != NULL) cl51302->fvar_8->count++;
        release_cstopdown_funtype_28(ivar_14);
        release_cstopdown_funtype_28(ivar_16);
        release_cstopdown_funtype_29(ivar_12);
        release_cstopdown_funtype_29(ivar_10);
        release_cstopdown_funtype_28(ivar_8);
        release_cstopdown_funtype_27(ivar_5);
        release_cstopdown_funtype_22(ivar_3);
        release_cstopdown_funtype_22(ivar_1);
        result = (cstopdown_funtype_22_t)cl51302;

        
        return result;
}

extern bool_t r_cstopdown__failp(cstopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)0;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__ent_adt_index;
        release_cstopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_cstopdown__pendingp(cstopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)1;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__ent_adt_index;
        release_cstopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_cstopdown__loopp(cstopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)2;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__ent_adt_index;
        release_cstopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_cstopdown__goodp(cstopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)3;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__ent_adt_index;
        release_cstopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern bool_t r_cstopdown__pushp(cstopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_3;
        ivar_3 = (uint8_t)4;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)ivar_1->cstopdown__ent_adt_index;
        release_cstopdown__ent_adt(ivar_1);
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern cstopdown__ent_adt_t update_cstopdown__ent_adt_dep(cstopdown__ent_adt_t ivar_1, uint64_t ivar_7){
        cstopdown__ent_adt_t  result;
        bool_t ivar_9;
        uint32_t ivar_10;
        ivar_10 = (uint32_t)ivar_1->cstopdown__ent_adt_index;
        uint32_t ivar_11;
        ivar_11 = (uint32_t)0;
        ivar_9 = (ivar_10 == ivar_11);
        if (ivar_9){ 
             cstopdown__fail_t ivar_8;
             //copying to cstopdown__fail from cstopdown__ent_adt;
             ivar_8 = (cstopdown__fail_t)ivar_1;
             if (ivar_8 != NULL) ivar_8->count++;
             release_cstopdown__ent_adt(ivar_1);
             result = (cstopdown__ent_adt_t)update_cstopdown__fail_dep(ivar_8, ivar_7);
} else {
        
             cstopdown__good_t ivar_12;
             //copying to cstopdown__good from cstopdown__ent_adt;
             ivar_12 = (cstopdown__good_t)ivar_1;
             if (ivar_12 != NULL) ivar_12->count++;
             release_cstopdown__ent_adt(ivar_1);
             result = (cstopdown__ent_adt_t)update_cstopdown__good_dep(ivar_12, ivar_7);
};

        
        return result;
}

extern uint64_t cstopdown__ent_adt_dep(cstopdown__ent_adt_t ivar_1){
        uint64_t  result;
        bool_t ivar_3;
        uint32_t ivar_4;
        ivar_4 = (uint32_t)ivar_1->cstopdown__ent_adt_index;
        uint32_t ivar_5;
        ivar_5 = (uint32_t)0;
        ivar_3 = (ivar_4 == ivar_5);
        if (ivar_3){ 
             cstopdown__fail_t ivar_2;
             //copying to cstopdown__fail from cstopdown__ent_adt;
             ivar_2 = (cstopdown__fail_t)ivar_1;
             if (ivar_2 != NULL) ivar_2->count++;
             release_cstopdown__ent_adt(ivar_1);
             result = (uint64_t)ivar_2->dep;
             release_cstopdown__fail(ivar_2);
} else {
        
             cstopdown__good_t ivar_6;
             //copying to cstopdown__good from cstopdown__ent_adt;
             ivar_6 = (cstopdown__good_t)ivar_1;
             if (ivar_6 != NULL) ivar_6->count++;
             release_cstopdown__ent_adt(ivar_1);
             result = (uint64_t)ivar_6->dep;
             release_cstopdown__good(ivar_6);
};

        
        return result;
}

extern cstopdown__good_t update_cstopdown__ent_adt_span(cstopdown__ent_adt_t ivar_1, uint32_t ivar_3){
        cstopdown__good_t  result;
        cstopdown__good_t ivar_2;
        //copying to cstopdown__good from cstopdown__ent_adt;
        ivar_2 = (cstopdown__good_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_cstopdown__ent_adt(ivar_1);
        result = (cstopdown__good_t)update_cstopdown__good_span(ivar_2, ivar_3);

        
        return result;
}

extern uint32_t cstopdown__ent_adt_span(cstopdown__ent_adt_t ivar_1){
        uint32_t  result;
        cstopdown__good_t ivar_2;
        //copying to cstopdown__good from cstopdown__ent_adt;
        ivar_2 = (cstopdown__good_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_cstopdown__ent_adt(ivar_1);
        result = (uint32_t)ivar_2->span;
        release_cstopdown__good(ivar_2);

        
        return result;
}

extern cstopdown__push_t update_cstopdown__ent_adt_pos(cstopdown__ent_adt_t ivar_1, uint32_t ivar_3){
        cstopdown__push_t  result;
        cstopdown__push_t ivar_2;
        //copying to cstopdown__push from cstopdown__ent_adt;
        ivar_2 = (cstopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_cstopdown__ent_adt(ivar_1);
        result = (cstopdown__push_t)update_cstopdown__push_pos(ivar_2, ivar_3);

        
        return result;
}

extern uint32_t cstopdown__ent_adt_pos(cstopdown__ent_adt_t ivar_1){
        uint32_t  result;
        cstopdown__push_t ivar_2;
        //copying to cstopdown__push from cstopdown__ent_adt;
        ivar_2 = (cstopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_cstopdown__ent_adt(ivar_1);
        result = (uint32_t)ivar_2->pos;
        release_cstopdown__push(ivar_2);

        
        return result;
}

extern cstopdown__push_t update_cstopdown__ent_adt_nt(cstopdown__ent_adt_t ivar_1, uint8_t ivar_3){
        cstopdown__push_t  result;
        cstopdown__push_t ivar_2;
        //copying to cstopdown__push from cstopdown__ent_adt;
        ivar_2 = (cstopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_cstopdown__ent_adt(ivar_1);
        result = (cstopdown__push_t)update_cstopdown__push_nt(ivar_2, ivar_3);

        
        return result;
}

extern uint8_t cstopdown__ent_adt_nt(cstopdown__ent_adt_t ivar_1){
        uint8_t  result;
        cstopdown__push_t ivar_2;
        //copying to cstopdown__push from cstopdown__ent_adt;
        ivar_2 = (cstopdown__push_t)ivar_1;
        if (ivar_2 != NULL) ivar_2->count++;
        release_cstopdown__ent_adt(ivar_1);
        result = (uint8_t)ivar_2->nt;
        release_cstopdown__push(ivar_2);

        
        return result;
}

extern cstopdown__ent_adt_t cstopdown__fail(uint64_t ivar_2){
        cstopdown__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)0;
        cstopdown__fail_t tmp51303 = new_cstopdown__fail();;
        result = (cstopdown__ent_adt_t)tmp51303;
        tmp51303->cstopdown__ent_adt_index = (uint8_t)ivar_1;
        tmp51303->dep = (uint64_t)ivar_2;

        
        return result;
}

extern cstopdown__ent_adt_t cstopdown__pending(void){
        cstopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)1;
        cstopdown__ent_adt_t tmp51304 = new_cstopdown__ent_adt();;
        result = (cstopdown__ent_adt_t)tmp51304;
        tmp51304->cstopdown__ent_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern cstopdown__ent_adt_t cstopdown__loop(void){
        cstopdown__ent_adt_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    uint8_t ivar_1;
        ivar_1 = (uint8_t)2;
        cstopdown__ent_adt_t tmp51305 = new_cstopdown__ent_adt();;
        result = (cstopdown__ent_adt_t)tmp51305;
        tmp51305->cstopdown__ent_adt_index = (uint8_t)ivar_1;

        defined = true;};
        
        return result;
}

extern cstopdown__ent_adt_t cstopdown__good(uint64_t ivar_2, uint32_t ivar_3){
        cstopdown__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)3;
        cstopdown__good_t tmp51306 = new_cstopdown__good();;
        result = (cstopdown__ent_adt_t)tmp51306;
        tmp51306->cstopdown__ent_adt_index = (uint8_t)ivar_1;
        tmp51306->dep = (uint64_t)ivar_2;
        tmp51306->span = (uint32_t)ivar_3;

        
        return result;
}

extern cstopdown__ent_adt_t cstopdown__push(uint32_t ivar_2, uint8_t ivar_3){
        cstopdown__ent_adt_t  result;
        uint8_t ivar_1;
        ivar_1 = (uint8_t)4;
        cstopdown__push_t tmp51307 = new_cstopdown__push();;
        result = (cstopdown__ent_adt_t)tmp51307;
        tmp51307->cstopdown__ent_adt_index = (uint8_t)ivar_1;
        tmp51307->pos = (uint32_t)ivar_2;
        tmp51307->nt = (uint8_t)ivar_3;

        
        return result;
}

extern cstopdown_funtype_35_t cstopdown__ent_ord(void){
        cstopdown_funtype_35_t  static  result;

        static bool_t defined = false;
        if (!defined){
                    pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        defined = true;};
        
        return result;
}

extern uint8_t cstopdown__ord__2(cstopdown__ent_adt_t ivar_1){
        uint8_t  result;
        bool_t ivar_7;
        ivar_1->count++;
        ivar_7 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_1);
        if (ivar_7){ 
             result = (uint8_t)0;
} else {
        
             bool_t ivar_11;
             ivar_1->count++;
             ivar_11 = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_1);
             if (ivar_11){  
           release_cstopdown__ent_adt(ivar_1);
           result = (uint8_t)1;
} else {
             
           bool_t ivar_15;
           ivar_1->count++;
           ivar_15 = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_1);
           if (ivar_15){   
           release_cstopdown__ent_adt(ivar_1);
           result = (uint8_t)2;
} else {
           
           bool_t ivar_27;
           ivar_1->count++;
           ivar_27 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_1);
           if (ivar_27){    
            result = (uint8_t)3;
} else {
           
            result = (uint8_t)4;
};
};
};
};

        
        return result;
}

extern bool_t cstopdown__subterm__2(cstopdown__ent_adt_t ivar_1, cstopdown__ent_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) equal_cstopdown__ent_adt(ivar_1, ivar_2);

        
        return result;
}

extern bool_t cstopdown__doublelessp__2(cstopdown__ent_adt_t ivar_1, cstopdown__ent_adt_t ivar_2){
        bool_t  result;
        result = (bool_t) false;

        
        return result;
}

extern cstopdown_funtype_36_t cstopdown__reduce_nat__2(cstopdown_funtype_37_t ivar_1, mpz_ptr_t ivar_3, mpz_ptr_t ivar_4, cstopdown_funtype_39_t ivar_5, cstopdown_funtype_41_t ivar_7){
        cstopdown_funtype_36_t  result;
        cstopdown_closure_42_t cl51310;
        cl51310 = new_cstopdown_closure_42();
        cl51310->fvar_1 = (cstopdown_funtype_39_t)ivar_5;
        if (cl51310->fvar_1 != NULL) cl51310->fvar_1->count++;
        cl51310->fvar_2 = (cstopdown_funtype_41_t)ivar_7;
        if (cl51310->fvar_2 != NULL) cl51310->fvar_2->count++;
        mpz_set(cl51310->fvar_3, ivar_4);
        mpz_set(cl51310->fvar_4, ivar_3);
        cl51310->fvar_5 = (cstopdown_funtype_37_t)ivar_1;
        if (cl51310->fvar_5 != NULL) cl51310->fvar_5->count++;
        release_cstopdown_funtype_39(ivar_5);
        release_cstopdown_funtype_41(ivar_7);
        release_cstopdown_funtype_37(ivar_1);
        result = (cstopdown_funtype_36_t)cl51310;

        
        return result;
}

extern cstopdown_funtype_36_t cstopdown__REDUCE_nat__2(cstopdown_funtype_44_t ivar_1, cstopdown_funtype_36_t ivar_3, cstopdown_funtype_36_t ivar_5, cstopdown_funtype_46_t ivar_7, cstopdown_funtype_48_t ivar_9){
        cstopdown_funtype_36_t  result;
        cstopdown_closure_49_t cl51312;
        cl51312 = new_cstopdown_closure_49();
        cl51312->fvar_1 = (cstopdown_funtype_46_t)ivar_7;
        if (cl51312->fvar_1 != NULL) cl51312->fvar_1->count++;
        cl51312->fvar_2 = (cstopdown_funtype_48_t)ivar_9;
        if (cl51312->fvar_2 != NULL) cl51312->fvar_2->count++;
        cl51312->fvar_3 = (cstopdown_funtype_36_t)ivar_5;
        if (cl51312->fvar_3 != NULL) cl51312->fvar_3->count++;
        cl51312->fvar_4 = (cstopdown_funtype_36_t)ivar_3;
        if (cl51312->fvar_4 != NULL) cl51312->fvar_4->count++;
        cl51312->fvar_5 = (cstopdown_funtype_44_t)ivar_1;
        if (cl51312->fvar_5 != NULL) cl51312->fvar_5->count++;
        release_cstopdown_funtype_46(ivar_7);
        release_cstopdown_funtype_48(ivar_9);
        release_cstopdown_funtype_36(ivar_5);
        release_cstopdown_funtype_36(ivar_3);
        release_cstopdown_funtype_44(ivar_1);
        result = (cstopdown_funtype_36_t)cl51312;

        
        return result;
}

extern cstopdown_funtype_50_t cstopdown__reduce_ordinal__2(cstopdown_funtype_51_t ivar_1, ordstruct_adt__ordstruct_adt_t ivar_3, ordstruct_adt__ordstruct_adt_t ivar_4, cstopdown_funtype_52_t ivar_5, cstopdown_funtype_53_t ivar_7){
        cstopdown_funtype_50_t  result;
        cstopdown_closure_54_t cl51314;
        cl51314 = new_cstopdown_closure_54();
        cl51314->fvar_1 = (cstopdown_funtype_52_t)ivar_5;
        if (cl51314->fvar_1 != NULL) cl51314->fvar_1->count++;
        cl51314->fvar_2 = (cstopdown_funtype_53_t)ivar_7;
        if (cl51314->fvar_2 != NULL) cl51314->fvar_2->count++;
        cl51314->fvar_3 = (ordstruct_adt__ordstruct_adt_t)ivar_4;
        if (cl51314->fvar_3 != NULL) cl51314->fvar_3->count++;
        cl51314->fvar_4 = (ordstruct_adt__ordstruct_adt_t)ivar_3;
        if (cl51314->fvar_4 != NULL) cl51314->fvar_4->count++;
        cl51314->fvar_5 = (cstopdown_funtype_51_t)ivar_1;
        if (cl51314->fvar_5 != NULL) cl51314->fvar_5->count++;
        release_cstopdown_funtype_52(ivar_5);
        release_cstopdown_funtype_53(ivar_7);
        release_ordstruct_adt__ordstruct_adt(ivar_4);
        release_ordstruct_adt__ordstruct_adt(ivar_3);
        release_cstopdown_funtype_51(ivar_1);
        result = (cstopdown_funtype_50_t)cl51314;

        
        return result;
}

extern cstopdown_funtype_50_t cstopdown__REDUCE_ordinal__2(cstopdown_funtype_55_t ivar_1, cstopdown_funtype_50_t ivar_3, cstopdown_funtype_50_t ivar_5, cstopdown_funtype_56_t ivar_7, cstopdown_funtype_57_t ivar_9){
        cstopdown_funtype_50_t  result;
        cstopdown_closure_58_t cl51316;
        cl51316 = new_cstopdown_closure_58();
        cl51316->fvar_1 = (cstopdown_funtype_56_t)ivar_7;
        if (cl51316->fvar_1 != NULL) cl51316->fvar_1->count++;
        cl51316->fvar_2 = (cstopdown_funtype_57_t)ivar_9;
        if (cl51316->fvar_2 != NULL) cl51316->fvar_2->count++;
        cl51316->fvar_3 = (cstopdown_funtype_50_t)ivar_5;
        if (cl51316->fvar_3 != NULL) cl51316->fvar_3->count++;
        cl51316->fvar_4 = (cstopdown_funtype_50_t)ivar_3;
        if (cl51316->fvar_4 != NULL) cl51316->fvar_4->count++;
        cl51316->fvar_5 = (cstopdown_funtype_55_t)ivar_1;
        if (cl51316->fvar_5 != NULL) cl51316->fvar_5->count++;
        release_cstopdown_funtype_56(ivar_7);
        release_cstopdown_funtype_57(ivar_9);
        release_cstopdown_funtype_50(ivar_5);
        release_cstopdown_funtype_50(ivar_3);
        release_cstopdown_funtype_55(ivar_1);
        result = (cstopdown_funtype_50_t)cl51316;

        
        return result;
}

extern cstopdown_funtype_59_t cstopdown__good_good_entryp(uint32_t ivar_1, uint32_t ivar_2){
        cstopdown_funtype_59_t  result;
        cstopdown_closure_60_t cl51320;
        cl51320 = new_cstopdown_closure_60();
        cl51320->fvar_1 = (uint32_t)ivar_2;
        cl51320->fvar_2 = (uint32_t)ivar_1;
        result = (cstopdown_funtype_59_t)cl51320;

        
        return result;
}

extern cstopdown_funtype_59_t cstopdown__good_push_entryp(uint32_t ivar_1){
        cstopdown_funtype_59_t  result;
        cstopdown_closure_61_t cl51321;
        cl51321 = new_cstopdown_closure_61();
        cl51321->fvar_1 = (uint32_t)ivar_1;
        result = (cstopdown_funtype_59_t)cl51321;

        
        return result;
}

extern cstopdown_funtype_59_t cstopdown__fine_push_entryp(uint32_t ivar_1){
        cstopdown_funtype_59_t  result;
        cstopdown_closure_62_t cl51322;
        cl51322 = new_cstopdown_closure_62();
        cl51322->fvar_1 = (uint32_t)ivar_1;
        result = (cstopdown_funtype_59_t)cl51322;

        
        return result;
}

extern cstopdown_funtype_59_t cstopdown__nice_entryp(uint32_t ivar_1, uint32_t ivar_2){
        cstopdown_funtype_59_t  result;
        cstopdown_closure_63_t cl51324;
        cl51324 = new_cstopdown_closure_63();
        cl51324->fvar_1 = (uint32_t)ivar_1;
        cl51324->fvar_2 = (uint32_t)ivar_2;
        result = (cstopdown_funtype_59_t)cl51324;

        
        return result;
}

extern bool_t cstopdown__loop_or_pushp(cstopdown__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_cstopdown__loopp((cstopdown__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_cstopdown__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_cstopdown__pushp((cstopdown__ent_adt_t)ivar_1);
};

        
        return result;
}

extern cstopdown_funtype_64_t cstopdown__instack(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2){
        cstopdown_funtype_64_t  result;
        cstopdown_closure_67_t cl51330;
        cl51330 = new_cstopdown_closure_67();
        cl51330->fvar_1 = (cstopdown_funtype_66_t)ivar_2;
        if (cl51330->fvar_1 != NULL) cl51330->fvar_1->count++;
        release_cstopdown_funtype_66(ivar_2);
        result = (cstopdown_funtype_64_t)cl51330;

        
        return result;
}

extern cstopdown_funtype_69_t cstopdown__successor(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_66_t ivar_3){
        cstopdown_funtype_69_t  result;
        cstopdown_closure_71_t cl51338;
        cl51338 = new_cstopdown_closure_71();
        cl51338->fvar_1 = (cstopdown_funtype_66_t)ivar_3;
        if (cl51338->fvar_1 != NULL) cl51338->fvar_1->count++;
        cl51338->fvar_2 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51338->fvar_2 != NULL) cl51338->fvar_2->count++;
        release_cstopdown_funtype_66(ivar_3);
        release_cstopdown__lang_spec(ivar_2);
        result = (cstopdown_funtype_69_t)cl51338;

        
        return result;
}

extern uint64_t cstopdown__scafcount(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2, cstopdown_funtype_59_t ivar_5, uint32_t ivar_7){
        uint64_t  result;
        type_actual_t ivar_37;
        ivar_37 = (type_actual_t)actual_cstopdown__ent_adt();
        uint8_t ivar_60;
        ivar_60 = (uint8_t)0;
        mpz_ptr_t ivar_46;
        //copying to mpz from uint8;
        mpz_mk_set_ui(ivar_46, ivar_60);
        mpz_ptr_t ivar_47;
        //copying to mpz from uint32;
        mpz_mk_set_ui(ivar_47, ivar_7);
        cstopdown_funtype_72_t ivar_55;
        cstopdown_closure_78_t cl51395;
        cl51395 = new_cstopdown_closure_78();
        cl51395->fvar_1 = (type_actual_t)ivar_37;
        cl51395->fvar_2 = (cstopdown_funtype_59_t)ivar_5;
        if (cl51395->fvar_2 != NULL) cl51395->fvar_2->count++;
        cl51395->fvar_3 = (cstopdown_funtype_66_t)ivar_2;
        if (cl51395->fvar_3 != NULL) cl51395->fvar_3->count++;
        release_cstopdown_funtype_59(ivar_5);
        release_cstopdown_funtype_66(ivar_2);
        ivar_55 = (cstopdown_funtype_72_t)cl51395;
        cstopdown_funtype_79_t ivar_48;
        cstopdown_closure_80_t cl51396;
        cl51396 = new_cstopdown_closure_80();
        cl51396->fvar_1 = (cstopdown_funtype_72_t)ivar_55;
        if (cl51396->fvar_1 != NULL) cl51396->fvar_1->count++;
        release_cstopdown_funtype_72(ivar_55);
        ivar_48 = (cstopdown_funtype_79_t)cl51396;
        mpz_clear(tmp51397);
        safe_free(ivar_37);

        
        return result;
}

extern uint64_t cstopdown__pushcount(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2){
        uint64_t  result;
        cstopdown_funtype_59_t ivar_15;
        cstopdown_closure_81_t cl51399;
        cl51399 = new_cstopdown_closure_81();
        ivar_15 = (cstopdown_funtype_59_t)cl51399;
        result = (uint64_t)cstopdown__scafcount((uint32_t)ivar_1, (cstopdown_funtype_66_t)ivar_2, (cstopdown_funtype_59_t)ivar_15, (uint32_t)ivar_1);

        
        return result;
}

extern bool_t cstopdown__good_or_failp(cstopdown__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_cstopdown__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_1);
};

        
        return result;
}

extern uint64_t cstopdown__gfcount(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2){
        uint64_t  result;
        cstopdown_funtype_59_t ivar_16;
        cstopdown_closure_82_t cl51401;
        cl51401 = new_cstopdown_closure_82();
        ivar_16 = (cstopdown_funtype_59_t)cl51401;
        result = (uint64_t)cstopdown__scafcount((uint32_t)ivar_1, (cstopdown_funtype_66_t)ivar_2, (cstopdown_funtype_59_t)ivar_16, (uint32_t)ivar_1);

        
        return result;
}

extern cstopdown_funtype_83_t cstopdown__good_depthp(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2){
        cstopdown_funtype_83_t  result;
        cstopdown_closure_84_t cl51403;
        cl51403 = new_cstopdown_closure_84();
        cl51403->fvar_1 = (uint32_t)ivar_1;
        cl51403->fvar_2 = (cstopdown_funtype_66_t)ivar_2;
        if (cl51403->fvar_2 != NULL) cl51403->fvar_2->count++;
        release_cstopdown_funtype_66(ivar_2);
        result = (cstopdown_funtype_83_t)cl51403;

        
        return result;
}

extern cstopdown_funtype_59_t cstopdown__good_stackp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, uint64_t ivar_3, cstopdown_funtype_66_t ivar_4){
        cstopdown_funtype_59_t  result;
        cstopdown_closure_85_t cl51409;
        cl51409 = new_cstopdown_closure_85();
        cl51409->fvar_1 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51409->fvar_1 != NULL) cl51409->fvar_1->count++;
        cl51409->fvar_2 = (uint32_t)ivar_1;
        cl51409->fvar_3 = (cstopdown_funtype_66_t)ivar_4;
        if (cl51409->fvar_3 != NULL) cl51409->fvar_3->count++;
        cl51409->fvar_4 = (uint64_t)ivar_3;
        release_cstopdown_funtype_66(ivar_4);
        release_cstopdown__lang_spec(ivar_2);
        result = (cstopdown_funtype_59_t)cl51409;

        
        return result;
}

extern cstopdown_funtype_69_t cstopdown__mem_stackp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, uint64_t ivar_3, cstopdown_funtype_66_t ivar_4){
        cstopdown_funtype_69_t  result;
        cstopdown_closure_88_t cl51414;
        cl51414 = new_cstopdown_closure_88();
        cl51414->fvar_1 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51414->fvar_1 != NULL) cl51414->fvar_1->count++;
        cl51414->fvar_2 = (uint32_t)ivar_1;
        cl51414->fvar_3 = (cstopdown_funtype_66_t)ivar_4;
        if (cl51414->fvar_3 != NULL) cl51414->fvar_3->count++;
        cl51414->fvar_4 = (uint64_t)ivar_3;
        release_cstopdown_funtype_66(ivar_4);
        release_cstopdown__lang_spec(ivar_2);
        result = (cstopdown_funtype_69_t)cl51414;

        
        return result;
}

extern bool_t cstopdown__push_or_pendingp(cstopdown__ent_adt_t ivar_1){
        bool_t  result;
        bool_t ivar_2;
        ivar_1->count++;
        ivar_2 = (bool_t)r_cstopdown__pushp((cstopdown__ent_adt_t)ivar_1);
        if (ivar_2){ 
             release_cstopdown__ent_adt(ivar_1);
             result = (bool_t) true;
} else {
        
             result = (bool_t)r_cstopdown__pendingp((cstopdown__ent_adt_t)ivar_1);
};

        
        return result;
}

extern cstopdown_funtype_59_t cstopdown__fine_stackp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, uint64_t ivar_3, cstopdown_funtype_66_t ivar_4){
        cstopdown_funtype_59_t  result;
        cstopdown_closure_90_t cl51420;
        cl51420 = new_cstopdown_closure_90();
        cl51420->fvar_1 = (cstopdown_funtype_66_t)ivar_4;
        if (cl51420->fvar_1 != NULL) cl51420->fvar_1->count++;
        cl51420->fvar_2 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51420->fvar_2 != NULL) cl51420->fvar_2->count++;
        cl51420->fvar_3 = (uint32_t)ivar_1;
        cl51420->fvar_4 = (uint64_t)ivar_3;
        release_cstopdown_funtype_66(ivar_4);
        release_cstopdown__lang_spec(ivar_2);
        result = (cstopdown_funtype_59_t)cl51420;

        
        return result;
}

extern bool_t cstopdown__loop_readyp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_66_t ivar_3, uint32_t ivar_6, uint8_t ivar_7){
        bool_t  result;
        cstopdown__peg_adt_t ivar_8;
        ivar_8 = (cstopdown__peg_adt_t)ivar_2->ftbl->fptr(ivar_2, ivar_7);
        ivar_2->ftbl->rptr(ivar_2);
        bool_t ivar_91;
        ivar_8->count++;
        ivar_91 = (bool_t)r_cstopdown__concatp((cstopdown__peg_adt_t)ivar_8);
        if (ivar_91){ 
             uint8_t ivar_13;
             ivar_8->count++;
             ivar_13 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_8);
             uint8_t ivar_14;
             ivar_14 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_8);
             bool_t ivar_21;
             cstopdown__ent_adt_t ivar_37;
             cstopdown_funtype_65_t ivar_27;
             cstopdown_funtype_66_t ivar_33;
             //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
             ivar_33 = (cstopdown_funtype_66_t)ivar_3;
             if (ivar_33 != NULL) ivar_33->count++;
             uint32_t ivar_34;
             //copying to uint32 from uint32;
             ivar_34 = (uint32_t)ivar_6;
             ivar_27 = (cstopdown_funtype_65_t)ivar_33->ftbl->fptr(ivar_33, ivar_34);
             ivar_33->ftbl->rptr(ivar_33);
             ivar_37 = (cstopdown__ent_adt_t)ivar_27->ftbl->fptr(ivar_27, ivar_13);
             ivar_27->ftbl->rptr(ivar_27);
             ivar_21 = (bool_t)cstopdown__loop_or_pushp((cstopdown__ent_adt_t)ivar_37);
             if (ivar_21){  
           release_cstopdown_funtype_66(ivar_3);
           result = (bool_t) true;
} else {
             
           bool_t ivar_38;
           cstopdown__ent_adt_t ivar_54;
           cstopdown_funtype_65_t ivar_44;
           cstopdown_funtype_66_t ivar_50;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_50 = (cstopdown_funtype_66_t)ivar_3;
           if (ivar_50 != NULL) ivar_50->count++;
           uint32_t ivar_51;
           //copying to uint32 from uint32;
           ivar_51 = (uint32_t)ivar_6;
           ivar_44 = (cstopdown_funtype_65_t)ivar_50->ftbl->fptr(ivar_50, ivar_51);
           ivar_50->ftbl->rptr(ivar_50);
           ivar_54 = (cstopdown__ent_adt_t)ivar_44->ftbl->fptr(ivar_44, ivar_13);
           ivar_44->ftbl->rptr(ivar_44);
           ivar_38 = (bool_t)r_cstopdown__goodp((cstopdown__ent_adt_t)ivar_54);
           if (ivar_38){   
           cstopdown__ent_adt_t ivar_88;
           cstopdown_funtype_65_t ivar_59;
           cstopdown_funtype_66_t ivar_83;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_83 = (cstopdown_funtype_66_t)ivar_3;
           if (ivar_83 != NULL) ivar_83->count++;
           mpq_ptr_t ivar_85;
           uint32_t ivar_63;
           cstopdown__ent_adt_t ivar_78;
           cstopdown_funtype_65_t ivar_68;
           cstopdown_funtype_66_t ivar_74;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_74 = (cstopdown_funtype_66_t)ivar_3;
           if (ivar_74 != NULL) ivar_74->count++;
           release_cstopdown_funtype_66(ivar_3);
           uint32_t ivar_75;
           //copying to uint32 from uint32;
           ivar_75 = (uint32_t)ivar_6;
           ivar_68 = (cstopdown_funtype_65_t)ivar_74->ftbl->fptr(ivar_74, ivar_75);
           ivar_74->ftbl->rptr(ivar_74);
           ivar_78 = (cstopdown__ent_adt_t)ivar_68->ftbl->fptr(ivar_68, ivar_13);
           ivar_68->ftbl->rptr(ivar_68);
           ivar_63 = (uint32_t)cstopdown__ent_adt_span((cstopdown__ent_adt_t)ivar_78);
           mpz_t tmp51433;
           mpz_init(tmp51433);
           mpz_set_ui(tmp51433, (uint64_t)ivar_6);
           mpz_add_ui(tmp51433, tmp51433, (uint64_t)ivar_63);
           mpq_mk_set_z(ivar_85, tmp51433);
           mpz_clear(tmp51433);
           uint32_t ivar_84;
           //copying to uint32 from mpq;
           ivar_84 = (uint32_t)mpq_get_ui(ivar_85);
           mpq_clear(ivar_85);
           ivar_59 = (cstopdown_funtype_65_t)ivar_83->ftbl->fptr(ivar_83, ivar_84);
           ivar_83->ftbl->rptr(ivar_83);
           ivar_88 = (cstopdown__ent_adt_t)ivar_59->ftbl->fptr(ivar_59, ivar_14);
           ivar_59->ftbl->rptr(ivar_59);
           result = (bool_t)cstopdown__loop_or_pushp((cstopdown__ent_adt_t)ivar_88);
} else {
           
           release_cstopdown_funtype_66(ivar_3);
           result = (bool_t) false;
};
};
} else {
        
             bool_t ivar_154;
             ivar_8->count++;
             ivar_154 = (bool_t)r_cstopdown__orp((cstopdown__peg_adt_t)ivar_8);
             if (ivar_154){  
           uint8_t ivar_95;
           ivar_8->count++;
           ivar_95 = (uint8_t)cstopdown__peg_adt_e1((cstopdown__peg_adt_t)ivar_8);
           uint8_t ivar_96;
           ivar_96 = (uint8_t)cstopdown__peg_adt_e2((cstopdown__peg_adt_t)ivar_8);
           bool_t ivar_103;
           cstopdown__ent_adt_t ivar_119;
           cstopdown_funtype_65_t ivar_109;
           cstopdown_funtype_66_t ivar_115;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_115 = (cstopdown_funtype_66_t)ivar_3;
           if (ivar_115 != NULL) ivar_115->count++;
           uint32_t ivar_116;
           //copying to uint32 from uint32;
           ivar_116 = (uint32_t)ivar_6;
           ivar_109 = (cstopdown_funtype_65_t)ivar_115->ftbl->fptr(ivar_115, ivar_116);
           ivar_115->ftbl->rptr(ivar_115);
           ivar_119 = (cstopdown__ent_adt_t)ivar_109->ftbl->fptr(ivar_109, ivar_95);
           ivar_109->ftbl->rptr(ivar_109);
           ivar_103 = (bool_t)cstopdown__loop_or_pushp((cstopdown__ent_adt_t)ivar_119);
           if (ivar_103){   
           release_cstopdown_funtype_66(ivar_3);
           result = (bool_t) true;
} else {
           
           bool_t ivar_120;
           cstopdown__ent_adt_t ivar_136;
           cstopdown_funtype_65_t ivar_126;
           cstopdown_funtype_66_t ivar_132;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_132 = (cstopdown_funtype_66_t)ivar_3;
           if (ivar_132 != NULL) ivar_132->count++;
           uint32_t ivar_133;
           //copying to uint32 from uint32;
           ivar_133 = (uint32_t)ivar_6;
           ivar_126 = (cstopdown_funtype_65_t)ivar_132->ftbl->fptr(ivar_132, ivar_133);
           ivar_132->ftbl->rptr(ivar_132);
           ivar_136 = (cstopdown__ent_adt_t)ivar_126->ftbl->fptr(ivar_126, ivar_95);
           ivar_126->ftbl->rptr(ivar_126);
           ivar_120 = (bool_t)r_cstopdown__failp((cstopdown__ent_adt_t)ivar_136);
           if (ivar_120){    
            cstopdown__ent_adt_t ivar_151;
            cstopdown_funtype_65_t ivar_141;
            cstopdown_funtype_66_t ivar_147;
            //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
            ivar_147 = (cstopdown_funtype_66_t)ivar_3;
            if (ivar_147 != NULL) ivar_147->count++;
            release_cstopdown_funtype_66(ivar_3);
            uint32_t ivar_148;
            //copying to uint32 from uint32;
            ivar_148 = (uint32_t)ivar_6;
            ivar_141 = (cstopdown_funtype_65_t)ivar_147->ftbl->fptr(ivar_147, ivar_148);
            ivar_147->ftbl->rptr(ivar_147);
            ivar_151 = (cstopdown__ent_adt_t)ivar_141->ftbl->fptr(ivar_141, ivar_96);
            ivar_141->ftbl->rptr(ivar_141);
            result = (bool_t)cstopdown__loop_or_pushp((cstopdown__ent_adt_t)ivar_151);
} else {
           
            release_cstopdown_funtype_66(ivar_3);
            result = (bool_t) false;
};
};
} else {
             
           bool_t ivar_177;
           ivar_8->count++;
           ivar_177 = (bool_t)r_cstopdown__andp((cstopdown__peg_adt_t)ivar_8);
           if (ivar_177){   
           uint8_t ivar_158;
           ivar_158 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_8);
           cstopdown__ent_adt_t ivar_176;
           cstopdown_funtype_65_t ivar_166;
           cstopdown_funtype_66_t ivar_172;
           //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
           ivar_172 = (cstopdown_funtype_66_t)ivar_3;
           if (ivar_172 != NULL) ivar_172->count++;
           release_cstopdown_funtype_66(ivar_3);
           uint32_t ivar_173;
           //copying to uint32 from uint32;
           ivar_173 = (uint32_t)ivar_6;
           ivar_166 = (cstopdown_funtype_65_t)ivar_172->ftbl->fptr(ivar_172, ivar_173);
           ivar_172->ftbl->rptr(ivar_172);
           ivar_176 = (cstopdown__ent_adt_t)ivar_166->ftbl->fptr(ivar_166, ivar_158);
           ivar_166->ftbl->rptr(ivar_166);
           result = (bool_t)cstopdown__loop_or_pushp((cstopdown__ent_adt_t)ivar_176);
} else {
           
           bool_t ivar_200;
           ivar_8->count++;
           ivar_200 = (bool_t)r_cstopdown__notp((cstopdown__peg_adt_t)ivar_8);
           if (ivar_200){    
            uint8_t ivar_181;
            ivar_181 = (uint8_t)cstopdown__peg_adt_e((cstopdown__peg_adt_t)ivar_8);
            cstopdown__ent_adt_t ivar_199;
            cstopdown_funtype_65_t ivar_189;
            cstopdown_funtype_66_t ivar_195;
            //copying to cstopdown_funtype_66 from cstopdown_funtype_66;
            ivar_195 = (cstopdown_funtype_66_t)ivar_3;
            if (ivar_195 != NULL) ivar_195->count++;
            release_cstopdown_funtype_66(ivar_3);
            uint32_t ivar_196;
            //copying to uint32 from uint32;
            ivar_196 = (uint32_t)ivar_6;
            ivar_189 = (cstopdown_funtype_65_t)ivar_195->ftbl->fptr(ivar_195, ivar_196);
            ivar_195->ftbl->rptr(ivar_195);
            ivar_199 = (cstopdown__ent_adt_t)ivar_189->ftbl->fptr(ivar_189, ivar_181);
            ivar_189->ftbl->rptr(ivar_189);
            result = (bool_t)cstopdown__loop_or_pushp((cstopdown__ent_adt_t)ivar_199);
} else {
           
            release_cstopdown__peg_adt(ivar_8);
            release_cstopdown_funtype_66(ivar_3);
            result = (bool_t) false;
};
};
};
};

        
        return result;
}

extern cstopdown_funtype_93_t cstopdown__good_failp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3){
        cstopdown_funtype_93_t  result;
        cstopdown_closure_94_t cl51465;
        cl51465 = new_cstopdown_closure_94();
        cl51465->fvar_1 = (cstopdown_funtype_72_t)ivar_3;
        if (cl51465->fvar_1 != NULL) cl51465->fvar_1->count++;
        cl51465->fvar_2 = (uint32_t)ivar_1;
        cl51465->fvar_3 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51465->fvar_3 != NULL) cl51465->fvar_3->count++;
        release_cstopdown_funtype_72(ivar_3);
        release_cstopdown__lang_spec(ivar_2);
        result = (cstopdown_funtype_93_t)cl51465;

        
        return result;
}

extern cstopdown_funtype_96_t cstopdown__good_loopp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2){
        cstopdown_funtype_96_t  result;
        cstopdown_closure_97_t cl51481;
        cl51481 = new_cstopdown_closure_97();
        cl51481->fvar_1 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51481->fvar_1 != NULL) cl51481->fvar_1->count++;
        release_cstopdown__lang_spec(ivar_2);
        result = (cstopdown_funtype_96_t)cl51481;

        
        return result;
}

extern cstopdown_funtype_99_t cstopdown__good_goodp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3){
        cstopdown_funtype_99_t  result;
        cstopdown_closure_100_t cl51522;
        cl51522 = new_cstopdown_closure_100();
        cl51522->fvar_1 = (cstopdown_funtype_72_t)ivar_3;
        if (cl51522->fvar_1 != NULL) cl51522->fvar_1->count++;
        cl51522->fvar_2 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51522->fvar_2 != NULL) cl51522->fvar_2->count++;
        release_cstopdown_funtype_72(ivar_3);
        release_cstopdown__lang_spec(ivar_2);
        result = (cstopdown_funtype_99_t)cl51522;

        
        return result;
}

extern cstopdown_funtype_102_t cstopdown__good_entryp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3){
        cstopdown_funtype_102_t  result;
        cstopdown_closure_103_t cl51546;
        cl51546 = new_cstopdown_closure_103();
        cl51546->fvar_1 = (uint32_t)ivar_1;
        cl51546->fvar_2 = (cstopdown_funtype_72_t)ivar_3;
        if (cl51546->fvar_2 != NULL) cl51546->fvar_2->count++;
        cl51546->fvar_3 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51546->fvar_3 != NULL) cl51546->fvar_3->count++;
        release_cstopdown__lang_spec(ivar_2);
        release_cstopdown_funtype_72(ivar_3);
        result = (cstopdown_funtype_102_t)cl51546;

        
        return result;
}

extern cstopdown_funtype_102_t cstopdown__fine_entryp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3){
        cstopdown_funtype_102_t  result;
        cstopdown_closure_107_t cl51571;
        cl51571 = new_cstopdown_closure_107();
        cl51571->fvar_1 = (uint32_t)ivar_1;
        cl51571->fvar_2 = (cstopdown_funtype_72_t)ivar_3;
        if (cl51571->fvar_2 != NULL) cl51571->fvar_2->count++;
        cl51571->fvar_3 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51571->fvar_3 != NULL) cl51571->fvar_3->count++;
        release_cstopdown__lang_spec(ivar_2);
        release_cstopdown_funtype_72(ivar_3);
        result = (cstopdown_funtype_102_t)cl51571;

        
        return result;
}

extern cstopdown_funtype_111_t cstopdown__good_tscaffoldp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3){
        cstopdown_funtype_111_t  result;
        cstopdown_closure_112_t cl51575;
        cl51575 = new_cstopdown_closure_112();
        result = (cstopdown_funtype_111_t)cl51575;

        
        return result;
}

extern cstopdown_funtype_64_t cstopdown__good_rootp(uint32_t ivar_1, cstopdown_funtype_66_t ivar_2){
        cstopdown_funtype_64_t  result;
        cstopdown_closure_113_t cl51580;
        cl51580 = new_cstopdown_closure_113();
        cl51580->fvar_1 = (cstopdown_funtype_66_t)ivar_2;
        if (cl51580->fvar_1 != NULL) cl51580->fvar_1->count++;
        release_cstopdown_funtype_66(ivar_2);
        result = (cstopdown_funtype_64_t)cl51580;

        
        return result;
}

extern cstopdown_funtype_114_t cstopdown__fine_scaffoldp(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3){
        cstopdown_funtype_114_t  result;
        cstopdown_closure_115_t cl51594;
        cl51594 = new_cstopdown_closure_115();
        cl51594->fvar_1 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51594->fvar_1 != NULL) cl51594->fvar_1->count++;
        cl51594->fvar_2 = (cstopdown_funtype_72_t)ivar_3;
        if (cl51594->fvar_2 != NULL) cl51594->fvar_2->count++;
        cl51594->fvar_3 = (uint32_t)ivar_1;
        release_cstopdown_funtype_72(ivar_3);
        release_cstopdown__lang_spec(ivar_2);
        result = (cstopdown_funtype_114_t)cl51594;

        
        return result;
}

extern bool_t cstopdown__emptyp(cstopdown__ent_adt_t ivar_1){
        bool_t  result;
        uint8_t ivar_2;
        ivar_2 = (uint8_t)cstopdown__ent_adt_nt((cstopdown__ent_adt_t)ivar_1);
        uint8_t ivar_3;
        ivar_3 = (uint8_t)cstopdown__num_non_terminals();
        result = (ivar_2 == ivar_3);

        
        return result;
}

extern cstopdown_funtype_120_t cstopdown__step(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3, uint32_t ivar_5, uint8_t ivar_6){
        cstopdown_funtype_120_t  result;
        cstopdown_closure_121_t cl51660;
        cl51660 = new_cstopdown_closure_121();
        cl51660->fvar_1 = (uint32_t)ivar_1;
        cl51660->fvar_2 = (cstopdown_funtype_72_t)ivar_3;
        if (cl51660->fvar_2 != NULL) cl51660->fvar_2->count++;
        cl51660->fvar_3 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51660->fvar_3 != NULL) cl51660->fvar_3->count++;
        release_cstopdown_funtype_72(ivar_3);
        release_cstopdown__lang_spec(ivar_2);
        result = (cstopdown_funtype_120_t)cl51660;

        
        return result;
}

extern cstopdown_funtype_123_t cstopdown__size(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3, uint32_t ivar_5, uint8_t ivar_6){
        cstopdown_funtype_123_t  result;
        cstopdown_closure_124_t cl51670;
        cl51670 = new_cstopdown_closure_124();
        cl51670->fvar_1 = (uint32_t)ivar_1;
        result = (cstopdown_funtype_123_t)cl51670;

        
        return result;
}

extern cstopdown_funtype_120_t cstopdown__parse(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3, uint32_t ivar_5, uint8_t ivar_6){
        cstopdown_funtype_120_t  result;
        cstopdown_closure_127_t cl51694;
        cl51694 = new_cstopdown_closure_127();
        cl51694->fvar_1 = (uint32_t)ivar_5;
        cl51694->fvar_2 = (uint8_t)ivar_6;
        cl51694->fvar_3 = (cstopdown_funtype_72_t)ivar_3;
        if (cl51694->fvar_3 != NULL) cl51694->fvar_3->count++;
        cl51694->fvar_4 = (cstopdown__lang_spec_t)ivar_2;
        if (cl51694->fvar_4 != NULL) cl51694->fvar_4->count++;
        cl51694->fvar_5 = (uint32_t)ivar_1;
        release_cstopdown_funtype_72(ivar_3);
        release_cstopdown__lang_spec(ivar_2);
        result = (cstopdown_funtype_120_t)cl51694;

        
        return result;
}

extern cstopdown_record_119_t cstopdown__doparse(uint32_t ivar_1, cstopdown__lang_spec_t ivar_2, cstopdown_funtype_72_t ivar_3, uint8_t ivar_5){
        cstopdown_record_119_t  result;
        /* pend */ cstopdown_funtype_65_t ivar_8;
        cstopdown_closure_128_t cl51708;
        cl51708 = new_cstopdown_closure_128();
        ivar_8 = (cstopdown_funtype_65_t)cl51708;
        cstopdown_record_129_t ivar_84;
        uint8_t ivar_17;
        ivar_17 = (uint8_t)1;
        bool_t ivar_18;
        ivar_18 = (bool_t) false;
        cstopdown_funtype_66_t ivar_46;
        cstopdown__ent_adt_t ivar_26;
        uint8_t ivar_33;
        ivar_33 = (uint8_t)0;
        uint32_t ivar_30;
        //copying to uint32 from uint8;
        ivar_30 = (uint32_t)ivar_33;
        uint8_t ivar_31;
        ivar_31 = (uint8_t)cstopdown__num_non_terminals();
        ivar_26 = (cstopdown__ent_adt_t)cstopdown__push((uint32_t)ivar_30, (uint8_t)ivar_31);
        cstopdown_funtype_66_t ivar_34;
        cstopdown_closure_130_t cl51709;
        cl51709 = new_cstopdown_closure_130();
        cl51709->fvar_1 = (cstopdown_funtype_65_t)ivar_8;
        if (cl51709->fvar_1 != NULL) cl51709->fvar_1->count++;
        release_cstopdown_funtype_65(ivar_8);
        ivar_34 = (cstopdown_funtype_66_t)cl51709;
        uint32_t ivar_41;
        ivar_41 = (uint32_t)0;
        cstopdown_funtype_65_t ivar_35;
        ivar_35 = (cstopdown_funtype_65_t)ivar_34->ftbl->fptr(ivar_34, ivar_41);
        cstopdown_funtype_66_t ivar_42;
        cstopdown_funtype_65_t ivar_44;
        ivar_44 = NULL;
        ivar_42 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_34, ivar_41, ivar_44);
        if (ivar_44 != NULL) ivar_44->count--;
        cstopdown_funtype_65_t ivar_43;
        cstopdown_funtype_65_t ivar_38;
        cstopdown__ent_adt_t ivar_40;
        ivar_40 = NULL;
        ivar_38 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_35, ivar_5, ivar_40);
        if (ivar_40 != NULL) ivar_40->count--;
        ivar_43 = (cstopdown_funtype_65_t)update_cstopdown_funtype_65(ivar_38, ivar_5, ivar_26);
        if (ivar_26 != NULL) ivar_26->count--;
        ivar_46 = (cstopdown_funtype_66_t)update_cstopdown_funtype_66(ivar_42, ivar_41, ivar_43);
        if (ivar_43 != NULL) ivar_43->count--;
        cstopdown__ent_adt_t ivar_54;
        uint8_t ivar_53;
        ivar_53 = (uint8_t)0;
        uint32_t ivar_50;
        //copying to uint32 from uint8;
        ivar_50 = (uint32_t)ivar_53;
        ivar_54 = (cstopdown__ent_adt_t)cstopdown__push((uint32_t)ivar_50, (uint8_t)ivar_5);
        cstopdown_record_129_t tmp51710 = new_cstopdown_record_129();;
        ivar_84 = (cstopdown_record_129_t)tmp51710;
        tmp51710->depth = (uint8_t)ivar_17;
        tmp51710->lflag = (bool_t)ivar_18;
        tmp51710->scaf = (cstopdown_funtype_66_t)ivar_46;
        tmp51710->stack = (cstopdown__ent_adt_t)ivar_54;
        /* St */ cstopdown_record_119_t ivar_12;
        //copying to cstopdown_record_119 from cstopdown_record_129;
        {
         ivar_12 = new_cstopdown_record_119();
         ivar_12->scaf = (cstopdown_funtype_66_t)ivar_84->scaf;
         if (ivar_12->scaf != NULL) ivar_12->scaf->count++;
         ivar_12->depth = (uint64_t)ivar_84->depth;
         ivar_12->stack = (cstopdown__ent_adt_t)ivar_84->stack;
         if (ivar_12->stack != NULL) ivar_12->stack->count++;
         ivar_12->lflag = (bool_t)ivar_84->lflag;
        };
        release_cstopdown_record_129(ivar_84);
        cstopdown_funtype_120_t ivar_64;
        uint8_t ivar_82;
        ivar_82 = (uint8_t)0;
        uint32_t ivar_79;
        //copying to uint32 from uint8;
        ivar_79 = (uint32_t)ivar_82;
        ivar_64 = (cstopdown_funtype_120_t)cstopdown__parse((uint32_t)ivar_1, (cstopdown__lang_spec_t)ivar_2, (cstopdown_funtype_72_t)ivar_3, (uint32_t)ivar_79, (uint8_t)ivar_5);
        cstopdown_record_119_t ivar_83;
        //copying to cstopdown_record_119 from cstopdown_record_119;
        ivar_83 = (cstopdown_record_119_t)ivar_12;
        if (ivar_83 != NULL) ivar_83->count++;
        release_cstopdown_record_119(ivar_12);
        result = (cstopdown_record_119_t)ivar_64->ftbl->fptr(ivar_64, ivar_83);
        ivar_64->ftbl->rptr(ivar_64);

        
        return result;
}