#include<stdio.h>
#define max(x,y)(x>y?x:y)
int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter four numbers:\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
     e=max(a,b);
     f=max(e,c);
     g=max(f,d);
     printf("Largest is %d",g);
}
