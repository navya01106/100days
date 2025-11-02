//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main()
{
    int profit,preofitpercent,loss,losspercent,sellingprice,costprice;
    printf("Enter the cost price: ");
    scanf("%d",&costprice);
    printf("Enter the selling price: ");
    scanf("%d",&sellingprice);
    if(sellingprice>costprice)
    {
        profit=sellingprice-costprice;
        preofitpercent=(profit*100)/costprice;
        printf("Profit %d%",preofitpercent);
    }
    else if(costprice>sellingprice)
    {
        loss=costprice-sellingprice;
        losspercent=(loss*100)/costprice;
        printf("Loss %d%",losspercent);
    }
    else
    printf("No profit no loss");
    return 0;
}
