#include<stdio.h>
int main()
{
int num;
printf("Enter five digit number:");
scanf("%5d",&num);
sum(num);
}
int sum(int num1)
{
int n =num1;

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
printf("\nSum of digits of %d is :%d", num1,f);

}
