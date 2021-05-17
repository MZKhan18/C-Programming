#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter size of array:");
    scanf("%d",&n);
    int input[n];
    printf("Enter values of array:");
    for(int i=0; i<n; i++){
        scanf("%d",&input[i]);
    }
    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-i-1;j++){
            if(input[j]>input[j+1]){
                a= input[j];
                input[j]=input[j+1];
                input[j+1]=a;
            }
        }
    }
    printf("Sorted list:-\n");
   for(int i=0; i<n; i++){
    printf("%d\t",input[i]);
   }
    return 0;
}

