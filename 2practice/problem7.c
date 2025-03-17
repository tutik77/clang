#include <stdio.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;

void main() {
    int n;
    scanf("%d", &n);

    Student students[n];

    for (int i = 0; i < n; i++){
        scanf("%s %d %f", &students[i].name, &students[i].age, &students[i].gpa);
    }

    for (int i = 0; i < n; i++){
        Student *s = &students[i]; 
        printf("Name: %s\nAge: %d\nGPA: %.2f\n\n", s->name, s->age, s->gpa);
    }
}

