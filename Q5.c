#include <stdio.h>
int billcalc(){
    int foodcost,Numpeople;
    float Tax,ServiceCharge=0.0,Tip,Totalcost;
    const float tax = 0.08;
    printf("Enter Food cost: ");
    scanf("%d",&foodcost);
    printf("Enter Number of People: ");
    scanf("%d",&Numpeople);
    Tax = foodcost*tax;
    //Service Charges
    if (Numpeople>6)
    {
        ServiceCharge = foodcost*0.05;
    }
    //Tips
    if (foodcost>50)
    {
        Tip = foodcost*0.15;
    }
    else
    {
        Tip = foodcost*0.10;
    }
    
    Totalcost = foodcost+ServiceCharge+Tip;
    return Totalcost;
}

int main(){
    float Tcost;
    Tcost = billcalc();
    printf("Your Total cost is: %.2f",Tcost);
    return 0;
}