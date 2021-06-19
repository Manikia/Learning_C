//const means it will be like a tuple variable
//meaning it wont change anymore after initializing
//its a compiler optimization and is only read-only
#include <stdio.h>

int main()
{
    const double pi = 3.141592653589793;

    const int days[12] = {31, 28, 30, ...};
    //the numbers in the array above wont be able to change anymore

    typedef const int zip;
    const zip q = 8;
    //these two above works bc it isnt using it
    //its only initializing

    float *const pt;
    //the above is saying that pt is a constant pointer
    

    return 0;
}