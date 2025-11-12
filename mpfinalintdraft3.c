/***************************************************************************
This is to certify that this project is my own work, based on my personal 
efforts in studying and applying the concepts learned. I have constructed 
the functions and their respective algorithms and corresponding code by 
myself. The program was run, tested, and debugged by my own efforts. I 
further certify that I have not copied in part or whole or otherwise 
plagiarized the work of other students and/or persons.
                                          Marcus Timothy V. Ramos, 12313408
***************************************************************************/

/*
Description: This program generates Energon Cubes weekly by setting the production standards on the first day (Sunday) 
by producing Energon Cubes and then gaining Energon on the next days by using the produced Energon Cubes. The program
shall continue for 10 weeks and its goal is to have 1000000 Energon by the end. 
Programmed by: Marcus Timothy V. Ramos, S25A
Last modified: Nov. 24, 2024; 3:25PM
Version: 3.12
Acknowledgements: 
    1. The <conio.h> library: for the getch() function.
    2. Use of the getch() function: https://www.geeksforgeeks.org/difference-getchar-getch-getc-getche/
    3. Clearing the console using system("cls") (present in <stdlib.h> library): https://www.geeksforgeeks.org/clear-console-c-language/
    4. Generating Random Numbers in a Range using Custom Seed: https://www.geeksforgeeks.org/generating-random-number-range-c/
    5. Values of Integers for True and False: https://www.classes.cs.uchicago.edu/archive/2019/winter/15200-1/lecs/notes/Lec3CondNotes.html#:~:text=C%20does%20not%20have%20boolean,uses%20integers%20for%20boolean%20testing.&text=To%20make%20life%20easier%2C%20C,values%201%20and%200%20respectively.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*
    Nov. 02, 2024; 2:20PM - started the final initial draft.
    Nov. 02, 2024; 9:55PM - finished every code for sunday.
    Nov. 04, 2024; 7:00PM - started adding other error features for sunday
    Nov. 04, 2024; 10:00PM - included other features for sunday such as error messages 
    Nov. 06, 2024; 8:10PM - started fixing the last error for sunday
    Nov. 06, 2024; 9:30PM - fixed the last error for sunday + error in confirmation when negeative numbers using getchar();
    Nov. 09, 2024; 6:40PM - started day 2-7 generating random trends
    Nov. 09, 2024; 10:20PM - finished the scrap and nominal trend
    Nov. 10, 2024; 12:30AM - finished the whole program?? (except the additional and bonus feature (Note #1))
    Nov. 10, 2024; 1:05PM - added feature where if weeklyEnergonStacks = 0, program will skip to the next week
    Nov. 14, 2024; 9:40PM - removed initializations for weekNo and the rest of variables (except dayNo, energonStorage, and energonStacks)
    Nov. 14, 2024; 10:55PM - implemented the bonus feature
    Nov. 15, 2024; 9:10AM - added a "press any key to continue" feature after finishing 1 week w/o remaining stacks.
    Nov. 16, 2024; 9:15PM - fixed the bonus feature where if input is higher than remaining stacks, program still continues
    Nov. 16, 2024; 10:20PM - Fixed the issue if in day 1, user entered 0, the update will flash for miliseconds and then clear afterwards, cleared w/ no flash of update
    Nov. 17, 2024:
    1:30PM - Implemented a feature where if the user entered 0 THREE TIMES on days 2-7, the program will ask if the user would like to skip the current week
    2:50PM - added a feature where if energon storage < 800, program will end 
    4:20PM - Implemented the bonus feature in functions.
    4:50PM - started tracing and organizing the whole program
    8:50PM - continued tracing and organizing
    9:45PM - finished tracing and organizing
    11:25PM - started making the comments for documentation
    Nov. 19, 2024; 11:25AM - finished putting comments per function
    Nov. 22, 2024; 9:30AM - started moving the codes to the final file to be submitted (w/o the dev feature yet), deleted the dates, notes and comments, and fixed the code according to the Linux Kernel coding standard
    Nov. 22, 2024:
    3:30PM - started doing dev mode (invalid inputs are not yet implemented)
    10:40PM - finished the dev mode? (kailangan pang ilipat sa function)
    11:00PM - edited the recycled stacks feature (except its display when selling stacks on the final day of the week)
    Nov. 23, 2024; 7:00PM - finished updating dev mode
    Nov. 23, 2024; 7:25 - fixed the recycled stacks feature
    Nov. 24, 2024; (the final day)
    1:30AM - retained and finalized confirmation functions for days 1-7, bonus and additional feature
    2:35AM - moved dev feature to function (unfinished)
    3:25PM - finished the dev mode and finalized the bonus feature
    4:30PM - finished the introductory comment
    9:40PM - finished the function comments and started moving all codes to the final file (again)
    11:00PM - finished adding all comments to the file
    Nov. 25, 2024:
    1:30PM - finished tracing the codes for the final time
    4:20AM - finished making the test script
    4:30AM - passed the MP
    Nov. 28, 2024; 1:00AM - traced the codes for one last time and tested the program on .c and .exe
    Nov. 29, 2024; 9:15AM - conducted the MP Demo (failed game ends when energon < 800)
    Nov. 30, 2024; 8:50PM - Revised the Final MP in another file based on the conditions from MP Demo
*/

