#include <stdio.h>

int main(void) {
    int soma, num;

    do {
        printf("Digite um número (0 para parar): ");
        scanf("%d", &num);

        if (!(num % 3)) soma += num;
    } while (num != 0);

    printf("Soma dos valores múltiplos de 3: %d", soma);
}