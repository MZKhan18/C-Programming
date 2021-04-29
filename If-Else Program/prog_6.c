/*WAP to calculate energy bill .Read the starting and ending metre readings . if the consumed
electricity energy is greater than or equal to 200 units the rate should be 2.50 /unit otherwise
1.50/unit.*/
#include<stdio.h>
int main()
{
    float end, start, rate ,bill;
    printf("Enter starting and ending reading:");
    scanf("%f%f",&start,&end);
    if(end - start >=200)
    {
        rate= 2.5;
    }
    else
    {
        rate = 1.5;
    }
    bill = (end - start)*rate;
    printf("energy bill is: %.2f",bill);
    return 0;
}
