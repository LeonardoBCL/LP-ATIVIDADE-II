#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Você é um desenvolvedor de um sistema de segurança e precisa criar um algoritmo que, dado um código de acesso, 
permita ao usuário entrar em um edifício. 
O algoritmo deve continuar repetindo até 
que o usuário digite o código de acesso correto.*/




int main(){
    setlocale(LC_ALL, "portuguese");
    
    //Variações:
    int password = 0;



    //Questão:

    do{
    
    printf("\n Insira o código de acesso: ");
    scanf("%d", &password);

    if (password == 2002){
        printf("\n Acesso permitido.");
    }
    else{
        printf("\n Acesso negado.");
        
    }

    } while (password != 2002);

}