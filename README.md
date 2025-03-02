## Udemy Course notes
- to run we do
gcc test.c -o test
./test

- to install we go
https://nuwen.net/mingw.html
then we go to directory under mingG something and then go to bin and take that path and put it in env and then from there we close VS code and retry and it should all work

- doing gcc test.c test1.c test2.c -o runcompiles all of them and if theres error it shows it for each seperate file
- makefiles help compile large files in c

- using a variable from one file to another we do 'extern int moveNumber;' and it wont be restricted on one file on the other hand
- we use static if we are locally using our files
- if no other will have access
    we can do static int moveNumber = 0 which would make it restricted only inside the one file

- creating header files we do the include
header types `stdbool.h`
- Memory Types
    - static, stack, and heap
- Stack
    - Last in First out
    - As the stack grows it is pushed into the stack but once we free them from the stack they are deleted
    - once that stack variable is deleted the region of memory is avilable for other stack variables (pop)
    - if too much information goes into the stack then the stack will overflow (usually when using recursion)
- Heap:
    - Opposite from stack and has a hierarchical structure unline stack where its linear
- use heap when using large memory and when we need a variable that is global
- heap can also change its size as needed
- Use stack when we are doing small variables and is local
### Auto storage class
- create automatic variables in storage
- only exist when needed created when used and killed when finished
### Syntax
- for auto syntax we do: storage_class var_data_type var_name;
    - this indicated that the double variables x and y are automatic local variables and only exist in the body of a function in where its declared
```c
    auto double x, y;
```
[Example Code](./awsExampleCode/autoVar.c)
### External Variables
- can be used in different files 
- tells us its defined somewhere else not in the same block
- this is different since its a global variable that is visible to all program files
- if we want to use the variable that is extern we have to set it as extern
```c
    extern int moveNumber = 0;
    //or
    int moveNumber;
    //w this we can access this int in any file if its initialized at the top of the file
```
- in order to use this we have to define it as a global variable or the compiler will wonder where it is and where its been initialized
[Example Code](./awsExampleCode/externalVar.c)

### Static
- static is the opposite of auto variables
- it can be used in local, global and functions
- when applying to to global variables it will be restricted to only the file that it can created in
- when applying to functions, the function set as static can only be called from within the file its set at
- static are only locally scoped 
[Example Code](./awsExampleCode/staticEx.c)

- statics are only initialized once 
- static variables are initialized at 0 but with automatic variables they dont have a default initial value
- static variables are allocated memory on heap not on stack
### Static vs External
- static means its restricted to only the file or function its initialized in but with extern it can be accessable to any file or method
### Static and Structures
- statics shouldnt be defined inside structures
- its possible to have whole structure as static
- a structure we can define different things in one 'block'
### Register
- Register is a data holding place that is part of the computer processor
- Used to define local variables that are stored in register instead of RAM
    - this makes the use of the variables fast so its better to use if we are using a variable a lot of times and more often
### Advanced Data Types
Define Preprocessor
- Its code that runs before the compiler
- Usually put insude the beginning of the program and ionly used w uppercase and underscores
- We define as a hard coded defintion
- like if we do #define YES 1 it will mean that whenever we write YES it will always have the value of 1 if we write YES anywhere
- this isnt defined as a variable and instead is a special syntax
- Usually is used to make programs more readible and extendable
### Type defs
- Allows creating a name for an existing type
```c Ex: 
    typedef int Counter
    //now Counter can be used instead of int to define a variable
    Counter n, j;
```
[Example Code](./awsExampleCode/typedef.c)
- the reason why typedefs are used is for readability
- in addition, using numbers instead of initializing a vairable is bad and called a magic number
- Using typedefs also create the program more portable
    - For example if we move it to another language where it needs const instead of int initializer then we use the typewdef we globally used to change that one line instead of going everywhere to change our int to const
- We can also user define to initialize our new scope 
Ex:
```c
 #define Counter int; //will have the same result as using typedef in previous statement
```
- When we use #symbol we automatically know that its a preprocessor because of its format and since its a preprocessor the compiler has no interaction with it
- typedef doesnt define a new type only define name
[Example Code](./awsExampleCode/typedef2.c)
- use typedefs when using: array combination, structs, pointers, or functions
- it can also be used for casting since sometimes it has a complicated name
Ex:
```c
    typedef int (*ptr_to_int_fun)(void);
    char * p;
    ....= (ptr_to_int_fun) p;
```
### Variable Length Arrays
- length and size is defined by an expression
- We can work with arrays without a constant size
- its still a fixed size but we can use an expression instead
    - size_t: unsigned int type of at least 16 bits
    - sizeof: returns size of what we are looking for
    - size_type: int datatype large enough to represent any possible string size

[Example Code](./awsExampleCode/variableLengthArrays.c)

[Example Code](./awsExampleCode/variableLengthArrays2.c)

[Example Code](./awsExampleCode/variableLengthArrays3.c)

- Avoid VLA in terms of function parameters, instead use pointers

