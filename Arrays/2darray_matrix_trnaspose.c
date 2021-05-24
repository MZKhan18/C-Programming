#include<stdio.h>
int main()
{
    int i, j,r,c;
    int array[10][10];
    int tarray[10][10];
    printf("Enter the number of rows and column of Matrix:");
    scanf("%d%d",&r,&c);
    //FOR INPUT
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter value for Matrix[%d][%d]:",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }
    printf("Matrix is :\n");
    //FOR OUTPUT
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", array[i][j]);
            if(j==c-1){
                printf("\n");
            }
        }
    }

    //FOR TRANSPOSE
    for(i=0;i<c; i++){
        for(j=0; j<r; j++){
            tarray[i][j]=array[j][i];
        }
    }
     printf("\nTranspose of Matrix :\n");
     //FOR TRANSPOSE
     for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            printf("%d ", tarray[i][j]);
            if(j==r-1){
                printf("\n");
            }
        }
    }
    return 0;
}
