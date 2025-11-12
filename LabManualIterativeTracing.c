#include <stdio.h>

void displayOne (int nVal, int bShow)
{
   while (nVal > 0)
   {
      if (nVal % 2 == bShow)
         printf ("*");
      else
         printf ("-");
      nVal--;
   }
}

void displayTwo (int nVal)
{
   int j;
   
   j = 1;

   while (j <= nVal)
   {
      printf ("*");
      j++;
   }
}

void display (int nVal)
{
   int j = 0;

   printf ("\n");

   while (j < nVal)
   {
      printf ("*");

      if (j == 0 || j == nVal - 1)
         displayTwo (nVal);
      else
         displayOne (nVal, j % 2);
      printf ("*\n");
      j++;
   }
}

int main ()
{
   int nVal;

   printf ("Number: ");
   scanf ("%d", &nVal);

   if (nVal > 0)
      display (nVal);

   return 0;
}