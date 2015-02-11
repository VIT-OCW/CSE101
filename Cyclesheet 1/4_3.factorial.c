//Author: Baishali Ghosh
#include<stdio.h>
int main()
{
      int fact, n, c ;
      printf("Which number's factorial would you like to calculate? Enter the number:\n");
      scanf("%d", &n);
      fact=1;
      if(n==0)
      {
            printf("The value of zero factorial is 1");
            getch();   
      }
      else if(n>0)
      {
           for(c=n;c>=1; c--)                                  //assigning n to c to keep value of n intact and not revert to zero at the end of the loop.
           fact=fact*c;
           printf("The factorial of %d ", n);
           printf("is: %d ", fact);
           getch();
      }
	return 0;
}
