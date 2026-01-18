#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 50

struct Book {
    int id;
    char name[30];
    int quantity;
    int issued;
};

struct Book library[MAX_BOOKS];
int bookCount = 0;

int findBook(int id) {
    int i;
    for (i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            return i;
        }
    }
    return -1;
}

void addBook() {
    struct Book b;

    if (bookCount >= MAX_BOOKS) {
        printf("\nLibrary is full!\n");
        return;
    }

    printf("\nEnter Book ID: ");
    scanf("%d", &b.id);

    if (findBook(b.id) != -1) {
        printf("Book ID already exists!\n");
        return;
    }

    printf("Enter Book Name: ");
    scanf("%s", b.name);

    printf("Enter Quantity: ");
    scanf("%d", &b.quantity);

    b.issued = 0;

    library[bookCount] = b;
    bookCount++;

    printf("\nBook Added Successfully!\n");
}

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

        if (choice == 1) {
            addBook();
        } else if (choice == 0) {
            printf("\nExiting... Thank you!\n");
            break;
        } else {
            printf("\nFeature not added yet!\n");
        }
    }

    return 0;
}

