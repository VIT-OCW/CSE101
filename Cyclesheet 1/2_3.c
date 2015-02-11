#include <stdio.h>

int main(void)
{
	int num1,num2,var;
	// Num1 and Num2 will have a value
	// Var is swap variable

	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);
	printf(" Initial values - Num1 : %d ,Num2 : %d ",num1,num2);
	// Swap logic
	var=num1;
	num1=num2;
	num2=var;

	printf("\n Swapped Values - Num1 : %d ,Num2 : %d \n",num1,num2);
	return 0;
}
