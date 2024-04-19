/* write a program to find use given letter is vowel or not */
#include <stdio.h>
void main()
{
    char letter;
    printf("Enter any one letter");
    scanf("%c", &letter);

    switch (letter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("it is vowel");
        break;
    default:
        printf("it is not vowel");
        break;
    }
}