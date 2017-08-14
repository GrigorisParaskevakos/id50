#include <cs50.h> 
#include <stdio.h> 

int main (void)
{
    printf("bool is %lu bytes\n", sizeof(bool)); // lu is unsigned long
    printf("char is %lu bytes\n", sizeof(char));
    printf("double is %lu bytes\n",sizeof(double));
    printf("float is %lu bytes\n", sizeof(float));
    printf("int is %lu bytes\n", sizeof(int));
    printf("long is %lu bytes\n", sizeof(long long));
    printf("string is %lu bytes\n", sizeof(string));
}