#include <stdio.h>

int AlertCode(float temp){
    if (temp >= 35.0) return 1;
    else if (temp <= 10.0) return 2;
    else if((temp >= 15.0)&&(temp<=25.0)) return 3;
    else return 4;
}

int main(){
    float temperature;
    printf("Enter the current temperture to get a compliment: ");
    scanf("%f",&temperature);
    int alertCode = AlertCode(temperature);
    switch (alertCode)
    {
    case 1:
        printf("HEAT ALERT\n");
        break;
    case 2:
        printf("COLD ALERT\n");
        break;
    case 3:
        printf("COMFORT ZONE\n");
        break;
    case 4:
        printf("NORMAL CONDITION\n");
        break;
    }

    return 0;
}