// example to create function (define function)
#include<stdio.h>
// type 3
//with return value with argument(input)
int add(int num1,int num2)
{
    //local variable
    int result = num1 + num2;
    return result;
}
int sub(int num1,int num2)
{
    int result = num1 - num2;
    return result;
}
int mul(int num1,int num2)
{
    int result = num1 * num2;
    return result;
}
float div(int num1,int num2)
{
    float result = (float)num1/num2;
    return result;
}
void main()
{
    int num1,num2;
    float result;
    printf("Enter value for num1");
    scanf("%d",&num1);

    printf("Enter value for num2");
    scanf("%d",&num2);

    //call function
    result = add(num1,num2);
    printf("additon = %.2f",result);

    result = sub(num1,num2);
    printf("subtraction = %.2f",result);

    result = mul(num1,num2);
    printf("multiplication = %.2f",result);

    result = div(num1,num2);
    printf("divison = %.2f",result);
}