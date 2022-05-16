#include <stdio.h>

#define peach int //peach now is defined and carries int

#define int_pointer int * //no semicolon

int_pointer chalk, cheese;  //in here with define it will only define the first one it sees as the pointer but not the next one but with typedef it will create everything its defining with poitner not only the first

typedef char * char_pointer;
char_pointer Bently, Rolls_Royce;

unsigned peach i;

typedef int banana;

int main()
{

    return 1;
}