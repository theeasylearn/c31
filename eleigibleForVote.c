#include<stdio.h>
void main() {
    
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
                            

    char check;
    printf("Are you Indian : {y / n} : ");

    fflush(stdin);
    scanf("%c", &check);

    if (age > 18) 
    {
        if (check == 'y') 
        {
            printf("You are eligible for voting. ");
        } 
        else
        {
            printf("You are not eligible for voting. ");
        }
    } 
    else 
    {
        printf("You are not eligible for voting. ");
    }
}