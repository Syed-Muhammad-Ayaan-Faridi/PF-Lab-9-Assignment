#include <stdio.h>

int ShippingCalculation(int Amount, float weight)
{
    int Totalcost,ShippingCharges=0;
    if (weight<2) ShippingCharges = 10;
    else if((weight>=2) && (weight <= 5)) ShippingCharges = 15;
    else ShippingCharges = 20;
    Totalcost = Amount+ShippingCharges;
    return Totalcost;
}

int main()
{
    int amount,total;
    float weight;
    printf("Enter the cost of the item you purchased: ");
    scanf("%d",&amount);
    printf("Enter the weight of the item you purchased: ");
    scanf("%f",&weight);
    total = ShippingCalculation(amount,weight);
    printf("Your Total Amount payable before checkout is: %d\n",total);
    return 0;
}