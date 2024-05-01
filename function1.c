// example to create function (define function)
#include<stdio.h>
// type 1
//without return value without argument
void printstar()
{
    printf("\n");
    for(int count=1;count<=50;count++)
    {
            printf("*");
    }    
    printf("\n");
}
void main()
{
    printstar(); //how to run function (call)
    printf("the easylearn academy");
    printstar();
    printf("105 Eva surbhi, opp aksharwadi, bhavnagar");
    printstar();
}