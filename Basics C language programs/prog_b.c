/*The distance between two cities (in km._) is input through the keyboard.
Write a program to convert and print this distance in meters ,feet, inches and centimeters*/
#include <stdio.h>
int main(){
float km,m,cm ,inches, feet;

printf("Enter distance in KM=");
scanf("%f",&km);
m=km*1000;
cm = m*100;
inches=m*39.37;
feet=inches/12;

printf("\n Kilometre=%f",km);
printf("\n Metre=%.3f",m);
printf("\n centimetre=%.3f",cm);
printf("\n inches=%.3f",inches);
printf("\n Feet=%.3f",feet);
return 0;
}
