#include<stdio.h>
void main()
{
    int start;
    int end;
    int a,b,c;
    int ans;

    printf("enter starting number : ");
    scanf("%d",&start);

    printf("enter ending number : ");
    scanf("%d",&end);

    for(int i=start ; i<=end ; i++)
    {
        // printf("%d ",i);
        // 153
        a=i/100;

        b=i/10;
        b=b%10;

        c=i%10;

        // a=a*a*a
        ans = (a*a*a) + (b*b*b) + (c*c*c) ; 

        if(i==ans)
        {
            printf("\narmstrong number : %d",i);
        }

    }
}