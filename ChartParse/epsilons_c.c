//Code generated using pvs2ir2c
#include "epsilons_c.h"

void release_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_t x){
        x->count--;
            if (x->count <= 0){
                if (x->htbl != NULL){

                    if (x->htbl->data != NULL) safe_free(x->htbl->data);

                    safe_free(x->htbl);}

                x->ftbl->rptr(x);}
        }

epsilons_uint8_funtype_0_t copy_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_t x){return x->ftbl->cptr(x);}

uint32_t lookup_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_htbl_t htbl, uint8_t i, uint32_t ihash){
        uint32_t mask = htbl->size - 1;
        uint32_t hashindex = ihash & mask; epsilons_uint8_funtype_0_hashentry_t data = htbl->data[hashindex];
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

epsilons_uint8_funtype_0_t dupdate_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_t a, uint8_t i, bool_t v){
        epsilons_uint8_funtype_0_htbl_t htbl = a->htbl;
        if (htbl == NULL){//construct new htbl
                htbl = (epsilons_uint8_funtype_0_htbl_t)safe_malloc(sizeof(struct epsilons_uint8_funtype_0_htbl_s));
                htbl->size = HTBL_DEFAULT_SIZE; htbl->num_entries = 0;
                htbl->data = (epsilons_uint8_funtype_0_hashentry_t *)safe_malloc(HTBL_DEFAULT_SIZE * sizeof(struct epsilons_uint8_funtype_0_hashentry_s));
                for (uint32_t j = 0; j < HTBL_DEFAULT_SIZE; j++){htbl->data[j].key = (uint8_t)0; htbl->data[j].keyhash = 0;
                }
                a->htbl = htbl;
        }
        uint32_t size = htbl->size;
        uint32_t num_entries = htbl->num_entries;
        epsilons_uint8_funtype_0_hashentry_t * data = htbl->data;
        if (num_entries/3 >  size/5){//resize data
                uint32_t new_size = 2*size; uint32_t new_mask = new_size - 1;
                if (size >= HTBL_MAX_SIZE) out_of_memory();
                epsilons_uint8_funtype_0_hashentry_t * new_data = (epsilons_uint8_funtype_0_hashentry_t *)safe_malloc(new_size * sizeof(struct epsilons_uint8_funtype_0_hashentry_s));
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
        uint32_t hashindex = lookup_epsilons_uint8_funtype_0(htbl, i, ihash);
        epsilons_uint8_funtype_0_hashentry_t hentry = htbl->data[hashindex];
        uint32_t hkeyhash = hentry.keyhash;
        bool_t hentrykeyzero;
        hentrykeyzero = (hentry.key == 0);

        if (hentrykeyzero && (hkeyhash == 0))
                {htbl->data[hashindex].key = (uint8_t)i; htbl->data[hashindex].keyhash = ihash; htbl->data[hashindex].value = (bool_t)v;}
            else {bool_t tempvalue;tempvalue = (bool_t)htbl->data[hashindex].value;tempvalue = (bool_t)v;};
        return a;

}

epsilons_uint8_funtype_0_t update_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_t a, uint8_t i, bool_t v){
        if (a->count == 1){
                return dupdate_epsilons_uint8_funtype_0(a, i, v);
            } else {
                epsilons_uint8_funtype_0_t x = copy_epsilons_uint8_funtype_0(a);
                x->count--;
                return dupdate_epsilons_uint8_funtype_0(x, i, v);
            }}

epsilons_uint8_funtype_0_t equal_epsilons_uint8_funtype_0(epsilons_uint8_funtype_0_t x, epsilons_uint8_funtype_0_t y){
        return false;}

extern uint8_t epsilons__epsilon(epsilons_uint8_funtype_0_t ivar_1){
        uint8_t result;
        pvs2cerror("Missing definition", PVS2C_EXIT_ERROR);

        return result;
}