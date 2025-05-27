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

typedef struct Aluno
{
    char nome[TAMANHO_NOME];
    float nota_av;
    float simulado1;
    float simulado2;
    float media;
} Aluno;


int main() {
    int qtd_alunos;
    
    printf("Qtd de alunos: ");
    scanf("%d", &qtd_alunos);
    
    Aluno alunos[qtd_alunos];
    
    getchar();
    
    for (int i = 0; i < qtd_alunos; i++) {
        printf("- Aluno %d\n", i+1);
        printf("Nome: ");
        fgets(alunos[i].nome, TAMANHO_NOME, stdin);
        fflush(stdin);
        printf("Nota da AV (0-10): ");
        scanf("%f", &alunos[i].nota_av);
        printf("Nota do Simulado 1 (0-1): ");
        scanf("%f", &alunos[i].simulado1);
        printf("Nota do Simulado 2 (0-1): ");
        scanf("%f", &alunos[i].simulado2);
        getchar();
    }
    
    printf("\n** Situação final dos Alunos **\n");
    
    for (int i = 0; i < qtd_alunos; i++) {
        alunos[i].media = clamp(alunos[i].nota_av + alunos[i].simulado1 + alunos[i].simulado2, 0, 10);
        printf("Aluno: %s\n", alunos[i].nome);
        printf("Média Final: %.2f\n", alunos[i].media);
        
        if (alunos[i].media >= 6) {
            printf("Situação: APROVADO\n");
        } else if (alunos[i].media >= 4) {
            printf("Situação: EM AVS\n");
        } else {
            printf("Situação: REPROVADO\n");
        }
        putchar('\n');
    }
    
    putchar('\n');

    return 0;
}