#include <stdio.h>

int main(void) {
    int tot, idade;
    int adolecente = 0,
        jovem = 0,
        adulto = 0,
        idoso = 0;

    printf("Digite a quantidade total de alunos: ");
    scanf("%d", &tot);

    for (int i = 0; i < tot; i++) {
        do {
            printf("Digite a idade do %dº aluno: ", i+1);
            scanf("%d", idade);
            if (idade < 0) printf("Idade inválida.\n");
        } while (idade < 0);

        if (idade < 18) adolecente++;
        else if (idade < 30) jovem++;
        else if (idade < 45) adulto++;
        else idoso++;
    }

    printf("Diagrama da turma:\n");
    printf("Menores de 18 anos: %d", adolecente);
    printf("Entre 18 a 30 anos: %d", jovem);
    printf("Entre 30 a 45 anos: %d", adulto);
    printf("Maiores de 45 anos: %d", idoso);
}
