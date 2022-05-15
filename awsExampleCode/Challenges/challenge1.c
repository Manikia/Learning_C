// Write a program that declares:
// 1. an int variable with block scope and temporary storage - correct
// 2. global double that is only accessible inside this file - correct
// 3. floal  var that is accessible everywhere - correct
// 4. register int variable - correct
// 5. a function that is only accessible with the file its defined - correct

#include <stdio.h>
static double globalDonlyAccessibleHere;  
extern float accessibleAnywhere;

static int onlyhere()
{

}

int main()
{
    int tempStorage;
    register int registerVar;


    return 1;
}