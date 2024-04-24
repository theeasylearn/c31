//1 4 9 16 25 ..... 10000
//1 2 3 4           100
#include<stdio.h>
void main()
{
    int number,square;
    for(number=1;number<=100;number++)
    {
        square = number * number;
        printf("\t %d",square);
    }
}
