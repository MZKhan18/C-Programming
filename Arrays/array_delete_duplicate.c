#include<stdio.h>
int main()
{
    int n, p, i,  freq;;
    printf("Enter size of array :");
    scanf("%d",&n);

    int array[n];

    printf("Enter values of array:");
    for( i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

      //FOR FREQUENCY
    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){
            if(array[i]==array[j]){

        //FOR DELETING ARRAY
           for( int k=j; k<n; k++){
              array[k]= array[k+1];

          }
          n--;
          j--;
            }
        }

    }

 printf("\nUpdated Array is: \n");

   //FOR PRINTING ARRAY
    for(i=0; i<n; i++){
        printf("%d\n",array[i]);
    }
    return 0;
}

