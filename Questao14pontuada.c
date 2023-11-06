#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Implemente um programa que solicite do
usuário números inteiros e verifique quantos números são pares e quantos são ímpares. 
Além disto, 
deve ser exibido a média aritmética de números pares e impares. 
Deve-se interromper a leitura dos dados quando for digitado um valor negativo.
*/

int main(){
    setlocale(LC_ALL, "portuguese");

//Variacoes:
int numero = 0;
int contapar = 0;
int contaimpar = 0;
int somapar = 0;
int somaimpar = 0;
float mediapar = 0;
float mediaimpar = 0;

//Q14:

do{

printf("Insira um número: ");
scanf("%d", &numero);

if (numero % 2 == 0){
    somapar += numero;
    contapar++;
    mediapar = somapar / contapar;
}
else if (numero % 2 == 1) {
    somaimpar += numero;
    contaimpar++;
    mediaimpar = somaimpar / contaimpar;
}



} while (numero > 0);

printf("\n \t Quantidade de números pares: %d ", contapar);
printf("\n \t Quantidade de números impares: %d ", contaimpar);
printf("\n");
printf("\n \t Média aritmética dos números pares: %1.f", mediapar);
printf("\n \t Média aritmética dos números impares: %1.f", mediaimpar);










}