//Author: Baishali Ghosh
//With temp variable
#include<stdio.h>
int main()
{
      int a,b,t;
      printf("Enter two values:\n");
      scanf("%d %d", &a, &b);
      printf("\nThe original values of a is: %d", a);
      printf("\nThe original value of b is: %d", b);
      printf("\n\nPerforming swapping operation.\n");
      t=a;
      a=b;
      b=t;
      printf("\nThe value of a now is: %d", a);
      printf("\nThe value of b now is: %d", b);
      getch();
      return 0;
}
       
                    

