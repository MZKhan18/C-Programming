/*Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents
of C and D without using third variable.;*/
#include<stdio.h>
int main(){
int a , b ;
printf("Enter two numbers:\n");
scanf("%d%d",&a, &b);
printf("Before swaping: C=%d D=%d" , a , b);
a= a+b;
b=a-b;
a=a-b;
printf("\nAfter swaping: C=%d D=%d" , a , b);
return 0;
}
