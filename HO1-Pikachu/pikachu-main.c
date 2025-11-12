#include<stdio.h>
#include "pikachu-lastname.c"

int main(){
	
	int nLevel;
	int nDexNo;
	
	float fWeightLbs;
	float fMultBonus;
	float fBaseHP;
	float fBaseAtk;
	float fBaseDfs;
	float fBaseSpd;
	float fBaseTotal;
	float fLevelledUpTotal;
	
	printf("Pikachu's Pokedex Number: ");
	scanf("%d", &nDexNo);
	printf("Weight in pounds: ");
	scanf("%f", &fWeightLbs);
	printf("-----------------------------------------------------------------------------------------------------------\n");
	printf("Input the base stats of Pikachu\n");
	printf("Base HP: ");
	scanf("%f", &fBaseHP);
	printf("Base Attack: ");
	scanf("%f", &fBaseAtk);
	printf("Base Defense: ");
	scanf("%f", &fBaseDfs);
	printf("Base Speed: ");
	scanf("%f", &fBaseSpd);
	printf("-----------------------------------------------------------------------------------------------------------\n");
	
	printf("Input the projected level of the Pokemon: ");
	scanf("%d", &nLevel);
	
	printf("Input the multiplier bonus (in percent) of the shiny version: ");
	scanf("%f", &fMultBonus);
	
	displayPikachu(nDexNo, fWeightLbs);
	fBaseTotal = displayBaseStats(fBaseHP, fBaseAtk, fBaseDfs, fBaseSpd);
	fLevelledUpTotal = displayLevelledUpStats(fBaseHP, fBaseAtk, fBaseDfs, fBaseSpd, nLevel, fMultBonus);
	printf("-----------------------------------------------------------------------------------------------------------\n");	
	printf("Average Base Stats: \t\t%7.2f\n", fBaseTotal / 4);
	printf("Average Level %d Stats: \t%7.2f\n", nLevel, fLevelledUpTotal / 4);
	printf("Average Shiny Level %d Stats: \t%7.2f\n", nLevel, (fLevelledUpTotal + (fLevelledUpTotal * fMultBonus / 100)) / 4);
	printf("-----------------------------------------------------------------------------------------------------------\n");
	
	computeFriendshipBonus(&fBaseHP, &fBaseAtk, &fBaseDfs, &fBaseSpd);
	printf("Friendship Bonus Base Stats:\n");
	printf("Base HP:\t%.2f%\n", fBaseHP);
	printf("Base Attack:\t%.2f\n", fBaseAtk);
	printf("Base Defense:\t%.2f\n", fBaseDfs);
	printf("Base Speed:\t%.2f", fBaseSpd);
	
	return 0;
}
