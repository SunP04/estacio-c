#include <stdio.h>

int main(void) {
    float celsius;

    printf("Digite os graus em Celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9/5) + 32;
    printf("Celsius: %f °C", celsius);
    printf("Fahrenheit: %f °F", fahrenheit);

    return 0;
}