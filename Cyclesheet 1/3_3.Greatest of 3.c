//Author: Baishali Ghosh
#include<stdio.h>

int main(void)
{
      int a, b, c, g1, g2;
      printf("Enter the three numbers:\n ");
      scanf("%d%d%d", &a, &b, &c);
      g1=a>b?a:b;
      g2=g1>c?g1:c;
      printf("The greatest number of the three is : %d", g2);
      getch();
      return 0;
}
       
