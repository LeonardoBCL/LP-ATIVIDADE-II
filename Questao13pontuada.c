#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Crie um programa que solicite do usuário dois números inteiros e informe qual destes números é o maior e qual é o menor



int main(){
    setlocale(LC_ALL, "portuguese");

//Varia��es:

int a = 0;
int b = 0;


//Q13:
    printf("Insira um valor: " );
    scanf("%d", &a);

    printf("Insira outro valor: ");
    scanf("%d", &b);


    if (a > b){
        printf("\n \t O maior valor �: %d, e o menor �: %d", a, b);
    }
    else {
        printf("\n \t O maior valor �: %d, e o menor �: %d", b, a);
    }

}