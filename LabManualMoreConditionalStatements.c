#include <stdio.h>

int main ()
{
    int  x,y,z;
    
    x = 5; y = 5; z = 5;
    x = 2; y = 3;
    x = x * y + z; 
    printf("%d%d%d\n", x, y, z);
    if (y == z) printf("x%d\n", y);
    else if (y > z) printf("z%d\n", x);
    else printf("y%d\n", z);
    if (x > 10)
    { 
        y = x * 2 - z;
        if (y > 5)
        {
            printf("xyz");
            printf("\n");
            printf("%d", y);
            x = x + y;

            if (x < y) printf("today\n");
            else printf("tomorrow\n");
        }
        else printf("hi\n");
        z = z + 3;
    }
    else if ( x > y) printf("%d\n",x);

    if (z == y)
    {
        z = 1; y = 2; 
    }
    else if (x != y) z = z + 2;
    printf("%d %d %d\n", x, y, z);

    return 0;
}

/*
Problems:

Write a program that accepts four numbers from the user and displays the highest and the lowest. Assume that there are no duplicate values.

Write a program that asks if the user wants to compute for the perimeter or the area of a triangle. If the perimeter is selected, the program 
asks for the measures of the three sides and displays the perimeter. If the area is selected, the program asks for the measures of the base and 
height of the triangle and displays for the area.

A circular racetrack is composed of four portions: concrete, mud, sand, and asphalt. A car takes 30 seconds to cross the concrete, 55 seconds to cross the mud, 
47 seconds to cross the sand, and 38 seconds to cross the asphalt. Write a c program that asks for a positive TIME value in seconds and displays WHERE in the track 
the car is based on the given time. Assume that the race starts at the end of the asphalt just before the start of the concrete portion.

A company gives year-end bonus to its employees based on their completed years of service and their current salary using the following:
1 = 1% of salary 2 to 3 = 2% of salary 4 to 10 = 5% of salary more than 1 = 10% of salary Write a c program that displays the employee's year-end bonus.

Write a program that accepts a number from 1 to 999 and displays the equivalent Roman numeral for the given number.

Remaining .exe files:
8. If temperature < 15, TOO COLD, if > 32, TOO HOT, if between, COOL CLIMATE
9. Enter grade, if 4.0, output something, if not,  no output
13. Time from military format to standard format
*/