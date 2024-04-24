//write a program to print celsius to farhanheit chart between 1 to 50
#include<stdio.h>
void main()
{
     int celsius;
     float fahranheit;

     for(celsius=50;celsius>=1;celsius=celsius-1)
     {
          fahranheit = ((celsius * 9)/5) + 32;
          printf("celsius = %d fahranheit = %.2f \n",celsius,fahranheit);
     }
}