#include <stdio.h>
#include <string.h>
// create constant
#define SIZE 2
#define SUBJECT_COUNT 3
// create structure
struct marksheet
{
    char fullname[32];           // array within structure
    int subjects[SUBJECT_COUNT]; // array within structure
    int total;
    float percentage;
    char result;
}; //
void main()
{
    struct marksheet batch[SIZE]; // array of structure
    int temp=0;
    for (int i = 0; i < SIZE; i++)
    {
        fflush(stdin);
        printf("enter %d student detail", i);
        printf("\nenter name");
        gets(batch[i].fullname);

        for(int j=0;j<SUBJECT_COUNT;j++)
        {
            printf("\n enter %d subject marks",j+1);
            scanf("%d",&batch[i].subjects[j]);
            temp = temp + batch[i].subjects[j];
        }
        if(batch[i].subjects[0]>=33 && batch[i].subjects[1]>=33 && batch[i].subjects[2]>=33)
        {
            batch[i].result = 'p';
        }
        else 
        {
            batch[i].result = 'f';
        }
        batch[i].total = temp;
        batch[i].percentage = batch[i].total / SUBJECT_COUNT;
    }
    printf("===============================================================================");
    printf("\nRESULT\n");
    printf("===============================================================================\n");
    printf("Name\t\tsub1\t\tsub2\t\tsub3\t\ttotal\t\taverage\tresult\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%s\t\t %d\t\t %d\t\t%d\t\t%d\t\t%5.2f\t%c \n",batch[i].fullname,batch[i].subjects[0],batch[i].subjects[1],batch[i].subjects[2],batch[i].total,batch[i].percentage,batch[i].result);
    }
}