/*Write a C program to add two matrices.*/
#include<stdio.h>
int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r,c, i, j;
    printf("Enter rows and column of matrics:");
    scanf("%d%d",&r,&c);

    //FOR INPUT OF MATRIX A
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++){
            printf("Enter A[%d][%d] value of matrix:",i+1, j+1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");

    //FOR INPUT OF MATRIX B
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++){
            printf("Enter B[%d][%d] value of matrix:",i+1, j+1);
            scanf("%d",&B[i][j]);
        }
    }

    //FOR FINDING SUM
     for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++){
            C[i][j]= A[i][j] + B[i][j];
        }
    }

   int mid = r/2 +1;

   //FOR PRINTING OUTPUT
   printf("\nSUM:-\n\n");
   for(i=0; i<r; i++)
    {
        //PRINTING MATRIX A
        for(j=0; j<c; j++){
           printf("%-4d",A[i][j]);
        }

        //PRINTING + SYMBOL
        if(i==mid-1){
            printf("   +   ");
        }else{
        printf("       ");
        }

        //PRINTING MATRIX B
         for(j=0; j<c; j++){
           printf("%-4d",B[i][j]);
        }

        //PRINTING = SYMBOL
        if(i==mid-1){
            printf("   =   ");
        }else{
        printf("       ");
        }

        //PRINTING SUM
         for(j=0; j<c; j++){
           printf("%-4d",C[i][j]);
           if(j==c-1&&i!=r-1){

           }
        }
        printf("\n");

    }




    return 0;
}
