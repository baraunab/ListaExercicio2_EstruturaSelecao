/*21) Faça um programa que receba uma frase, conte e imprima o número de vogais desta frase.*/

#include <stdio.h>

int main (){
	char frase[100];
	
	printf("Insira uma frase: ");
	fgets(frase, 100, stdin);
	
	printf("\nFrase: %s", frase);
	
	
	
	return 0;
}
