#include <stdio.h>

int main () {

    int time, hour, min;

    printf("Enter time in military format: ");
    scanf("%d", &time);

    hour = time / 100;
    min = time % 100;

    if (time > 2359 || time < 1000)
        printf("\nINVALID TIME");

    else {

        if (hour >= 0 && hour <= 23 && min >= 0 && min <= 59) {

            if (hour > 12 && hour < 24) {
                hour = hour - 12;
                printf("\nTime is %02d:%02dPM", hour, min);
            }

            else if (hour == 12) {
                printf("\nTime is %02d:%02dPM", hour, min);
            }

            else if (hour == 0) {
                hour = hour + 12;
                printf("\nTime is %02d:%02dAM", hour, min);
            }

            else {
                printf("\nTime is %02d:%02dAM", hour, min);
            }

        }

        else 
            printf("\nINVALID TIME");
        
    }
    
    return 0;
}