/*Wind chill factor is the felt air temperature on exposed skin due to wind. The wind chill temperature is always lower
then the air temperature, and is calculated as per the following formula:
 wcf = 35.74+0.6215t+(0.4275t-35.75)*v0.16
where t is the temperature and v is the wind velocity. Write a program to receive values of t and v and calculated wind
chill factor (wcf).*/
#include<stdio.h>
#include<math.h>
int main(){
float wcf, t, v;

printf("Enter temprature and velocity:");
scanf("\n%f %f", &t,&v);

wcf = 35.47 + 0.6215*t +(0.4275*t - 35.75)*pow(v,0.16);

printf("\nWind chill factor =%f",wcf);
return 0;

}
