#include<stdio.h>
int main()
{
    int x, p ,n;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Enter power value: ");
    scanf("%d",&p);
    x= power(n,p);
    printf("Answer = %d", x);
}
int power(int a ,int b){

int c;
if(b==0){
    return 1;

}
else{
    c= a*power(a, b-1);
    return c;
}
}
