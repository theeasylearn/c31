// write a program to findout factorial of given number
#include <stdio.h>
#include <conio.h>
void main()
{
    int number, multiplier, factorial;
    printf("enter number");
    scanf("%d",&number); // 4
    factorial = number;   // 4
    multiplier = number; //4
    while(multiplier>1)
    {
        multiplier = multiplier - 1;        // 3
        factorial = factorial * multiplier; // 4 x 3

    }
    printf("factorial = %d",factorial);
}