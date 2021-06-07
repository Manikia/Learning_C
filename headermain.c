#include "headerfiles.c"

//calculates tomorrows date
Date date (Date today)
{
    Date tomorrow = today;
    if(today.day != numberOfDays(today))
        setDate(tomorrow, today.month, today.day + 1, today.year);
    else if(today.month == December)
        setDate(tomorrow, January, 1, today.year + 1);
    else
        setDate(tomorrow, today.month + 1, 1, today.year);

    return tomorrow;
}
