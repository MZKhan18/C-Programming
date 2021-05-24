/*wap to find addition, subtraction, multiplication or division of two numbers */
#include<stdio.h>
#include<math.h>
int main()
{
    int code,n;
    float a,b,c,sum,avg, square,cube,sqroot,power,fact,sub,multi,div;
    printf("            --CALCULATOR--           ");
    printf("\n\nHow many numbers you want to give input:");
    scanf("%d",&n);
    switch(n){
     case 1:printf("\nwhat do you want to find:\n>Square(code=01)\n>Cube(code=02)\n>Sqaure Root(code=03)\n>Power(code=04)\n>Factorial(code=5)");
            printf("\n\nEnter code:");
            scanf("%d",&code);
        switch(code){
            case 01: printf("\n    -SQUARE-  ");
                     printf("\nEnter any number:");
                     scanf("%f",&a);
                     square = (a*a) ;
                     printf("Square = %.2f",square);
                     break; // break of code 1
            case 02: printf("\n     -CUBE-    ");
                     printf("\nEnter any number:");
                     scanf("%f",&a);
                     cube = a*a*a ;
                     printf("\nCube = %.2f",cube);
                     break;
            case 03: printf("\n -SQUARE ROOT-    ");
                     printf("\nEnter any number:");
                     scanf("%f",&a);
                     sqroot = sqrt(a);
                     printf("\nSquare Root = %.2f",sqroot);
                     break;
            case 04:printf("\n        -POWER-     ");
                     printf("\nEnter any number and its power:");
                     scanf("%f%f",&a,&b);
                     power = pow(a,b);
                     printf("\nPower = %.2f",power);
                     break;
            case 05: printf("\n  -FACTORIAL-    ");
                     printf("\nEnter any number:");
                     scanf("%f",&a);
                      fact = 1;

                      for(int i=a ; i>0 ; i--)
                       {
                         fact = fact*i ;

                         }
                        printf("\nFactorial = %.2f",fact);
                     break;
            default: printf("Code didn't matched\n");
                     break;

         }

        break; // break of n 1

     case 2:printf("\nwhat do you want to find:\n>Addition(code=01)\n>Subtraction(code=02)\n>Multiplication(code=03)\n>Division(code=04)\n>Modulas(code=5)\n>Average(code=06)");
            printf("\nEnter code:");
            scanf("%d",&code);
       switch(code){
       case 01:printf("\n   -ADDITION-  ");
               printf("\nEnter two numbers:");
               scanf("%f%f",&a,&b);
               sum = a+b;
               printf("\nSum =%.2f",sum);
               break;
       case 02:printf("\n  -SUBTRACTION-  ");
               printf("\nEnter two numbers:");
               scanf("%f%f",&a,&b);
               sub = a - b;
               printf("\nSubtraction =%.2f",sub);
               break;
       case 03:printf("\n   -MULTIPLICATION-  ");
               printf("\nEnter two numbers:");
               scanf("%f%f",&a,&b);
               multi = a*b;
               printf("\nMultiplicaton =%.2f",multi);
               break;
       case 04:printf("\n   -DIVISION-  ");
               printf("\nEnter two numbers:");
               scanf("%f%f",&a,&b);
               div = a/b;
               printf("\nDivision =%.2f",div);
               break;
       case 05:printf("\n   -MODULAS-  ");
               printf("\nEnter two numbers:");
               int a1,b1;
               scanf("%d%d",&a1,&b1);
               int mod = a1%b1;
               printf("\nModulas =%d",mod);
               break;
       case 06:printf("\n   -AVERAGE-  ");
               printf("\nEnter two numbers:");
               scanf("%f%f",&a,&b);
               avg = (a+b)/2;
               printf("\nAverage =%.2f",avg);
               break;
       default: printf("Code didn't matched");
       break;

    }

        break;//break of n 2

     case 3:printf("\nwhat do you want to find:\n>Addition(code=01)\n>Subtraction(code=02)\n>Multiplication(code=03)\n>Average(code=04)");
           printf("\n\nEnter code:");
           scanf("%d",&code);
       switch(code){
       case 01:printf("\n   -ADDITION-  ");
               printf("\nEnter three numbers:");
               scanf("%f%f%f",&a,&b,&c);
               sum = a+b+c;
               printf("\nSum =%.2f",sum);
               break;
       case 02:printf("\n  -SUBTRACTION-  ");
               printf("\nEnter three numbers:");
               scanf("%f%f%f",&a,&b,&c);
               sub = a - b -c;
               printf("\nSubtraction =%.2f",sub);
               break;
       case 03:printf("\n   -MULTIPLICATION-  ");
               printf("\nEnter three numbers:");
               scanf("%f%f%f",&a,&b,&c);
               multi = a*b*c;
               printf("\nMultiplicaton =%.2f",multi);
               break;
       case 04:printf("\n   -AVERAGE-  ");
               printf("\nEnter three numbers:");
               scanf("%f%f%f",&a,&b,&c);
               avg = (a+b+c)/3;
               printf("\nAverage =%.2f",avg);
               break;
       default: printf("code didn't matched");
       break;

    }//of code

        break;//break of n 3

     default:printf("\nSorry this calculator is not programmed to calculate more than 3 inputs\n ");
        break;


    }//of switch n

    return 0;
}
