/*11) Fa�a um programa que receba dois n�meros e imprima o menor dos dois.*/

#include <stdio.h>

int main (){
	//Declara��o de vari�veis
	int num1, num2;
	
	//Entrada de dados - informa 2 n�meros
	printf("Insira o primeiro numero: ");
	scanf("%i", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%i", &num2);
	
	//Processamento e Sa�da de dados - compara e imprime o menor numero
	if (num1 < num2){
		printf("O menor numero e %i", num1);
	} else {
		printf("O menor numero e %i", num2);
	}
	
	return 0;
}
