#include <stdio.h>

int main(void) {
    char symbol;
    printf("Enter symbol: ");
    scanf(" %c", &symbol);
    if (symbol < 'A' || symbol > 'Z') {
        printf("Вне диапазона\n");
    } else {
        printf("В диапазоне\n");
    }
    return 0;
}