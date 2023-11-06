#include <stdio.h>
#include <stdlib.h>

// 1. Novo jogo
// 2. Carregar jogo
// 3. Configurações

int main(){
	
	//Var:
	int opcao = 0;
	
	//Q:
	
	printf("\n \t Menu ");
	printf("\n \t 1. Novo jogo. ");
	printf("\n \t 2. Carregar jogo. ");
	printf("\n \t 3. Configuracoes.");
	
	printf("\n");
	printf("Selecione: ");
	scanf("%d", &opcao);
	
	switch (opcao){
	
	
	case 1:
		printf("Voce iniciou um novo jogo.");
		break;
		
	case 2:
		printf("Voce carregou um save.");
		break;
	
	case 3:
		printf("Exibir config");
		break;
		
	}
}
