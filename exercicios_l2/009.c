#include <stdio.h>

int div(float top, float bot, float* out){
    if (bot == 0) return 1;
    *out = top / bot;
    return 0;
}

int main(void) {
    float top, bot, razao;

    printf("Digite o primeiro número: ");
    scanf("%f", &top);

    printf("Digite o segundo número: ");
    scanf("%f", &bot);

    int res = div(top, bot, &razao);
    if (!res) return 1;

    printf("%f / %f = %f", top, bot, razao);

    return 0;
}