#include <stdio.h>
#include <string.h>
//create constant
#define SIZE 5
// create structure
struct student
{
    char name[32], surname[32]; // array within structure
    int age;
    float weight;
    char gender;
};
void main()
{
    struct student batch[SIZE]; // array of strcture
    for(int i=0;i<`;i++)
    {
        fflush(stdin);
        printf("\n enter %d student detail \n enter name",i+1);
        gets(batch[i].name);
        printf("enter surname ");
        gets(batch[i].surname);
        printf("enter age ");
        scanf("%d", &batch[i].age);

        printf("enter weight ");
        scanf("%f", &batch[i].weight);
        fflush(stdin);
        printf("enter gender (male=m, female=f) ");
        scanf("%c", &batch[i].gender);
    }
}