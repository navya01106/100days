//Find the sum of all elements in a matrix.
#include<stdio.h>
int main()
{
int matrix[10][10],row,col,i,j,sum=0;
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
for(i=0;i<row;i++)
    {
for(j=0;j<col;j++)
        {
sum=sum+matrix[i][j];
        }
    }
printf("Sum of all elements = %d",sum);
return 0;
}