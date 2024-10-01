// Program to calculate the fine for overdue library books
#include <stdio.h>

int main() {
    int ID, Dd, Rd;
    int Do;  // Days overdue
    float Fr;  // Fine rate
    double Fine_Amount;

    // Input book ID
    printf("Enter book ID: ");
    scanf("%d", &ID);

    // Input due date and return date
    printf("Enter Dd (Due date): ");
    scanf("%d", &Dd);
    printf("Enter Rd (Return date): ");
    scanf("%d", &Rd);

    // Calculate overdue days
    Do = Rd - Dd;

    // Determine fine rate based on overdue days
    if (Do <= 0) {
        Fr = 0;  // No fine if returned on or before due date
    } else if (Do <= 7) {
        Fr = 20;  // Fine for 1 to 7 days overdue
    } else if (Do <= 14) {
        Fr = 50;  // Fine for 8 to 14 days overdue
    } else {
        Fr = 100; // Fine for more than 14 days overdue
    }

    // Calculate fine amount
    Fine_Amount = Fr * Do;

    // Output the fine amount
    printf("Fine Amount: %.2f\n", Fine_Amount);

    return 0;
}
