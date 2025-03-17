#include <stdio.h>

enum Engine_type {
    Gasoline,
    Diesel,
    Electric};

typedef struct {
    char mark[50];
    char model[50];
    int year;
    enum Engine_type engine;
} Vehicle;

int main() {
    int n;
    scanf("%d", &n);
    Vehicle vehicles[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d", vehicles[i].mark, vehicles[i].model, &vehicles[i].year, &vehicles[i].engine);
    }

    const char* engine_types[] = {"Gasoline", "Diesel", "Electric"};

    for (int i = 0; i < n; i++) {
        const char* engine_str = engine_types[vehicles[i].engine];

        printf("Vehicle: %s %s, Year: %d, Engine: %s\n", vehicles[i].mark, vehicles[i].model, vehicles[i].year, engine_str);
    }
    return 0;
}