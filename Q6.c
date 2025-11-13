#include <stdio.h>
void TaxCalc(float gross_income, float* netincome, float* Taxincome){
    if (gross_income>20000)
    {
        *Taxincome = gross_income*0.1;
        if (gross_income>50000)
        {
            *Taxincome += gross_income*0.2;
        }
    }
    else *Taxincome=0;
    *netincome = gross_income-(*Taxincome);
}
int main(){
    float netincome,taxincome,grossincome;
    printf("Enter your Gross Income: ");
    scanf("%f",&grossincome);
    TaxCalc(grossincome,&netincome,&taxincome);
    printf("Your Net income is %.2f and Tax deducted is %.2f",netincome,taxincome);
    return 0;
}