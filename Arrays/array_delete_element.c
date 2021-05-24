/*delete element of an array*/
#include<stdio.h>
int main()
{
    int n, p, i;
    printf("Enter size of array :");
    scanf("%d",&n);

    int array[n];

    printf("Enter values of array:");
    for( i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

    printf("Enter position to delete:");
    scanf("%d",&p);

    for( i=p-1; i<n-1; i++){
        array[i]= array[i+1];
    }


    printf("\nUpdated Array is: \n");
    for(i=0; i<n-1; i++){
        printf("%d\n",array[i]);
    }

    return 0;
}
