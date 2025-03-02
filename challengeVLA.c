#include <stdio.h>
#include <string.h>

void arrayReturn()
{
    int arraySize, x=0, input, sum = 0;

    //enter size array
    printf("Enter the size of the array to sum: ");
    scanf("%d", &arraySize);

    char array[arraySize];


    printf("Enter %d integers to sum ", arraySize);
    //create an array where you add the input in and then another array to read the array input and add them up

    while(x < arraySize)
    {
        scanf("%d", &input);
        array[x] = input;
        x++;
    }

    for (int i =  0; i < arraySize; i++)
    {
        sum = sum + array[i];
    }

    printf("Sum of array: %d", sum);
}

int main()
{
    arrayReturn();
    return 0;
}