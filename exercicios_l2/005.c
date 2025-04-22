#include <stdio.h>

void pag_vista(float vlr_compra) {
    int desconto = 10;
    float vlr = vlr_compra - (desconto / 100);

    printf("Valor Total a Pagar: R$ %f", vlr);
}

void pag_2x(float vlr_compra) {
    printf("Valor Total a Pagar: R$ %f", vlr_compra);
}

void pag_3a10x(float vlr_compra) {
    int opt;

    do {
        printf("Digite a quantidade de parcelas a pagar: ");
        scanf("%d", &opt);
    } while (opt < 3 || opt > 10);

    float vlr = vlr_compra;

    for (int i = 0; i < opt; i++) vlr += vlr - (vlr - (3 / 100));

    printf("Valor Total a Pagar: R$ %f", vlr);
}

int main(void) {
    int opt;
    float vlr_compra;
    
    printf("Digite o valor da compra (R$): ");
    scanf("%.2f", &vlr_compra);

    printf("Opções de Pagamento:\n");
    printf("[1] A Vista (10%% Desconto)\n");
    printf("[2] 2x\n");
    if (vlr_compra >= 100) printf("[3] 3x até 10x (com 10%% Juros)\n");

    printf("Opção: ");
    scanf("%d", &opt);

    if (opt == 1) {
        pag_vista(vlr_compra);
    } else if (opt == 2) {
        pag_2x(vlr_compra);
    } else if (opt == 3 && vlr_compra >= 100) {
        pag_3a10x(vlr_compra);
    } else {
        printf("Opção invalida");
    }
}