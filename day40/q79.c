//Perform diagonal traversal of a matrix.
#include<stdio.h>

int main()
{
int a[10][10];
int r,c,i,j,k;

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

printf("\ndiagonal traversal:\n");

for(k=0;k<c;k++)
{
i=0;
j=k;
while(i<r && j>=0)
{
printf("%d ",a[i][j]);
i++;
j--;
}
printf("\n");
}

for(k=1;k<r;k++)
{
i=k;
j=c-1;
while(i<r && j>=0)
{
printf("%d ",a[i][j]);
i++;
j--;
}
printf("\n");
}

return 0;
}