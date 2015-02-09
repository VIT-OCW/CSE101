//Author: Baishali Ghosh
/*Series calaculation: -1+3-11+43-171
  General term=4n-1 where n is the previous number*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
      int sum=0, sign=1, i,n,term=-1;
      printf("Enter the no of terms for whom solution is to be computed: ");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
               printf("%d ",term);
               sum+=term;
               term=sign*(4*abs(term)-1);
               sign*=-1;
               
      }
      printf("\n\nSum=%d", sum);
      getch();
	return 0;
}
