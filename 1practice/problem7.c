#include <stdio.h>

int main(void) {
    float frequency;
    scanf("%f", &frequency);
    if (frequency > 2.5 && frequency < 3.5) {
        printf("stable");
    } else {
        printf("unstable");
    }
    return 0;
}