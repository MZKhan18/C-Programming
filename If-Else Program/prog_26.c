/* Write a C program to check whether a alphabet is uppercase or lowercase alphabet*/
#include<stdio.h>
int main()
{
char ch;
printf("Enter any alphabet:");
scanf("%c",&ch);
if(ch>=97 && ch<=123)
{

           printf("%c is lowercase.",ch);
}
else
{
        printf("%c is uppercase.",ch);
        }
return 0;
}
