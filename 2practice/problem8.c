#include <stdio.h>

union Grade{
    int i_grade;
    char c_grade;
};

void main() {
    int n;
    scanf("%d", &n);
    union Grade grades[n];

    for (int i = 0; i < n; i++){
        int type;
        scanf("%d", &type);
        if (type == 1) {
            scanf("%d", &grades[i].i_grade);
            printf("Grade: %d\n", grades[i].i_grade);
        }     
        else if (type == 2){
            scanf(" %c", &grades[i].i_grade);
            printf("Grade: %c\n", grades[i].c_grade);
        }
    }
}