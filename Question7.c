#include <stdio.h>

float rentalCalc(){
    float rentalcost,mileage,rental_days,longdiscount;
    const int base_rate = 40;
    const float extra_mileage = 0.25;
    //Taking number of days and mileage as input
    printf("Enter Food cost: ");
    scanf("%f",&rental_days);
    printf("Enter how many kilometers you'll travell: ");
    scanf("%f",&mileage);
    //Rental cost wrt Days
    rentalcost = rental_days*base_rate;
    if ((mileage/rental_days) > 100)
    {
        rentalcost += (extra_mileage * (mileage-100)) * rental_days;
    }
    //Long distance Off
    if (rental_days>7)
    {
        longdiscount = rentalcost * 0.1; 
    }
    else
    {
        longdiscount = 0;
    }
    rentalcost -= longdiscount;
    //return
    return rentalcost;
}
int main(){
    float Net_Rental_Cost;
    Net_Rental_Cost = rentalCalc();
    printf("Your Net rental cost is %.2f is ",Net_Rental_Cost);
    return 0;
}