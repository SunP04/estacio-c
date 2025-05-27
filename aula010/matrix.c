// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int l, c;
    
    printf("Digite o num de Linhas:");
    scanf("%d",&l);
    printf("Digite o num de Colunas:");
    scanf("%d",&c);
    
    // Declaraçao de matriz
    int matrix[l][c];
    // Leitur dos elementod da matriz
    printf("Digite os elementos da matriz\n");
    for (int i=0;i<l;i++) {
      for(int j=0;j<c;j++){
        printf("Elemento [%d][%d]:",i+1,j+1);
        scanf("%d",&matrix[i][j]);
      }
    }
    // Impressao da matriz 
    printf("Matriz:\n");
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("\t%d",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}