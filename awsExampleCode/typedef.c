#include <stdio.h>

typedef int* i_pointer; //now i_pointer is a int pointer and can be used anywhere


int main()
{
    i_pointer p;
    i_pointer a, *b;  //this created a as a pointer and b as a double pointer
    i_pointer myArray[10]; //same as int* myArray[10]
    return 1;
}