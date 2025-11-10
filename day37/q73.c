//Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>

int main()
{
int a[10][10];
int s[10];
int r,c,i,j;

printf("enter rows: ");
scanf("%d",&r);
printf("enter columns: ");
scanf("%d",&c);

printf("enter elements:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("\nmatrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}

for(i=0;i<r;i++)
{
s[i]=0;
for(j=0;j<c;j++)
{
s[i]=s[i]+a[i][j];
}
}

printf("\nrow sum:\n");
for(i=0;i<r;i++)
{
printf("row %d = %d\n",i,s[i]);
}

return 0;
}