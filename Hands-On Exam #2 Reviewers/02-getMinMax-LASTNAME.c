/* 
*  Name   : Lastname, Firstname (in CAPITAL LETTERS)
*  Section:
*/

#include <stdio.h>


/*  
*
*  Implement the function getMinMax().
*
*  getMinMax() asks the user to repetitively input integer values.  The program
*  will stop asking for input once the user inputs a sentinel value of 0.
*  
*  getMinMaX() should also compute/determine the minimum and maximum values based  
*  on the input values.  The sentinel value of 0 should not be included in the 
*  computation.
*
*  When the function getMinMax() terminates, *ptrMin should contain the minimum
*  value and *ptrMax should contain the maximum value.
*
*
*  EXAMPLE:
*
*  	Input an integer: 10
*  	Input an integer: 5
*  	Input an integer: 8
*  	Input an integer: -25
*  	Input an integer: 1
*  	Input an integer: -33
*  	Input an integer: 99
*  	Input an integer: 0     
*
*
*  	The corresponding output will be:
*
*  	Minimum value is -33
*  	Maximum value is 99
*
*/
void 
getMinMax(int *ptrMin, int *ptrMax)
{	
	/* you may declare your own local variable/s */
	int num;

	do {
		printf("Enter an integer: ");
		scanf("%d", &num);
		
		if (num != 0) {
			if (num < *ptrMin)
				*ptrMin = num;

			else if (num > *ptrMax)
				*ptrMax = num;
		}

		printf("%d\n%d\n%d\n", num, *ptrMin, *ptrMax);

	} while (num != 0);



	/* NOTE: This problem should be solved using a single loop only. */

}


int 
main()
{
	int minimum = 1;
	int maximum;

   	getMinMax(&minimum, &maximum);

	printf("Minimum value is %d\n", minimum);
	printf("Maximum value is %d\n", maximum);

   	return 0;
}


