#include <stdio.h>
#include "foo.c" //calls another file for function

int i = 5; //global variable

void foo(void); //calling the function

//%d takes in an integer value without a decimal
//while
//%i takes in integer value with decimal, hex, or octal

int main(void)
{
    printf("%i ", i);
    foo ();
    printf("%i \n", i);

    return 0;
}
