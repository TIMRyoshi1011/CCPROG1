#include <stdio.h>

int main() {

    int date, month, day, year; 

    printf("Enter date: "); 
    scanf("%d", &date); 
    
    month = date / 1000000;
    day = date % 1000000 / 10000;
    year = date % 10000;

    printf("\nMonth : %d", month); 
    printf("\nDay   : %d", day); 
    printf("\nYear  : %d", year);  

    return 0;
}
