/*Consider a currency system in which there are notes of seven denominations, namely, Re.1, Rs.2, Rs.5, Rs.10, Rs.50,
Rs.100. If a sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes
that will combine to give Rs. N.*/
#include<stdio.h>
int main(){

int amt, amt1, no1,no2,no5,no10,no50,no100;
printf("Enter amount:");
scanf("\n%d",&amt);
amt1= amt;

no100= amt/100;
amt= amt%100;

no50= amt/50;
amt= amt%50;

no10= amt/10;
amt= amt%10;

no5= amt/5;
amt= amt%5;

no2= amt/2;
amt= amt%2;

no1= amt/1;


int total = no1+no2+no5+no10+no50+no100;

printf("\nSmallest no of notes required =%d",total);
printf("\n\nNo of 100 rupee notes=%d",no100);
printf("\nNo of 50 rupee notes=%d",no50);
printf("\nNo of 10 rupee notes=%d",no10);
printf("\nNo of 5 rupee notes=%d",no5);
printf("\nNo of 2 rupee notes=%d",no2);
printf("\nNo of 1 rupee notes=%d",no1);

return 0;
}
