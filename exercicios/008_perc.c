#include <stdio.h>

typedef struct {
    int abaixo_peso;
    int peso_normal;
    int sobrepeso;
    int obesidade_um;
    int obesidade_dois;
    int obesidade_morbida;
} IMCAmount;

void imc(float peso, float altura, IMCAmount* a) {
    float imc = peso / (altura * altura);

    printf("IMC: %f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do Peso");
        a->abaixo_peso++;
    } else if (imc < 25) {
        printf("Peso Normal");
        a->peso_normal++;
    } else if (imc < 30) { 
        printf("Sobrepeso");
        a->sobrepeso++;
    } else if (imc < 35) { 
        printf("Obesidade Grau I");
        a->obesidade_um;
    } else if (imc < 40) {
        printf("Obesidade Grau II");
        a->obesidade_dois;
    } else {
        printf("Obesidade Grau III");
        a->obesidade_morbida;
    }

    putchar('\n');
}

float perc(int v, int t) {
    return (v * 100) / t;
}

int main(void) {
    int qtd;
    float peso, altura;
    IMCAmount amount;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        printf("Digite a altura (m): ");
        scanf("%f", &altura);
    
        printf("Digite o peso (kg): ");
        scanf("%f", &peso);

        imc(peso, altura, &amount);
    }

    printf("Abaixo do Peso: %d (%.1f%%)", amount.abaixo_peso, perc(amount.abaixo_peso, qtd));
    printf("Peso Normal: %d (%.1f%%)", amount.peso_normal, perc(amount.peso_normal, qtd));
    printf("Sobrepeso: %d (%.1f%%)", amount.sobrepeso, perc(amount.sobrepeso, qtd));
    printf("Obesidade Grau I: %d (%.1f%%)", amount.obesidade_um, perc(amount.obesidade_um, qtd));
    printf("Obesidade Grau II: %d (%.1f%%)", amount.obesidade_dois, perc(amount.obesidade_dois, qtd));
    printf("Obesidade Grau III: %d (%.1f%%)", amount.obesidade_morbida, perc(amount.obesidade_morbida, qtd));
   
    return 0;
}