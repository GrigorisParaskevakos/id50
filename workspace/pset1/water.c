#include <stdio.h> // preprocessing
#include <cs50.h>              

int main (void)
{
    // User inputs minutes of shower
    printf("Minutes: ");
    int m = get_int(); 
    
    // Calculates total consumption in bottles assuming that in 1 minute we consume 12 bottles of water
    int consumption = m * 12; 
    printf("Bottles: %i\n", consumption);
}