/*   END OF DOCUMENTATION AND WORK ON THE MACHINE PROJECT   */

/*  This function displays the first thing you see at the program which are the 
    week number, day number, energon storage, and stacks 
    Precondition: *weekNo = 1; *dayNo = 1; *energonStorage = 10000; *energonStacks = 0;
    @param *weekNo - number of week
    @param *dayNo - number of day
    @param *energonStorage - number of energon available
    @param *energonStacks - initial number of stacks (energon cubes) available
    @return nothing
*/
void firstDisplay(int *weekNo, int *dayNo, int *energonStorage, int *energonStacks) {
    printf("Week %d Day %d\n", *weekNo, *dayNo);
    printf("Energon Storage: %d   Stacks: %d\n\n", *energonStorage, *energonStacks);
}

/*  This function displays like the firstDisplay function but with the recycled stacks
    Precondition: *weekNo = 1; *dayNo = 1; *energonStorage = 10000; *energonStacks = 0; *recycledStacks = 0
    @param *weekNo - number of week
    @param *dayNo - number of day
    @param *energonStorage - number of energon available
    @param *energonStacks - initial number of stacks (energon cubes) available
    @param *recycledStacks - number of recycled stacks
    @return nothing
*/
void displaywithRecycledStacks(int *weekNo, int *dayNo, int *energonStorage, int *energonStacks, int *recycledStacks) {
    printf("Week %d Day %d\n", *weekNo, *dayNo);
    printf("Energon Storage: %d   Stacks: %d   Recycled Stacks: %d\n\n", *energonStorage, *energonStacks, *recycledStacks);
}   

/*  This function computes for the total cost of energon to produce cubes
    Precondition: *weeklyEnergonStacks must not be less than or equal to 0 
    @param *energonCost - cost of energon to produce 1 stack
    @param *weeklyEnergonStacks - number of stacks (energon cubes) available
    @return computed cost needed to produce energon cubes
*/
int computeCost(int *energonCost, int *weeklyEnergonStacks) {
    int totalCost;
    totalCost = *energonCost * *weeklyEnergonStacks;
    return totalCost;
}

