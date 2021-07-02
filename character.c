#include <stdio.h>

//THIS SHOWS HOW TO PASS AND READ AND WRITE A FILE

// int getc(FILE *stream);
// //gets file pointer as an argument
// //returns an int and gets a file string, so its going to read single characters


int main(){
    char ch = '\0'; //the 0 means a null character
    FILE *fp; //this is our file pointer

    //now we are going to open the file
    if(fp = fopen("someFile.c", "rw")) 
    //this is going to open the file
    //and what the rw means is that it will read and write in it
    {
        //getc has EOF
        ch = getc(fp); //this is going to read the first characters
        
        while(ch != EOF) //as long as it isnt the end continue reading
        {
            ch = getc(fp); //this is going to read each char after
        }
        fclose(fp); //we always need to close the file
    }
    return 0;
}