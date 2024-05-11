#include<stdio.h>
#include<string.h>

void main() {

    char name[30];
    printf("Enter your name : ");
    gets(name);
    printf("name = %s ", name);
    puts(name);
}