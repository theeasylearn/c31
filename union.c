#include<stdio.h>
union player 
{
    int runs;
    int wickets;
};

void main()
{
    //create union variable
    union player p1,p2;
    p1.runs = 12500;
    p2.wickets = 100;

    printf("\n player 1 runs = %d wicket = %d",p1.runs,p1.wickets);
    printf("\n player 2 runs = %d wicket = %d",p2.runs,p2.wickets);

    p1.runs = 25000;
    p2.wickets = 300;

    printf("\n player 1 runs = %d wicket = %d",p1.runs,p1.wickets);
    printf("\n player 2 runs = %d wicket = %d",p2.runs,p2.wickets);

}