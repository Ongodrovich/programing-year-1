#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[3];
    int highestSalaryIndex = 0;

    // Input details for 3 employees
    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        // Check for the highest salary
        if (employees[i].salary > employees[highestSalaryIndex].salary) {
            highestSalaryIndex = i;
        }
    }

    // Display employee with the highest salary
    printf("\nEmployee with the highest salary:\n");
    printf("ID: %d\n", employees[highestSalaryIndex].id);
    printf("Name: %s\n", employees[highestSalaryIndex].name);
    printf("Salary: %.2f\n", employees[highestSalaryIndex].salary);

    return 0;
}
