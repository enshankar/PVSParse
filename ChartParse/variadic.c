#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/* Function prototype for averaging n double-typed numbers */
double average(unsigned int n, ...);
double add(double z, ...);
typedef struct st_s {double x, y;}  * st_t;

int main() {
   double avg1, avg2;
   
   avg1 = average(2, 50.3, 49.7);
   avg2 = average(5, 12.45, 2.87, 0.256, 90.1532, 6320.12);
   printf("avg1: %f\navg2: %f", avg1, avg2);
   st_t uv = malloc(sizeof(struct st_s));
   uv->x = 50.3;
   uv->y = 49.7;
   double sum = add(13.5, uv);
   printf("\nsum = %f\n", sum);
}

double add(double z, ...){
  va_list pargs;
  va_start(pargs, z);
  st_t uv = va_arg(pargs, st_t);
  return z + uv->x + uv->y;
}

double average(unsigned int n, ...) {
   /* pointer to the variable arguments list */
   va_list pargs;
   
   /* Initialise pargs to point to the first optional argument */ 
   va_start(pargs, n);
   
   double sum = 0;
   unsigned int i;
   for(i=0;i<n;i++) {  /* iterate though the optional arguments */
    double x = va_arg(pargs, double);
    sum += x;
   }
   va_end(pargs);
   return (n > 0)? (sum / n):0.00;
}
//From https://medium.com/swlh/variadic-function-in-c-programming-d3632315a48e
