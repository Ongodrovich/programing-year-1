#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float totalBill, surcharge = 0.0;

    // Define a 2D array where each row contains the unit limit and charge per unit
    float rateTable[4][2] = {
        {199, 1.20},  // For up to 199 units
        {399, 1.50},  // For 200 to 399 units
        {599, 1.80},  // For 400 to 599 units
        {600, 2.00}   // For 600 and above units
    };

    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName);  // To read full name with spaces
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Determine charges per unit based on units consumed
    float chargePerUnit;
    if (unitsConsumed <= rateTable[0][0]) {
        chargePerUnit = rateTable[0][1];
    } else if (unitsConsumed <= rateTable[1][0]) {
        chargePerUnit = rateTable[1][1];
    } else if (unitsConsumed <= rateTable[2][0]) {
        chargePerUnit = rateTable[2][1];
    } else {
        chargePerUnit = rateTable[3][1];
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
