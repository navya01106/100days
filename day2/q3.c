//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

# include<stdio.h>
int main()
{
    int l,b;
    printf("enter length and breadth of rectangle: ");
    scanf("%d %d" ,&l ,&b);
    printf("area= %d" ,l*b);
    printf(" perimeter= %d" ,2*(l+b));
    return 0;
}
