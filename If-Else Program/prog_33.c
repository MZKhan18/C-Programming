/*Write a C program to find all roots of a quadratic equation.*/
#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, disc, r1, r2,imaginary;
    printf("Enter a, b, and c in equation(aX^2 + bX + c):");
    scanf("%f%f%f",&a,&b,&c);

disc = (b*b) - (4*a*c) ;
if(disc>0)
{
    r1 = (-b + sqrt(disc)) / (2*a);
 r2 = (-b - sqrt(disc)) / (2*a);
printf("Two distinct and real roots exists: %.2f and %.2f", r1, r2);
}
else if(disc==0)
{
    r1=r2= -b/(2*a);
  printf("Two equal roots exists: %.2f and %.2f", r1, r2);

}
else if(disc<0)
{

 r1 = r2 = -b / (2 * a);
imaginary = sqrt(-disc) / (2 * a);
printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",r1, imaginary, r2, imaginary);

}
    return 0;
}
