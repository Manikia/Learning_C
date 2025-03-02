#include <string.h>
#include <stdio.h>
//if we dont know the size of the array we have to use malloc to use dynamic memory allocation
//signed variable is for both positive and negatives but unsigned is only positives

void array (int size)
{
    char alpha[size];
    int x = 0;

    while (x < size)
    {
        alpha[x] = 'A' + x;
        printf("%c \n", alpha[x]);
        x++;
    }

}

int main ()
{
    array(5);
    array(2);

    return 0;
}