//include
#include <cs50.h>
#include <stdio.h>

//declare functions

int add_two_ints(int a, int b);

int main(void)
{
    //add user for input
    printf("Give me an integer: ");
    int x = GetInt();
    printf("Give me another integer: ");
    int y = GetInt();

    // add the two numbers together via a function call
    int z = add_two_ints(x, y);

    // output the result
    printf("The sum of %i and %i is %i!\n", x, y, z);
}

int add_two_ints(int a, int b){
    int sum = a + b;
    return sum;
}