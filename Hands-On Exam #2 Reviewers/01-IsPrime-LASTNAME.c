/* 
*
*  Name   : Lastname, Firstname (in CAPITAL LETTERS)
*  Section:
*  Submission Date:
*
*/

#include <stdio.h>


/*
*  Implement the function IsPrime().  The function should return 1 
*  if n is a prime number, otherwise it should return 0 
*
*  Consult the following webpage  about prime number.* 
*      http://www.mathsisfun.com/prime-composite-number.html
*
* 
*  EXAMPLES:
*
*  IsPrime(17) returns 1.
*  IsPrime(15) returns 0. 
*  IsPrime(101) returns 1.
*
*/
int 
IsPrime(int n)
{
	/* you may declare your own local variable/s */
	if (n <= 1)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}



/*
*    DO NOT MODIFY THE main() function.
*
*    SAMPLE TEST CASES:
*
*    Input          :  17            
*    Expected Output:  PRIME   
*
*
*
*


*/
int 
main()
{
    int n;

    scanf("%d", &n);
    
    if (IsPrime(n))
       	printf("%d is a PRIME number.\n", n);
    else 
       	printf("%d is NOT a prime number.\n", n);
	
    return 0;
}


