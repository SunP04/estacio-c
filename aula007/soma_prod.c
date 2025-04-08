#include <stdio.h>

int main(void) {
    int qtd, num;
    int soma = 0;
    long prod = 1;

    printf("Digite a qtd de números: ");
    scanf("%d", &qtd);

    int i = 0;
    while (i++ < qtd) {
        printf("Digite o %d° número: ", i);
        scanf("%d", &num);
        soma += num;
        prod *= num;
    }

    printf("Soma: %d\n", soma);
    printf("Produtório: %ld\n", prod);

    return 0;
}