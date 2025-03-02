#include <stdio.h>
#include <string.h>

int max(int num1, int num2, int num3);

int max(int num1, int num2, int num3)
{
    int result; //find which number is bigger

    if(num1 < num2)
    {
        if(num2 > num3)
            result = num2;
        else if (num2 < num3)
            result = num3;
    }
    else
    {
        if(num1 > num3)
            result = num1;
        else if (num1 < num3)
            result = num3;
    }

return result;
}

    int main()
    {
        printf("The bigger number is: %d", max(10, 1223, 9));

        return 0;
    }