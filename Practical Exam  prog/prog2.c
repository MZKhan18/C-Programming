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

int f= a+b+c+d+e;
printf("\nSum of digits of %d is :%d", n1,f);
return 0;


}
