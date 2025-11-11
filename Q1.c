#include <stdio.h>
int transaction_processing(int Daily_Limit)
{
    int Rem_transaction_limit, TransactionAmount;
    do
    {
        printf("Enter your Remaining transaction limit for today: ");
        scanf("%d", &Rem_transaction_limit);
    } while (Rem_transaction_limit>Daily_Limit);

    printf("Enter your transaction Transaction amount: ");
    scanf("%d", &TransactionAmount);
    // Checking the transaction limit and transaction amount
    if (TransactionAmount <= Rem_transaction_limit)
    {
        printf("APPROVED\n");
        return (Rem_transaction_limit - TransactionAmount);
    }
    else
    {
        printf("DECLINED\n");
        return Rem_transaction_limit;
    }
}

int main()
{
    const int Daily_transaction_limit = 5000;
    printf("%d",transaction_processing(Daily_transaction_limit));
    return 0;
}