extern int i; //extern lets you have access to the variable in externalVar.c

void foo (void)
{
    i = 100;
    //in here we change our i to be 100 instead of 5 from the previous file
}