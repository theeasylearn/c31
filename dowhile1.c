//write a program to accept two numbers from user. do addition, subtraction, multiplication, division as per user choice. program should work until user give 0 as choice.
#include<stdio.h>
void main()
{
    int num1,num2,choice;
    float result;
    do 
    {
        printf("\n Enter first num");
        scanf("%d",&num1);

        printf("Enter second num");
        scanf("%d",&num2);

        printf("press 1 for addition\n press2 for subtraction \npress 3 for multiplication\n press 4 for division \n press 0 to exit \n enter choice");
        scanf("%d",&choice);
        if(choice==1)
        {
            result = num1 + num2;
        }

        else if(choice==2)
        {
            result = num1 - num2;
        }

        else if(choice==3)
        {
            result = num1 * num2;
        }
        else if(choice==4)
        {
            result = (float) num1 / num2;
        }
        else if(choice==0)
        {
            printf("\n good bye.....");
        }
        else 
        {
            printf("\ninvalid choice");
        }
        
        if(choice>=1 && choice<=4)
        {
            printf("\n RESULT = %.2f",result);
        }

    }while(choice!=0);
}