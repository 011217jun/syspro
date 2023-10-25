#include <stdio.h>
struct BookRecord {
    int id;
    char name[100];
    char author[100];
    int publicationYear;
    int loanCount;
    int isAvailable;
};
int main() {
    struct BookRecord books[] = {
        {1, "1984", "George", 1949, 0, 1},
        {2, "Luster", "Raven", 2020, 0, 1},
        {3, "Hamnet", "Maggie", 2020, 0, 1},
        {4, "theWish", "Nicholas", 2021, 0, 1},
    };
    int numBooks = sizeof(books) / sizeof(books[0]);
    int choice;
    printf("--bookquery--\n");
    printf("0: list of all books, 1: list of available books\n");
    printf("choice: ");
    scanf("%d", &choice);
    if (choice == 0) {
        printf("list of all books:\n");
        printf("id\tbookname\tauthor\t\tyear\t\tborrow\n");
        for (int i = 0; i < numBooks; i++) {
            printf("%d\t%s\t\t%s\t\t%d\t\t%s\n", books[i].id, books[i].name, books[i].author, books[i].publicationYear, books[i].isAvailable ? "True" : "False");
        }
    } else if (choice == 1) {
        printf("list of available books:\n");
        printf("id\tbookname\t\tauthor\tyear\n");
        for (int i = 0; i < numBooks; i++) {
            if (books[i].isAvailable) {
                printf("%d\t\t%s\t\t%s\t\t%d\n", books[i].id, books[i].name, books[i].author, books[i].publicationYear);
            }
        }
    } 
    return 0;
}
