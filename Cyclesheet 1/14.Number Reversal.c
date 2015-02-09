//Author: Baishali Ghosh
#include<conio.h>
#include<stdio.h>
int main()
{
      int num, snum, rev=0, rem;
      printf("Enter a number: ");
      scanf("%d",&num);
      snum=num;
      while(num>0)
      {
                  rem=num%10;
                  rev=rev*10+rem;
                  num=num/10;
      }
      printf("The reverse number: %d", rev);
      getch();
      return 0;
}
