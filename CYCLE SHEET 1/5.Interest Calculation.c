//Author: Baishali Ghosh
#include<stdio.h>
#include<math.h>
int main()
{
      float prin, si, ci, amt,term;
      int rate, time, opt;
      printf("Enter the principal: ");
      scanf("%f", &prin);
      printf("\n\n1.Simple Interest\n2.Compound Interest\nEnter your choice(1-2): ");
      scanf("%d", &opt);
      switch(opt)
      {case 1:
           
                 printf("\nSimple Interest Calculation\n");
                 printf("Enter rate(in whole numbers only): ");
                 scanf("%d", &rate);
                 printf("Enter time: ");
                 scanf("%d", &time);
                 si=(prin*rate*time)/100;
                 printf("Simple interest=%f",si);
                 amt=prin+si;
                 printf("\nAmount=%f",amt);
                 break;
      case 2:   
                 printf("\nCompound Interest Calculation\n");
                 printf("Enter rate(in whole numbers only): ");
                 scanf("%d", &rate);
                 printf("Enter time(in years): ");
                 scanf("%d", &time);
                 ci=1+(rate*0.01);
                 term=pow(ci,time);
                 amt=prin*term;
                 printf("Compound interest=%f",amt-prin);
                 printf("\nAmount=%f",amt);
                 break;
      }
getch();
return 0;
}
           
                 
           
                 
      
                   
