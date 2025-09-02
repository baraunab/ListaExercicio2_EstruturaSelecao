/*24) Escreva um programa que leia três valores inteiros e mostre-os em ordem crescente.*/

#include <stdio.h>

int main (){
	//Declaracao de variaveis
	int valor1, valor2, valor3;

	//Entrada de dados
	printf("Informe o primeiro valor: ");
	scanf("%i", &valor1);
	
	printf("Informe o segundo valor: ");
	scanf("%i", &valor2);
	
	printf("Informe o terceiro valor: ");
	scanf("%i", &valor3);
	
	//Processamento e saida de dados
	if (valor1 < valor2 && valor1 < valor3){
		if (valor3 < valor2)
			printf("Ordem Crescente: %d %d %d", valor1, valor3, valor2);
		else 
			printf("Ordem Crescente: %d %d %d", valor1, valor2, valor3);
	} else if (valor2 < valor1 && valor2 < valor3){
		if (valor1 < valor3)
			printf("Ordem Crescente: %d %d %d", valor2, valor1, valor3);
		else 
			printf("Ordem Crescente: %d %d %d", valor2, valor3, valor1);
	} else if (valor3 < valor1 && valor3 < valor2){
		if (valor2 < valor1)
			printf("Ordem Crescente: %d %d %d", valor3, valor2, valor1);
		else 
			printf("Ordem Crescente: %d %d %d", valor3, valor1, valor2);
	}
	
	return 0;
}
