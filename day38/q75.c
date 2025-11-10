//Add two matrices.
#include<stdio.h>

int main()
{
int a[10][10],b[10][10],c[10][10];
int r,c1,i,j;

printf("enter rows: ");
scanf("%d",&r);
printf("enter columns: ");
scanf("%d",&c1);

printf("enter first matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("enter second matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&b[i][j]);
}
}

for(i=0;i<r;i++)
{
for(j=0;j<c1;j++)
{
c[i][j]=a[i][j]+b[i][j];
}
}

printf("\nfirst matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c1;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}

printf("\nsecond matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c1;j++)
{
printf("%d ",b[i][j]);
}
printf("\n");
}

printf("\nsum matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c1;j++)
{
printf("%d ",c[i][j]);
}
printf("\n");
}

return 0;
}