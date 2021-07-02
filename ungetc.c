#include <stdio.h>

// int ungetc(int ch, FILE * stream);
// //gets int first then a file name
int main()
{
    char ch = 0;
    //this while loop will go on forever until it touches a char since
    //its looking for only spaces but will break with a char
    while(isspace(ch = (char) getchar()));
    ungetc(ch, stdin);

    printf("char is %c\n", getchar());
    //so when it stops its going to print the last thing
    //since we know it will only end w a char
    return 0;
}