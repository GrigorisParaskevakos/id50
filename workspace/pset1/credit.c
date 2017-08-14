#include <stdio.h> 
#include <cs50.h>              

long checkCard(long long n);
void error();

int main (void)
{
    // User inputs credit card number
    //error handling
    bool f1 = true;
    do{
        printf("(max 16_digits)\nCredit Card Number: ");
        for (int i = 0; i < 16; i++)
        {
            long long c = get_long_long();
            if(checkCard(c))
            {
                f1 = false;
                printf("Valid Card !\n");
            }
            else
            {
                error();
            }
        
    }
    while(f1 == true);
}

//validate the card
long checkCard(long long n)
{
    for(int i = 0; i <16 ; i++ )
    {
        if(n > 0 )
        {
            return n;
        }
        else
        {
            return 0;// returns nothing
        }
    }
}

// #error
void error()
{
    printf("The credit card cumber must be a possitive integer\n");
}