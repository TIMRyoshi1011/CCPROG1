// 1. Write a program that accepts a three-digit integer input and displays each of the digits in that number.
#include <stdio.h>

int main() {

    int num, left, mid, right;
   
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    left = num / 100;
    mid = (num / 10) % 10;
    right = num % 10;

    printf("Left: %d", left);
    printf("\nMiddle: %d", mid);
    printf("\nRight: %d", right);

    return 0;
}

// 2. Write a program that asks for a three-digit integer input and displays the digits of the number in reverse order.
#include <stdio.h>

int main() {

    int num, left, mid, right;
    
    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    left = num / 100;
    mid = (num / 10) % 10;
    right = num % 10;

    printf("Reversed Number: %d%d%d", right, mid, left);

    return 0;
}

// 4. Write a program that asks the user to enter the radius of a circle and displays the area of that circle.
#include <stdio.h>
#define pi 3.1415926535

int main() {

    int rad, area;
   
    printf("Enter radius: ");
    scanf("%d", &rad);

    area = pi * rad * rad;

    printf("Area: %d", area);

    return 0;
}

// 5. Write a program that displays distance in miles to its kilometer equivalent.
#include <stdio.h>

int main() {

    float m, km;
   
    printf("Enter miles: ");
    scanf("%f", &m);

    km = m / 0.62137119;

    printf("Kilometer: %.2f", km);

    return 0;
}

// 6. Write a program that displays the area of a triangle given its base and height.
#include <stdio.h>

int main() {

    int b, h, a;
   
    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter height: ");
    scanf("%d", &h);

    a = (b * h) / 2;

    printf("Area: %d", a);

    return 0;
}

// 7. Write a program that converts a temperature value in Fahrenheit measure to its equivalent value in Celsius measure.
#include <stdio.h>

int main() {

    int f, c;
   
    printf("Enter Farenheit: ");
    scanf("%d", &f);

    c = (f - 32) * 5 / 9;

    printf("Celcius: %d", c);

    return 0;
}

// 8. Workers at a particular company were given a 15.5% salary increase. Moreover, the increase was effective 2 months ago. Write a program that takes the employee’s old salary 
// as input and displays the amount of retroactive pay (the increase that was not given for the past 2 months) and the employee’s new salary.
#include <stdio.h>

int main() {

    int salary, pay, new;
   
    printf("Enter Salary: ");
    scanf("%d", &salary);

    pay = salary * 0.155;
    new = salary + pay;

    printf("Retroactive pay: %d", pay);
    printf("\nNew Salary: %d", new);

    return 0;
}

// 9. A group of young men agreed to purchase a gift for their boss and agreed to share the cost.  In addition, they agreed to continue their plan even if at least one of 
// them dropped out.

// Write a program that accepts as input the number of people in the group, the cost of the gift, the number of men who dropped out (assume 0 to one less that the number of 
// people in the group).  Display the original contribution per person (no one dropped out), number of persons who dropped out, additional contribution per person 
// (because of those who dropped out), and the final amount that each will have to contribute toward the purchase of the gift.
#include <stdio.h>

int main() {

    int no, drop, cost, initial, final, new, add;
    
    printf("Enter Number of people: ");
    scanf("%d", &no);
    printf("Enter Cost of gift: ");
    scanf("%d", &cost);
    printf("Enter Number of people dropped out: ");
    scanf("%d", &drop);

    initial = cost / no;
    new = no - drop;
    add = no % new;
    final = cost / new;

    printf("\nOriginal contribution per person: %d", initial);
    printf("\nNumber of people dropped out: %d", drop);
    printf("\nAdditional contribution: %d", add);
    printf("\nFinal amount of contribution: %d", final);

    return 0;
}
