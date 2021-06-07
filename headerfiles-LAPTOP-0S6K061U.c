#include <stdbool.h>

enum kMonth { 
    January = 1, 
    February, 
    March, 
    April, 
    May, 
    June,
    July, 
    August, 
    September, 
    October, 
    November, 
    December 
};

//enum assigns names to a number and since we began at 1 its gonna continue
//all the way until the last word on the list while numbering its

//print(kMonth[2]); //should print Feb

enum kDay
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};
//for the days since i didnt initialize it will begin with
//0 and move forward by adding on so like : 0, 1, 2 ..etc

struct date
{
    enum kMonth month;
    enum kDay day;
    int year;
};

//on above im initializing my enum to variable names

typedef struct date Date;

Date dateUpdate(Date today);
int numberOfDays(Date d);
bool isLeapYear(Date d);

//below is functions for the dates

#define setDate(s, mm, dd, yy) s = (Date) {mm, dd, yy}
//above is macro which im using to define the date
//macros are used to define a preprocessor like we used
//#define SIZE and such

extern Date todaysDate; //this defines the source files
