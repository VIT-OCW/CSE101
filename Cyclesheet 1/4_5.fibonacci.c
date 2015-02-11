//Author: Baishali Ghosh
#include<stdio.h>

int main(void)
{
	int first, second, third, c, n;
	first=0;
	second=1;
	printf("Upto how many terms do you want to print the Fibonacci series? \nEnter:\n");
	scanf("%d", &n);
	printf("Printing Fibonacci series upto %d", n);
	printf(" terms:\n");
	printf("%d  %d ", first, second);
	for(c=3; c<=n; c++)
	{
	      third=first+second;
	      printf(" %d ", third);
	      first=second;
	      second=third;
	}

	getch();
	return 0;
}