/*  This function displays the entry for the number of stack production for the week
    and the error messages if the entry is less than 0 or a non-integer
    Precondition: *energonCost must be equal to the product of the randomly generated energon (Range: 80-120) times 10
    @param *weeklyEnergonStacks - number of stacks (energon cubes) available
    @param *energonCost - cost of energon to produce 1 stack
    @param *totalCost - cost needed to produce energon cubes
    @return nothing
*/
void stackEntry(int *weeklyEnergonStacks, int *energonCost, int *totalCost) {
    int readEntry;

    do {    
        printf("How many stacks do you wish to produce for this week? ");
        readEntry = scanf("%d", weeklyEnergonStacks);
        getchar();
            
        if (readEntry != 1) 
            printf("Please Enter a Valid Number!\n");
        
        else if (*weeklyEnergonStacks < 0) 
            printf("Please Enter a Positive Number!\n");
            
    } while (readEntry != 1 || *weeklyEnergonStacks < 0);

    *totalCost = computeCost(energonCost, weeklyEnergonStacks);
}

/*  This function calls the stackEntry function and displays the error message if 
    the total cost is larger than the available energon stored
    Precondition: *energonStorage must always be a number greater than 800
    @param *energonStorage - number of energon available
    @param *energonCost - cost of energon to produce 1 stack
    @param *weeklyEnergonStacks - number of stacks (energon cubes) available
    @param *totalCost - cost needed to produce energon cubes
    @return nothing
*/
void weeklyStackProduction(int *energonStorage, int *energonCost, int *weeklyEnergonStacks, int *totalCost) { 

    do {
        stackEntry(weeklyEnergonStacks, energonCost, totalCost);

        if (*totalCost > *energonStorage)
            printf("The Energon cost exceeds the available Energon stored. Please Try Again.\n");

    } while (*totalCost > *energonStorage); 

}

/*  This function displays the decision to proceed with the transaction every Sunday
    Precondition: *totalCost must not be larger than *energonStorage and 
    *weeklyEnergonStacks must not be less than 0.
    @param *energonStorage - number of energon available
    @param *energonCost - cost of energon to produce 1 stack
    @param *weeklyEnergonStacks - number of stacks (energon cubes) available
    @param *totalCost - cost needed to produce energon cubes
    @return nothing
*/
void weeklyConfirmation(int *energonStorage, int *energonCost, int *weeklyEnergonStacks, int *totalCost) {
    char confirmDecision;

    printf("%d stacks will cost %d Energon, proceed?(y/n) ", *weeklyEnergonStacks, *totalCost);
    scanf(" %c", &confirmDecision);
    getchar();

        while (confirmDecision != 'y' && confirmDecision != 'Y') {
            
            if (confirmDecision == 'n' || confirmDecision == 'N') {
                weeklyStackProduction(energonStorage, energonCost, weeklyEnergonStacks, totalCost);
                printf("%d stacks will cost %d Energon, proceed?(y/n) ", *weeklyEnergonStacks, *totalCost);
            }

            else 
                printf("Not a valid option, please enter only y or n. ");           

            scanf(" %c", &confirmDecision);
            getchar();
        } 

    if(*weeklyEnergonStacks > 0) // ensures that the statement below will only be printed if the user did not input a 0
        printf("%d stacks produced. \n\n", *weeklyEnergonStacks);
}

/*  This function randomly generates energon cost to produce cubes
    Precondition: *randomEnergon must have no value 
    @param *randomEnergon - stores the generated random value for energon production
    @return random number which is the cost to make 1 cube
*/
int generateRandomEnergon(int *randomEnergon){
    srand(time(0));
    *randomEnergon = 80 + (rand() % 41);
    return *randomEnergon;
}

/*  This function diplays the production cost and the cost to produce 1 stack for day 1
    Precondition: *randomEnergon should have a random generated number from 80 to 120
    @param *weekNo - number of week
    @param *dayNo - number of day
    @param *energonStacks - initial number of stacks (energon cubes) available
    @param *energonStorage - number of energon available
    @param *randomEnergon - stores the generated random value for energon production
    @param *energonCost - cost of energon to produce 1 stack
    @param *recycledStacks - number of recycled stacks
    @return energon cost to produce 1 stack
*/
void displayDayOne(int *weekNo, int *dayNo, int *energonStacks, int *energonStorage, int *randomEnergon, int *energonCost, int *recycledStacks) {

    if (*recycledStacks == 0)
        firstDisplay(weekNo, dayNo, energonStorage, energonStacks);

    else 
        displaywithRecycledStacks(weekNo, dayNo, energonStorage, energonStacks, recycledStacks);

    *randomEnergon = generateRandomEnergon(randomEnergon);
    *energonCost = *randomEnergon * 10;

    printf("Production cost for this week is %d Energon for 1 cube.\n", *randomEnergon);
    printf("It will cost %d Energon to produce 1 stack.\n\n", *energonCost);
}

