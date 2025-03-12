#include <stdio.h>

int main(void) {
    int destination;
    printf("Enter destination: ");
    scanf("%d", &destination);
    if (destination < 500) {
        printf("Доедет\n");
    } else {
        printf("Не доедет\n");
    }
    return 0;
}