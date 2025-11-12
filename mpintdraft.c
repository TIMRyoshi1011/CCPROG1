#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define stack = 10

// Oct. 24; 9:30PM - started the draft w/ only the main
// Oct. 24; 10:00PM - Ends with day++
// Oct. 25; 9:30PM - started 2 void functions
// Oct. 25; 10:00PM - Ends with scanf("%c", &decision);
// Oct. 26; 10:00PM - fixed the intitialStacks() %c
// Oct. 27; 12:15AM - stopped until the confirmation
// Oct. 28; 9:00PM - removed functions and start from scratch in main; removed errors (for now)
// Oct. 28; 10:15PM - ends with needing of if statement in confirmation
// Oct. 29; 6:30PM - stopped this file and made ver. 2.0

int main() {

    //int week;
    int day = 1;
    int stacks = 0;
    int energonStorage = 10000;
    int randomEnergon;
    int energonCost;

    printf("Week 1 Day %d\n", day);
    printf("Energon Storage: %d     Stacks: %d\n\n", energonStorage, stacks);

    srand(time(0));
    randomEnergon = 80 + rand() % 41;

    energonCost = randomEnergon * 10;

    printf("Production cost for this week is %d Energon for 1 cube.\n", randomEnergon);
    printf("It will cost %d Energon to produce 1 stack.\n\n", energonCost);

    int energonStacks, totalCost; 
    char decision;

    printf("How many stacks do you wish to produce for this week? ");
    scanf("%d", &energonStacks);

    totalCost = energonCost * energonStacks;

    printf("%d stacks will cost %d Energon, proceed?(y/n) ", energonStacks, totalCost);
    scanf(" %c", &decision);

    switch (decision) {
        case 'y':
        case 'Y':

        energonStorage -= totalCost;

            /* 
            if (energonStorage < 0) {} 
            */
            printf("%d stacks produced. \n\n", energonStacks);
            break;
    }

    day += 1;
    stacks = energonStacks;

    while (day <= 7) {
        printf("Week 1 Day %d\n", day);
        printf("Energon Storage: %d     Stacks: %d\n\n", energonStorage, stacks);
        day++;       
    }

    return 0;
}
