#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define int_pointer int *
int_pointer chalk, cheese;
//same as int * chalk, cheese

typedef char *char_ptr;
char_ptr Bently, Rolls_Royce;
//both will be pointers

#define peach int
unsigned peach i;

typedef int banana;

//unsigned banana i;
//we cant do the above bc peaches already has i

int main(void)
{
    typedef int counter;

    counter y = 1, x = 12;

    printf("%d\n", y);
    printf("%d\n", x);
    return EXIT_SUCCESS;
}


