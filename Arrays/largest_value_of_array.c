#include<stdio.h>
int main()
{
    int n;
   /* printf("Enter size of array :");
    scanf("%d",&n);*/
    int a[4];
    printf("Enter values of array:"); // 50 60 10 80
    for(int i=0; i<4; i++){
        scanf("%d",&a[i]);
    }
    int largest;
    int large=a[0];
    for(int j= 1; j<4; j++){

        if(large>a[j]){
                largest= large;
        }
        else{
            large= a[j];
            largest=large;
        }
    }
  printf("largest= %d",largest);


    return 0;
}
