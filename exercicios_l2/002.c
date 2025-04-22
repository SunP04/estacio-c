#include <stdio.h>

int main(void) {
    float comb, consm;
    
    printf("Digite a quantidade de combustível no tanque (L): ");
    scanf("%f", &comb);

    printf("Digite o consumo médio (km/L): ");
    scanf("%f", &consm);

    float kmp = comb * consm;

    printf("Autonomia: %f", kmp);
}