#include <stdio.h>
#define PI 3.141593

int coneArea (int r, int s) {
    return PI * r * s;
}

int baseArea (int r) {
    return PI * r * r;
}

int main() {
    
    int r, s, sa;

    printf("Enter Radius: ");
    scanf("%d", &r);

    printf("Enter Slope: ");
    scanf("%d", &s);

    sa = coneArea (r, s) + baseArea (r);

    printf("Surface Area = %d", sa);
    
    return 0;
}