#include<stdio.h>
#include<stdlib.h>

int main(void){
	int idade, qtdmaior, qtdmenor;
	qtdmaior = 0;
	qtdmenor = 0;
	
	for(int i=1; i<11; i++){
		printf("Digite a idade do %d aluno", i);
		scanf("%d", &idade);
		if (idade>=18) ++qtdmaior;
        else qtdmenor=qtdmenor+1;
	}
	
	printf("\nNa turma temos %d alunos maiores de idade", qtdmaior);
	printf("\nNa turma temos %d alunos menores de idade", qtdmenor);
    return 0;
}
