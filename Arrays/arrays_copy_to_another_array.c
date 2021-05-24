/*8. Write a C program to copy all elements from an array to another array.*/
#include<stdio.h>
int main()
{
    int n, array1[n],array2[n];
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter values of array:");
    for(int i=0; i<n; i++){
        scanf("%d",&array1[i]);
    }
    for(int i=0; i<n ;i++){
        array2[i]=array1[i];
    }
    printf("Array is: \n");
    for(int i=0; i<n ; i++)
    {
        printf("%d\n",array2[i]);
    }
    return 0;
}