//(functions for days 2-7) V-------------V---------------------------------------------------------------------------V

/*  This function displays the entry for the number of stacks the user wants to sell
    and the error messages if the entry is less than 0, a non-integer or higher than the available stocks
    Precondition: *weeklyEnergonStacks must not be less than or equal to 0.
    @param *sellStacks - number of stacks to sell daily
    @param *weeklyEnergonStacks - number of stacks (energon cubes) available
    @return nothing
*/
void sellEntry(int *sellStacks, int *weeklyEnergonStacks) {
    int readEntry;

    do {    
        printf("How many stacks do you wish to sell to Swindle? ");
        readEntry = scanf("%d", sellStacks);
        getchar();
            
        if (readEntry == 0) 
            printf("Please Enter a Valid Number!\n");
        
        else if (*sellStacks < 0) 
            printf("Please Enter a Positive Number!\n");

        else if (*sellStacks > *weeklyEnergonStacks) 
            printf("The stacks you wish to sell exceeds the available stacks. Please Try Again.\n");
            
    } while (readEntry != 1 || *sellStacks < 0 || *sellStacks > *weeklyEnergonStacks);
}

/*  This function diplays the decision to proceed with the transaction daily
    Precondition: *sellStacks must not be less than 0, a non-integer or higher than the available stocks
    @param *sellStacks - number of stacks to sell daily
    @param *weeklyEnergonStacks - number of stacks (energon cubes) available
    @return nothing
*/
void dailyConfirmation(int *sellStacks, int *weeklyEnergonStacks) {
    char confirmDecision;

    printf("%d stacks are about to be sold, proceed? (y/n) ", *sellStacks);
    scanf(" %c", &confirmDecision);
    getchar();

        while (confirmDecision != 'y' && confirmDecision != 'Y') {
            
            if (confirmDecision == 'n' || confirmDecision == 'N') {
                sellEntry(sellStacks, weeklyEnergonStacks);
                printf("%d stacks are about to be sold, proceed? (y/n) ", *sellStacks);
            }

            else 
                printf("Not a valid option, please enter only y or n. ");       
            
            scanf(" %c", &confirmDecision);
            getchar();
        } 

    printf("%d stacks sold. \n", *sellStacks);
}

/*  This function displays the randomly generated cost that Swindle is willing to buy from your stacks and the amount of energon you can earn per stacks old. 
    Precondition: *randomSwindle should have a random generated number based on the trend for the week
    @param *randomSwindle - stores the generated random value for selling to Swindle
    @param *sellStacks - number of stacks to sell daily
    @param *weeklyEnergonStacks - number of stacks (energon cubes) available
    @return nothing
*/
void displayDayTwotoSeven(int *randomSwindle, int *sellStacks, int *weeklyEnergonStacks) {
    printf("Swindle is buying Energon cubes for %d Energon per cube.\n", *randomSwindle);
    printf("You can earn %d Energon per stack. \n\n", *randomSwindle * 10);

    sellEntry(sellStacks, weeklyEnergonStacks);
    dailyConfirmation(sellStacks, weeklyEnergonStacks);
}

/*  This function randomly generates 1, 2 or 3 to determine the trend per week
    Precondition: randomTrend must have no value
    @param randomTrend - stores the generated random value for the trend
    @return random trend value
*/
int generateRandomTrend(int randomTrend) {
    srand(time(0));
    randomTrend = 1 + (rand() % 3);
    return randomTrend;
}

