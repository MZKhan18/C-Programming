/*Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature
into centigrade degrees.*/
#include<stdio.h>
int main(){
float f , cent;
printf("Enter temprature in fahrenheit:");
scanf("%f",&f);
cent= 5.0/9.0*(f - 32);
printf("\n Temprature in centigrade=%f",cent);
return 0;


 }


