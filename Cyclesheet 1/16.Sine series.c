//Author: Baishali Ghosh
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{ 
      float sin=0, term=0;
      long int fact(int), z;
      int x,n,i,p ,sign=1;
      printf("Enter the value of x: ");
      scanf("%d",&x);
      printf("Enter the no. of terms: ");
      scanf ("%d", &n);
      for(i=1; i<=2*n; i+=2)
      {
          z=fact(i);  
          p=pow(x,i);
          term=(float)p/z;
          printf("%f\n",term);
          sin=sin+(sign*term);
          sign=sign*-1;
      }
      printf("The value of sinx is: %f", sin);
      getch();
      return 0;
}

//Function to compute factorial
long int fact(int p)
{    long int f=1;
     int c;
     if(p==0)
      {
            printf("The value of zero factorial is 1");
                
      }
      else if(p>0)
      {
           for(c=p;c>=1; c--)                                  
           f=f*c;
           return f;
      }
}
