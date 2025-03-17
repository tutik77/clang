#include <stdio.h>

typedef struct {
    char name[50];
    int amount;
    float price;
} Item;

void main() {
    int n;
    scanf("%d", &n);

    Item* items = malloc(sizeof(Item) * n);

    for (int i = 0; i < n; i++){
        scanf("%c %d %f", &items[i].name, &items[i].amount, &items[i].price);
    }
    for (int i = 0; i < n; i++){
        printf("Item: %s\nAmount: %d\nPrice: %.2f\n\n", items[i].name, items[i].amount, items[i].price);
    }
}
