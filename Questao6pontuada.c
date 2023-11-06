#include <stdio.h>
#include <stdlib.h>

// 1. CAMISETA
// 2. CALÇA
// 3. SAPATO

int main(){
	
	//Var:
	int opcao = 0;
	
	//Q:
	
	printf("\n \t Selecione o produto desejado:");
	printf("\n \t 1. Camiseta [R$ 50.00] ");
	printf("\n \t 2. Calça [R$ 100.00] ");
	printf("\n \t 3. Sapato [R$ 95.00]");
	
	printf("\n");
	printf("Selecione: ");
	scanf("%d", &opcao);
	
	if (opcao == 1){
		printf("Selecao: Camiseta | Valor: 50.00 BRL");
	}
	else if (opcao == 2){
		printf("Selecao: Calca | Valor: 100.00 BRL");
	}
	else if (opcao ==3 ){
		printf("Selecao: Sapato | Valor: 95.00 BRL");
	}
	
	
}
