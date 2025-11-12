// 1. 
#include <stdio.h>

int main() {

    int age;
    float price, less, finalprice;

    printf("Enter total price: ");
    scanf("%f", &price);

    printf("How old are you? ");
    scanf("%d", &age);

    if (age >= 13 && age <= 19) {
        less = price * 0.10;
        finalprice = price - less;
        printf("\n");
        printf("Price: \t\t\t %7.2f \n", price);
        printf("Less: \t\t\t %7.2f \n", less);
        printf("================================ \n");
        printf("Final Sale Price: \t %7.2f \n", finalprice);
    }

    else {
        printf("\n");
        printf("Price: \t\t\t %7.2f \n", price);
        printf("================================ \n");
        printf("Final Sale Price: \t %7.2f \n", price);
    }

    return 0;
}

// 2. 
#include <stdio.h>

int main () {

    int time, hour, min;

    printf("Enter time in military format: ");
    scanf("%d", &time);

    hour = time / 100;
    min = time % 100;

    if (time > 2359 || time < 0000)
        printf("\nINVALID time entered");

    else {

        if (hour >= 0 && hour <= 23 && min >= 0 && min <= 59) {

            if (hour == 0 && hour < 8 || hour > 0 && hour < 8) 
                printf("\nYou're early today! Good Morning!");

            else if (hour >= 8 && hour <= 11)
            printf("\nGood Morning!");

            else if (hour >= 12 && hour < 18) 
                printf("\nGood Afternoon!");

            else {
                printf("\nGood Evening!");
            }

        }

        else
            printf("\nINVALID time entered");
        
    }
    
    return 0;
}

// 3.
#include <stdio.h>

int main () {

    int day;

    printf("Enter number: ");
    scanf("%d", &day);

    if (day == 1)
        printf("\nMonday");

    else if (day == 2)
        printf("\nTuesday");

    else if (day == 3)
        printf("\nWednesday");

    else if (day == 4)
        printf("\nThursday");

    else if (day == 5)
        printf("\nFriday");

    else if (day == 6)
        printf("\nSaturday");

    else if (day == 7)
        printf("\nSunday");

    else 
        printf("\nInvalid entry");
    
    return 0;
}
