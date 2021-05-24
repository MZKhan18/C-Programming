/*Write a program to find the factorial value of any number entered through the keyboard. using function*/
#include<stdio.h>
int main()
{

 int f =factorial();
  printf("Factorial = %d", f);
 return 0;
}
int factorial(){
int n ;
    int fact = 1;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(int i=n ; i>0 ; i--)
    {
     fact = fact*i ;

    }
    return fact;


}
