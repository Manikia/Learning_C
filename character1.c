#include <stdio.h>

//READ STNDIN
int main()
{
    char ch = '\0'; //the 0 means a null character

        //getc has EOF
    ch = getc(stdin); //stdin reads the character standard input 
    //getc reads user while getchar only reads from standardinput

    printf("Read in character %c\n", ch); //then it returns the input here
    return 0;
}