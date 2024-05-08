#include<stdio.h>
void main() {
    // * method 1
    // int matrix[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    
    // * method 2
    // int matrix[][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}}
    
    // * method 3
    int matrix[][4] = {1, 2, 3, 4, 1, 2, 3, 4};
    int row = 3, col = 4;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
            matrix[i][j] += 10;
        }
        printf("\n");
    }

    // matrix[0][0] = 1;
    // arr[0] = 1;
}