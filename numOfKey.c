#include<stdio.h>
#include<string.h>

void main() {

    char str[5];
    puts(str);
    printf("Enter a string : ");
    gets(str);
    printf("%s \n", str);
    char key = 'a';
    printf("%c \n", key);
    int count = 0;
    // str = "hadi nayani ";
    int size = sizeof(str);
    printf("size - %d \n", size);
    for (int i = 0; i < 5; i++) {
        if (str[i] == key) {
            count++; // 1 // 2 // 3
            printf("%d \n", count);
        }
            printf("out %d \n", count);
    }
    printf("count = %d ", count);
}