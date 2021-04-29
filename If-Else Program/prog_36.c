/*Write a C program to input basic salary of an employee and calculate its Gross salary according
to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95% */
#include<stdio.h>
int main()
{
    float bs,gs,hra,da;
    printf("Enter Basic Salary:");
    scanf("%f",&bs);
    if(bs<=10000)
    {
        hra = bs*0.2;
        da = bs*0.8;
    }
    else if(bs<=20000)
    {
        hra = bs*0.25;
        da = bs*0.9;

    }
    else
    {
        hra = bs*0.3;
        da= bs*0.95;
    }
    gs = bs + da + hra ;
    printf("\nBasic Salary = %.2f", bs);
    printf("\nHRA = %.2f", hra);
    printf("\nDA= %.2f", da);
    printf("\nGross Salary = %.2f", gs);

    return 0;
}
