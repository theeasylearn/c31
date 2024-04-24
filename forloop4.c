// write a program to print sum of all digits in given amount
// input 12345
// process 1+2+3+4+5
// output 15
#include <stdio.h>
void main()
{
    int amount, reminder, sum = 0; // sum=0 declration with initialization

    printf("Enter amount");
    scanf("%d", &amount); // 12345

    for(;amount>0;)
    {
        reminder = amount % 10; // 5
        sum = sum + reminder; // 5
        amount = amount / 10; // 1234
    }
    printf("sum =%d",sum);
}