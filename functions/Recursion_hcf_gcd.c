// gcd= greatest common divisor = hcf
#include<stdio.h>
int main()
{
    int x, p ,n;
    printf("Enter first number: ");
    scanf("%d",&n);
    printf("Enter second number: ");
    scanf("%d",&p);
    x= gcd(n,p);
    printf("Answer = %d", x);
}
int gcd(int a ,int b){

int c;
if(b==0){
    return a;

}
else{
    c= gcd(b, a%b);
    return c;
}
}
