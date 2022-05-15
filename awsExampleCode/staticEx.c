#include <stdio.h>

static int fun(){
    static int count = 0;
    //if we doint do static it will reinitialize as 0 but if we do static it will keep the new initialized var, thats why its in a block of code
    int localVar = 0;

    printf("automatic = %d, static = %d\n", localVar, count);

    count++;
    localVar++;
    return count;
}

int main()
{
    for(int i = 0; i < 5; i++)
    {
    fun();
    }

    return 1;
}