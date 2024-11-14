#include <stdio.h>
#include <stdlib.h>

void writeToFile() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char paragraph[201];
    printf("Enter a paragraph (up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);

    fprintf(file, "%s", paragraph);
    fclose(file);
    printf("Paragraph written to output.txt\n");
}

void readFromFile() {
    FILE *file = fopen("output.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char ch;
    printf("Content of output.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

void appendToFile() {
    FILE *file = fopen("output.txt", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    char paragraph[201];
    printf("Enter an additional paragraph (up to 200 characters): ");
    fgets(paragraph, sizeof(paragraph), stdin);

    fprintf(file, "%s", paragraph);
    fclose(file);
    printf("Paragraph appended to output.txt\n");
}

int main() {
    int choice;

    do {
        printf("\nFile Operations Menu:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character left by scanf

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
