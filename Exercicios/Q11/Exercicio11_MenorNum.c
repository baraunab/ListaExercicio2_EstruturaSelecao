/*11) Faça um programa que receba dois números e imprima o menor dos dois.*/

#include <stdio.h>

int main (){
	//Declaração de variáveis
	int num1, num2;
	
	//Entrada de dados - informa 2 números
	printf("Insira o primeiro numero: ");
	scanf("%i", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%i", &num2);
	
	//Processamento e Saída de dados - compara e imprime o menor numero
	if (num1 < num2){
		printf("O menor numero e %i", num1);
	} else {
		printf("O menor numero e %i", num2);
	}
	
	return 0;
}
