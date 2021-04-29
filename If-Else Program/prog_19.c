/*Write a C program to check whether a number is negative, positive or zero. */
#include<stdio.h>
int main(){
int n;
printf("Enter any number:");
scanf("%d",&n);
if(n>0)
    printf("%d is positive",n);
if(n==0)
    printf("%d is zero",n);
else
printf("%d is negative",n);

return 0;

}
