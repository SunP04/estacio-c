#include <stdio.h>

void imc(float peso, float altura) {
    float imc = peso / (altura * altura);

    printf("IMC: %f\n", imc);

    if (imc < 18.5) printf("Abaixo do Peso");
    else if (imc < 25) printf("Peso Normal");
    else if (imc < 30) printf("Sobrepeso");
    else if (imc < 35) printf("Obesidade Grau I");
    else if (imc < 40) printf("Obesidade Grau II");
    else printf("Obesidade Grau III");

    putchar('\n');
}

int main(void) {
    int qtd;
    float peso, altura;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {

        printf("Digite a altura (m): ");
        scanf("%f", &altura);
    
        printf("Digite o peso (kg): ");
        scanf("%f", &peso);

        imc(peso, altura);
    }
   
    return 0;
}