### Flexible Array Members
- a flexible array is defined by specifying empty square brackets []
```c
    struct s{
        int arraySize;
        int array[]; //this is the flexible array member
    };
```
[Example Code](./awsExampleCode/flexibleArray.c)
- flexible arrays can only be defined as the last member of a struct
- we can only contain one flexible array and it cannot be alone, it needs one or more fixed members
- the flexible also cant be part of another struct, in addition it cant be statically initialized, it has to be allocated dynamically and the sizes cannot be fixed at compile time 
- Dynamic memory allocation is the process of assigning the memory space during the execution time or the run time
- It basically makes space for something we dont know how big it will be

### Complex Number types
- its in the form of a+bi where a and b are real numbers but bi is an imaginery bc its w an i
- There are different ways we can create complex numbers, these include:
    - `Modulus`: complex number where a+bi is sqrt(a2+b2)
    - `Equality`: the complex numbers a+bi and c+di are equal if equals c and b equals d
    - `Addition`: the sum of the complex numbers in a+bi and c+di is (a+c)+(b+d)i
    - `Multiplication`: the product of the complex numbers a+bi and c+di is (ac-bd)+(ad+bc)i
    - `Division`: The result of dividing the complex number a+bi by c+di as (ac+bd)/(c2+d2)+((bc-ad)/(c2+d2))i
    - `Conjugate`: the conjugate of a complex number of a+bi is a-bi
- There are different data types for the imaginary types
```c
float _Complex
//stores complex number with real and imaginery as type float
double _Complex
//stores complex with real and imaginery parts as double
long double _Complex
//stores complex with real and imaginery parts as long double
float _Imaginery
//stores Imaginery as type float
double _Imaginery
//stores  Imaginery as type double
long double _Imaginery
//stores  Imaginery as type long double
```
#### Declaring Complex Numbers
```c
    double _Complex z1; //real and imaginery are type double
    //this is used to avoid breaking existing code
    //to include this we do complex.h
    //doing this we can define as:
    double complex z1; //without underscore would work
    //using _Imaginery will only be used to define imaginary numbers:
    double imaginery ix = 2.4*I;
```
- casting an imaginery to a complex type returns a 0 as the real part and the complex as the imaginary
- so casting a value of an imaginary to a real type other than _Bool returns 0

### Complex Numbres:
- we import by: `#include <complex.h>`

EX:

        z = a+bi
        //a is the real number
        //b is the imaginary number
        //i is the unit defined as i^2 = -1

File: [Example Complex](./complexEx.c)

- `creal(z)`: Returns the real part of a complex number z.
- `cimag(z)`: Returns the imaginary part of a complex number z.
- `cabs(z)`: Returns the magnitude (absolute value) of a complex number z.
- `carg(z)`: Returns the phase (argument) of a complex number z in radians.
- `cexp(z)`: Returns the exponential of a complex number z.
- `clog(z)`: Returns the natural logarithm of a complex number z.
- `cconj(z)`: Returns the complex conjugate of a complex number z.







## Book Notes
 - adding '\0' after inserting a string in C shows that the string is done if the string has an array bigger than what defined
 - example
 ```c
        Month[0] = 'M';
        Month[1] = 'a';
        Month[2] = 'r';
        Month[3] = 'c';
        Month[4] = 'h';
        Month[5] = '\0'; //You must add this
```
 - we user %s to print out our string
 - Both do the same thing:
```c
    char month[8] = "January";
    char month[] = "January";
```
- we can use strcpy() to assign a variable to add into an array
- example
```c
    char <variableName>[<size>];
    strcpy(<variableName>, <newVariable>);
```
- `stdio.h` is used when we user printf 
- if we do anything including strings like strcpy we have to include `string.h`
- when using define we can initialize a constact as a whole 
```c
    #define AGELIMIT 21
    #define MYNAME "Paula Holt"
    #define PI 3.14159
        //if we use it somewhere else like here we do
    if(employeeAge < AGELIMIT)
```
- if I do any of the above but I want to create its own file reference I can do that by creating file as a .h to show its a header file 
- % is used to get the remainder of something
### Operations
![alt text](./images/CompoundOperator.png)

- Typecasts temporarily change datatype from one variable to another
Example
```c
    int age = 6;
    (float)age;
    //when printed it will show age as a float instead of int
```
- Something to keep in mind is that it doesnt change the data type permanently its only changed temporarily
- When we decrememnt it matters where we put the + and - sign
- For example if we do `count--` then it will decrement in a postfix (increment or decrement, whichever im using) matter after the loop has run once but if we do `--count` then it will decrememnt right before the loop begins

```c
    //this code increments i after multiplying i and j and storing in n
    int i = 2, j = 5, n;
    n = i++ * j; //puts 10 in n and 3 in i postfix - does after
    n = ++i * j; //puts 15 in n since we did it before and now i is 3 prefix - does before
```
- getting the size of something we do `sizeof()`
- when we get the size of a string for example, it will always include a null zero in the size 

