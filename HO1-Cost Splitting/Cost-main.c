/* This file should not be editted, except for line 11 to indicate
   the filename with your surname, eg. Cost-Santos.c.

   This file will not be submitted.
 
   You can choose to comment out some of the statements if you are
   testing specific items.
*/

#include <stdio.h>
#include "Cost-RAMOS.c"

//------------------YOU ARE NOT ALLOWED TO EDIT BEYOND THIS POINT---------------

int main()
{
	int noOfPpl; //Variable for the number of people in the group
	int noBackout; //Variable for the number of people in the group who backed out
	char pwd; //Variable for asking if there are pwd in the group 
	float giftCost; //Variable for the cost per person for the gift 
	float giftPrice; //Variable for the price of the gift
	float foodPrice; //Variable for the price of the food without service fee and without delivery fee
	float foodCost; //Variable for the total cost of the food per person
	
	printf("Enter no. of people in the group: ");
	scanf(" %d", &noOfPpl);
	
	printf("Enter total price of the gift: ");
	scanf(" %f", &giftPrice);
	
	printf("Number of people who backed out: ");
	scanf(" %d", &noBackout);
	
	printf("------------------------------\n");
	
	giftCost = costPerPerson(noOfPpl, giftPrice);
	
	printf("\n");
	
	if(computeCount(noOfPpl, noBackout) >= 7)
	{
		printf("\nHow much for the food? ");
		scanf(" %f", &foodPrice);
		
		printf("Are there any PWD in the group?(y/n) ");
		scanf(" %c", &pwd);
		
		giftBreakdown(giftPrice, noOfPpl, noBackout, &giftCost);
		
		switch(pwd)
		{
			case 'y':
			case 'Y':
				foodCost = computeFood(foodPrice, 1) / computeCount(noOfPpl, noBackout);
				break;
			case 'n':
			case 'N':
				foodCost = computeFood(foodPrice, 0) / computeCount(noOfPpl, noBackout);
		}
		
		printf("Cost of food per person:\t\t\t%9.2f\n", foodCost);
		printf("\n---------------------------------------------------------\n");
		printf("Overall total per person:\t\t\t%9.2f\n", foodCost + giftCost);
		printf("---------------------------------------------------------\n");
	}
	else
	{
		giftBreakdown(giftPrice, noOfPpl, noBackout, &giftCost);
	}

	return 0;
}
