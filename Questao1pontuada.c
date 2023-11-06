#include <stdio.h>
#include <stdlib.h>


int main(){
	
	//SE a temperatura for acima de 25 = dia ensolarado
	//Se FOR ABAIXO de 15 = dia chuvoso
	//Se for entre 15 e 25 = dia nublado
	
	//Var:
	int celsius = 0;
	
	//Questao:
	
	
	printf("\n \t Ensolarado: Acima de 25 C \n");
	printf("\t Chuvoso: Abaixo de 15 C \n");
	printf("\t Nublado: entre  15 e 25 C \n");
	
	printf("\n \t Selecione a temperatura que deseja comecar: ");

	//Solicita temp:
	
	scanf("%d", &celsius);
	
	//Condições:
	
	if (celsius > 25){
		printf("\n O clima escolhido foi: Ensolarado");
	}
	else if (celsius < 15){
		printf("\n O clima escolhido foi: Chuvoso");
	}
	else if(celsius>15 && celsius<=25){
		printf("\n O clima escolhido foi: Nublado");
	}
	
}
