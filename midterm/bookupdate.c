#include <stdio.h>
struct BookRecord {
    int id;
    char name[100];
    char author[100];
    int publicationYear;
    int loanCount;
    int isAvailable;
};
struct BookRecord books[] = {
    {1, "1984", "George", 1949, 0, 1},
    {2, "Luster", "Raven", 2020, 0, 1},
    {3, "Hamnet", "Maggie", 2020, 0, 1},
    {4, "theWish", "Nicholas", 2021, 0, 1},
};
int numBooks = sizeof(books) / sizeof(books[0]);
void borrowBook(int bookId) {
    if (books[bookId - 1].isAvailable) {
        books[bookId - 1].isAvailable = 0;
        books[bookId - 1].loanCount++;
    } 
}
void returnBook(int bookId) {
    if (!books[bookId - 1].isAvailable) {
        books[bookId - 1].isAvailable = 1;
    } 
    
}
int main() {
    int choice, bookId;
    printf("--bookupdate--\n");
    printf("0 bookId: borrow book, 1 bookId: return book\n");
    printf("you've got bellow book..\n");
    while (1) {
        scanf("%d %d", &choice, &bookId);
        if (choice == 0) {
            if (bookId >= 1 && bookId <= numBooks) {
                borrowBook(bookId);
            } 
        printf("--bookupdate--\n");
        printf("id\tbookname\tauthor\t\tyear\t\tborrow\n");
        for (int i = 0; i < numBooks; i++) {
            printf("%d\t%s\t\t%s\t\t%d\t\t%s\n", books[i].id, books[i].name, books[i].author, books[i].publicationYear, books[i].isAvailable ? "True" : "False");
        }
    }
    return 0;
}
}
