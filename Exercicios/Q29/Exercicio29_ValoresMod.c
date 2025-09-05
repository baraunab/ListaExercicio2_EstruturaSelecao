/*29) Efetuar a leitura de quatro número e apresentar os números que são divisíveis por 2 e 3.*/

#include <stdio.h>

int main (){
	//Declaracao de variaveis
	int a, b, c, d;
	
	//Entrada de dados
	printf("Informe dois numeros: ");
	scanf("%i %i %i %i", &a, &b, &c, &d);
	
	//Processamento e saida
	printf("\nDivisiveis por 2 e 3: ");
	if(a % 2 == 0){
		if (a % 3 == 0){
			printf("%i ", a);
		}
	}
	
	if(b % 2 == 0){
		if (b % 3 == 0){
			printf("%i ", b);
		}
	}
	
	if(c % 2 == 0){
		if (c % 3 == 0){
			printf("%i ", c);
		}
	}
	
	if(d % 2 == 0){
		if (d % 3 == 0){
			printf("%i ", d);
		}
	}
	
	return 0;
}
