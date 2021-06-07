#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int size;

    printf("How many elements do you want to sum?");
    scanf(" %d", &size);

    int array[size];

    int i = 0;
    int element = 0;
    int *pntr;
    *pntr = array[i];

    printf("Insert your elements: ");
    for (i = 0; i < size; i++)
    {
        scanf(" %d", &element);
        element += element;

        array[i];
    }

    printf("You inputted: ");
    for (i = 0; i < size; i++)
    {
        printf(pntr);
        pntr++;
    }
    
    printf("And your total elements are: %d", element);

    return EXIT_SUCCESS;
}