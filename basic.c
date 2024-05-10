#include<stdio.h>
int main() {

    char str[] = {'h', 'a', 'd', 'i'}; 
    for (int i = 0; i < 4; i++) {
        printf("%c ", str[i]);
    }

    char name[] = "hadi nayani ";
    printf("\n");
    printf("sizeof(name) = %d, sizeof(name[0]) = %d \n", sizeof(name), sizeof(name[0]));

    for (int i = 0; i < sizeof(name); i++) {
        printf("%c", name[i]);
    }
    printf("\n");
    printf("name = %s ", name);

    
    return 0;
}

