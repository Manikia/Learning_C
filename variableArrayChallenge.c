#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int size = 0, i = 0, element = 0;

    printf("How many elements do you want to sum?");
    scanf("%d", &size);
    int array[size]; //makes the size of array as given from user

    printf("Insert your elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]); //puts user input into array indexes
        element = element + array[i]; //adds up array elements
    }

    printf("You inputted: ");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", array[i]); //gets the indexes and numbers and prints out
    }
    
    printf("And your total elements are: %d\n", element);
    return 0;
}