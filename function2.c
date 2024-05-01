// example to create function (define function)
#include<stdio.h>
// type 2
//without return value with argument(input)
void printletter(char letter,int howmanytimes)
{
    printf("\n");
    for(int count=1;count<=howmanytimes;count++)
    {
            printf("%c",letter);
    }    
    printf("\n");
}
void main()
{
    printletter('@',80); //how to run function (call)
    printf("the easylearn academy");
    printletter('-',90);
    printf("105 Eva surbhi, opp aksharwadi, bhavnagar");
    printletter('^',100);
}