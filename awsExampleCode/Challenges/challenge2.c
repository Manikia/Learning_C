#include <stdio.h>

    

int sum(int num)
{
    //find sum of the number
    static int newNum;

    newNum = num + newNum;

    return newNum;
}

int main()
{
    printf("%d ", sum(25));
    printf("%d ", sum(15));
    printf("%d ", sum(30));
    
    return 0;
}

//Write a C program that finds the sum of vairous numbers, we cant pass any variables representing the running total to the sum() function
//only take sum of what we want to add not the final result
