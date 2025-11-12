/******************************************
Author: <NAME OF STUDENT>

This file is to be submitted as the student's
submission for Problem 1 of HO1.
******************************************/

//NOTE: You are not allowed to write any additional function other than the ones specified in the specs.

/*
Function Prototypes. Do not modify!!!
*/

void displayPikachu(int nDexNo, float fWeightLbs);
float displayBaseStats(float fBaseHP, float fBaseAtk, float fBaseDfs, float fBaseSpd);
void displayShinyStats(float fLvlUpHP, float fLvlUpAtk, float fLvlUpDfs, float fLvlUpSpd, float fMultBonus, int nLevel);
float displayLevelledUpStats(float fBaseHP, float fBaseAtk, float fBaseDfs, float fBaseSpd, int nLevel, float fMultBonus);
void computeFriendshipBonus(float *fBaseHP, float *fBaseAtk, float *fBaseDfs, float *fBaseSpd);


/*
	Task 1 - displayPikachu(): Display Pikachu’s details (10 points)
	
	@param nDexNo - Pikachu's Pokedex Number
	@param fWeightLbs - Pikachu's weight in pounds
	
		
	This function has no return value.
	Include the following details:
		Pokedex No: <based on user input from int main()>
		Name: Pikachu
		Type: Electric
		Ability: Static
		Weight: <must be computed>
		Description: This Pokemon has electricity-storing pouches on its cheeks. 
*/

void displayPikachu(int nDexNo, float fWeightLbs)
{
	//TO DO
}

/*
	Task 2 - displayBaseStats(): Display Pikachu’s Base Stats (5 Points)
	
	@param fBaseHP - base HP
	@param fBaseAtk - base attack
	@param fBaseDfs - base defense
	@param fBaseSpd - base defense

	
	Print:
		Headers for HP, Attack, Defense, Speed, and Total Stats.
		Corresponding base stats aligned to the headers. Round off to two decimal places.
		This function will set the formatting of the other outputs. Ensure that succeeding functions will follow this format. 
	
	return fBaseTotal - the sum of all the base stats

*/
float displayBaseStats(float fBaseHP, float fBaseAtk, float fBaseDfs, float fBaseSpd)
{
	//TO DO
}

/*
	Task 3 - displayShinyStats(): Compute and display Pikachu’s shiny variety’s levelled-up stats (15 points)
	
	@param fLvlUpHP - levelled-up HP
	@param fLvlUpAtk - levelled-up attack
	@param fLvlUpDfs - levelled-up defense
	@param fLvlUpSpd - levelled-up defense
	@param fMultBonus - shiny variety multiplier bonus
	@param nLevel - projected level
	
	Print:
		Corresponding levelled-up shiny stats aligned to the headers. Round off to two decimal places. 
	
	return - no return value
*/

void displayShinyStats(float fLvlUpHP, float fLvlUpAtk, float fLvlUpDfs, float fLvlUpSpd, float fMultBonus, int nLevel)
{
	//TO DO
}

/*
	Task 4 - displayLevelledUpStats: Compute and display Pikachu’s levelled-up stats (10 points)
	
	@param fBaseHP - base HP
	@param fBaseAtk - base attack
	@param fBaseDfs - base defense
	@param fBaseSpd - base defense
	@param nLevel - projected level
	@param fMultBonus - shiny variety multiplier bonus
	
	Print:
		Corresponding levelled-up stats aligned to the headers. Round off to two decimal places. 
	
	return fLevelledUpTotal - the sum of all the levelled-up stats
	
	Note:
		This function will call displayShinyStats().

*/

float displayLevelledUpStats(float fBaseHP, float fBaseAtk, float fBaseDfs, float fBaseSpd, int nLevel, float fMultBonus)
{
	//TO DO
}

/*
	Task 5 - Compute Pikachu’s friendship bonus stats (10 Points)
	
	@param *fBaseHP - pointer to the base HP
	@param *fbaseAtk - pointer to the base Attack
	@param *fBaseDfs - pointer to the base Defense
	@param *fBaseSpd - pointernto the base Speed
	
	This function has no other variable declaration, no displays, and no return value.
*/

void computeFriendshipBonus(float *fBaseHP, float *fBaseAtk, float *fBaseDfs, float *fBaseSpd){
	//TO DO
}
