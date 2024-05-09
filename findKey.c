// key = 2
// int matrix[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};

#include <stdio.h>
void main()
{
    int key = 2;
    int matrix[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};

    int i, j;
    int indexi = -1, indexj = -1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matrix[i][j] == key)
            {
                indexi = i; // 0
                indexj = j; // 2
                break;
            }
        }
        if (matrix[i][j] == key)
        {
            break;
        }
    }
    if (indexi < 0 || indexj < 0) {
        printf("Key does not exist ");
    } else {
        printf("Key foud at (%d, %d)th element ", indexi, indexj);
    }
    
    // int brr[10];
    // int arr[-10 : 10];
}