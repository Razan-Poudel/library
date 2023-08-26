#include <stdio.h>
#include <string.h>

struct Book {
    int bid,edition;
    char name[50],author[50];
    float price;
};
//Function for taking INPUT
void inputBook(struct Book b[ ], int count) {
   
        printf("Enter book ID: ");
        scanf("%d", &b[count].bid);
        printf("Enter book name: ");
        scanf(" %[^\n]", b[count].name);
        printf("Enter book edition: ");
        scanf("%d", &b[count].edition);
        printf("Enter book author: ");
        scanf(" %[^\n]", b[count].author);
        printf("Enter book price: ");
        scanf("%f", &b[count].price);
        printf("Book record added successfully!\n");
   
 
}

void viewBooks(struct Book b[], int count) {
    printf("Book records:\n");
    for (int i = 0; i < count; i++) {
        printf("   Book ID: %d\n", b[i].bid);
        printf("   Name: %s\n", b[i].name);
        printf("   Edition: %d\n", b[i].edition);
        printf("   Author: %s\n", b[i].author);
        printf("   Price: %.2f\n", b[i].price);
        printf("-----------------------------\n");
    }
}

void searchBook(struct Book b[], int count, int book_id) {
     printf("Enter book number to search: ");
                scanf("%d", &book_id);
    for (int i = 0; i < count; i++) {
        if (b[i].bid == book_id) {
            printf("Book found:\n");
            printf("Book ID: %d\n", b[i].bid);
            printf("Name: %s\n", b[i].name);
            printf("Edition: %d\n", b[i].edition);
            printf("Author: %s\n", b[i].author);
            printf("Price: %.2f\n", b[i].price);
            return;
        }
    }
    printf("Book not found!\n");
}

int main() {
    int choice, count = 0;
    struct Book books[100];
  

    printf("Welcome to the Book Record Manager!\n");

    do {
        printf("\Options:\n");
        printf("1. Input book record\n");
        printf("2. View the books record\n");
        printf("3. Search a book by book number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputBook(books, count);
                count++;
                break;
            case 2:
                viewBooks(books, count);
                break;
            case 3:
                int book_id;
                searchBook(books, count, book_id);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
