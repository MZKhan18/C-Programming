/*If cost price and selling price of an item is input through the keyboard, write a program to
determine whether the seller has made profit or incurred loss. Also determine how much profit
he made or loss he incurred*/
#include<stdio.h>
int main()
{
    int cp, sp;
    printf("Enter cost price and selling price:");
    scanf("%d%d",&cp,&sp);
    int result = sp - cp;
    if(result>0)
    {
        printf("The seller has profit of: %d",result);
    }
    else
    {
        printf("The seller has loss of: %d",result);

    }
    return 0;
}
