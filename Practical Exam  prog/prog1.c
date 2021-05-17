#include<stdio.h>
#include<math.h>
int main()
{
    float r,v,s;
    printf("Enter radius of sphere:");
    scanf("%f",&r);
    v=(4*3.14*pow(r,3))/3;
    s=4*3.14*(pow(r,2));
    printf("Volume= %.2f",v);
    printf("\nSurface area= %.2f",s);
    return 0;
}
