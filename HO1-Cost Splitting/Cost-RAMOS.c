/******************************************
Author: Marcus Timothy V. Ramos

This file is to be submitted as the student's
submission for Problem Cost of HO1.
******************************************/

#define VAT 0.12  //Constant value for the VAT rate of 12%
#define PWD 0.2 //Constant value for PWD discount rate of 20%
#define SERVICE_FEE 0.1 //Constant value for the service fee of 10%
#define DELIVERY 150.00 //Constant value for the delivery fee of 150 pesos

//function protoypes
int computeCount(int noOfPpl, int noBackout);
float computeGiftAndFood(float gift, float food);
float costPerPerson(int noOfPpl, float giftCost);
void newCostPerPeson(int noOfPpl, int noBackout, float giftCost, float *gift);
float computeFood(float foodPrice, int pwd);
void foodBreakdown(float vatDisc, float pwdDisc, float discTotal, float foodTotal, float servFee, float overAll);
void giftBreakdown(float giftPrice, int noOfPpl, int noBackout, float *giftCost);

//------------------------------DO NOT EDIT THESE 2 FUNCTIONS---------------------------
int computeCount(int noOfPpl, int noBackout) {
	return noOfPpl - noBackout;
}

float computeGiftAndFood(float gift, float food) {
	return gift + food;
}
//------------------------------DO NOT EDIT THE 2 FUNCTIONS ABOVE---------------------------

//NOTE 1: You are not allowed to write any additional function other than the ones specified in the specs.
//NOTE 2: You are not allowed to include any additional libraries/header files

/*
	TASK #1: Implement costPerPerson() to compute and return the cost of the gift per person. 
		 
	@param noOfPpl - number of people contributing
	@param giftCost - price of the gift
	returns: cost per person for the gift 
*/
float costPerPerson(int noOfPpl, float giftCost) {
	float cpp;
	cpp = giftCost / noOfPpl;
	return cpp;
}

/*
	TASK #2: Implement newCostPerPeson() to compute and update the price of the gift per person less the number of backouts.
		 
	@param noOfPpl - number of people contributing
	@param noBackout - number of people who backed out
	@param giftCost - price of the gift
	@param *gift - the computed cost of the gift per person
	returns: nothing
*/
void newCostPerPeson(int noOfPpl, int noBackout, float giftCost, float *gift) {
	*gift = giftCost / (noOfPpl - noBackout);
}

/*
	TASK #3: Implement computeFood() by completing the missing parts that will compute and return the overall cost for the food.
		 
	@param foodPrice - price of the food with 12% VAT inclusive
	@param pwd - value for if there is a pwd in the group 1 for yes there pwd and 0 for no there are no pwd
	
	returns: overall cost of the food which includes the 10% service fee and 150 pesos delivery fee
*/
float computeFood(float foodPrice, int pwd) {
	float priceNoTax, vatDisc, pwdDisc, discTotal, foodTotal, servFee, overAll;

	priceNoTax = foodPrice / (1 + VAT); // price of food without the 12% VAT
	vatDisc = (foodPrice - priceNoTax) * pwd; // VAT exempt amount (Beware of divided by zero)
	pwdDisc = (priceNoTax * PWD) * pwd; // PWD discount (Beware of divided by zero)
	discTotal = vatDisc + pwdDisc; // discount total
	foodTotal = foodPrice - discTotal; // total amount of the food with the discount
	servFee = foodTotal * 0.1; // service fee
	overAll = foodTotal + servFee + DELIVERY;// overall total which includes the service fee and delivery fee

	foodBreakdown(vatDisc, pwdDisc, discTotal, foodTotal, servFee, overAll);
		
	return overAll;
}

/*
	TASK #4: Complete foodBreakdown() by adding the missing parts.
		 
	@param vatDisc - VAT discount
	@param pwdDisc - PWD discount
	@param discTotal - discount total
	@param foodTotal - total amount of the food with the discount
	@param servFee - service fee
	@param overAll - overall cost of the food
	returns: nothing
*/
void foodBreakdown(float vatDisc, float pwdDisc, float discTotal, float foodTotal, float servFee, float overAll) {
	printf("\nFood Cost Breakdown:\n");
	printf("----------------------------------\n");
	printf("VAT Discount 12%%:\t%9.2f\n", vatDisc);
	printf("PWD Discount 20%%:\t%9.2f\n", pwdDisc);
	printf("Total Discount:\t\t%9.2f\n", discTotal);
	printf("Sub-Total:\t\t%9.2f\n", foodTotal);	
	printf("Service Fee:\t\t%9.2f\n", servFee);
	printf("Delivery Fee:\t\t%9.2f\n", DELIVERY);
	printf("---------------------------------\n");
	printf("Total:\t\t\t%9.2f\n", overAll);	
}

/*
	TASK #5: Complete giftBreakdown() by adding the missing parts.
	
	@param giftPrice - price of the gift	 
	@param noOfPpl - number of people contributing
	@param noBackout - number of people who backed out
	@param *giftCost - cost of the gift per person
	returns: nothing
*/
void giftBreakdown(float giftPrice, int noOfPpl, int noBackout, float *giftCost) {
	printf("\nGift Cost Breakdown:\n");
	printf("----------------------------------\n");
	printf("Total price of gift with 12%% VAT:\t\t%9.2f\n", giftPrice); //Will display the price of the gift
	printf("Initial Cost of gift per person (%d people):\t%9.2f\n", noOfPpl, *giftCost); //Will display the initial number of people and the initial cost per person
	newCostPerPeson(noOfPpl, noBackout, giftPrice, giftCost);//Call newCostPerPerson() function to update the cost of the gift per person
	printf("----------------------------------\n");
	printf("Final cost of gift per person (%d people):\t%9.2f\n", computeCount(noOfPpl, noBackout), *giftCost);	//Will display the final number of people and final cost per person
}