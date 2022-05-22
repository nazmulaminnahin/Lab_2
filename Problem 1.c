/*If cost price and selling price of an item is input through the keyboard,
 write a program to determine whether the seller has made profit or incurred loss.
  Also determine how much profit he made or loss he incurred.*/
#include <stdio.h>
int main()
{
double cost_price,selling_price,profit,loss;

printf("enter the cost_price: ");
scanf("%lf",&cost_price);

printf("enter the selling_price: ");
scanf("%lf",&selling_price);

if (cost_price < selling_price)
{
profit = selling_price - cost_price;
printf ("profit = %.2lf",profit);
}

else
{
loss = cost_price - selling_price;
printf("loss = %.2lf",loss);
}
return 0;
}
