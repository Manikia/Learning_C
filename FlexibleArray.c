#include <stdio.h>
#include <malloc.h>
//malloc allocates the requested memory and returns a pointer

//we are allocating memory in a flexible allocator
//putting data from different types in one variable
struct s
{
    //having an empty allocation we cant have it alone there, it has 
    //to be along the other int and also it has to be at the end
    //AND there can only be one empty array (flexible array)
    int arraySize;
    int array[];
}; //end of struct s

int main()
{
    //we can make empty brackets
    //we create flexible arrays by declaring empty brackets for an array

    int desiredSize = 5;
    struct s *pntr;

    pntr = malloc(sizeof(struct s) + desiredSize * sizeof(int));

    return 0;
}