/*  This function generates a random value for the scrap trend if randomTrend = 1
    Precondition: *randomEnergon should have a random generated number from 80 to 120
    @param *randomEnergon - stores the generated random value for energon production
    @param *randomSwindle - stores the generated random value for selling to Swindle
    @param *sellStacks - number of stacks to sell daily
    @param *weeklyEnergonStacks - number of stacks (energon cubes) available
    @return generated random value of Swindle is willing to buy from your stacks based on the scrap trend
*/
void scrapTrend(int *randomEnergon, int *randomSwindle, int *sellStacks, int *weeklyEnergonStacks) {
    int maxPrice;
    int setValue;

    //printf("Scrap Trend\n\n"); //remove this in the final program

    maxPrice = *randomEnergon - 10;
    setValue = maxPrice - 20 + 1;

    //printf("%d\n", maxPrice); //remove this in the final program
    //printf("%d\n", setValue); //remove this in the final program
    
    srand(time(0));
    *randomSwindle = 20 + (rand() % setValue);

    //printf("%d\n", *randomSwindle); //remove this in the final program

    displayDayTwotoSeven(randomSwindle, sellStacks, weeklyEnergonStacks);   
}

/*  This function generates a random value for the nominal trend if randomTrend = 2
    Precondition: *randomEnergon should have a random generated number from 80 to 120
    @param *randomEnergon - stores the generated random value for energon production
    @param *randomSwindle - stores the generated random value for selling to Swindle
    @param *sellStacks - number of stacks to sell daily
    @param *weeklyEnergonStacks - number of stacks (energon cubes) available
    @return generated random value of Swindle is willing to buy from your stacks based on the nominal trend
*/
void nominalTrend(int *randomEnergon, int *randomSwindle, int *sellStacks, int *weeklyEnergonStacks) {
    int maxPrice;
    int setValue;

    //printf("Nominal Trend\n\n"); //remove this in the final program

    maxPrice = *randomEnergon * 1.05;
    setValue = maxPrice - 80 + 1;

    //printf("%d\n", maxPrice); //remove this in the final program
    //printf("%d\n", setValue); //remove this in the final program

    srand(time(0));
    *randomSwindle = 80 + (rand() % setValue);

    //printf("%d\n", *randomSwindle); //remove this in the final program

    displayDayTwotoSeven(randomSwindle, sellStacks, weeklyEnergonStacks);
}

/*  This function generates a random value for the primus trend if randomTrend = 3
    Precondition: *randomEnergon should have a random generated number from 80 to 120
    @param *randomEnergon - stores the generated random value for energon production
    @param *randomSwindle - stores the generated random value for selling to Swindle
    @param *sellStacks - number of stacks to sell daily
    @param *weeklyEnergonStacks - number of stacks (energon cubes) available
    @return generated random value of Swindle is willing to buy from your stacks based on the primus trend
*/
void primusTrend(int *randomEnergon, int *randomSwindle, int *sellStacks, int *weeklyEnergonStacks) {
    int maxPrice;
    int setValue;

    //printf("Primus Trend\n\n"); // remove this in the final program

    maxPrice = *randomEnergon * 4;
    setValue = maxPrice - *randomEnergon + 1;

    //printf("%d\n", *randomEnergon); //remove this in the final program
    //printf("%d\n", maxPrice); //remove this in the final program
    //printf("%d\n", setValue); //remove this in the final program

    srand(time(0));
    *randomSwindle = *randomEnergon + (rand() % setValue);

    //printf("%d\n", *randomSwindle); //remove this in the final program

    displayDayTwotoSeven(randomSwindle, sellStacks, weeklyEnergonStacks);
}

//(bonus feature + additional features) V-------------V---------------------------------------------------------------------------V

