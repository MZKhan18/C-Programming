#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int a[n];
    printf("Enter values of array:");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Values are:\n");
    for(int i=0; i<n; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
