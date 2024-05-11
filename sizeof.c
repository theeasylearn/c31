#include<stdio.h>
#include<string.h>

void main() {

    float num = 1.123;
    printf("num = %d \n", sizeof(num));

    char name[] = "hadi ";
    printf("numof ele = %d ", sizeof(name) / sizeof(name[0]));

    // num of apple = num of set * num of apples in one set 
    // 36           =    3      * 12 
}