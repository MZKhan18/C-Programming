/*If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios. */
#include<stdio.h>
#include<math.h>
int main(){
float a,s,c,t;
printf("Enter angle:");
scanf("%f",&a);
float a1 =a;
a=a*3.14/180;
s = sin(a);
c = cos(a);
t = tan(a);

/*s=s*3.14/180;
c=c*3.14/180;
t=t*3.14/180;*/

printf("\nSin(%.2f) = %.2f",a1,s);
printf("\nCos(%.2f) = %.2f",a1,c);
printf("\nTan(%.2f) = %.2f",a1,t);

return 0;

}
