/*If the marks obtained by a student in five different subjects are input through the keyboard, write a program to find out
the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be
obtained by a student in each subject is 100.*/
#include<stdio.h>
int main(){
int m1,m2,m3,m4,m5;
printf("Enter marks in five subject:");
scanf("\n%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
int agg= m1+m2+m3+m4+m5;
float perc= agg/5;
printf("\n Aggregate marks=%d Percentage=%f",agg,perc);
return 0;


}
