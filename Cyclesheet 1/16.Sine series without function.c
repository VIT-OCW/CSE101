//Author: Baishali Ghosh
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{ 
      float sin=0, term=0,p,rad,fact=1;
      int x,n,i,c ,sign=1;
      printf("Enter the value of x in degrees: ");
      scanf("%d",&x);
      rad=3.14159*x/180; //Converting degrees to radians
      printf("Enter the no. of terms: ");
      scanf ("%d", &n);
      for(i=1; i<=2*n; i+=2)
      {   fact=1;
          for(c=i;c>=1; c--)                                  //Calculation of factorial 
          fact*=c;                                                    
          p=pow(rad,i);
          term=p/fact;
          sin=sin+(sign*term);
          sign=sign*-1;
      }
      printf("The value of sinx is: %f", sin);
      getch();
      return 0;
}

