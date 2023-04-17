#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct book {
    char title[50];
    char author[50];
    int year;
};

struct book books[MAX_BOOKS];
int book_count = 0;

void add_book() {
    if (book_count >= MAX_BOOKS) {
        printf("The library is full.\n");
        return;
    }

    printf("Enter the title of the book: ");
    getchar();
    fgets(books[book_count].title, 50, stdin);
    books[book_count].title[strcspn(books[book_count].title, "\n")] = '\0';

    printf("Enter the author of the book: ");
    fgets(books[book_count].author, 50, stdin);
    books[book_count].author[strcspn(books[book_count].author, "\n")] = '\0';

    printf("Enter the year of publication of the book: ");
    scanf("%d", &books[book_count].year);

    book_count++;

    printf("Book added successfully.\n");
}

void display_books() {
    if (book_count == 0) {
        printf("The library is empty.\n");
        return;
    }

    printf("The details of all the books in the library are:\n");
    for (int i = 0; i < book_count; i++) {
        printf("Title: %s\nAuthor: %s\nYear of publication: %d\n\n", books[i].title, books[i].author, books[i].year);
   
