/* Write a C program to input electricity unit charges and calculate total electricity bill according to
the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill */
#include<stdio.h>
int main()
{
    float unit, rate , bill;
    printf("Enter Electricity Unit Charges:");
    scanf("%f",&unit);
    if(unit<= 50)
    {
        rate = 0.5;
        bill = unit*rate;
    }
    else if(unit<=150)
    {
        rate = 0.75;
        bill = 25 + ((unit-50)*0.75) ;
    }
    else if(unit<=250)
    {
        rate = 1.2;
        bill = 100 + ((unit-150)*1.2) ;
    }
    else
    {
        rate = 1.5;
        bill = 220 + ((unit-250)*1.5) ;
    }

  float surcharge = bill*0.2;
  float tbill = bill + surcharge;
    printf("\nTotal electricity bill =:Rs.%0.2f",tbill);
    return 0;
}
