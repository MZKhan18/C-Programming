/*. Write a C program to count frequency of each element in an array. */
#include<stdio.h>
int main()
{
    int n, freq;
    printf("Enter size of array :");
    scanf("%d",&n);
    int array[n];
    printf("Enter values of array:");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Array:\n");
    for (int i=0; i<n; i++){
        printf("%d\n",array[i]);
    }

  //FOR FREQUENCY
    for(int i=0; i<n; i++){
            freq=1;
        for(int j=i+1; j<n; j++){
            if(array[i]==array[j]){
                freq= freq+1;
            }

        }

         if(array[i]!=array[i-1] && array[i]!=array[i-2] && array[i]!=array[i-3] && array[i]!=array[i-3] && array[i]!=array[i-4] && array[i]!=array[i-5]){
            printf("frequency of %d is %d\n", array[i],freq);
          }

    }

    return 0;

}
