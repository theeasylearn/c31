#include<stdio.h>
#include<string.h>
union info 
{
    int runs;
    int wickets;
};
struct  player
{
    char name[32];
    char type; //b = blowler, t = batter
    union info data;
};

void main()
{
    struct player p1,p2;
    printf("enter first player detail \n name");
    gets(p1.name);
    fflush(stdin);
    printf("\n press b for baller press t for batter");
    scanf("%c",&p1.type);
    if(p1.type == 'b')
    {
        printf("Enter wickets");
        scanf("%d",&p1.data.wickets);
    }
    else if(p1.type == 't')
    {
        printf("Enter runs");
        scanf("%d",&p1.data.runs);
    }
    fflush(stdin);
    printf("enter second player detail \n name");
    gets(p2.name);
    fflush(stdin);
    printf("\n press b for baller press t for batter");
    scanf("%c",&p2.type);
    
    if(p2.type == 'b')
    {
        printf("Enter wickets");
        scanf("%d",&p2.data.wickets);
    }
    else if(p2.type == 't')
    {
        printf("Enter runs");
        scanf("%d",&p2.data.runs);
    }

    //display
    if(p1.type == 'b')
    {
        printf("\n Name %s\t\t\t Type %c\t\t Wicket %d",p1.name,p1.type,p1.data.wickets);
    }
    else if(p1.type == 't')
    {
        printf("\n Name %s\t\t\t Type %c\t\t runs %d",p1.name,p1.type,p1.data.runs);
    }

     if(p2.type == 'b')
    {
        printf("\n Name %s\t\t\t Type %c\t\t Wicket %d",p2.name,p2.type,p2.data.wickets);
    }
    else if(p2.type == 't')
    {
        printf("\n Name %s\t\t\t Type %c\t\t runs %d",p2.name,p2.type,p2.data.runs);
    }

}