/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

# include<stdio.h>
int main()
{
    int latedays,fine;
printf("Enter the number of days the book is returned late: ");
    scanf("%d",&latedays);
    if(latedays<=30)
    {
    if(latedays<=5)
    fine=latedays*2;
    else if(latedays<=10)
    fine=5*2+(latedays-5)*4;
    else if(latedays<=30)
    fine=5*2+5*4+(latedays-10)*6;
    }
    else
    printf("membership cancelled");

    printf("fine %d",fine);
    return 0;
}