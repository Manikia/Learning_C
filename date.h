// #ifndef MAIN_H_INCLUDED
// #define MAIN_H_UNCLUDED

#include <stdbool.h>

enum kMonth{January=1, Februrary, March, April, May, June, July, August, Septemeber, October, November, December};
//enum assigns names to integral constants based on what the user defined

//if we do like enum kMonth date = (something) that means that they 'something' we are assigning it to will be of a type inside of our enum since we are defining it as enum kMonth, think of it as if we do int age, we set it as an int but in this case we do enum kMonth which we define our variable to one of the months
//if we dont define enums then it will be automatically defined at 0 as starting point - also they are local scopes

enum kDay{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

struct date //struct helps us keep track of data of the same type 
{
    enum kMonth month;
    enum kDay day;
    int year;
};

typedef struct date Date; //allows users to make alternative names for the primitive types (int will now be Date in this case)

Date dateUpdate (Date today);
int numberOfDays (Date d);
bool isLeapYear (Date d);

#define setDate(s,mm,dd,yy)    s = (Date) {mm, dd, yy}
//the above is called a macro, its used like a function but in this case we are setting the date as months, days, years, etc

extern Date todaysDate;
//since we are gonna use this Date in another file we set it as 'extern'
