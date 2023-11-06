//Desenvolva um programa que solicite dois numeros inteiro ao usuario
//E uma operacao ( + ou - )
//Utilize o switch pra escolher

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Variaveis:
	
	int numero = 0;
	int numerodois = 0;
	char opcao;
	int soma = 0;
	int subtrai = 0;
	//Q:
	
	printf("\n Insira um numero: ");
	scanf("%d", &numero);
	printf("\n Outro numero: ");
	scanf("%d", &numerodois);
	
	printf("\n Opcoes [ - ] ou [ + ] ");
	printf("\n Escolha: ");
	fflush(stdin);
	scanf("%c", &opcao);
	
	switch (opcao){
		
		case '+':
			
			printf("\n Voce escolheu somar");
			soma = numero + numerodois;
			printf("\n Resultado: %d + %d", numero, numerodois);
			printf("\n Soma: %d ", soma);
			break;
			
		case '-':
			printf("\n Voce escolheu subtrair");
			subtrai = numero - numerodois;
			printf("\n Resultado: %d - %d", numero, numerodois);
			printf("\n Subtracao: %d ", subtrai);
			break;
		
		
		
	}
	
	
	
	
}
