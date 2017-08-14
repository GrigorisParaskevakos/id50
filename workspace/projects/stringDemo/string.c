#include <cs50.h> //teaches the system what a "string" is
#include <stdio.h> //standard input output

int main (void)
{
    printf("Name: ");
    string name = get_string(); // variable name stores a string as an input
    printf("hello, %s\n", name); // %s puts a vallue after ,"
}