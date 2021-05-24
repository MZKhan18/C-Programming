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
    for(int i=0; i<n;++i){
        for(int j=i+1; j<n;++j){
            if(input[i]>input[j]){
                a= input[i];
                input[i]=input[j];
                input[j]=a;
            }
        }
    }
   for(int i=0; i<n; i++){
    printf("%d\t",input[i]);
   }

    return 0;
}
