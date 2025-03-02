#include <stdio.h>  
#include <conio.h>  
#include <string.h>  
void main()  
{  
    char str[] = "Array";
    char temp;
    int size = sizeof(str);
    int otherSize = size-1;

    for (int i = 0; i <otherSize; i++)  
    {  
        temp = str[i];  
        str[i] = str[otherSize];  
        str[otherSize] = temp;  
        otherSize--;  
    }  
    printf (" %s ",  str);  
}  