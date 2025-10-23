#include "ltepegtest_c.h"

static bytestrings__bytestring_t
make_bytestring(const char *arg)
{   size_t len = strlen(arg);
    uint32_t *array = malloc(len * sizeof(uint32_t));
    
    for (uint32_t i = 0; i < len; ++i) {
        array[i] = arg[i] & 0xff;
    }
    stringliteral_t sl = mk_string(len, array);
    strings__string_t st = strings__make_string(len, (strings_array_2_t)sl);
    bytestrings__bytestring_t bs = bytestrings__mk_bytestring(st);
    free(array); //sl and st are freed in strings__make_string and bytestrings_mk_bytestring
    return bs;
}

static inline uint64_t cpucycles(void) {
  uint64_t result;

  __asm__ volatile ("rdtsc; shlq $32,%%rdx; orq %%rdx,%%rax"
    : "=a" (result) : : "%rdx");

  return result;
}

int main(){
  double start = get_cpu_time();
  uint64_t startcyc = cpucycles();
  /* sigmatopdown__ent_adt_t test0 = ltepegtest__test0(); */
  /* sigmatopdown__ent_adt_t test1 = ltepegtest__test1(); */
  /* sigmatopdown__ent_adt_t test11 = ltepegtest__test11(); */
  /* sigmatopdown__ent_adt_t test2 = ltepegtest__test2(); */
  ltepegproof__parsetree_adt_t test3 = ltepegtest__jsonparsefile(make_bytestring("irModel.json"));
  printf("\nParsed file");

  /* printf("\ntest3 = %s", json_ltepegproof__parsetree_adt(test3)); */
  double end = get_cpu_time();
  uint64_t endcyc = cpucycles();
  printf("\n CPU Time = %f seconds\n; CPU Cycles = %u\n", end - start, endcyc - startcyc);
  
  return 0;
}
