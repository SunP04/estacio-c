#include <stdio.h>
#include <string.h>

#define TAMANHO_NOME (50)

int clamp(int n, int min, int max) {
    return n < min
            ? min 
            : n > max 
                ? max 
                : n;
}

int main() {
    int qtd_alunos;
    
    printf("Qtd de alunos: ");
    scanf("%d", &qtd_alunos);
    
    char nomes[qtd_alunos][TAMANHO_NOME];
    float notas_av[qtd_alunos];
    float simulado1[qtd_alunos];
    float simulado2[qtd_alunos];
    float medias[qtd_alunos];
    
    getchar();
    
    for (int i = 0; i < qtd_alunos; i++) {
        printf("- Aluno %d\n", i+1);
        printf("Nome: ");
        fgets(nomes[i], TAMANHO_NOME, stdin);
        fflush(stdin);
        printf("Nota da AV (0-10): ");
        scanf("%f", &notas_av[i]);
        printf("Nota do Simulado 1 (0-1): ");
        scanf("%f", &simulado1[i]);
        printf("Nota do Simulado 2 (0-1): ");
        scanf("%f", &simulado2[i]);
        getchar();
    }
    
    printf("\n** Situação final dos Alunos **\n");
    
    for (int i = 0; i < qtd_alunos; i++) {
        medias[i] = clamp(notas_av[i] + simulado1[i] + simulado2[i], 0, 10);
        printf("Aluno: %s\n", nomes[i]);
        printf("Média Final: %.2f\n", medias[i]);
        
        if (medias[i] >= 6) {
            printf("Situação: APROVADO\n");
        } else if (medias[i] >= 4) {
            printf("Situação: EM AVS\n");
        } else {
            printf("Situação: REPROVADO\n");
        }
        putchar('\n');
    }
    
    putchar('\n');

    return 0;
}