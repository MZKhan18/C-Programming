/* binary search in arrays */
#include<stdio.h>
int main()
{

int n, a, first , last, mid, temp;
    first=0;
    last=n-1;
    mid=(first+last)/2;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int array[n],s;
    printf("Enter values of array:");
    for(int i =0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    for(int i=0 ;i <n; i++){
        for(int j=i+1; j<n;j++)
        if(array[i]>array[j]){
            temp= array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }

    printf("Search: ");
    scanf("%d",&s);
    while(last>=first){  // 5 6 3 8 >> 3 5 6 8
        if(array[mid]==s){
            printf("%d found at place %d",s , mid);
            break;
        }
        else if(array[mid]<s){
            first=mid+1;
        }
        else{
            last= mid-1;
        }
        mid=(first + last)/2;

    }
//    for(int i=0; i<n;i++){
//        printf("%d\n",array[i]);
//    }

    return 0;

}




