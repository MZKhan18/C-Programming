/*If a five-digit number is input through the keyboard, write a program to reverse the number.*/
#include<stdio.h>
int main(){

int n,n1,a,b,c,d,e  ,rev;
printf("Enter any five digit no:");
scanf("%5d",&n);
n1=n;

a= n%10;
n=n/10;

b= n%10;
n=n/10;

c= n%10;
n=n/10;

d= n%10;
n=n/10;

e= n%10;
n=n/10;

rev = a*10000 + b*1000 + c*100 + d*10 + e ;

printf("Reverse of %d is %d", n1, rev);
return 0;

}
