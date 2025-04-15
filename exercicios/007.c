#include <stdio.h>

int main(void) {
    float n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);

    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    if (n1 == n2) {
        printf("Números digitados são iguais. Favor digitar digitos diferentes.\n");
        return 0;
    }

    float maior = n1 > n2 ? n1 : n2;
    printf("O maior número é %f", maior);

    return 0;
}