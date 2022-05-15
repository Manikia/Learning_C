#include <stdio.h>

int main()
{
     int x = 15;
    //we cant create a pointer when we do register
    register int *a = &x;
    //with a pointer we can access the address when we define it with register but if we set the variable as register it wont work bc you cant get the register variable of it self
    //C doesnt allow multiple storage class specifier variables
    //register cant be global

    for(x = 0; x <= 15; x++)
    {
        printf("\n%d", *a);
    }
    return 1;
}