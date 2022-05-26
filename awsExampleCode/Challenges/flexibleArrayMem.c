#include <stdio.h>
#include <malloc.h>
//write a program taht uses a flexible array member inside a structure
//create a struct with array and length member
//read from users for array size at runtime
//allocate memory for the structure based on its size read from user
//set the length member and fill array with dummy data
//print array elements

struct myArray{
    int length;
    int array[]; //flexible array
};

int main(void)
{
    struct myArray *m = NULL;
    int size = 0;

    printf("Whats the size of array? \n");
    scanf("%d", &size);
    
    size_t sized = sizeof(struct myArray);
    m = malloc(sized+(sizeof(int)*size));

    m->length = size;
    m->array[0] = 55;
    m->array[1] = 199;

    printf("array is: %d: %d\n", m->array[0], m->array[1]);

    return 0;
}