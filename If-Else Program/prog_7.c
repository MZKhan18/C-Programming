/*In a company an employee is paid as under: If his basic salary is less than Rs. 1500, then HRA =
10% of basic salary and DA = 90% of basic salary. If his salary is either equal to or above Rs.
1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee's salary is input
through the keyboard write a program to find his gross salary. */
#include<stdio.h>
int main()
{
    float hra, da, bsal, gsal;
    printf("Enter basic salary of employee:");
    scanf("%f",&bsal);
    if(bsal<1500)
    {
        hra = bsal*0.1;
        da = bsal*0.9;

                  }

  else
  {
      hra = 500;
      da = bsal*0.98;
  }

  gsal = da + hra +bsal;
  printf("basic salary = %.2f",bsal);
  printf("\nHRA = %.2f",hra);
  printf("\nDA = %.2f",da);
  printf("\nGross salary = %.2f",gsal);
  return 0;
}
