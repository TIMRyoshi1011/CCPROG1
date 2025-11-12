void displayPikachu(int nDexNo, float fWeightLbs);
float displayBaseStats(float fBaseHP, float fBaseAtk, float fBaseDfs, float fBaseSpd);
void displayShinyStats(float fLvlUpHP, float fLvlUpAtk, float fLvlUpDfs, float fLvlUpSpd, float fMultBonus, int nLevel);
float displayLevelledUpStats(float fBaseHP, float fBaseAtk, float fBaseDfs, float fBaseSpd, int nLevel, float fMultBonus);
void computeFriendshipBonus(float *fBaseHP, float *fBaseAtk, float *fBaseDfs, float *fBaseSpd);

void displayPikachu(int nDexNo, float fWeightLbs)
{
	float fWeightKgs;
	
	fWeightKgs = fWeightLbs / 2.20;
	printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("Pokedex No:\t%d\n", nDexNo);
	printf("Name:\t\tPikachu\n");
    printf("Type:\t\tElectric\n");
    printf("Ability:\tStatic\n");
    printf("Weight:\t\t%.2fKGs\n", fWeightKgs);
    printf("Description:\tThis Pokemon has electricity-storing pouches on its cheeks.\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");
}

float displayBaseStats(float fBaseHP, float fBaseAtk, float fBaseDfs, float fBaseSpd)
{
	float fBaseTotal = fBaseHP + fBaseAtk + fBaseDfs + fBaseSpd;
	printf("\t\t\t  HP\t\tAttack\t\tDefense\t\tSpeed\t\tTotal\n");
	printf("-----------------------------------------------------------------------------------------------------------\n");
	printf("Base Stats\t\t%7.2f\t\t%7.2f\t\t%7.2f\t\t%7.2f\t\t%7.2f\n", fBaseHP, fBaseAtk, fBaseDfs, fBaseSpd, fBaseTotal);
	
	return fBaseTotal;
}

void displayShinyStats(float fLvlUpHP, float fLvlUpAtk, float fLvlUpDfs, float fLvlUpSpd, float fMultBonus, int nLevel)
{
	float fShinyTotal;
	fMultBonus = fMultBonus / 100 + 1;
	fLvlUpHP *= fMultBonus;
	fLvlUpAtk *= fMultBonus;
	fLvlUpDfs *= fMultBonus;
	fLvlUpSpd *= fMultBonus;
	
	fShinyTotal = fLvlUpHP + fLvlUpAtk + fLvlUpDfs + fLvlUpSpd;
	printf("Level %d Shiny Stats\t%7.2f\t\t%7.2f\t\t%7.2f\t\t%7.2f\t\t%7.2f\n", nLevel, fLvlUpHP, fLvlUpAtk, fLvlUpDfs, fLvlUpSpd, fShinyTotal);
}

float displayLevelledUpStats(float fBaseHP, float fBaseAtk, float fBaseDfs, float fBaseSpd, int nLevel, float fMultBonus)
{
	float fLevelledUpHP = fBaseHP + fBaseHP * 0.15 * nLevel;
	float fLevelledUpAtk = fBaseAtk + fBaseAtk * 0.05 * nLevel;
	float fLevelledUpDfs =  fBaseDfs + fBaseDfs * 0.10 * nLevel;
	float fLevelledUpSpd = fBaseSpd + fBaseSpd * 0.25 * nLevel;
	float fLevelledUpTotal = fLevelledUpHP + fLevelledUpAtk + fLevelledUpDfs + fLevelledUpSpd;
	
	printf("Level %d Stats\t\t%7.2f\t\t%7.2f\t\t%7.2f\t\t%7.2f\t\t%7.2f\n", nLevel, fLevelledUpHP, fLevelledUpAtk, fLevelledUpDfs, fLevelledUpSpd, fLevelledUpTotal);
	
	displayShinyStats(fLevelledUpHP, fLevelledUpAtk, fLevelledUpDfs, fLevelledUpSpd, fMultBonus, nLevel);
	
	return fLevelledUpTotal;
}

void computeFriendshipBonus(float *fBaseHP, float *fBaseAtk, float *fBaseDfs, float *fBaseSpd){
		
	*fBaseHP *= 1.15;
	*fBaseAtk *= 1.05;
	*fBaseDfs *= 1.05;
	*fBaseSpd *= 1.20;
}
