#include <stdio.h>

int main()
{
    int x; //local variable auto
    //we can put auto infront only if we want to let people know to not change it
    int m;
    scanf("%d", &m);
    {
        int i; //both m and i can be used inside the scan operation since they are in scope
        int n = 5;
        for(i = m; i < n; i++)
        {
            //now we know that inside of here i and n are in-scope 
            //if we try to redefine for example i it will give us a redefinition error or ir will hit the previous declaration
        }
    }

    return 0;
}

char *myFunction()
{
    char x[] = "apple"; //this is also a stack

    return x;
}

int func_name()
{
    int y; //another local (they are auto)



    return y;
}