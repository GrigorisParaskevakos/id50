#include <cs50.h> 
#include <stdio.h> 

int main (void)
{
    int i = get_int(); // only get an integer otherwise retry
    printf("hello, %i\n", i);
}