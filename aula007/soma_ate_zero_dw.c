#include <stdio.h>

int main(void) {
    int num;
    long soma = 0;

    do {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);

        soma += num;
    } while (num != 0);

    printf("Soma: %ld\n", soma);
}