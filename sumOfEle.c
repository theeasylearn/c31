#include<stdio.h>
void main() {

    int matrix[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int sum = 0;

    for (int i = 0; i < 3; i++) { // access sub array 
        for (int j = 0; j < 4; j++) { // access each ele of sub array 
            sum = sum + matrix[i][j];
            printf("sumvalue = %d \n", sum);
        }
    }
    printf("Sum = %d ", sum);
}

// sum = 0
// sum = sum + matrix[0][0] = 0 + 1 = 1
// sum = sum + matrix[0][1] = 1 + 2 = 3
// sum = sum + matrix[0][2] = 3 + 3 = 6
// sum = sum + matrix[0][3] = 6 + 4 = 10

// sum = sum + matrix[1][0] = 10 + 1 = 11