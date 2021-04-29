/* find that the given number is divisible by 5 and 11 or not*/
#include<stdio.h>
int main(){
int a;
printf("Enter the numbers:");
scanf("%d",&a);
if(a%5==0 && a%11==0)
    printf("%d is divisible by both 5 and 11",a);
else
    printf("%d is is not divisible by 5 and 11",a);
return 0;
}
