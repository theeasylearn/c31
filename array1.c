#include <stdio.h>
void main()
{
    // array create
    int age[5], index = 0,sum = 0;
    float average;
    // accept input in array
    while (index < 5)
    {
        printf("Enter %d friend age", index + 1);
        scanf("%d", &age[index]);
        index++;
    }

    index = 0;
    do
    {
        // array display
        printf("\n %d friends age = %d", index + 1, age[index]);
        sum = sum + age[index];
        index++; // 1
    }while(index<5);
    average = sum / 5;
    printf("\n average = %.2f",average);
    printf("\n Good bye");
}