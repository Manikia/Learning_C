#include <stdio.h>

//read the elements in the array then find the sum of the array elements
//use VLA for array size
//allow user specify array size first and then add the arrays
//then ask user to add each element we want to add up
int main()
{
    int size;
    int i;
    //int j;
    int total = 0;
    int elements = 0;


    printf("Whats the array size you want to initialize as: \n");
    scanf("%d", &size);
    //printf("size is: %d", size);
    //printf("array size: %d", sizeof(array));
    printf("what are the elements you want to find the sum of: \n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &elements);
        total = total + elements;
        
    }
    printf("Sum: %d", total);
    return 0;
}