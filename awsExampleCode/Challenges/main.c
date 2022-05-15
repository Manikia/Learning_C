#include <stdio.h>
#include <stdlib.h>
#include "display.c"

int globalVar;
void display();

int main()
{

    for(globalVar = 0; globalVar < 5; globalVar++)
    {
        display();
    }
    return 0;
}

// shares a var among two files
// the file should have a global variable used as a loop counter 
// also the main function will use the global variable to iterate through the loop 5 times
// inside the loop it will print how its referencing another file
// the display function should take in no parameters