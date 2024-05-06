#include <stdio.h>
void main()
{
    // create 2d array
    int marks[5][3];
    int row, column;
    // input
    for (row = 0; row < 5; row++) // outer loop
    {
        printf("Enter %d student marks\n", row + 1);
        for (column = 0; column < 3; column++) // inner loop
        {
            printf("Enter %d subject marks", column + 1);
            scanf("%d", &marks[row][column]);
        }
    }
    // output
    for (row = 0; row < 5; row++) // outer loop
    {
        for (column = 0; column < 3; column++) // inner loop
        {
            printf("%10d", marks[row][column]);
        }
        printf("\n");
    }
}