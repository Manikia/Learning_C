#include <stdio.h>

void array(int size)
{
    char alpha[size]; //create array
    int x = 0;

    while(x < size) //iterate through array
    {
        alpha[x] = 'A' + x; //gives it an initial state to start looping from in the alphabet
        printf("alpha is %c\n", alpha[x]); //printing every character
        x++;
    }
}

int main()
{
    array(5); //telling it where to end in the alphabet
    array(20);
    array(9);

    return (0);
}