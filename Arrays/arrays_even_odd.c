/* find odd and even elements of an array*/
#include<stdio.h>
int main()
{
    int n, even , odd;
    even = 0;
    odd= 0;
    printf("Enter size of array :");
    scanf("%d",&n);
    int array[n];
    printf("Enter values of array:");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

   for(int i=0; i<n; i++)
   {
       if(array[i]%2==0){
        even = even +1;
       }
       else{
        odd = odd+1;
       }
   }
 printf("Odd Elements = %d\n",odd);
  printf("Even Elements = %d\n",even);
    return 0;

}
