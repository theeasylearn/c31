// write a program to findout compound interest of given amount, rate,year using loop
#include <stdio.h>
void main()
{
    int amount,year,count;
    float rate,final_amount,interest;

    printf("enter amount");
    scanf("%d",&amount);

    printf("enter rate");
    scanf("%f",&rate);

    printf("enter year");
    scanf("%d",&year);

    final_amount = amount;
    count=1;
    while(count<=year)
    {
        interest = (final_amount * rate * 1) / 100;
        final_amount = final_amount + interest;
        count = count + 1;
    }
    printf("final amount = %f total interest %f",final_amount,(final_amount - amount));
}