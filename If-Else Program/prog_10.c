/*. Write a C program to find maximum between three numbers. */
#include<stdio.h>
int main()
{
int a , b ,c;
printf("Enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
    if(a>c)
    {
        printf("a=%d is the maximum between three numbers.",a);
    }
    else
    {
        printf("c=%d is the maximum between three numbers.",c);
    }

}
else
{
    if(b>c)
    {
        printf("b=%d is the maximum between three numbers.",b);
    }
    else
    {
        printf("c=%d is the maximum between three numbers.",c);

    }
}
    return 0;
}
