/*A cashier has currency notes of denomination 10,50 and 100. if the ammount to be withdraw is input through the
keyboard in hundreds, find the total no. of currency notes of each dinomination the cashier will have to give to the withdrawer.*/
#include<stdio.h>
int main(){

int no100, no50, no10, amt;
printf("Enter the amount to be withdraw:");
scanf("\n%3d",&amt);

no100 = amt/100;
amt= amt%100;

no50 = amt/50;
amt= amt%50;

no10 = amt/10;

printf("\nNumber of 100 rupee notes=%d", no100);
printf("\nNumber of 50 rupee notes=%d", no50);
printf("\nNumber of 10 rupee notes=%d", no10);

return 0;

}
