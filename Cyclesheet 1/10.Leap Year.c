//Author: Baishali Ghosh
#include<stdio.h>
#include<conio.h>
int main()
{
      int num;
      printf("Enter a year: ");
      scanf("%d", &num);
      if(num%4==0)
      printf("The year is a leap year.");
      else 
      printf("The year is not a leap year.");
      getch();
      return 0;
}
