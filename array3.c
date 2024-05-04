// write a program that reverse the array

#include<stdio.h>
void main()
{
    int number[5]={10,20,30,40,50};
    int revrse_array[5];
    int count=0;
    
    // printf("%d",number[0]);
    // printf("%d",number[1]);

    for(int i=4;i>=0;i--)
    {
        // printf("%d",i);
        // printf("%d ",number[i]);
        // printf("%d",count);
        revrse_array[count]=number[i];
        count++;
    }
    
    for(int i=0;i<5;i++)
    {
        printf("%d ",revrse_array[i]);
    }

    // printf("%d",revrse_array[1]);
    // printf("%d",revrse_array[2]);
    // printf("%d",revrse_array[3]);
    // printf("%d",revrse_array[4]);
}