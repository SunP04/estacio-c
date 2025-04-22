#include <stdio.h>

float soma(float lhs, float rhs) { return lhs + rhs; }
float prod(float lhs, float rhs) { return lhs * rhs; }

int main(void) {
    float lhs, rhs;

    printf("Digite o primeiro número: ");
    scanf("%f", &lhs);

    printf("Digite o segundo número: ");
    scanf("%f", &rhs);

    float s = soma(lhs, rhs);
    float p = prod(lhs, rhs);

    printf("Somatório: %f", s);
    printf("Produtório: %f", p);
}
