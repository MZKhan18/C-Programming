/* 40. A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6-10
days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30 days
your membership will be cancelled. Write a program to accept the number of days the member is
late to return the book and display the fine or the appropriate message. */
#include<stdio.h>
int main()
{
    int days;
    printf("Enter the number of days of returning the book late:");
    scanf("%d",&days);
    if(days<= 5)

        printf("Fine = 50 paise.");
    else if(days>5 && days<11)
{printf("Fine = Rs 1.");}

    else if(days>10 && days<31)
      {printf("Fine = Rs 5.");}

    else if(days > 30)
        {printf("Your membership is cancelled."); }

return 0;
}
