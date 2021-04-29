/*If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to
determine the youngest of the three*/
#include<stdio.h>
int main()
{
int a , b ,c;
printf("Enter the ages of Ram, Shyam and Ajay:");
scanf("%d%d%d",&a,&b,&c);
if(a<b)
{
    if(a<c)
    {
        printf("Ram is youngest.");
    }
    else
    {
        printf("Ajay is youngest.");
    }

}
else
{
    if(b<c)
    {
        printf("Shyam is youngest.");
    }
    else
    {
        printf("Ajay is youngest.");
    }
}
    return 0;
}
