#include<stdio.h>
void main() {

    int matrix[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int prod = 1;
    int i = 0;
    int j;
    while (i < 3) {
        j = 0;
        while (j < 4) {
            prod *= matrix[i][j];
            j++;
        }
        i++;
    }
    printf("Prod = %d ", prod);
}