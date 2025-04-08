#include <stdio.h>

int main(void) {
    int qtd, num;
    int pares = 0, impares = 0;

    printf("Quantos números para digitar? ");
    scanf("%d", &qtd);

    int i = 0;
    while (i++ < qtd) {
        printf("Digite o %d° número: ", i);
        scanf("%d", &num);

        if (!(num % 2)) pares++;
        else impares++;
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
}