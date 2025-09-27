// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main()
{
    int cost,selling,profit,loss,profit_percentage,loss_percentage;
    printf("Enter the cost price: ");
    scanf("%d",&cost);

    printf("Enter the selling price: ");
    scanf("%d",&selling);

profit = (selling - cost);
loss = (cost - selling);
profit_percentage = (profit*100 / cost);
loss_percentage = (loss*100 / cost);

if (cost > selling){
    printf("Loss %d", loss_percentage);
}
else {
    printf("Profit %d",profit_percentage);
}

return 0;
}