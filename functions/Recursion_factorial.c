#include<stdio.h>
int main()
{
int f,a;
printf("Enter any number: ");
scanf("%d",&a);
f = fact(a);
printf("factorial = %d", f);
}
int fact(int x){
int facto ;
if(x==0)
{
    return 1;
}
else{
facto = x*fact(x-1);
return facto;
}
}
