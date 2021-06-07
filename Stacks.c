#include <stdlib.h> //this is for the return
#include <ctype.h>  //when you use isupper
#include <string.h> //defines variable types
#include <stdio.h> //gets input and output

//for stacks there are limits to the sizes
//can only be used for local variables
//but variables cant be resized

double multiplyByTwo (double input)
{
    double twice = input * 2.0;
    return twice;
}
//depending where you place your function, it affects the output

int main(int argc, char *argv[])
{
    int age = 30;
    double salary = 12345.67;
    double myList[3] = {1.2, 2.3, 3.4};

    printf("Double your salary is %.3f\n", multiplyByTwo(salary));
    //the return on above function returns input * 2
    //and this print is grabbing that return from the function
    //multipleByTwo and is initializing salary as input since its in this function
    //then its calculating it by what was returned in the previous function and 
    //printing out the result with salary calculated by 2.0
    //which gives us our answer

    return EXIT_SUCCESS;
}

//simplified version
double multiplyByTwo (double salary)
{
    double twice = salary * 2.0;
    return twice;
}
//depending where you place your function, it affects the output

int main()
{
    double salary = 12345.67;

    printf("Double your salary is %.3f\n", multiplyByTwo(salary));
    //above prints doubled salary but calls function inside
    //output
    return EXIT_SUCCESS;
}