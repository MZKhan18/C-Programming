/* Write a program to receive Cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates (r, ɸ).
 Hint: r = sqrt (x2 + y2
) and ɸ = tan -1 (y/x). */

#include<stdio.h>
#include<math.h>
int main(){
float x,y,r,theta;
printf("Enter values of x and y:");
scanf("\n%f%f",&x,&y);

r= sqrt(x*x +y*y);
theta = atan2(y,x);
// or theta= atan(y/x);
theta = theta*180/3.14;

printf("\nr=%f\ttheta=%f",r,theta);
return 0;


}
