#include<stdio.h>

int r1,c1,r2,c2; // global declaration of order of matrix

void matrix_multiplication(int matrix1[r1][c1], int matrix2[r2][c2])
{
    int matrix3[r1][c2];
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            matrix3[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
            printf("%d  ",matrix3[i][j]);

        }
        printf("\n");
    }

    /*printf("the resultant matrix is...\n");
    
    for(int row_m3 =0; row_m3<3; row_m3++)
    {
        for(int column_m3=0; column_m3<3;column_m3++)
        {
             printf("%d ",matrix3[row_m3][column_m3]);
        }
        printf("\n");
    }*/
}


void main()
{

    //taking rows and column of both matrix
    printf("enter no. of row (matrix1):-");
    scanf("%d",&r1);
    printf("enter no. of column (matrix1):-");
    scanf("%d",&c1);
    printf("enter no. of row (matrix2):-");
    scanf("%d",&r2);
    printf("enter no. of column (matrix2):-");
    scanf("%d",&c2);

    //check if matrix multiplication condition is matched or not
    if(c1!=r2)
    {
        printf("invalid order of the matrix...");
    }
    else
    {
        
        int matrix1[r1][c1],matrix2[r2][c2],i,j,k,l;
        
        printf("matrix 1\n");
        //input elements for 1st matrix
        for(i =0; i<r1; i++)
        {
            printf("Enter row %d elements.",(i+1));

            for(j=0; j<c1;j++)
            {
            scanf("%d",&matrix1[i][j]);
            }
        }
        printf("matrix 2\n");
        //input elements for 2st matrix
        for(k =0; k<r2; k++)
        {
            printf("Enter row %d elements.",(k+1));

            for(l=0; l<c2;l++)
            {
            scanf("%d",&matrix2[k][l]);
            }
        }

        
        matrix_multiplication(matrix1,matrix2);
    }

}