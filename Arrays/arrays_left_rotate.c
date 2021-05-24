/* Write a C program to left rotate an array. */
#include<stdio.h>
int main()
{
    int i,n,x;
    printf("Enter size of array:");
    scanf("%d",&n);
    int  array[n];
    printf("Enter values of array:");
    for(i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    //printf("How many times you want to rotate the array:");
    //scanf("%d",&x);
    printf("Array is:\t");
    for(i=0; i<n; i++){
        printf("%d  ",array[i]);
    }
    int first= array[0];

    //FOR LEFT ROTATE
   // for(int j=0; j<x; j++){ // 5 4 8 6 >>4 8 6 5 >>8 6 5 4
    for(i=0; i<n; i++){

            array[i]=array[i+1];

}
   array[n-1]=first;
//}
    //TO PRINT ARRAY
    printf("\nLeft Rotate:\t");
    for(i=0; i<n; i++){
        printf("%d  ",array[i]);
    }


    return 0;
}
