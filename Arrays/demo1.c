#include<stdio.h>
int main()
{
    int i, j,r,c;
    int array[10][10];
    printf("Enter the number of rows and column of array:");
    scanf("%d%d",&r,&c);
    //FOR INPUT
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter value for Array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("Array is :\n");
    //FOR OUTPUT
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
                if(j==0 ){
                    printf("|");
                }
            printf("%-3d", array[i][j]);
            if(j==c-1){
                printf("|");
                }
            if(j==c-1){
                printf("\n");
            }
        }
    }
    return 0;
}
