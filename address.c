#include<stdio.h>
int main()
{   
    char ch='A';
    int i=11;
    float f=90.99f;
    double d = 78.67890;
    printf("L values of all variables:\n");
    printf("%u\n",&ch); // lu - long unsigned
    printf("%u\n",&i); //u - unsigned int
    printf("%u\n",&f);
    printf("%u\n",&d);
    return 0;
}