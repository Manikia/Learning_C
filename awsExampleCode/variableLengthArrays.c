#include <stdio.h>

int main()
{
    size_t size = 0;

    //we can also create 2d arrays
    size_t rows = 0;
    size_t columns = 0;

    printf("Enter the number of rows you want to store:");
    scanf("%zd", &rows); //%zd is used for when we use size_t
    printf("Enter the number of columns you want to store:");
    scanf("%zd", &columns); //%zd is used for when we use size_t
    
    float values[size];
    float beans[rows][columns];

    printf("%f", &beans);
    return 1;
}