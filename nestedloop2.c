/*
write a program to print below pattern. print only one astrik at a time;
   1 *
   2 * *
   3 * * *
   4 * * * *
   5 * * * * *
*/
#include <stdio.h>
void main()
{
    int line,count;
    count=1;
    while(count<=5)
    {
        line = 1;
        while (line <= count)
        {
            printf("* ");
            line = line + 1;
        }
        printf("\n");
        count=count+1;
    }
}