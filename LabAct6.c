// 1. Sum of all inputted numbers

#include <stdio.h>

int main() {

    int sum, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {

        sum += num;

        printf("Enter a number: ");
        scanf("%d", &num);
    }

    printf("\n%d", sum);

    return 0;
}

// 2. Average of all inputted numbers

#include <stdio.h>

int main() {

    int sum, num, div = 0, ave;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {

        sum += num;
        div += 1;

        printf("Enter a number: ");
        scanf("%d", &num);
    }
    ave = sum / div;
    printf("\n%d", ave);

    return 0;
}

// 3. Average of inputted even numbers

#include <stdio.h>

int main() {

    int sum, num, div = 0, ave;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {

        if (num % 2 == 0) {
            sum += num;
            div += 1;
        }

        printf("Enter a number: ");
        scanf("%d", &num);
    }
    ave = sum / div;
    printf("\n%d", ave);

    return 0;
}