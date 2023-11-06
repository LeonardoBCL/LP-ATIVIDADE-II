#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*Desenvolva um programa que solicite ao usuário uma quantidade de notas e peça para digitar cada nota. 
O programa deve calcular e exibir a média das notas digitadas. Utilize o for para repetir o processo de solicitação das notas.*/



int main(){
    setlocale(LC_ALL, "portuguese");

    //Variaveis:

    float nota = 0;
    int quantidadenota = 0;
    int contador = 0;
    int soma = 0;
    float media = 0;
    int contavez = 0;
    int corrige = 0;
    
   
    //Questão

    printf("Quantas notas você deseja inserir?");
    scanf("%d", &quantidadenota);
    corrige = quantidadenota + 1;

    for (contador = 1; contador < corrige; contador ++) {
    
    contavez++;
    printf("Insira a %dª nota:", contavez);
    scanf("%f", &nota);

    soma += nota;
    media = soma / contador;

    }

   
    printf("Média das notas: %.1f", media);

}