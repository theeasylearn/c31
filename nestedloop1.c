/*
write a program to print below pattern. print only one astrik at a time;
    * * * * * *
    * * * * * *
    * * * * * *
    * * * * * *
*/
#include <stdio.h>
void main()
{
    for(int count=1;count<=4;count++)
    {
        for (int line = 1; line <= 6; line = line + 1)
        {
            printf("* ");
        }
        printf("\n");
    }
}