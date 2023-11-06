#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Implemente um programa que converta 
valores entre diferentes unidades de medida, como por exemplo, 
quil�metros para milhas e Celsius para Fahrenheit.
 O programa deve permitir ao usu�rio escolher a convers�o desejada e repetir o processo para v�rios valores. 
 Utilize o switch case  e continue mostrando as op��es para convers�o at� o usu�rio digite 0 para sair do programa.
 */

int main(){
    setlocale(LC_ALL, "portuguese");
//Variaveis:

int opcao = 0;
float valorCelsius = 0;
float valorF = 0;
float valorQ = 0;
float valorM = 0;


do{

printf("\n \t 1. Celsius para Fahrenheit.");
printf("\n \t 2. Quil�metros para Milhas.");
printf("\n \t Selecione: ");
scanf("%d", &opcao);

switch(opcao){

    case 1:
    printf("\n Calculadora de Celsius para Fahrenheit.");

    printf("\n Insira um valor em Celsius: ");
    scanf("%f", &valorCelsius);
    valorF = valorCelsius * 1.8 + 32;
    printf("\n Valor Celsius para Fahrenheit: %.1f", valorF);
    break;

    case 2:
    printf("\n Insira um valor em Quil�metros: ");
    scanf("%f", &valorQ);
    valorM = valorQ / 1.609;
    printf("\n Valor Quil�metros para Milha: %.1f", valorM);
    break;
    
}
} while (opcao != 0);
}



