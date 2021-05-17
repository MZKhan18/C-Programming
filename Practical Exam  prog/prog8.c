#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev;
    printf("Enter any five-digit number:");
    scanf("%5d",&n);
    rev=reverse(n,5);
    printf("Reverse = %d",rev);
}
int reverse(int num, int p){
int a=0;
if(num==0){
    return 0;
}
else{
    a= (num%10)*pow(10,p-1) + reverse(num/10,p-1);
    return a;
}
}
