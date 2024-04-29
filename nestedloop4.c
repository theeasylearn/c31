// armstrong number

#include<stdio.h>
void main()
{
    int number = 370;
    int a;
    int b;
    int c;
    int ans;

    a=number/100;
    // printf("%d",a);

    b=number/10;
    b=b%10;
    // printf("\n%d",b);

    c=number%10;
    // printf("%d",c);

    ans=(a*a*a)+(b*b*b)+(c*c*c);
    // printf("%d",ans);

    if(number==ans)
    {
        printf("this is armstrong number");
    }
    else{
        printf("not armstrong number");
    }
}