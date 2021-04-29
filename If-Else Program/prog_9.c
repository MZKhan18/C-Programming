/* A five-digit number is entered through the keyboard. Write a program to obtain the reversed
number and to determine whether the original and reversed numbers are equal or not. */
#include<stdio.h>
int main()
{
    int n,n1, a,b,c,d,e;

printf("Enter any five digit number:");
scanf("%5d",&n);
n1 = n;
a = n%10;
n= n/10;

b = n%10;
n= n/10;

c = n%10;
n= n/10;

d = n%10;
n= n/10;

e = n%10;


int reverse = a*10000 + b*1000 + c*100 + d*10 +e ;
printf("Original number is : %d \n",n1);
printf("Reversed number is : %d",reverse);
if(n1== reverse)
{
    printf("\nThe original number and reversed number is same");
}
else
{
    printf("\nThe original number and reversed number is not same");
}
return 0;
}
