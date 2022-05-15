//extern int i;
//the above is our external variable from externalVar.c
//extern char text[][50];
//if we have an external double array we can leave the first one blank but the other one we have to fill in
#include <stdio.h>
int count  = 5;
extern int count;
static int testStatic = 50;
void write_extern(void)
{
    printf("count is %d\n", count);
}

// void foo(void)
// {
//     extern int i;
//     i = 100;
//     //we are changing the external variable to show how its accessed
// }
