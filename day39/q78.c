//Find the sum of main diagonal elements for a square matrix.
#include<stdio.h>

int main()
{
int a[10][10];
int n,i,j,sum=0;

printf("enter size of square matrix: ");
scanf("%d",&n);

printf("enter elements:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("\nmatrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}

for(i=0;i<n;i++)
{
sum=sum+a[i][i];
}

printf("\nsum of main diagonal = %d\n",sum);

return 0;
}