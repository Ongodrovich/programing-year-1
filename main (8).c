#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float chargePerUnit, totalBill, surcharge = 0.0;

    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName);  // To read full name with spaces
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Determine charges per unit based on units consumed
    if (unitsConsumed <= 199) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    // Calculate total bill
    totalBill = unitsConsumed * chargePerUnit;

    // Apply surcharge if bill exceeds 400
    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
        totalBill += surcharge;
    }

    // Ensure minimum bill is 100
    if (totalBill < 100) {
        totalBill = 100;
    }

    // Display output
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: Ksh. %.2f\n", chargePerUnit);
    printf("Total Amount to Pay: Ksh. %.2f\n", totalBill);

    return 0;
}
