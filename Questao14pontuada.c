#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Implemente um programa que solicite do
usu�rio n�meros inteiros e verifique quantos n�meros s�o pares e quantos s�o �mpares. 
Al�m disto, 
deve ser exibido a m�dia aritm�tica de n�meros pares e impares. 
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

printf("Insira um n�mero: ");
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

printf("\n \t Quantidade de n�meros pares: %d ", contapar);
printf("\n \t Quantidade de n�meros impares: %d ", contaimpar);
printf("\n");
printf("\n \t M�dia aritm�tica dos n�meros pares: %1.f", mediapar);
printf("\n \t M�dia aritm�tica dos n�meros impares: %1.f", mediaimpar);










}