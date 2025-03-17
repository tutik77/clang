#include <stdio.h>

union Data{
    int i;
    float f;
    char s[50];
};

int main(){
    int n;
    scanf("%d", &n);
    union Data data;

    switch (n) {
        case 1:
            scanf("%d", &data.i);
            printf("Integer: %d\n", data.i);
            break;
        case 2:
            scanf("%f", &data.f);
            printf("Float: %f\n", data.f);
            break;
        case 3:
            scanf("%s", data.s);
            printf("String: %s\n", data.s);
            break;
        default:
            printf("choiсes from 1 to 3");
            break;
    }
    return 0;
}

