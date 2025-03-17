#include <stdio.h>

typedef struct {
    char name[50];
    int credits;
    char professor[50];
} Course;

int main() {
    int n;
    scanf("%d", &n);
    Course courses[n];

    for (int i = 0; i < n; i++){
        Course *c = &courses[i];
        scanf("%s %d %s", c->name, &c->credits, c->professor);
    }

    for (int i = 0; i < n; i++){
        Course *c = &courses[i];
        printf("Course: %s\n", c->name);
        printf("Credits: %d\n", c->credits);
        printf("Professor: %s\n\n", c->professor);
    }
    return 0;
}