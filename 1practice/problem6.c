#include <stdio.h>

void main() {
    int double_module = 0;
    int triple_module = 0;
    int quadro_module = 0;
    int n;
    
    scanf("%d", &n);

    if (n % 2 == 0) {
        double_module = n / 2;
    }
    if (n % 3 == 0) {
        triple_module = n / 3;
    }
    if (n % 4 == 0) {
        quadro_module = n / 4;
    }
    printf("Double module: %d\n", double_module);
    printf("Triple module: %d\n", triple_module);
    printf("Quadro module: %d\n", quadro_module);
}