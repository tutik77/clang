#include <stdio.h>

int main(void) {
    int weight;
    printf("Enter your weight: ");
    scanf("%d", &weight);
    if (weight > 60 && weight < 90) {
        printf("Принят\n");
    } else {
        printf("Не принят\n");
    }
    return 0;
}