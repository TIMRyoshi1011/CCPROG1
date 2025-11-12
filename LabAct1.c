#include <stdio.h>

void deposit(float amt, float *bal) {

    *bal += amt;
}

int main() {

    float bal = 10000;
    float amt;

    printf("Enter amount to deposit: ");
    scanf("%f", &amt);
    deposit(amt, &bal);

    printf("%.2f", bal);

    return 0;
}