#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int count = 0, id;
char name[20];
struct student {
int id;
char name[20];
struct student *next;
};

struct student *p, *head = NULL;
printf("input Id, Name\n");
while (scanf("%d %s", &id, name) == 2) {
p = (struct student *) malloc(sizeof(struct student));
if (p == NULL) {
perror("malloc");
exit(1);
}
p->id = id;
strcpy(p->name, name);
p->next = head;
head = p;
}
printf("\n* students information(back) *\n");
p = head;
while (p != NULL) {
count++;
printf("Id: %d Name: %s \n", p->id, p->name);
p = p->next;
}
printf("All %d people\n", count);
exit(0);
}

