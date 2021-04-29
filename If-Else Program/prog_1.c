/* While purchasing certain items, a discount of 10% is offered if the quantity purchased is more
than 1000. If quantity and price per item are input through the keyboard, write a program to
calculate the total expenses.*/
#include<stdio.h>
int main()
{
    float qty, price, cost, fcost;
    printf("Enter the quantity of items purchased and price per item:");
    scanf("%f%f",&qty,&price);
    cost = qty*price;
   if(qty>1000)
   {
       fcost = cost - cost*0.1 ;
   }
   else
   {
       fcost = cost;
   }

   printf("Total expenses is : %.2f",fcost);

    return 0;
}
