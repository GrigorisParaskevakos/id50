#include <cs50.h> 
#include <stdio.h> 

int main (void)
{
    printf("x is ");
    int x = get_int();
    
    printf("y is ");
    int y = get_int();
    
    /*
    ***OTHER WAY***
    printf("%i plus %i is %i\n", x, y, x + y);
    //OR
    int z = x + y; //or dont put z
    //THEN
    printf("sum of x and y is %i\n", z); // and write x+y
    */
    printf("%i plus %i is %i\n", x, y, x + y);
    printf("%i minus %i is %i\n", x, y, x - y);
    printf("%i times %i is %i\n", x, y, x * y);
    printf("%i divided by %i is %i\n", x, y, x / y);
    printf("%i remainder %i is %i\n", x, y, x % y);
    
}