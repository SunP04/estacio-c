#include <stdio.h>

int main(void) {
    float larg, comp;
    
    printf("Largura (m): ");
    scanf("%f", &larg);

    printf("Comprimento (m): ");
    scanf("%f", &comp);
    
    printf("Área: %f m²", larg * comp);
}