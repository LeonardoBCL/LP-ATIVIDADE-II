#include<stdio.h>
#include <locale.h>
 
int main() {
 setlocale(LC_ALL, "");
 int num, contador, resultado = 0;
 
 printf("Digite um número: ");
 scanf("%d", &num);
 
 for (contador = 2; contador <= num / 2; contador++) {
    if (num % contador == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d é um número primo\n", num);
 else
    printf("%d não é um número primo\n", num);
 
 return 0;
}
