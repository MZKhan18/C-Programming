/*16. A company insures its drivers in the following cases:
 − If the driver is married.
 − If the driver is unmarried, male & above 30 years of age.
 − If the driver is unmarried, female & above 25 years of age.
 In all other cases the driver is not insured. If the marital status, sex and age of the driver are the
inputs, write a program to determine whether the driver is to be insured or not.*/
#include<stdio.h>
int main()
{
    int age;
    char ms,gender;
    printf("Enter Age, Marital status(m/u) and Gender(m/f):");
    scanf("%d %c %c",&age,&ms,&gender);
   if(ms=='m')
    printf("Driver should be insured");
   else
   {
       if(gender=='m')
       {
           if(age>30)
              printf("Driver should be insured");
           else
            printf("Driver should not be insured");
       }
       else
       {
           if(age>25)
            printf("Driver should be insured");
           else
            printf("Driver should not be insured");

       }
   }
return 0;
}
