#include <stdio.h>

void displayLongDate (int month, int day, int year){
    printf("%d %d, %d", month, day, year);
}
//displays the given month, day, and year as Month in words followed by day, followed by year, and places the cursor at the start of the next line.  Example if the value of month = 2, day = 4, year = 2019, the displayed text will be February 4, 2019.

int isLeap (int year) {

}
//determines whether the given year is a leap year or not.  The function returns 1 if the given year is a leap year, and returns 0 otherwise.

int isAfter (int mmddyyyy1, int mmddyyyy2) {

}
//determines whether the date mmddyyyy1 is after the date mmddyyyy2.  The functions returns 1 if it is after, and 0 otherwise.

int getMonth (int mmddyyyy) {
    return mmddyyyy / 10 / 10 / 10 / 10 / 10 / 10;
}
//returns the month value extracted from the given date mmddyyyy.

int getDay (int mmddyyyy) {
    return mmddyyyy % 1000000 / 10 / 10 / 10 / 10;
}
//returns the day value extracted from the given date mmddyyyy.

int getYear (int mmddyyyy) {
    return mmddyyyy % 10000;
}
//returns the year value extracted from the given date mmddyyyy.



int main ()
{
    int nDateOne;
    int nDateTwo;
    int nMonth, nDay, nYear;  /* for storing the month, day and year values of the input */
    int nIsLeap;              /* for storing if the year value is leap or not */
    int nIsAfter;             /* for storing if the second date input comes after the first date input*/

    printf ("Enter first date: ");
    scanf ("%d", &nDateOne);
    printf ("Enter second date: ");
    scanf ("%d", &nDateTwo);

    /* call the function to extract the year value from the first date input */
    
    getYear(nDateOne);



    /* call the function to determine if the extracted year value is a leap year */
    
isLeap(nIsLeap);


    printf ("%d is leap:  %d\n", nYear, nIsLeap);

    /* call the function to determine whether the second date input comes after the first date input */
    

    /* call the functions to extract the month, and day values of the first input */
    
getMonth(nMonth);


    
getDay(nDay);


    /* call the function to display the first date in Month in words, day and year format */
    
displayLongDate(nMonth, nDay, nYear);



    /* call the functions to extract the month, day and year values of the second input */
    
getMonth(nMonth);


    
getDay(nDay);


    
getYear(nYear);


    /* call the function to display the second date in Month in words, day and year format */
    
displayLongDate(nMonth, nDay, nYear);



    return 0;
}