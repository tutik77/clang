#include <stdio.h>

enum Conditions {Sunny, Cloudy, Rainy};

typedef struct {
    float temperature;
    float humidity;
    enum Conditions condition;
} Weather;

int main() {
    Weather weather;

    scanf("%f %f %d", &weather.temperature, &weather.humidity, &weather.condition);

    printf("Temperature: %.1f°C\n", weather.temperature);
    printf("Humidity: %.1f%%\n", weather.humidity);
    printf("Condition: ");
    switch(weather.condition){
        case Sunny:
            printf("Sunny");
            break;
        case Cloudy:
            printf("Cloudy");
            break;
        case Rainy:
            printf("Rainy");
            break;
    }

    return 0;
}