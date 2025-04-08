#include <stdio.h>

int main(void) {
    int num = -1;
    long soma = 0;

    while (num != 0) {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);

        soma += num;
    }

    printf("Soma: %ld\n", soma);
}