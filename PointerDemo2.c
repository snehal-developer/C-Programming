#include<stdio.h>
int main()
{ 
   char ch='A';
   char *cptr = &ch;

   int i=11;
   int *iptr = &i;

   float f=90.99f;
   float *fptr = &f;

   double d = 78.67890;
   double *dptr = &d;

    printf("%c\n", *cptr);  //A
   printf("%d\n", *iptr); //11
   printf("%f\n", *fptr); //90.99
   printf("%lf\n", *dptr); //78.67890
   
   
   return 0;
}