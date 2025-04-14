#include <stdio.h>

#define QTD_NUM (10)

int main(void) {
    int n;
    int soma = 0,
        pos = 0,
        neg = 0,
        zero = 0;

    for (int i = 0; i < QTD_NUM; i++) {
        printf("Digite o %d° número: ", i+1);
        scanf("%d", &n);

        soma += n;

        if (n > 0) pos++;
        else if (n < 0) neg++;
        else zero++;
    }

    printf("Soma: %d", soma);
    printf("Qtd. Positivos: %d", pos);
    printf("Qtd. Negativos: %d", neg);
    printf("Qtd. Zero: %d", zero);
    
    return 0;
}