```c
    char name[] = "Ruth Claire";
    int i = 7;
    printf("The size of i is %d.\n", sizeof(i)); //returns 4
    printf("The size of name is %d.\n", sizeof(name)); //returns 12 bc of null zero
```

- when using while loops it will loop as long as its true
### Diffference from while and if statements
![alt text](./images/loops.png)

- When doing do while loops it will always execute once first and then run through the loop after: [Example Code](./bookSourceCode/bookDoWhile.c)

- switch format:
```c
    switch (expression)
    {
    case (expression1): { one or more C statements; }
    case (expression2): { one or more C statements; }
    case (expression3): { one or more C statements; }
    // This would keep going for however many case statements to test
    default: { one or more C statements; }
```
- File example for [SWITCH EXAMPLE](./bookSourceCode/bookSwitch.c)

- we can use getchar() and putchar() to get the characters and add characters to what we are looking at. if we do something like below it will print each char at a time
- the below will print each character one at a time since getchar only gets one char but since there is a loop it will print until iuts done and it knows its done bc we got the length of the msg string and it will stop until it has all numbered strings outputted
```c
    #include <stdio.h>
    #include <string.h>
    int main()
    {
        int i;
        char msg[] = "C is fun";
        for (i = 0; i < strlen(msg); i++)
            {
            putchar(msg[i]); //Outputs a single character
            }
        putchar('\n'); // One line break after the loop is done.
        return(0);
    }
```
- we can use getchar() to get the character inputting by the keyboard and store them to a string as shown below:

```c
    #include <stdio.h>
    #include <string.h>
    int main()
    {
        int i;
        char msg[25];
        printf("Type up to 25 characters and then press Enter...\n");
        for (i = 0; i < 25; i++) //gets 25 char input but it can be less if it wants to
        {
            msg[i] = getchar(); //this is grabbing all the characters that we are inputting and putting it in msg[i] which means that it is adding it in every position until there is none available then it will go and in the if statement its going to check if it used everything if not itwill decrease the size then itll go to putchar so that it can create a new linke of it and then output the new string in the new loop to grab each char
            if (msg[i] == '\n')
            {
                i--;
                break;
            }
            }
                putchar('\n'); // One line break after the loop is done.
            for (; i >= 0; i--)
            {
                putchar(msg[i]);
        }
        putchar('\n');
    return(0);
    }
```
- getch() has no buffer like getchar() does so when u start entering stuff it takes it and sets it and if u backspace it wont work since there is no buffer, but w getchar() it works. Another difference is that with getchar() it waits until enter is done so that it knows its the end while getch() doesnt wait

- isalpha() checks if the input is a letter from a-z both upper and lowercase
- isdigit() checks if the input is a digit from 0-9

- for this example below it shows how if we were to create a password we will restrict it to have at least one upper, lower, and digit in the password and we do it as shown below:

```c
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int i;
    int hasUpper, hasLower, hasDigit;
    char user[25], password[25];
    // Initialize all three test variables to 0 i.e. false
    hasUpper = hasLower = hasDigit = 0;
    printf("What is your username? ");
    scanf(" %s", user);
    printf("Please create a password: ");
    scanf(" %s", password);
    // This loop goes through each character of the password and
    // tests
    // whether it is a digit, upppercase letter, then lowercase
    // letter.
        for (i = 0; i < strlen(password) ; i++ )
        {
            if (isdigit(password[i]))
            {
                hasDigit = 1;
                continue;
            }
            if (isupper(password[i]))
            {
                hasUpper = 1;
                continue;
            }
            if (islower(password[i]))
            {
                hasLower = 1;
            }
            }
        /* The if portion will only execute if all three variables
        below are 1, and the variables will only equal 1 if the appropriate
        characters were each found */
        if ((hasDigit) && (hasUpper) && (hasLower))

        {
            printf("\n\nExcellent work, %s,\n", user);
            printf("Your password has upper and lowercase ");
            printf("letters and a number.");

        } else
        {
            printf("\n\nYou should consider a new password, %s,\n", user);
            printf("One that uses upper and lowercase letters ");
            printf("and a number.");
        }
    return(0);
}
```

- online lesson

```c
#include <stdio.h>
#include <string.h>

void sayHi(char name[]); //declare here before we run

    int main()
    {
       //array
       int thing[] = {};
        //creating a string we can do
        char phrase[] = "testing";

        //to get an input parameter we do 
        sayHi(phrase);
        return(0);
    }

    void sayHi(char name[])
    {
        printf("Hello %s", name); //this is saying that we are getting a parameter of name and we set the name when we call it in the main method thats why it has mike
    }
    ```
- return method
```c
#include <stdio.h>
#include <string.h>

double cube(double num);

double cube (double num)
{
    double result = num*num*num;
    return result;
}

    int main()
    {
        printf("Answer: %f", cube(3.0));
        return 0;
    }
```

- structs we can store different datatypes in one area
- 