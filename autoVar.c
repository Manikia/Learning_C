#include <stdio.h>

int main()
{
    int x;  //local variable

    int m;
    scanf("%d", &m);
    {
        int i; //this means m and i can be used in the braces
        int n = 5;

        for(i = m; i < n; i++) //i is only visible inside the braces bc its local
        //you cant use i outside of the block
        {

        }
    }

    return 0;
}

int func_name()
{
    int y; //local variable, these are also auto variables. we only 
        //include auto to let them know that we dont want to change it

    return y;
}