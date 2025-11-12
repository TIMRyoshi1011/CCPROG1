/* 
*  Name   : Lastname, Firstname (in CAPITAL LETTERS)
*  Section:
*/

#include <stdio.h>
/*
*  Implement ExpandedForm(). Consult the following webpage
*  about the expanded form of a number.  In particular, see
*  item #5 and item #6.
*
*  http://www.themathpage.com/arith/powers-of-10-2.htm
*
*  Refer also to the program named "hint.c" to learn how to extract
*  the digits making up a given number.
*
*
*  EXAMPLES:
*
*  Example #1: If n is 12, the output of ExpandedForm1(n) is: 
*
*              12 = 2 * 1 + 1 * 10 
*               
*  Example #2: If n is 809, the output of ExpandedForm1(n) is:
*             
*              809 = 9 * 1 + 0 * 10 + 8 * 100       
* 
*  Example #3: If n is 5347, the output of the program is:
*             
*              5347 = 7 * 1 + 4 * 10 + 3 * 100 + 5 * 1000                
*/

void 
ExpandedForm(int n)
{
 
	/* you may declare your own local variable/s */
	int place = 1; // Start with the units place
    int original_number = n; // Store the original number for display

    // Calculate the expanded form
    while (n > 0) {
        int digit = n % 10; // Get the last digit
        if (digit != 0) { // Only consider non-zero digits
            if (place > 1) {
                printf(" + "); // Print '+' before other digits
            }
            printf("%d", digit * place); // Print the expanded form part
        }
        n /= 10; // Remove the last digit
        place *= 10; // Move to the next place value
    }

    printf("\n");

}


int 
main()
{
    	int n;

    	do {
		printf("Input an integer greater than 9: ");
    		scanf("%d", &n);

		if (n < 9)
			printf("Invalid input. Try again.\n");
	} while (n < 9);

       
    	ExpandedForm(n);

    	return 0;
}







 
