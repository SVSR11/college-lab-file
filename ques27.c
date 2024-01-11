#include<stdio.h>
#include<string.h>

int order;
int digonalsum(int a[order][order], int order)
{
    int sum=0;
    for(int i=0;i<order;i++)
    {
        sum+=a[i][i];
    }
    return sum;
}

void main()
{
    
    printf("enter order of matrix..");
    scanf("%d",&order);

    int matrix1[order][order];
    
    printf("enter matrix elements...\n");
    
    for(int i =0; i<order; i++)
    {
        printf("Enter row %d elements.",(i+1));

        for(int j=0; j<order;j++)
        {
        scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("sum of the digonal elements is:-%d",digonalsum(matrix1,order));
    
    
}


