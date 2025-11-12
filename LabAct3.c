#include <stdio.h>

int main() {

    int signal;
    printf("Enter Typhoon Signal: ");
    scanf("%d", &signal);
    printf("Classes suspended for:\n");
    switch(signal)
    {
        case 5:
            printf("Graduate Studies\n");
        case 4:
            printf("College\n");
        case 3:
            printf("Highschool\n");
        case 2:
            printf("Elementary\n");
        case 1:
            printf("Kindergarten\n");
    }

    return 0;
}