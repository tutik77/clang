#include <stdio.h>

void main() {
    int start_date = 20250211;
    int input_date;
    scanf("%d", &input_date);
    if (input_date > start_date) {
        printf("future date\n");
    } else {
        printf("before or equal date\n");
    }
}