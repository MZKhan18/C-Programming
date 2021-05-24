#include<stdio.h>
int main()
{

    int n, i=0, c;
    scanf("%d",&n);
    printf("Fibonacci series\n");
    for(c=0; c<=n-1;c++)
    {
        printf("%d\n", fibonacci(c));
    }
    return 0;
}
int fibonacci(int n)
{

    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return (fibonacci(n-1) + fibonacci(n-2));
}
