#include <stdio.h>
#include <malloc.h>

struct s{
    int arraySize;
    int array[];
};

int main()
{
    int desiredSize = 5;
    struct s *ptr;

    ptr = malloc(sizeof(struct s) + desiredSize*sizeof(int));
    //sizeof is the size of struct s not including array[]
    //the multiplied is allocating variables for flexible array
    return 0;
}