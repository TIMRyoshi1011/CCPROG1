#include <stdio.h>
//#include "lunh.h"

//TO DO #1 (Expected: secured 5 points  Actual: 0 points)

int countDigits(int nCardNumber)
{
    int num, digit, count = -1;

    do {

        num = nCardNumber;
        digit = num % 10;
        num = num / 10;
        count++;
    } while (digit != 0);

    return count;
}

//TO DO #2 (Expected: unsecured 10 points   Actual: 10 points)

int extractDigit(int nCardNumber, int nPosition)
{
    int num, digit, count, i;

    num = nCardNumber;
    count = nPosition;

    for (i = 1; i <= count; i++) {
        digit = num % 10;
        num = num / 10;
    }

    return digit;
}

//TO DO #3 (Expected: secured 10 points     Actual: 10 points)

void displayProviderIndustry(int nCardNumberP1)
{
    int digit, count = 8;
    digit = extractDigit(nCardNumberP1, count);

    if (digit == 1 || digit == 7 || digit == 8 || digit == 9) {
        printf("Unamed Provider\n");

        if (digit == 1)
            printf("Airlines\n");

        else if (digit == 7)
            printf("Petroleum");
        
        else if (digit == 8)
            printf("Healthcare and Communications\n");

        else  
            printf("Government\n");
    }

    else if (digit == 2 || digit == 5) {
        printf("Mastercard\n");

        if (digit == 2)
            printf("Airlines & Financial\n");
        else   
            printf("Banking and Financial\n");
    }

    else if (digit == 3) {
        printf("American Express\n");
        printf("Travel and Entertainment\n");
    }

    else if (digit == 4) {
        printf("Visa\n");
        printf("Banking & Financial\n");
    }

    else if (digit == 6) {
        printf("Discover\n");
        printf("Merchandising and Banking\n");
    }

    else 
        printf("Invalid Input\n");

    printf("\n");
}

//TO DO #4 (Expected: unsecured 5 points    Actual: 5 points)

int extractIINBIN(int nCardNumber)
{
    int num;
    num = (nCardNumber % 10000000) / 100;
    return num;
}

int computeDigitSum(int nProductDigit)
{
    return nProductDigit - 10 + 1;
}

//TO DO #5 (Expected: RIP 20 points     Actual: 12.50 points)
int isValidCardNumber(int nCardNumberP1, int nCardNumberP2)
{
    int digit, count = 8, i = 1, sum1 = 0, sum2 = 0, final;

    for (i = 1; i <= 8; i++) {

        digit = extractDigit(nCardNumberP1, count);
        count--;

        if (i % 2 == 0)
            digit = digit * 1;

        else
            digit = digit * 2;

        if (digit > 9)
            digit = digit - 10 + 1;

        sum1 += digit;
    }

    count = 8;

    for (i = 1; i <= 8; i++) {

        digit = extractDigit(nCardNumberP2, count);
        count--;

        if (i % 2 == 0)
            digit = digit * 1;

        else
            digit = digit * 2;

        if (digit > 9)
            digit = digit - 10 + 1;

            sum2 += digit;
    }

    final = sum1 + sum2;

    if (final % 10 == 0)
        return 1;

    else
        return 0;
}