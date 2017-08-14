#include <stdio.h>
#include <cs50.h>
 
int main(void)
{
 
    // declaring my variables
    int h;
    int row;
    int space;
    int hash;
 
    // User inputs Height
    //error handling
    do{
        printf("(min 0, max 23)Height: ");
        h = get_int();
    }
    while( h < 0 || h > 23);
    printf("\"Mario's Pyramid\"\n");
    //creates the mario's pyramid
    for (row = 0; row < h; row++) 
    {
        for (space = (h - row); space > 0; space--)
        {
            printf(" "); 
        }
        //left side
        for (hash = 0; hash < (row + 1); hash++)
        {   
            printf("#"); 
        }
        
        //gap between
        printf("  ");
        
        //right side
        for (hash = 0; hash < (row + 1); hash++)
        {   
            printf("#"); 
        }
        //next line
        printf("\n");
    }
}