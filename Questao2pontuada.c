#include <stdio.h>
#include <stdlib.h>

	//Quest�o
	
	//Voc� � um desenvolvedor de e-commerce e est� trabalhando em um novo sistema de descontos.
	//O sistema oferece um desconto de 10% para compras ACIMA de R$ 100.00
	//SE a compra for feita em um dia de semana.
	//SE a compra for feita em um fim de semana, o desconto ser� de 15% sobre o valor da compra
	// acima de R$100
	
int main(){
	
	//Variaveis:
	float compra = 0;
	float desconto;
	int dia = 0;
	float compradiadesemana = 0;
	float fimdesemana = 0;
	float descontando = 0;
	float descontandofinde = 0;
	//Quest�o:
	

	printf("\n Qual valor total de compra?");
	scanf("%f", &compra);
	printf("\n Selecione [1] para dia de semana.");
	printf("\n Selecione [2] para fim de semana.");
	printf("\n Inserir -> ");
	scanf("%d", &dia);
	
	if(compra > 100 && dia == 1){
		desconto = 0.1;
		descontando = compra * desconto;
		compradiadesemana = compra - descontando; 
		printf("\n \t Valor dia de semana: %.1f", compradiadesemana); 
		
	}
	
	else if (compra > 100 && dia == 2){
		desconto = 0.85;
		descontandofinde = compra - desconto;
		fimdesemana = compra - descontandofinde;
		printf("\n \t Valor fim de semana: %.1f", fimdesemana);
	}
	
	//printf("\n \t VALOR normal: %.1f", compra);
	//printf("\n \t Valor dia de semana: %.1f", compradiadesemana);
	//printf("\n \t Valor fim de semana: %.1f", fimdesemana);
	
}
