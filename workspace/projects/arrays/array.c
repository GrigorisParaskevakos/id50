#include <cs50.h> 
#include <stdio.h> 


int main (void)
{
    long long foo [16];
    printf("Card: ");
    for (int i = 0; i<16; i++)
    {
        long long x = get_long_long();
        
        for (int j = i; j < 16; j++)
        {
            foo[j] = x ;
        }
        
    }
    printf(foo[0]);
    
    printf("\n");
    return 0;
} 

