//Write a program to input time in seconds and convert it to hours:minutes:seconds format
#include<stdio.h>
int main()
{
    int sec,hr,min;
    printf("enter time in seconds\n");
    scanf("%d",&sec);
    hr=sec/3600;
    min=(sec-(hr*3600))/60;
    sec=(sec-(hr*3600)-(min*60));

    printf("time in hours:minutes:seconds format is %d:%d:%d\n",hr,min,sec);
    return 0;



}