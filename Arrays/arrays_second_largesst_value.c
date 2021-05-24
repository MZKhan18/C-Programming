/* Find second largest value of an array*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int a[n];
    printf("Enter values of array:"); // 50 60 10 80
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int largest;
    int index;
    int large=a[0];
    // FOR FINDING LARGEST:-
    for(int j= 1; j<n; j++){

        if(large>a[j]){
                largest= large;
                }
        else{
            large= a[j];
            largest=large;
           }
    }
    // FOR FINDING INDEX:-
    for(int i= 0; i<n; i++){
        if(a[i]==largest){
            index=i;
        }
    }
    // FOR DELETIND AN ELEMENT:-
    for( int i= index; i<n-1;i++){
        a[i]=a[i+1];
    }
    // FOR FINDING SECOND LARGEST:-
    int slargest, slarge=a[0];
    for(int j= 1; j<n-1; j++){

        if(slarge>a[j]){
                slargest= slarge;
        }
        else{
            slarge= a[j];
            slargest=slarge;
        }
    }

  printf("largest= %d\n",largest);
  printf("Second largest= %d\n",slargest);



    return 0;
}
