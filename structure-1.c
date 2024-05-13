#include <stdio.h>
// create structure
struct dob
{
    int day;
    int month;
    int year;
};
void main()
{
    // create structure type variable
    struct dob dhruv;
    printf("enter dhruct detail");
    printf("\n enter day");
    scanf("%d", &dhruv.day);

    printf("\n enter month");
    scanf("%d", &dhruv.month);

    printf("\n enter year");
    scanf("%d", &dhruv.year);

    //how to display/access structure variable
    printf("\n dhruv birthday detail \n %d-%d-%d",dhruv.day,dhruv.month,dhruv.year);

    
}