#include <stdio.h>
#include <stdlib.h>

//no limit on size
//slower than stacks
//memory is put everywhere
//variables can be resized

//to create heaps we have to work with pointers so everything
//in this program is in pointers

double *multiplyByTwo (double *input)
{
    double *twice = malloc(sizeof(double));
    //creating a pointer of twice that has memory being allocated
    //then after in the main, the free deallocates it
    //allocating means it distributes memory to the size desired
    //so from what i see it might take more space than needed
    //but the free after will deallocate it which will trim the unecessary space
    //and will only take space that is needed

    *twice = *input *2.0; 
    //initializing pointer input to twice
    //my input is how it was in stacks where itsthe salary
    //but its referenced as input and its just going to be calculated 
    //the same
    return twice;
}

int main (int arc, char *argv[])
{
    int *age = malloc(sizeof(int));
    *age = 30;
    //initializing the pointer of malloc
    //meanign we are telling the compiler to allocate memory
    //tp the equal size of the integer (which was stated earlier)
    //so it takes the full on size of an int w malloc

    double *salary = malloc(sizeof(double));
    *salary = 12345.67;
    //allocates memory w malloc the same here but with double

    double *myList = malloc (3 * sizeof(double));
    //setting my list instead of just a double its an array double
    //with the size of 3 thats why we did 3 *
    myList[0] = 1.2;
    myList[1] = 2.3;
    myList[2] = 3.4;

    double *twiceSalary = multiplyByTwo(salary);

    free(age);
    free(salary);
    free(myList);
    free(twiceSalary);

}