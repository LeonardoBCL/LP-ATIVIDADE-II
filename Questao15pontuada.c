#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Implemente um programa que converta 
valores entre diferentes unidades de medida, como por exemplo, 
quilômetros para milhas e Celsius para Fahrenheit.
 O programa deve permitir ao usuário escolher a conversão desejada e repetir o processo para vários valores. 
 Utilize o switch case  e continue mostrando as opções para conversão até o usuário digite 0 para sair do programa.
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
printf("\n \t 2. Quilômetros para Milhas.");
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
    printf("\n Insira um valor em Quilômetros: ");
    scanf("%f", &valorQ);
    valorM = valorQ / 1.609;
    printf("\n Valor Quilômetros para Milha: %.1f", valorM);
    break;
    
}
} while (opcao != 0);
}