/*  This function displays on how much the user is willing to sell from the recycled stacks
    Precondition: *recycledStacks must not be less than or equal to 0
    @param *recycledStacks - number of recycled stacks
    @param *sellStacks - number of stacks to sell daily
    @param *energonStorage - number of energon available
    @return updated value of *energonStorage and *recycledStacks
*/
void bonusFeatureEntry(int *recycledStacks, int *sellStacks, int *energonStorage) {
    int readEntry;

    do {    
        printf("How many stacks do you wish to sell? ");
        readEntry = scanf("%d", sellStacks);
        getchar();
            
        if (readEntry == 0) 
            printf("Please Enter a Valid Number!\n");
        
        else if (*sellStacks < 0) 
            printf("Please Enter a Positive Number!\n");

        else if (*sellStacks == 0)
            printf("You confirmed to sell the remaining stacks, number cannot be 0.\n");

        else if (*sellStacks > *recycledStacks)
            printf("Number Entered is higher than the available stacks. Please Try Again.\n");
            
    } while (readEntry != 1 || *sellStacks <= 0 || *sellStacks > *recycledStacks);

    *energonStorage += *sellStacks * 200;
    *recycledStacks -= *sellStacks;
}

/*  This function will display the decision to proceed if there are stacks remaining at the end of the week
    Precondition: *recycledStacks must be a positive number and *dayNo must be greater than 1
    @param *recycledStacks - number of recycled stacks
    @param *dayNo - number of day
    @param *sellStacks - number of stacks to sell daily
    @param *energonStorage - number of energon available
    @param *weekNo - number of week
    @return nothing
*/
void bonusFeatureConfirmation(int *recycledStacks, int *dayNo, int *sellStacks, int *energonStorage, int *weekNo) {
    char sellConfirmation;

    if (*recycledStacks > 0 && *dayNo > 1) {
        printf("Do you wish to sell the remaining %d stacks for 200 energon each? (y/n) ", *recycledStacks);
        scanf(" %c", &sellConfirmation);
        getchar();

        while (sellConfirmation != 'y' && sellConfirmation != 'Y' && sellConfirmation != 'n' && sellConfirmation != 'N') {
            printf("Not a valid option, please enter only y or n. "); 
            scanf(" %c", &sellConfirmation);
            getchar();
        }
            
        switch (sellConfirmation) {
            case 'y':
            case 'Y':
                bonusFeatureEntry(recycledStacks, sellStacks, energonStorage);
                printf("%d stacks are sold, total energon is now %d, press any key to continue . . . ", *sellStacks, *energonStorage);
                break;

            default: 
                printf("No leftover stacks are sold, press any key to continue . . . ");
        } 
    }

    else if (*recycledStacks == 0 && *dayNo > 1)
        printf("This week's production is now finished, press any key to continue . . . ");
     
    getch(); //pressing any key continues the program (I did not use getchar because typing other characters causes an error in the program) 

    if (*energonStorage >= 800 && *weekNo <= 9) {
        system("cls"); //clears the console
        *dayNo -= *dayNo - 1; //resets the current number of day to 1
    }
}

/*  This function will display if 0 is inputted three times on days 2-7
    Precondition: *dayNo value must be only from 2-6
    @param *dayNo - number of day
    @return nothing
*/
void zeroThreeTimes(int *dayNo) {
    char skipDecision;
    
    printf("You have entered 0 three times, do you wish to skip the current week? (y/n) ");
    scanf(" %c", &skipDecision);
    getchar();

    while (skipDecision != 'y' && skipDecision != 'Y' && skipDecision != 'n' && skipDecision != 'N') {
        printf("Not a valid option, please enter only y or n. "); 
        scanf(" %c", &skipDecision);
        getchar();
    }

    switch(skipDecision) {
        case 'y':
        case 'Y':
            *dayNo = 7;

        default:
            printf("\n");
            printf("---------------------------------------------------------------------------\n\n");
    }
}

