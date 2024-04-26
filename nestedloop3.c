/*
write a program to print below pattern. print only one astrik at a time;
   5 * * * * *
   4 * * * *
   3 * * *
   2 * *
   1 *
*/
#include <stdio.h>
void main()
{
    int line = 1;
    int count = 5;
    do 
    {
        do
        {
            printf("* ");
            line++;
        } while (line <= count);
        count--;
        line=1;
        printf("\n");
    }while(count>=1);
}