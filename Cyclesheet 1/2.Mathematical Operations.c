//Author: Baishali Ghosh
#include<stdio.h>
#include<conio.h>
int main()
{int a, b, opt;
 printf("Enter numbers to be operated upon:\n");
 scanf("%d%d", &a,&b);
 printf("What would you like to do?\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
 printf("\n\nEnter your choice(1-4): ");
 scanf("%d", &opt);
 switch(opt)
 {
            case 1: printf("\nThe sum is %d", a+b);
                    break;
            case 2: printf("\nThe difference is %d", a-b);
                    break;
            case 3: printf("\nThe product is %d", a*b);
                    break;
            case 4: printf("\nThe quotient is %f", (float)a/b);
                    break;
}
getch();
return 0;
}
 
