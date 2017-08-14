#include <cs50.h> 
#include <stdio.h> 

void print_name(string name); //signature of a function
                              //first declare the function that main is going to call later
                             // all  .h files we include in the start are functions like this

int main (void)
{
    string s = get_string();
    print_name(s);
} 

//make a function
//void is a return type, output
// print_name is name of the function
//string name is input
void print_name(string name) 
{
    printf("hello, %s\n", name);
}
/*
#####  #
   ##  ##
  ###  ###
 ####  ####
#####  #####    

*/