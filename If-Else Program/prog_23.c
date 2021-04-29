/* Write a C program to check whether a character is alphabet or not. */
#include<stdio.h>
int main(){
char ch;
printf("Enter any character:");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
 printf("%c is a alphabet",ch);
 else
    printf("%c is a not alphabet",ch);
return 0;
}
