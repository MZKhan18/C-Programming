/*The current year and the year in which the employee joined the organization are entered through
the keyboard. If the number of years for which the employee has served the organization is
greater than 3 then a bonus of Rs. 2500/- is given to the employee. If the years of service are not
greater than 3, then the program should do nothing */
#include<stdio.h>
int main()
{
    int cyear , jyear;
    printf("Enter the year of joining and current year:");
    scanf("%d%d",&jyear,&cyear);
    if(cyear - jyear >3)
    {
        printf("Bonus is 25000");
    }
    else
    {
        printf("No bonus");
    }
    return 0;
}
