// void array(int size)
// {
//     char alpha[size];
//     //alpha is going to initialize the alphabet to begin at A
//     int x = 0;

//     while (x < size)
//     {
//         alpha[x] = 'B' + x;
//         //where it initializes aplha at A
//         printf("Alphais %c\n", alpha[x]);
//         //as we increase numbers the letters
//         //change and we increment the letters too
//         x++;
//     }
// }
// int main()
// {
//     //we are passing 5, 20, and 9 in the array function
//     array(5);
//     array(20);
//     array(9);

//     return 0;
// }

//if we want to create a 2D argument we do below
int sum2d(int rows, int columns, int array[rows][columns]){
//rows and columns are the dimensions for array, they always have to
//be declared before the array so it knows what the rows and columns are
int r;
int c;
int tot = 0;

    for (r = 0; r < rows; r++) 
    {
        for (c = 0; c < columns; c++)
        {
            tot += array[r][c];
        }
        return tot;
    }
}

    int main()
    {
        array(5);
        array(20);
        array(9);

        return 0;
    }