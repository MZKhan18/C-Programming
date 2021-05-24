/* selection in arrrays */
#include<stdio.h>
int main()
{
    search_n();
    return 0;
}

int search(){
int array[5],s;
    printf("Enter values of array:");
    for(int i =0; i<5; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Search: ");
    scanf("%d",&s);
    for(int i=0; i<6 ; i++){
        if(array[i]==s ){
            printf("%d found at place %d", s, i+1);
            break;
        }
        if(i>=5){
            printf("Element not found");
        }
    }
}
int search_n(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
int array[n],s;
    printf("Enter values of array:");
    for(int i =0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Search: ");
    scanf("%d",&s);
    for(int i=0; i<n+1 ; i++){
        if(array[i]==s ){
            printf("%d found at place %d", s, i+1);
            break;
        }
        if(i>=n){
            printf("Element not found");
        }
    }
}
