#include <stdio.h>
int main()
{

    int income, taxrate, amount, tax;
    printf("Enter your income:");
    scanf("%d", &amount);

    if (income <= 1200000)
    {
        printf("No tax");
    }
    else
    {
        taxrate = 0;
        while (amount > 0)
        {
            if (taxrate == 30)
            {
                tax = tax + (amount * taxrate * 0.01);
                break;
            }

            if (amount >= 400000)
            {
                tax = tax + (400000 * taxrate * 0.01);
                taxrate = taxrate + 5;
                amount = amount - 400000;
            }
            else
            {
                tax = tax + (amount * taxrate * 0.01);
                amount = 0;
            }
        }
        printf("Total Taxable Amount %d", tax);
        return 0;
    }
}
