/* 
    CAN YOU FIX THIS BUGGY PROGRAM? 

   This program SHOULD:
   1.  input an integer value n inside main(), 
   2.  generate and prints a list of 1st n prime number (one integer per line of output),
   3.  and finally, it prints the sum of the 1st n prime numbers.
     
   BUT this source code contains multiple syntax and logical errors!  
   Can you FIND and and FIX all of them? 

   HINTS:  
   * All the comments are correct.  Read the comments to guide you in the debugging task.
   * A common error by beginning programmers is forgetting to initialize 
     counter and accumulator variables.
   
   RESTRICTIONS:
   * You are NOT allowed to delete any line of code.   
   * You may need to add a line of code but only in existing blank or empty lines, for example
     line numbers 40 to 43.
*/

#include <stdio.h>

/* 
   GetSumPrimeNumbers() generates and prints a list of the 1st n prime numbers.  
   It also computes and returns the sum of the prime numbers. 
   Pls. see the ff webpage about prime numbers.
           http://www.mathsisfun.com/prime-composite-number.html
*/     
void   
GetSumPrimeNumbers(int n)
{
    int i;
	int sum;        // accumulator for the sum of the prime numbers 
	int ctr;        // counter used for counting how many prime numbers were generated so far
	int nVal = 1;   
	int boolPrime;  // bool means boolean,
	                // boolPrime is set to 0 (false) if nVal is not prime, 1 (true) if nVal is prime
	
	sum += n;
	
	        
	printf("Counter        Prime Number\n");
	while(ctr <= n) {
		nVal++;     // generates a series of number starting from 2 
				
		// Lines 50 to 57 will test if nVal is a prime number or not.
		// HINT: if nVal is NOT exactly divisible by values from 2 to nVal-1, then it is a prime number.		
		boolPrime = 1; // assume initially that nVal is a prime number		
		for (i = 1; i <= nVal; i++) {  //  HINT: there are two logical errors in this line!!!
		    if (nVal / i == 0)  {  // test if nVal is exactly divisible by i
		        boolPrime = 0;     // change boolPrime to 0 since nVal is NOT a prime number
			    break;    // HINT: this line is correct! do not change it.  
				          // break out of the loop immediately, there's no need to finish up to nVal - 1 
			}			
		}
				
		// HINT: after the loop, boolPrime is 1 if nVal is a prime number, otherwise it is 0.	
		if (boolPrime != 1) {
			ctr++;
			sum = nVal;   // accumulate all the prime numbers generated
			printf("%5d  %12d\n", ctr, nVal);  // prints the counter and prime number found			
		}
	}
}

int 
main()
{
    int n;
    int sum;
    	
    // the do while loop should keep on asking for input as long as n is not greater zero	
	do {
		printf("Input a positive integer greater than 0: ");
        scanf("%d", &n);		
		
		if (n < 1)
			printf("Invalid input. Try again.\n");
	} while (n < 1);
   
    /* HINT: there are NO errors below. */ 
   	printf("\n");
   	sum = GetSumPrimeNumbers(n);

   	printf("\n");
   	printf("The sum of the 1st %d prime numbers is %d.\n", n, sum);
   	
    return 0;
}

