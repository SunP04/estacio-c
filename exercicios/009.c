#include <stdio.h>

#define QTD_NOTAS 3

char media_aprov(float notas[QTD_NOTAS], float media_exercicio) {
    float n1 = notas[0];
    float n2 = notas[1];
    float n3 = notas[2];

    float ma = (n1 + n2 * 2 + n3 * 3 + media_exercicio) / 7;

    printf("Média de Aproveitamento: %.2f\n", ma);

    if (ma >= 9.0) return 'A';
    else if (ma >= 7.5) return 'B';
    else if (ma >= 6.0) return 'C';
    else if (ma >= 4.0) return 'D';
    else return 'E';
}

int main(void) {
    int qtd;
    float notas[QTD_NOTAS];
    float media;
    char conceitos[5] = {0};

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        printf("======== Aluno %d ========\n", i+1);
        for (int j = 0; j < QTD_NOTAS; j++) {
            printf("Digite a %d° nota: ", j+1);
            scanf("%f", &notas[j]);
        }

        printf("Digite a Média dos Exercícios: ");
        scanf("%f", &media);

        char conceito = media_aprov(notas, media);
        conceitos[conceito % 5]++;

        printf("Conceito: %c\n", conceito);
        putchar('\n');
    }
   
    for (int i = 0; i < 5; i++) {
        char conceito = i + 'A';
        printf("Conceito %c: %d\n", conceito, conceitos[i]);
    }

    putchar('\n');
    return 0;
}