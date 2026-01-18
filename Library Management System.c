#include <stdio.h>

int main() {
    int choice;

    while (1) {
        printf("\n====== Library Management System ======\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("\nExiting... Thank you!\n");
            break;
        } else {
            printf("\nFeature not added yet!\n");
        }
    }

    return 0;
}