/*  This function will display the setting to make the user choose to toggle display trend per week
    Precondition: *trendDisplayDecision must have no value
    @param *trendDisplayDecision - value of choice to toggle display trend per week
    @return nothing
*/
void toggleTrendDisplay (char *trendDisplayDecision) {
    printf("Do you want to toggle trend display per week? (y/n) ");
    scanf(" %c", trendDisplayDecision);
    getchar();

    while (*trendDisplayDecision != 'y' && *trendDisplayDecision != 'Y' && *trendDisplayDecision != 'n' && *trendDisplayDecision != 'N') {
        printf("Not a valid option, please enter only y or n. ");
        scanf(" %c", trendDisplayDecision);
        getchar();
    }
             
    switch (*trendDisplayDecision) {
        case 'y':
        case 'Y':
            printf("Display Trend is On. \n");
            break;

        default:
            printf("Display Trend is Off. \n");
    }
}

/*  This function will display the setting to make the user edit the amount of energon available
    Precondition: *energonStorage must have an initial vallue of 10000
    @param *energonStorage - number of energon available
    @return new value of *energonStorage
*/
void editEnergon (int *energonStorage) {
    int energonStorageEdit;
    int readEntry;
    do {
        printf("Enter Desired Amount of Energon: ");
        readEntry = scanf("%d", &energonStorageEdit);
        getchar();

        if (readEntry == 0) 
            printf("Please Enter a Valid Number!\n");

        else if (energonStorageEdit < 0) 
            printf("Please Enter a Positive Number!\n");
        
    } while (energonStorageEdit < 0 || readEntry != 1);

    *energonStorage = energonStorageEdit;
}

/*  This function will display the setting to make the user edit the number of week
    Precondition: *weekNoEdit must have an initial value of 1
    @param *weekNoEdit - edited number of week 
    @return new value of *weekNoEdit
*/
void editWeekNo (int *weekNoEdit) {
    do {
        printf("Enter Desired Number of Week: ");
        scanf("%d", weekNoEdit);
        getchar();

        if (*weekNoEdit > 10 || *weekNoEdit < 1)
            printf("Invalid Number, Please Try Again. \n");

    } while (*weekNoEdit > 10 || *weekNoEdit < 1);
}

/*  This function will display first as the program is compiled to have the user choose to start the game or enter dev mode to configure settings
    Precondition: *energonStorage must have an initial vallue of 10000 and *weekNoEdit must have an initial value of 1
    @param *energonStorage - number of energon available
    @param *weekNoEdit - edited number of week 
    @param *trendDisplayDecision - value of choice to toggle display trend per week
    @return nothing
*/
void devFeature (int *energonStorage, int *weekNoEdit, char *trendDisplayDecision) {
    int devModeChoice;

    printf("==========================================================\n");
    printf("|\t\t\t\t\t\t\t |\n");
    printf("|");
    printf("\tWelcome to Energon Cubes Production Game! \t |\n");
    printf("|\t\t\t\t\t\t\t |\n");
    printf("----------------------------------------------------------\n");
    printf("|\t\t\t\t\t\t\t |\n");
    printf("|");
    printf("\t1 - Play Game \t 2 - Settings (Dev Mode) \t |\n");
    printf("|\t\t\t\t\t\t\t |\n");
    printf("==========================================================\n\n");
    printf("Please Select an Option: ");
    scanf("%d", &devModeChoice);
    getchar();

    while (devModeChoice < 1 || devModeChoice > 2) {
        printf("Not a valid option, please select only 1 or 2. ");
        scanf("%d", &devModeChoice);
        getchar();
    }
    
    switch (devModeChoice) {
        case 2:     
            editWeekNo (weekNoEdit);
            editEnergon (energonStorage);
            toggleTrendDisplay (trendDisplayDecision);
            
            printf("All settings saved, press any key to continue . . . ");
            getch();

        default: 
            system("cls");      
    }
}

