#include<stdio.h>
void main() {

    int num1, num2;

    printf("Enter number 1 : ");
    scanf("%d", &num1);

    printf("Enter number 2 : ");
    scanf("%d", &num2);

    char opr;
    printf("Enter operator : ");
    fflush(stdin);
    scanf("%c", &opr);

    if (opr == '+') {
        printf("Sum = %d ", num1 + num2);
    }
    else {
        if (opr == '-') {
            printf("subtraction = %d ", num1 - num2);
        } 
        else {
            if (opr == '*') {
                printf("product = %d ", num1 * num2);
            }
            else {
                if (opr == '/') {
                    // (float)num1 - typecasting 
                    printf("division = %.2f ", (float)num1 / num2);
                }
                else {
                    printf("Invalid input ");
                }
            }
        }
    }
}