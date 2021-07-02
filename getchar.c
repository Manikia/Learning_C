#include <stdio.h>

//THIS SHOWS HOW TO PASS AND READ AND WRITE A FILE

// int getc(FILE *stream);
// //gets file pointer as an argument
// //returns an int and gets a file string, so its going to read single characters

int main(int argc, char *argv[])
//argc means it counts the amount of arguments being put in the prompt
//then argv means it will assign arguments
//from prompt to an aeeay so we can call them by their names by an array of it

{

    FILE *fp = NULL;
    char c = '\0';

    fp = fopen("myFile.txt", "r"); //opening existing file

    if(fp == NULL)
    {
        printf("Couldnt open %s", argv[1]); //checks if the file exists
        return 1;
    }
    printf("Reading the file %s\n", argv[1]);

    while(1)
    {
        c = fgetc(fp);

        if(c = EOF)
            break;

        printf("%c\n", c);
    }

    printf("Closing the file %s", argv[1]);
    fclose(fp);
    return 0;

        // int ch = 0;
    // while((ch  = getchar()) != EOF) //since getechar gets user input and returns it
    // //with this one it will print and return until u do ctrlD to let it know u wanna end
    // {
    //     printf("%c\n", ch);
    // }
    // printf("%c\n", getchar());
    // //it literally gets an input and returns the input but only as an stdin
    // //getchar also gets EOF checking
}