int main() {
    //variables for day 1
    int weekNo;
    int dayNo = 1;
    int energonStacks = 0;
    int energonStorage = 10000;
    int randomEnergon;
    int energonCost;
    int weeklyEnergonStacks;
    int totalCost;

    //variables for days 2-7
    int randomTrend;
    int randomSwindle;
    int sellStacks;
    int newEnergon;

    //variables for bonus and additional features
    int recycledStacks = 0;
    int zeroCounter = 0;

    //variables for dev mode
    int weekNoEdit = 1;
    char trendDisplayDecision;
    
    devFeature (&energonStorage, &weekNoEdit, &trendDisplayDecision); //displays dev mode


    // loops until number of week reaches 10 to keep the program running until week 10
    for (weekNo = weekNoEdit; weekNo <= 10; weekNo++) {

        displayDayOne(&weekNo, &dayNo, &energonStacks, &energonStorage, &randomEnergon, &energonCost, &recycledStacks);
        weeklyStackProduction(&energonStorage, &energonCost, &weeklyEnergonStacks, &totalCost);
        weeklyConfirmation(&energonStorage, &energonCost, &weeklyEnergonStacks, &totalCost);
        
        if (weekNo <= 9 && energonStorage > 0) {

            if(weeklyEnergonStacks == 0) {
                system("cls"); // clears the console if the user inputs 0 on day 1
            } else 
                printf("---------------------------------------------------------------------------\n\n");
        }
        
        weeklyEnergonStacks += energonStacks;
        energonStorage -= totalCost;
        randomTrend = generateRandomTrend(randomTrend);

        if ((trendDisplayDecision == 'y' || trendDisplayDecision == 'Y') && weeklyEnergonStacks > 0) {
            printf("The Trend for this week is: ");

            if (randomTrend == 1)
                printf("Scrap Trend\n\n");

            else if (randomTrend == 2)
                printf("Nominal Trend\n\n");

            else
                printf("Primus Trend\n\n");

            printf("---------------------------------------------------------------------------\n\n");
            }
        
        while (dayNo < 7 && weeklyEnergonStacks > 0) {
            dayNo++;
            firstDisplay(&weekNo, &dayNo, &energonStorage, &weeklyEnergonStacks);

            switch (randomTrend) {
                case 1:
                    scrapTrend(&randomEnergon, &randomSwindle, &sellStacks, &weeklyEnergonStacks);
                    break;
                
                case 2:
                    nominalTrend(&randomEnergon, &randomSwindle, &sellStacks, &weeklyEnergonStacks);
                    break;

                case 3:
                    primusTrend(&randomEnergon, &randomSwindle, &sellStacks, &weeklyEnergonStacks);
            }
            newEnergon = (randomSwindle * 10) * sellStacks;
            printf("You earned %d Energon. \n\n", newEnergon);

            printf("---------------------------------------------------------------------------\n\n");

            weeklyEnergonStacks -= sellStacks;
            energonStorage += newEnergon; 

            if(sellStacks == 0)
                zeroCounter++;

            if(zeroCounter == 3 && dayNo < 7) {
                zeroCounter++; // ensures that zeroCounter does not stay at 3
                zeroThreeTimes(&dayNo);
            }
        }

        zeroCounter = 0; //resets the counter to 0

        if (weeklyEnergonStacks > 0)
            recycledStacks += weeklyEnergonStacks;

        bonusFeatureConfirmation(&recycledStacks, &dayNo, &sellStacks, &energonStorage, &weekNo);

        if(energonStorage < 800) {
            weekNo = 10;
            printf("\n");
            printf("---------------------------------------------------------------------------\n\n");
            printf("Available Energon is now insufficient with a total of %d Energon, no more Energon Cubes can be produced. \n", energonStorage);
            return 0;
        }  
    }
        printf("\n\n");
        printf("---------------------------------------------------------------------------\n\n");

    if (energonStorage >= 1000000) 
        printf("Congratulations! Soundwave have reached the goal of having 1000000 Energon or higher with a total of %d Energon. \n", energonStorage);

    else 
        printf("Unfortunately Soundwave have not reached the goal of having 1000000 Energon or higher having only a total of %d Energon. \n", energonStorage);

    return 0;
}