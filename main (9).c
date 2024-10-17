#include <stdio.h>

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float totalBill, surcharge = 0.0;
    
    // Define the unit limits and corresponding charges in arrays
    int unitLimits[] = {199, 400, 600};  // Limits for different rates
    float charges[] = {1.20, 1.50, 1.80, 2.00};  // Charges per unit for each range
    
    // Prompt user for input
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf(" %[^\n]", customerName);  // To read full name with spaces
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Determine charges per unit based on units consumed
    float chargePerUnit;
    if (unitsConsumed <= unitLimits[0]) {
        chargePerUnit = charges[0];
    } else if (unitsConsumed >= unitLimits[0] + 1 && unitsConsumed < unitLimits[1]) {
        chargePerUnit = charges[1];
    } else if (unitsConsumed >= unitLimits[1] && unitsConsumed < unitLimits[2]) {
        chargePerUnit = charges[2];
    } else {
        chargePerUnit = charges[3];
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
