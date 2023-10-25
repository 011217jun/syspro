#include <stdio.h>
struct BookRecord {
    int id;
    char name[100];
    char author[100];
    int publicationYear;
    int loanCount;
    int isAvailable;
    int numofborrow;
    int borrow;
}; 

int main() {
    struct BookRecord books[] = {
        {1, "1984", "George", 1949, 0, 1, 7},
        {2, "Luster", "Raven", 2020, 0, 1, 3},
        {3, "Hamnet", "Maggie", 2020, 0, 1, 0},
        {4, "theWish", "Nicholas", 2021, 0, 1, 2},
    };
    int numBooks = sizeof(books) / sizeof(books[0]);
    printf("id\tbookname\tauthor\t\tyear\tnumofborrow\tborrow\n");
    for (int i = 0; i < numBooks; i++) {
        if (books[i].isAvailable) {
            printf("%d\t%s\t\t%s\t\t%d\n", books[i].id, books[i].name, books[i].author, books[i].publicationYear);
        }
    }

    return 0;
}
