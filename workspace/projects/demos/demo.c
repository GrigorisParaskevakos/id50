#include <stdio.h>

int main(void)
{
    int n = 1;
    int counter = 0;
    for (int i = 0; i < 10; i++, counter++)
    {
        
        printf("%i",counter);
        printf(") "); //i is int
        printf("n is %i\n", n); //i is int
        n += n;
    }
}