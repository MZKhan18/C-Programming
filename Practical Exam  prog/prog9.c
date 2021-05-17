#include<stdio.h>
int main()
{
    int num,sum;
    printf("Enter the any limit : ");
    scanf("%d",&num);
    sum=evensum(num);
    printf("Sum = %d",sum);
}
int evensum(int n)
{
  int sum1=0;
    if(n%2==0){
        if(n!=0){
        sum1= n + evensum(n-2);
        return sum1;
        }
    }
    else{
        return evensum(n-1);
    }

}
