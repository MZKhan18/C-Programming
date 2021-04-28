/*If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the
modulus operator ‘%’)*/
#include<stdio.h>
int main(){
int n;
printf("Enter five digit number:");
scanf("%5d",&n);
int n1 = n;
int a= n%10;
n= n/10;

int b= n%10;
n= n/10;

int c= n%10;
n= n/10;

int d= n%10;
n= n/10;

int e= n%10;

int f= a+  e;
printf("\nSum of digits of %d is :%d", n1,f);
return 0;


}
