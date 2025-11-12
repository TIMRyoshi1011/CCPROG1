/* 
*  Name   : Lastname, Firstname (in CAPITAL LETTERS)
*  Section:
*/

#include <stdio.h>

/*  
*
*  Implement the function CollatzSequence(n).
*
*  CollatzSequence(n) generates/prints a sequence of integers starting from n.
*  The next term in the sequence is computed as follows:
*    a.  if n is even, then the next number is n/2 
*    b.  otherwise (i.e., if n is odd), then the next number is 3 * n + 1
*
*  Although it has not been proven yet, it is thought that the sequence
*  will eventually end in a value of 1.
*
*  Reference: http://planetmath.org/collatzsequence
*
*  EXAMPLES:
*
*  Example #1: If n is 8, COllatzSequence(8) generates/output the following:
*             
*              8 4 2 1 
*
*  Example #2: If n is 5, CollatzSequence(5) generates/output the following:
*
*              5 16 8 4 2 1
*    
*  Example #3: If n is 13, CollatzSequence(13) generates/output the following:
*
*              13 40 20 10 5 16 8 4 2 1
*
*/
void 
CollatzSequence(int n)
{
	/* you may declare your own local variable/s */
	 int no;

    printf("Enter a number:\n");
    scanf("%d", &no);

    while(no > 1)
    {
        if (no % 2 == 0)
        {
            no = no / 2;
            printf("%d\n", no);
        }

        else
        {
            no = no * 3 + 1;
            printf("%d\n", no);
        }
    }
}


int 
main()
{
	int n;
   	
   	do {
		printf("Input an integer greater than 0: ");
   		scanf("%d", &n);


		if (n <= 0)
			printf("Invalid input. Try again.\n");
	} while (n <= 0);

   	CollatzSequence(n);

   	return 0;
}


