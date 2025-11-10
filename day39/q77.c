//Check if the elements on the diagonal of a matrix are distinct.
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

printf("\ndiagonal elements: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i][i]);
}
printf("\n");

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i][i]==a[j][j])
{
flag=0;
break;
}
}
if(flag==0)
break;
}

if(flag==1)
printf("\ndiagonal elements are distinct\n");
else
printf("\ndiagonal elements are not distinct\n");

return 0;
}