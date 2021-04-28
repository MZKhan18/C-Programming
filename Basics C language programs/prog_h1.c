/*If a five-digit number is input through the keyboard, write a program to reverse the number.*/

#include<stdio.h>
int main(){

int n,n1,a,rev =0;
printf("Enter any five digit no:");
scanf("%5d",&n);
n1=n;

a= n%10;
n=n/10;
rev = rev + a*10000;

a= n%10;
n=n/10;
rev = rev + a*1000;

a= n%10;
n=n/10;
rev = rev + a*100;

a= n%10;
n=n/10;
rev = rev + a*10;

a= n%10;
n=n/10;
rev = rev + a;


printf("Reverse of %d is %d", n1, rev);
return 0;

}

