/* 
*  Name   : Lastname, Firstname (in CAPITAL LETTERS)
*  Section:
*/

#include <stdio.h>


/*
*  Implement the function AllFactors().  
Consult the following webpage
* 
*  https://www.mathsisfun.com/numbers/factors-all-tool.html
*
*  EXAMPLES:
*
*
*  Example #1: If n is 12, the output of AllFactors(n) is:
*
*              1  2  3  4  6  12
*
*
*  Example #2: If n is 30, the output of AllFactors(n) is:
*
*              1  2  3  5  6  10  15  30
*/
void 
AllFactors(int n)
{
	/* you may declare your own local variable/s */
	printf("Factors of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) { // Check if i is a factor of number
            printf("%d ", i); // Print the factor
        }
    }
    printf("\n");


}


int 
main()
{
	int n;

	do {
		do {
			printf("Input a positive integer (0 to exit from loop): ");
			scanf("%d", &n);
    
			if (n < 0)
                           printf("Invalid input.  Try again.\n");
                
		} while (n < 0); // keep on asking until user inputs a valid value

		
		if (n > 0) 
		  	AllFactors(n);    		
        
	} while (n != 0);  // repeat the process

	return 0;
}









 
