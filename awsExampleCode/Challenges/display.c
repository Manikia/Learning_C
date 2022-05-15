#include <stdio.h>

extern int globalVar;
extern void display(void)
{
    printf("%d", globalVar + 1);
}

// shares a var among two files
// the file should have a global variable used as a loop counter 
// also the main function will use the global variable to iterate through the loop 5 times
// inside the loop it will print how its referencing another file
// the display function should take in no parameters