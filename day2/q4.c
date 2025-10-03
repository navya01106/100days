//Write a program to calculate the area and circumference of a circle given its radius.
# include<stdio.h>

int main() {
    float radius, area, circumference;
    float pi = (22/7);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("\nRadius = %.2f\n", radius);
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);
    
    return 0;
}