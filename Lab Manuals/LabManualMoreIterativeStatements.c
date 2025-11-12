#include <stdio.h>

int main() {
    int n, i, j;
scanf ("%d", &n); 
i = 0;
while (i < n)
{ 
    j = (i + 1) * 2; 
    printf("%d\n", j); 
    i++;
} 
    return 0;
}

/*
I give up at this point, here are the other questions:

Write a program that displays the digits of a given positive number n in reverse order.

Write a program that asks the user for a nonnegative integer n and asks the user to enter n numbers. The program displays the highest and lowest numbers entered.

16. Write a program that prints out a portion of the multiplication table based on the given start number and end number.

Example:

If start number is 3 and end number is 5, the program displays the multiplication table below:

      1    2    3    4    5    6    7    8    9   10
 3    3    6    9   12   15   18   21   24   27   30
 4    4    8   12   16   20   24   28   32   36   40
 5    5   10   15   20   25   30   35   40   45   50

17. Write a program that accepts a number n and displays the sum of even numbers and the sum of odd numbers from 1 to n.

18. Write a program that computes for and displays the sum of the numbers divisible by 3, ranging from 1 to 100.

19. Write a program that asks the user for a positive integer and displays all the factors of this number.

20. Write a program that asks for the start month and end month and computes for the total number of days from the start month to the end month.  

Note that 1 means January, 2 means February, ... and 12 means December.
Assume that February has 28 days.
Assume that start and end months fall within the same year.
Do not use if-else in your solution. Use switch statement instead.

21. Write a program that computes for ax given real value a and positive integer x.

22. Write a program that displays even numbers from 1 to 100.

23. Write a program that asks the user to enter 10 numbers and displays the largest number entered by the user.

24. Write a program that reads in a number n, and accepts n numbers. The numbers will be alternately added and subtracted. 
For example, if n = 5 and the numbers entered are 4, 14, 5, 6, 1, the program computes for 4 + 14 - 5 + 6 - 1 and displays 18.

25. Write a program that computes for the factorial of n, n!, which is the product of all numbers from 1 to n.

Note that n is a nonnegative integer and 0! = 1. 

26. Write a program that displays the following:

4, 8, 12, 16, ..., 496

27. Write a program that asks the user for a positive integer and displays prime factorization of this number.

28. Write a program that asks the user for a positive integer and displays whether this number is prime or composite.

Note that 1 is neither prime nor composite.

29. Write a program that computes for a number that has the digits of a given positive number n in reverse order, and displays it.  

Examples:

If n = 1234, display 4321.
If n = 920180, display 81029.

30. Write a program that computes and displays the sum of the factorials of the numbers from 1 to n, where n is a nonnegative integer given by the user.
Examples:

If n = 3, the program computes for 1! + 2! + 3! and displays 9.
If n = 4, the program computes 1! + 2! +3! + 4! and displays 33.

31. Write a program that finds the lowest odd integer among the values entered by the user. The user continuously enters values until a value less than 1 is entered.

Examples:

If the values entered by the user are 3, 8, 1, 6, 3, 4, -5, the program displays 1.
If the values entered by the user are 6, 4, 8, 0, the program displays No odd integer.

32. Write a program that determines whether the given positive integer is a palindrome or not.

A palindrome is a series of characters that forms the same sequence when read from left to right or read from right to left, as in 13531.

33. Write a program that will compute for the following given a positive integer n.


34. Write a program that computes and displays the sum of the powers of x, from the first power to the nth power, where x and n are nonnegative integers given by the user.

Examples:

If x = 3 and n = 4, the program computes for 31 + 32 + 33 + 34 and displays 120.
If x = 2 and n = 5, the program computes for 21 + 22 + 23 + 24 + 25 and displays 62.

35. Write a program that asks for a positive integer and counts how many digits are there in that number.

Example: If the number is 10854, the program displays 5.

36. Write a program that computes and displays the sum of powers of 2, from the first power to the nth power, where n is a nonnegative integer given by the user.

Examples:

If n = 1, the program computes for 21, and displays 2.
If n = 4, the program computes for 21 + 22 + 23 + 24, and displays 30.

37. Write a program that reads in a number n and outputs the sum of squares of numbers from 1 to n.

Examples:

If n = 3, the program computes for 12 + 22 + 32, and displays 14.
If n = 6, the program computes for 12 + 22 + 32 + 42 + 52 + 62  and displays 91.

38. Write a program that computes for the following given a positive integer n and real number x:

39. Write a program that displays the pattern below given a positive integer n.

Examples

 If n = 4, display	 If n = 5, display
   *
  * *
 * * *
* * * *
    *
   * *
  * * *
 * * * *
* * * * *
 

 40. Write a program that displays the pattern below given a positive integer n.

Example:  If n = 4, display

1
12
123
1234

41. Write a program that displays the pattern below given a positive integer n.

Example:  If n = 4, display

1234
123
12
1

42. Write a program that displays the pattern below given a positive integer n.

Example:  If n = 4, display

****
****
****
****

43. Write a program that displays the pattern below given a positive integer n.

Example:  If n = 5, display

1_2_3_4_5
 1_2_3_4
  1_2_3
   1_2
    1

    44. Write a program that displays the pattern below given a positive integer n.

Example:  If n = 5, display

    1
   1_2
  1_2_3
 1_2_3_4
1_2_3_4_5

45. Write a program that displays the pattern below given a positive integer n.

Examples

 If n = 4, display	 If n = 5, display
****
  *
 *
****
*****
   *
  *
 *
*****

46. Write a program that displays the pattern below given a positive integer n.

Example:  If n = 4, display

****
*  *
*  *
****

47. Write a program that displays the pattern below given a positive integers length and width.

Example:  If length = 5 and width = 10, display

**********
*        *
*        *
*        *
**********


48. Write a program that displays the pattern below given a positive integer n.

Examples

 If n = 4, display	 If n = 5, display
4 3 2 1
 4 3 2
  4 3
   4
5 4 3 2 1
 5 4 3 2
  5 4 3
   5 4
    5

    49. Write a program that displays the pattern below given a positive integer n.

Example:  If n = 4, display

   1
  12
 123
1234

50. Write a program that displays the pattern below given a positive integer n.

Examples

 If n = 4, display	 If n = 5, display
*     *
 *   *
  * *
   *
*       *
 *     *
  *   *
   * *
    *

51. Write a program that asks for values from the user and find out which number is entered the most number of times (mode) and how many times this number was entered (frequency). Stop asking for values once a -1 has been entered. Assume that the numbers entered are positive and in non-decreasing order. Assume that there is only one mode in the given inputs.

Examples:

If the following numbers were entered: 1, 2, 2, 2, 3, 3, 6, 6, 7, 7, 7, 7, -1, display The mode is 7 and its frequency is 4.
If the following numbers were entered: 2, 3, 3, 3, 4, 5, 5, 7, 8, 8, 8, 8, 8, -1, display The mode is 8 and its frequency is 5.

52. Write a program that asks for a positive integer num and displays the product of its odd-positioned digits, i.e. digits at the ones place, hundreds place, ten thousands place, .... 
Examples:

If num = 12474, the program computes for 
 and displays 16.
If num = 5678, the program computes for 
 and displays 48.
If num = 3, the program displays 3.

53. Write a program that asks for a positive integer n and swaps the position of every two digits in this value.

Examples:

If n = 12345, display 13254.
If n = 811230, display 182103.
If n = 10101, display 11010.

54. Write a program that asks for a positive integer num and displays the product of its even-positioned digits, i.e. digits at the tens place, thousands place, hundred thousands place, .... 
Examples:

If num = 412473, the program computes for 
 and displays 56.
If num = 15678, the program computes for 
 and displays 35.
If num = 3, the program displays 0.

55. Write a program that displays the first 3 perfect numbers.  

A perfect number is a positive integer that is equal to the sum of its factors (excluding itself).  The first perfect number is 6.

The factors of 6 are 1, 2, 3, 6.  The sum of all factors of 6 excluding 6 (i.e. 1 + 2 + 3) is 6.  Therefore, 6 is a perfect number.

56. Write a program that displays the pattern below given a positive integer n.

Examples

 If n = 4, display	 If n = 5, display
   *
  * *
 * * *
* * * *
 * * *
  * *
   *
    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

57. Write a program that accepts a real number as input and computes for the first integer n such that 2n is greater than or equal to the input value. The program displays both n and 2n.

58. Write a program that takes as input a real number x and displays the integer n closest to the cube root of x. Assume that x is a positive number.

59. Write a program that asks the user for a nonnegative integer n and displays the nth Fibonacci number Fn. Fn defined as follows:

F0 = 0
F1 = 1
F2 = 0 + 1 = 1
F3 = 1 + 1 = 2
F4 = 1 + 2 = 3
F5 = 2 + 3 = 5
:
Fn = Fn-1 + Fn-2

60. Write a program that asks for a positive integer and counts how many digits in the number are even and how many are odd.

Example: If the number is 80572, the program displays 3 digits are even, 2 digits are odd.


61. Write a program that will compute for the following given an integer x and a positive integer n.



*/