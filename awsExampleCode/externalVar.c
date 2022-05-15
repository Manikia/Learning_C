#include <stdio.h>
#include "foo.c" //we still have to call the file if we want to reference the extern int 

int count;
extern void write_extern(); //calling the function on another file

int main()
{
    count = 5;
    write_extern();
    
    printf("%d", testStatic);

    return 1;
}

// int i = 5;

// char text[255][25];

// void foo(void);

// int main (void)
// {
//     printf("%i ", i);
//     foo ();
//     printf("%i\n", i);

//     return 0;
// }