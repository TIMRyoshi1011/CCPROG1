#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Oct. 29; 9:40PM - finished the whole program but all are in main
//Nov. 02; 10:45PM - made the error messages for day 2-7 but not completed

/* 
    Notes: 
        1. Error functions for Mon-Sat are still unavailable
        2. Must move everything into different functions in next patch to avoid repitition of codes
        3. Goal of 1,000,000 energon is already coded, but not set (commented).
        4. Energon Trends are also unavailable.
*/

int cost (int energonCost, int energonStacks) {
    int totalCost;
    totalCost = energonCost * energonStacks;
    return totalCost;
}

int main() {

    int week = 1;
    int day = 1;
    int stacks = 0;
    int energonStorage = 10000;
    int randomEnergon;
    int energonCost;

    int energonStacks;
    int num;
    int totalCost; 
    char decision;

    int randomSwindle;
    int sell;
    int newStocks;

    //for (week = 1; week = 10; week++) {

    printf("Week %d Day %d\n", week, day);
    printf("Energon Storage: %d     Stacks: %d\n\n", energonStorage, stacks);

    srand(time(0));
    randomEnergon = 80 + rand() % 41;

    energonCost = randomEnergon * 10;

    printf("Production cost for this week is %d Energon for 1 cube.\n", randomEnergon);
    printf("It will cost %d Energon to produce 1 stack.\n\n", energonCost);

    do {    
        printf("How many stacks do you wish to produce for this week? ");
        num = scanf("%d", &energonStacks);

        while(getchar() != '\n');
        
        if (num != 1) {
            printf("Please Enter a Valid Number!\n\n");
        }

    } while (num != 1);

    totalCost = cost(energonCost, energonStacks);

    while (totalCost > energonStorage) {
        printf("The Energon cost exceeds the available Energon stored. Please Try Again.\n\n");

        do {    
        printf("How many stacks do you wish to produce for this week? ");
        num = scanf("%d", &energonStacks);

        while(getchar() != '\n');
        
        if (num != 1) {
            printf("Please Enter a Valid Number!\n\n");
        }

    } while (num != 1);

        totalCost = cost(energonCost, energonStacks);
    }

    printf("%d stacks will cost %d Energon, proceed?(y/n) ", energonStacks, totalCost);
    scanf(" %c", &decision);

        while (decision != 'y' && decision != 'Y') {
            
            if (decision == 'n' || decision == 'N') {
                //---------------------------------------------------------------------------
                        do {    
                        printf("How many stacks do you wish to produce for this week? ");
                        num = scanf("%d", &energonStacks);

                        while(getchar() != '\n');
                        
                        if (num != 1) {
                            printf("Please Enter a Valid Number!\n\n");
                        }

                    } while (num != 1);

                    totalCost = cost(energonCost, energonStacks);

                    while (totalCost > energonStorage) {
                        printf("The Energon cost exceeds the available Energon stored. Please Try Again.\n\n");

                        do {    
                        printf("How many stacks do you wish to produce for this week? ");
                        num = scanf("%d", &energonStacks);

                        while(getchar() != '\n');
                        
                        if (num != 1) {
                            printf("Please Enter a Valid Number!\n\n");
                        }

                    } while (num != 1);

                        totalCost = cost(energonCost, energonStacks);
                    }

                    printf("%d stacks will cost %d Energon, proceed?(y/n) ", energonStacks, totalCost);
                //===========================================================================
            }

            else {
                printf("Not a valid option, please enter only y or n. ");       
            }

            scanf(" %c", &decision);

        } 

        printf("%d stacks produced. \n\n", energonStacks);

    day += 1;
    stacks += energonStacks;
    energonStorage -= totalCost;

    while (day <= 7) {
        printf("Week %d Day %d\n", week, day);
        printf("Energon Storage: %d     Stacks: %d\n\n", energonStorage, stacks);

        srand(time(0));
        randomSwindle = 80 + rand() % 41;

        printf("Swindle is buying Energon cubes for %d Energon per cube.\n", randomSwindle);
        printf("You can earn %d Energon per stack. \n\n", randomSwindle * 10);

        printf("How many stacks do you wish to sell to Swindle? ");
        scanf("%d", &sell);

        while (sell > stacks) {
            printf("Input is higher than the available stacks. Please Try Again! \n\n");

            do {    
                    printf("How many stacks do you wish to produce for this week? ");
                    num = scanf("%d", &sell);

                    while(getchar() != '\n');
                    
                    if (num != 1) {
                        printf("Please Enter a Valid Number!\n\n");
                    }

                } while (num != 1);
        }

        printf("%d stacks are about to be sold, proceed? (y/n) ", sell);
        scanf(" %c", &decision);

        while (decision != 'y' && decision != 'Y') {
            
            if (decision == 'n' || decision == 'N') {
                //---------------------------------------------------------------------------
                do {    
                    printf("How many stacks do you wish to produce for this week? ");
                    num = scanf("%d", &sell);

                    while(getchar() != '\n');
                    
                    if (num != 1) {
                        printf("Please Enter a Valid Number!\n\n");
                    }

                } while (num != 1);  

            while (sell > stacks) {
            printf("Input is higher than the available stacks. Please Try Again! \n");

            do {    
                    printf("How many stacks do you wish to produce for this week? ");
                    num = scanf("%d", &sell);

                    while(getchar() != '\n');
                    
                    if (num != 1) {
                        printf("Please Enter a Valid Number!\n\n");
                    }

                } while (num != 1);

                printf("%d stacks are about to be sold, proceed? (y/n) ", sell);
        }
                //===========================================================================
            }

            else {
                printf("Not a valid option, please enter only y or n. ");       
            }

            scanf(" %c", &decision);

        } 

        printf("%d stacks sold. \n", sell);
        newStocks = randomSwindle * sell;
        printf("You earned %d Energon. \n\n", newStocks);

        day++; 
        stacks -= sell;
        energonStorage += newStocks;    
    }
    
    week += 1;
    energonStorage += 10000;
    stacks -= stacks;
    day -= 7;

    printf("Week %d Day %d\n", week, day);
    printf("Energon Storage: %d     Stacks: %d\n\n", energonStorage, stacks);

    srand(time(0));
    randomEnergon = 80 + rand() % 41;

    energonCost = randomEnergon * 10;

    printf("Production cost for this week is %d Energon for 1 cube.\n", randomEnergon);
    printf("It will cost %d Energon to produce 1 stack.\n\n", energonCost);

    do {    
        printf("How many stacks do you wish to produce for this week? ");
        num = scanf("%d", &energonStacks);

        while(getchar() != '\n');
        
        if (num != 1) {
            printf("Please Enter a Valid Number!\n\n");
        }

    } while (num != 1);

    totalCost = cost(energonCost, energonStacks);

    while (totalCost > energonStorage) {
        printf("The Energon cost exceeds the available Energon stored. Please Try Again.\n\n");

        do {    
        printf("How many stacks do you wish to produce for this week? ");
        num = scanf("%d", &energonStacks);

        while(getchar() != '\n');
        
        if (num != 1) {
            printf("Please Enter a Valid Number!\n\n");
        }

    } while (num != 1);

        totalCost = cost(energonCost, energonStacks);
    }

    printf("%d stacks will cost %d Energon, proceed?(y/n) ", energonStacks, totalCost);
    scanf(" %c", &decision);

        while (decision != 'y' && decision != 'Y') {
            
            if (decision == 'n' || decision == 'N') {
                //---------------------------------------------------------------------------
                        do {    
                        printf("How many stacks do you wish to produce for this week? ");
                        num = scanf("%d", &energonStacks);

                        while(getchar() != '\n');
                        
                        if (num != 1) {
                            printf("Please Enter a Valid Number!\n\n");
                        }

                    } while (num != 1);

                    totalCost = cost(energonCost, energonStacks);

                    while (totalCost > energonStorage) {
                        printf("The Energon cost exceeds the available Energon stored. Please Try Again.\n\n");

                        do {    
                        printf("How many stacks do you wish to produce for this week? ");
                        num = scanf("%d", &energonStacks);

                        while(getchar() != '\n');
                        
                        if (num != 1) {
                            printf("Please Enter a Valid Number!\n\n");
                        }

                    } while (num != 1);

                        totalCost = cost(energonCost, energonStacks);
                    }

                    printf("%d stacks will cost %d Energon, proceed?(y/n) ", energonStacks, totalCost);
                //===========================================================================
            }

            else {
                printf("Not a valid option, please enter only y or n. ");       
            }

            scanf(" %c", &decision);

        } 

        printf("%d stacks produced. \n\n", energonStacks);

    day += 1;
    stacks += energonStacks;
    energonStorage -= totalCost;

    while (day <= 7) {
        printf("Week %d Day %d\n", week, day);
        printf("Energon Storage: %d     Stacks: %d\n\n", energonStorage, stacks);

        srand(time(0));
        randomSwindle = 80 + rand() % 41;

        printf("Swindle is buying Energon cubes for %d Energon per cube.\n", randomSwindle);
        printf("You can earn %d Energon per stack. \n\n", randomSwindle * 10);

        printf("How many stacks do you wish to sell to Swindle? ");
        scanf("%d", &sell);

        while (sell > stacks) {
            printf("Input is higher than the available stacks. Please Try Again! \n\n");

            do {    
                    printf("How many stacks do you wish to produce for this week? ");
                    num = scanf("%d", &sell);

                    while(getchar() != '\n');
                    
                    if (num != 1) {
                        printf("Please Enter a Valid Number!\n\n");
                    }

                } while (num != 1);
        }

        printf("%d stacks are about to be sold, proceed? (y/n) ", sell);
        scanf(" %c", &decision);

        while (decision != 'y' && decision != 'Y') {
            
            if (decision == 'n' || decision == 'N') {
                //---------------------------------------------------------------------------
                do {    
                    printf("How many stacks do you wish to produce for this week? ");
                    num = scanf("%d", &sell);

                    while(getchar() != '\n');
                    
                    if (num != 1) {
                        printf("Please Enter a Valid Number!\n\n");
                    }

                } while (num != 1);  

            while (sell > stacks) {
            printf("Input is higher than the available stacks. Please Try Again! \n");

            do {    
                    printf("How many stacks do you wish to produce for this week? ");
                    num = scanf("%d", &sell);

                    while(getchar() != '\n');
                    
                    if (num != 1) {
                        printf("Please Enter a Valid Number!\n\n");
                    }

                } while (num != 1);

                printf("%d stacks are about to be sold, proceed? (y/n) ", sell);
        }
                //===========================================================================
            }

            else {
                printf("Not a valid option, please enter only y or n. ");       
            }

            scanf(" %c", &decision);

        } 

        printf("%d stacks sold. \n", sell);
        newStocks = randomSwindle * sell;
        printf("You earned %d Energon. \n\n", newStocks);

        day++; 
        stacks -= sell;
        energonStorage += newStocks;    
    }

    //} 

    //printf("Congratulations! You have reached the goal of having 1,000,000 Energon or higher with a total of %d energon. \n", energonStorage);

    return 0;

}