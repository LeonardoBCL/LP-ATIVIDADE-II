#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//Crie um programa que solicite do usuÃ¡rio dois nÃºmeros inteiros e informe qual destes nÃºmeros Ã© o maior e qual Ã© o menor



int main(){
    setlocale(LC_ALL, "portuguese");

//Variações:

int a = 0;
int b = 0;


//Q13:
    printf("Insira um valor: " );
    scanf("%d", &a);

    printf("Insira outro valor: ");
    scanf("%d", &b);


    if (a > b){
        printf("\n \t O maior valor é: %d, e o menor é: %d", a, b);
    }
    else {
        printf("\n \t O maior valor é: %d, e o menor é: %d", b, a);
    }

}