//Solicite um numero inteiro positivo  e fa�a uma contagem
//regressiva apartir desse numero ate zero.
//Utilize o switch cas epara exibir mensagens personalizadas para cada n�mero da contagem regressiva


#include <stdio.h>
#include <stdlib.h>


int main(){
	//Variavel:
	int numero, contador;
	
	//QUESTAO:
	printf("\t Insira um numero");
	scanf("%d", &numero);
	
	for (contador = numero; contador >= 0; contador-- ){
		
		printf("\n %d", contador);
	}
}
