#include<stdio.h>
#include <locale.h>
 
int main() {
 setlocale(LC_ALL, "");
 int num, contador, resultado = 0;
 
 printf("Digite um n�mero: ");
 scanf("%d", &num);
 
 for (contador = 2; contador <= num / 2; contador++) {
    if (num % contador == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d � um n�mero primo\n", num);
 else
    printf("%d n�o � um n�mero primo\n", num);
 
 return 0;
}
