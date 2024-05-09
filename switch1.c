/*
    write a program to accept day of week from user. then print name of the day.
 day = 1 display monday
 day = 2 display tuesday
 day = 3 display wednesday
 day = 4 display thursday
 day = 5 display friday
 day = 6 display saturday
 day = 7 display sunday

 */
#include <stdio.h>
void main()
{
    int day;
    printf("enter day");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("it is monday");
        break;

    case 2:
        printf("it is tuesday");
        break;

    case 3:
        printf("it is wednesday");
        break;

    case 4:
        printf("it is thursday");
        break;

    case 5:
        printf("it is friday");
        break;

    case 6:
        printf("it is saturday");
        break;

    case 7:
        printf("it is sunday");
        break;

    default:
        printf("it is not valid input");
    }
}