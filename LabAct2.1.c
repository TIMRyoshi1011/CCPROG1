#include <stdio.h>

int main () {

    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);

    if (x > y && x > z)
        printf("\nThe highest number is x = %d", x); 

    else if (y > z)
        printf("\nThe highest number is y = %d", y); 

    else if (x == y && x == z) 
        printf("\nAll numbers are equal"); 

    else 
        printf("\nThe highest number is z = %d", z); 
    
    return 0;
}