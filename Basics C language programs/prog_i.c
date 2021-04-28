/*If lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle.*/
#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,s,area;
printf("Enter three sides of triangle:");
scanf("%f%f%f",&a,&b,&c);

s= (a+b+c)/2;

area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("Area of triangle =%f",area);
return 0;
}
