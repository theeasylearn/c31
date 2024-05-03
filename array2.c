#include <stdio.h>
void main()
{
    // static initilization of array
    float temprature[5] = {36.2, 35.7, 32.9, 38.1, 25.9};
    for (int index = 0; index < 5; index++)
    {
        printf("%d day temprature %.2f \n", index + 1, temprature[index]);
    }
}