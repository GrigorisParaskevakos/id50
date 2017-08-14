#include <cs50.h> 
#include <stdio.h> 

void cough(int n);
void sneeze(int n);
void say(string s, int n);

int main (void)
{
    cough(3); // cough 3 times
    sneeze(3);
} 

void cough(int n)
{
    say("cough", n);
}

void sneeze(int n)
{
    say("achoo", n);
}

void say(string s, int n) 
{
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", s);
    }
}

/*
void cough(int n);

int main (void)
{
    cough(3); // cough 3 times
} 

void cough(int n) 
{
    for (int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
}
*/

/*
void cough(void);

int main (void)
{
    for (int i = 0; i < 3; i++)
    {
        cough();
    }
} 

void cough(void) 
{
    printf("cough\n");
}
*/