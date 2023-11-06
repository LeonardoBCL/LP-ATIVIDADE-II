#include <stdio.h>
#include <stdlib.h>

//Em um projeto de controle de acesso, crie um programa
//Que solicite ao usuario a sua idade e verifique
//se ele tem permissão para acessar um determinado recurso
//Se a  idade for maior ou igual a 18
//Exiba a mensagem "Acesso permitido".


int main(){

//VARIAVEIS:
int idade = 0;

//Q:

printf("Insira sua idade:");
scanf("%d", &idade);

if (idade>=18){
	printf("Acesso permitido.");
	
}
else{
	printf("Acesso negado.");
}
	
	
	
}
