#include <stdio.h>
#include <stdlib.h>
// Exiba a mensagem de boas vindas no idioma selecionado
// 1. Ingles
//2. Espanhol
//3. portugues
int main(){
	
	//VARIAVEIS:
	int opcao = 0;
	
	//Q:
	printf("\n Idiomas disponiveis: ");
	printf("\n \t 1. Ingles.");
	printf("\n \t 2. Espanhol.");
	printf("\n \t 3. Portugues.");
	printf("\n");
	printf("\n Escolha o idioma: ");
	
	scanf("%d", &opcao);
	
	if (opcao == 1){
		printf("Welcome user.");
		
	}
	else if( opcao == 2){
		printf("Bienvinido.");
		
	}
	else if (opcao == 3){
		printf("Bem vindo.");
	}
	else {
		printf("Opcao invalida.");
	}
	
	
}
