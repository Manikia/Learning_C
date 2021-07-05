#include <stdio.h>
//writes a single char to file, similar to getc()
int main()
{
    char ch = '\0';
    FILE *fp = NULL;
    //we can use standard out for put c instead of line above

    //open up the file
    if(fp = fopen("someFile.c", "rw"))
    {
        ch = getc(fp);

        while(ch != EOF) //while its not the end of the file continue reading
        {
            //puts each charcter in ch so it can record it
            putc(ch, fp);
            ch = getc(fp);
        }
        fclose(fp);
    }
    return 0;
}