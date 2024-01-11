#include<stdio.h>
#include<string.h>

void main()
{
    int matrix1[3][3],matrix2[3][3],sum_matrix[3][3],i,j,k,l,row_m3,column_m3;
    
    printf("matrix 1\n");
    //input elements for 1st matrix
    for(i =0; i<3; i++)
    {
        printf("Enter row %d elements.",(i+1));

        for(j=0; j<3;j++)
        {
        scanf("%d",&matrix1[i][j]);
        }
    }
    printf("matrix 2\n");
    //input elements for 2st matrix
    for(k =0; k<3; k++)
    {
        printf("Enter row %d elements.",(k+1));

        for(l=0; l<3;l++)
        {
        scanf("%d",&matrix2[k][l]);
        }
    }
    
    //adding elements
    
    for(int row=0; row<3;row++)
    {
        for(int column=0;column<3;column++)
        {
            sum_matrix[row][column]=matrix1[row][column]+matrix2[row][column];
        }
    }
    
    
    for(row_m3 =0; row_m3<3; row_m3++)
    {
        for(column_m3=0; column_m3<3;column_m3++)
        {
        printf("%d ",sum_matrix[row_m3][column_m3]);
        }
        printf("\n");
    }
    
}


