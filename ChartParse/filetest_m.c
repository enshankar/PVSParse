#include "filetest_c.h"

static void
print_bytestring(const char *what, bytestrings__bytestring_t bs)
{
    uint32_t i;
    printf("\n%s: ", what);
    for (i = 0; i < bs->length; ++i) {
        printf("%02x", bs->seq->elems[i]);
    }
    printf("\n");
}

print_bytestring_char(const char *what, bytestrings__bytestring_t bs)
{
    uint32_t i;
    printf("\n%s: ", what);
    for (i = 0; i < bs->length; ++i) {
        printf("%c", bs->seq->elems[i]);
    }
    printf("\n");
}


int main(){
double start = get_cpu_time();
printf("\n filetest Tests");
 printf("\n Byte 0 is %c", 0);
 printf("\n byte = %c", filetest__test1());
 print_bytestring_char("test2", filetest__test2());
double end = get_cpu_time();
printf("\n CPU Time = %f seconds\n", end - start);

return 0;
}




