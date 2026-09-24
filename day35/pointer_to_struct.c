#include <stdio.h>

struct Book {
    int bookID;
    char title[50];
    float price;
};

int main() {
    struct Book b1 = {101, "The C Programming Language", 499.50};
    struct Book *ptr = &b1;

    printf("--- Day 35: Pointer to Structure ---\n");
    printf("Accessing members via pointer using (->) operator:\n");
    printf("Book ID : %d\n", ptr->bookID);
    printf("Title   : %s\n", ptr->title);
    printf("Price   : ₹%.2f\n", ptr->price);

    return 0;
}
