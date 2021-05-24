/*Write a C program to find sum of all array elements.*/
#include<stdio.h>
int main()
{
    int n, array[n], sum=0;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter values of array:\n");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0; i<n;i++)
    {
        sum= sum+array[i];
    }
    printf("Sum is %d",sum);
    return 0;
}
