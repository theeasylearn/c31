<<<<<<< HEAD
#include<stdio.h>
#include<string.h>

void main() {

    char name[] = {'h', 'a', 'd', 'i', 'n', 'a', 'y', 'a'};
    for (int i = 0; i < 8; i++) {
        printf("%c", name[i]);
    }
    printf("\n---------------\n");

    char myName[] = "hadi nayani "; 
    printf("1st = %c \n", myName[1]);
    printf("10st = %c \n", myName[10]);
    for (int i = 0; i < 13; i++) {
        printf("%c", myName[i]);
    }

    printf("\n---------------\n");
    printf("myName = %s ", myName);
    
    printf("\n---------------\n");

    printf("Enter a char : ");
    scanf("%c", &myName[0]);
    printf("myName = %s ", myName);

    puts(myName);



}
=======
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

>>>>>>> f8964b0f443f6fdc36eefc383770f93d3e163b05
