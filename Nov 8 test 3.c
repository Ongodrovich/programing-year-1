#include <stdio.h>
#include <stdlib.h>

#define MAX_PARAGRAPH_LENGTH 200

// Function to write a paragraph to "output.txt"
void writeToFile() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    char paragraph[MAX_PARAGRAPH_LENGTH];
    printf("Enter a paragraph (up to 200 characters): ");
    fgets(paragraph, MAX_PARAGRAPH_LENGTH, stdin);

    fprintf(file, "%s", paragraph);
    fclose(file);
    printf("Paragraph written to file successfully.\n");
}

// Function to read content from "output.txt"
void readFromFile() {
    FILE *file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    char ch;
    printf("Content of output.txt:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    printf("\n");
}

// Function to append a paragraph to "output.txt"
void appendToFile() {
    FILE *file = fopen("output.txt", "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        return;
    }

    char paragraph[MAX_PARAGRAPH_LENGTH];
    printf("Enter another paragraph to append (up to 200 characters): ");
    fgets(paragraph, MAX_PARAGRAPH_LENGTH, stdin);

    fprintf(file, "%s", paragraph);
    fclose(file);
    printf("Paragraph appended to file successfully.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nFile Operations:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar();  // To consume the newline character left by scanf

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
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}
