#include <stdio.h>
#include <stdlib.h>

//Recebe nota
//Nota maior ou igual a 9 : excelent
//nota entre 7 e 8.9: bom
//nota entre 5 e 6.9: razoavel
// nota menor que 5: insuficiente


int main(){


//Var:
float nota = 0;

//Q:

printf("\n Insira a sua nota: ");
scanf("%f", &nota);

if (nota>9){
	printf("\n Nota excelente");
}

else if(nota>7 && nota < 8.9){

	printf("\n Boa nota.");
}

else if (nota>5 && nota< 6.9){
	printf("\n Nota razoavel.");
}
else if (nota < 5) {
	printf("\n Nota insuficiente.");
}


}
