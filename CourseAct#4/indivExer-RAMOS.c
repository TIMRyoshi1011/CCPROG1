/* Name:  Ramos, Marcus Timothy
   Section: S25A
*/

#include <stdio.h>
#include "indivExer.h" //do not remove or edit this line
//no other .h or .c files can be included


void 
extractDigits(int num, int *pLeft, int *pMid, int *pRight)
{

*pLeft = num / 100;
*pMid = (num / 10) % 10;
*pRight = num % 10;

}


int 
reverseNumber(int num)
{

int pLeft, pMid, pRight;
extractDigits(num, &pLeft, &pMid, &pRight);
num = pRight * 100 + pMid * 10 + pLeft;
return num;

}


void 
display3Digits(int num)
{

   printf(MSG1);
   printf(MSG3);
   printf("%03d\n", num);
   printf(MSG2);
   printf(MSG3);
   printf("%03d\n", reverseNumber(num));

}


int 
getSum(int num)
{

int pLeft, pMid, pRight;
extractDigits(num, &pLeft, &pMid, &pRight);
num = pLeft + pMid + pRight;
return num;

}


int 
isOdd(int num)
{

num = num % 2;
return num;

}
