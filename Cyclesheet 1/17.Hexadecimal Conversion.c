//Author: Baishali Ghosh
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
      int i,l,dec=0,sdec, oct[20], c=0,bin[40],rem,base=1,ascii;
      char hex[10];
      printf("Enter the hexadecimal number: ");
      gets(hex);
      l=strlen(hex);
      //Hexadecimal to decimal conversion
      for(i=l-1;i>=0;i--)
      {
                         ascii=hex[i];
                         if(ascii>47&&ascii<58)  //digit lies between 0 and 9
                         rem=ascii-48;
                         else
                         rem=ascii-55;
                         dec+=(rem*base);
                         base*=16;
      }
      printf("\n\nDecimal equivalent: %d",dec);
      //Decimal to Binary
      rem=0;
      sdec=dec;
      while(sdec>0)
      {
                   rem=sdec%2;
                   bin[c++]=rem;
                   sdec/=2;
      }
      printf("\n\nBinary equivalent: ");
      for(i=c-1; i>=0; i--)
      printf("%d",bin[i]);
      //Decimal to Octal
      rem=0;
      sdec=dec;
      c=0; //Using same counter as binary array so reverting it back to zero
      while(sdec>0)
      {
                   rem=sdec%8;
                   oct[c++]=rem;
                   sdec/=8;
      }
      printf("\n\nOctal equivalent: ");
      for(i=c-1; i>=0; i--)
      printf("%d",oct[i]);
                      
      getch();
	return 0;
}
