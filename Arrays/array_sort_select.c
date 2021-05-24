/* binary search in arrays */
#include<stdio.h>
int main()
{
    int n, array[n];
    printf("Enter value\n");

    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    sort();
    search();
    return 0;

}

int search(){
int n, first , last, mid;
    first=0;
    last=n-1;
    mid=(first+last)/2;
    int array[n],s;
    printf("Search: ");
    scanf("%d",&s);
    while(first<=last){
        if(array[mid]==s){
            printf("%d found at place %d",s , mid+1);
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
}

int sort(){
    int a;
int n;
int array[n];

    for(int i=0; i<n;++i){
        for(int j=i+1; j<n;++j){
            if(array[i]>array[j]){
                a= array[i];
                array[i]=array[j];
                array[j]=a;
            }
        }
    }


}

