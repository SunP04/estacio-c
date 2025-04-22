#include <stdio.h>

int main(void) {
    int idade, qtd;

    do {
        printf("Digite a idade (-99 para parar): ");
        scanf("%d", &idade);

        if (idade < 21) {
            printf("Menor de 21");
            qtd++;
        } else printf("Maior ou igual a 21");

        putchar('\n');
    } while (idade != -99);

    printf("Quantidade de pessoas com idade menor a 21: %d", qtd);
}
