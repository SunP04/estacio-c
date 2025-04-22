#include <stdio.h>

int main(void) {
    float num;
    
    printf("Digite um número: ");
    scanf("%f", &num);

    printf("Número: %f", num);
    printf("Antecessor: %f", num - 1);
    printf("Sucessor: ", num + 1);
}