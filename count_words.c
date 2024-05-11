#include <stdio.h>
#include <string.h>

void main()
{
    char address[50];
    int position = 0, words = 1;
    printf("enter your address");
    gets(address);

    do
    {
        if (address[position] == ' ')
            words = words + 1;
        position = position + 1;
    }while(position<50 || address[position] != '\0');

    printf("words = %d",words);
}
