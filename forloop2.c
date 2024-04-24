//write a to print all the days in given month. display only seven day per line
#include<stdio.h>
void main()
{
     int month,lastday;
     printf("Enter month");
     scanf("%d",&month);

     if(month<0 || month>12)
     {
          printf("it is invalid month");
     }
     else 
     {
          if(month == 2)
          {
               lastday = 28;
          }
          else if(month == 4 || month==6 || month == 10)
          {
               lastday = 30;
          }
          else 
          {
               lastday = 31;
          }
          for(int day=1;day<=lastday;day++)
          {
               printf("%7d",day);
               if(day%7==0)
               {
                    printf("\n");
               }
          }
     }

}