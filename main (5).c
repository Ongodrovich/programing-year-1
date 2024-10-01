// Program for certifying loan qualifications for bank customers
#include <stdio.h>

int main() {
    char name[]={};  
    float age;
    int salary;
    int qualified;

    // Input user's name, age, and salary
    printf("Enter your full name: \n");
    scanf("%c\n",name);
    printf("Enter your age:\n ");
    scanf("%f\n", &age);
    printf("Enter your salary per month:\n ");
    scanf("%d\n", &salary);

    // Check qualification criteria
    if (age >= 21 && salary >= 21000) {
        qualified = 1;  // Qualified
    } else {
        qualified = 0;  // Not qualified
    }

    // Output qualification status
    if (qualified) {
        printf("%s is qualified for the loan.\n", name);
    } else {
        printf("%s is not qualified for the loan.\n", name);
    }

    return 0;
}
