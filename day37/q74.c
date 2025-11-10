//Find the transpose of a matrix.
#include<stdio.h>

int main()
{
int a[10][10],t[10][10];
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

printf("\noriginal matrix:\n");
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
for(j=0;j<c;j++)
{
t[j][i]=a[i][j];
}
}

printf("\ntranspose matrix:\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d ",t[i][j]);
}
printf("\n");
}

return 0;
}