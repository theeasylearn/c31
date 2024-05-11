#include<stdio.h>
int main() {
    char name[] = "hadi na\0yani ";
    puts(name);
    
    for (int i = 0; i < sizeof(name); i++) {
        if (name[i] == ' ') {
            name[i] = '\0';
        }
    }
    puts(name);
    return 0;
}