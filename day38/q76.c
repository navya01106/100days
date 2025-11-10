//Check if a matrix is symmetric.
#include<stdio.h>

int main()
{
int a[10][10];
int n,i,j,flag=1;

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
for(j=0;j<n;j++)
{
if(a[i][j]!=a[j][i])
{
flag=0;
break;
}
}
if(flag==0)
break;
}

if(flag==1)
printf("\nmatrix is symmetric\n");
else
printf("\nmatrix is not symmetric\n");

return 0;
}