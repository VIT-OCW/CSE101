//Author: Baishali Ghosh
//Hexadecimal to Binary/Decimal/Octal
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
      int dec, oct, bin[40],opt,i,len,p=0;
      char hex[10],dig;
      printf("Enter the hexadecimal number: ");
      gets(hex);
      printf("\n\nBase Conversion Menu:\n");
      printf("1.Hexadecimal to Binary\n2.Hexadecimal to Decimal\n3.Hexadecimal to Octal\n\nEnter your choice: ");
      scanf("%d", &opt);
      switch(opt)
      {
                 case 1:
                        len=strlen(hex);
                        printf("%d\n", len);//Taking length of string for loop intitialization control
                        for(i=0; i<len; i++)
                        {
                           dig=hex[i];
                           printf("%c\n",dig);
                           switch(dig)
                           {
                                      case '0':
                                               bin[p++]=0;
                                               bin[p++]=0;
                                               bin[p++]=0;
                                               bin[p++]=0;
                                               break;
                                      case '1': 
                                               bin[p++]=0;
                                               bin[p++]=0;
                                               bin[p++]=0;
                                               bin[p++]=1;
                                               break; 
                                      case '2':bin[p++]=0;
                                               bin[p++]=0;
                                               bin[p++]=1;
                                               bin[p++]=0;
                                               break;
                                      case '3':bin[p++]=0;
                                               bin[p++]=0;
                                               bin[p++]=1;
                                               bin[p++]=1;
                                               break;
                                      case '4':bin[p++]=0;
                                               bin[p++]=1;
                                               bin[p++]=0;
                                               bin[p++]=0;
                                               break;
                                      case '5':bin[p++]=0;
                                               bin[p++]=1;
                                               bin[p++]=0;
                                               bin[p++]=1;
                                               break;
                                      case '6':bin[p++]=0;
                                               bin[p++]=1;
                                               bin[p++]=1;
                                               bin[p++]=0;
                                               break;
                                      case '7':bin[p++]=0;
                                               bin[p++]=1;
                                               bin[p++]=1;
                                               bin[p++]=1;
                                               break;
                                      case '8':bin[p++]=1;
                                               bin[p++]=0;
                                               bin[p++]=0;
                                               bin[p++]=0;
                                               break;
                                      case '9':bin[p++]=1;
                                               bin[p++]=0;
                                               bin[p++]=0;
                                               bin[p++]=1;
                                               break;
                                      case 'A':bin[p++]=1;
                                               bin[p++]=0;
                                               bin[p++]=1;
                                               bin[p++]=0;
                                               break;
                                      case 'B':bin[p++]=1;
                                               bin[p++]=0;
                                               bin[p++]=1;
                                               bin[p++]=1;
                                               break;
                                      case 'C': bin[p++]=1;
                                               bin[p++]=1;
                                               bin[p++]=0;
                                               bin[p++]=0;
                                               break;    
                                      case 'D':bin[p++]=1;
                                               bin[p++]=1;
                                               bin[p++]=0;
                                               bin[p++]=1;
                                               break;
                                      case 'E':bin[p++]=1;
                                               bin[p++]=1;
                                               bin[p++]=1;
                                               bin[p++]=0;
                                               break;
                                      case 'F':bin[p++]=1;
                                               bin[p++]=1;
                                               bin[p++]=1;
                                               bin[p++]=1;
                                               break;
                                               
                                               
                           }
                           }
                           }
        printf("Binary equivalent: ");
        for(i=0; i<4*len; i++)
       { printf("%d",bin[i]); }                         
                                               
      getch();
}
