#include<stdio.h>
int main()
{
    int n, array[100];
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter values of array:");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
  add(array,n);
    return 0;
}


void add(int arr[],int x){
 int sum=0;
 for(int i=0; i<x; i++){
    sum= sum + arr[i];
 }
 printf("Sum = %d", sum);
}




