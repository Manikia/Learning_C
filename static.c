#include <stdio.h>

int fun() {
    static int count = 0;
    //static doesnt reinitialize, it retains what it previously
    //had and continues the process
    

    count++;
    return count;
}

int main()
{
    printf("%d ", fun());
    printf("%d ", fun());

    return 1;
}