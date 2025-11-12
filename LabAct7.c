#include <stdio.h>

int main() {

    int num, total;
    char restart;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        total = num + 3;

        if (total == 5) 
            printf("Equal to 5.\n");

        else if (total < 5)
            printf("Less than 5.\n");

        else 
            printf("Greater than 5.\n");

        printf("Would you like to restart? ");
        scanf(" %c", &restart);

    } while (restart != 'n' && restart != 'N');

    return 0;
}
//-------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    int i = 5, j, x;
    x = 0;
    while (x < i) {
        j = x;
        while(j < i) {
            printf("*");
            j++;
        }
        printf("\n");
        x++;
    }

    return 0;
}
//-------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    int i = 5, j, x;
    x = 0;
    while (x < i) {
        j = 0;

        while(j < x) {
            printf(" ");
            j++;
        }
        
        while(j < i) {
            printf("*");
            j++;
        }
        printf("\n");
        x++;
    }

    return 0;
}
//-------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    int i , j, x;
    scanf("%d", &i);
    x = 0;
    while (x < i) {
        j = 0;

        while(j < x) {
            printf(" ");
            j++;
        }
        
        while(j < i) {
            printf("* ");
            j++;
        }
        printf("\n");
        x++;
    }

    return 0;
}
//-------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    char c1, c2, c3;

    for (c1 = 'A'; c1 <= 'Z'; c1++) 
        for (c2 = 'A'; c2 <= 'Z'; c2++)
            for (c3 = 'A'; c3 <= 'Z'; c3++)
                printf("%c%c%c\n", c1, c2, c3);
    
    return 0;
}