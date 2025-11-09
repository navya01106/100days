//Read and print a matrix.
#include<stdio.h>
int main()
{
int matrix[10][10],row,col,i,j;
printf("Enter number of rows: ");
scanf("%d",&row);
printf("Enter number of columns: ");
scanf("%d",&col);
printf("Enter matrix elements:\n");
for(i=0;i<row;i++)
    {
for(j=0;j<col;j++)
        {
scanf("%d",&matrix[i][j]);
        }
    }
printf("Matrix:\n");
for(i=0;i<row;i++)
    {
for(j=0;j<col;j++)
        {
printf("%d ",matrix[i][j]);
        }
printf("\n");
    }
return 0;
}