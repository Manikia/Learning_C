#include <stdio.h>

int sum2d (int rows, int cols, int array[rows][cols]) //array is VLA
{
    int r;
    int c;
    int tot = 0;
    int ar[r][c];

    for(r = 0; r< rows; r++)
    {
        for(c=0; c<cols; c++)
        {
            tot += ar[r][c];
        }
        return tot;
    }
}
//int sum2d (int rows, int cols, int array[*][*]); //array is VLA we can do this if our compiler is C99 or C11

int main()
{
    array(5); //telling it where to end in the alphabet
    array(20);
    array(9);

    return (0);
}