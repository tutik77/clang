#include <stdio.h>
#include <math.h>


int main(void) {
    double a, b;
    printf("Введите рассчетную скорость: ");
    scanf("%lf", &a);
    printf("Введите реальную скорость: ");
    scanf("%lf", &b);

    double difference = fabs(a - b);
    if (difference > 0.1) {
        printf("Орбита нестабильна\n");
    } else {
        printf("Орбита стабильна\n");
    }

    return 0;
}