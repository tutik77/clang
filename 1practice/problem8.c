#include <stdio.h>

void main() {
    int weight;
    scanf("%d", &weight);
    if (weight % 4 == 0) {
        int ы = weight / 4;
        printf("U can. %d kg in one.", ы);
    } else {
        printf("u can't!");
    }
}