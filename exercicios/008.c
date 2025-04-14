#include <stdio.h>

int main(void) {
    float peso, altura;

    printf("Digite a altura (m):");
    scanf("%f", altura);
 
    printf("Digite o peso (kg):");
    scanf("%f", peso);

    float imc = peso / (altura * altura);

    printf("IMC: %f", imc);

    if (imc < 18.5) printf("Abaixo do Peso");
    else if (imc < 25) printf("Peso Normal");
    else if (imc < 30) printf("Sobrepeso");
    else if (imc < 35) printf("Obesidade Grau I");
    else if (imc < 40) printf("Obesidade Grau II");
    else printf("Obesidade Grau III");
   
    return 0;
}