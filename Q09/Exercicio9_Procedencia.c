/*9) Faça um programa que receba o preço de um produto e o seu código de orígem e imprima
a sua procedência. A procedência obedece a seguinte tabela:

Código 		Procedência
   1 			Sul
   2 		   Norte
   3 		   Leste
   4 		   Oeste
5 ou 6 		 Nordeste
7.8 ou 9 	  Sudeste
10 até 20   Centro-Oeste
21 até 30 	  Nordeste*/
#include <stdio.h>

int main (){
	//Declaração de variáveis
	float preco_prod;
	int cod_origem;
	
	//Entrada de dados - informa perço e origem do produto;
	printf("Insira o preco do produto: ");
	scanf("%f", &preco_prod);
	printf("Informe o codigo de origem (1 - 30): ");
	scanf("%i", &cod_origem);
	
	//Processamento e saída de dados - imprime a procedência
	printf("\nPreco: R$%.2f \nProcedencia: ", preco_prod);	
	
	if (cod_origem == 1){
		printf("Sul");
	} else if (cod_origem == 2){
		printf("Norte");
	} else if (cod_origem == 3) {
		printf("Leste");
	} else if (cod_origem == 4) {
		printf("Oeste");
	} else if (cod_origem == 5 || cod_origem == 6){
		printf("Nordeste");
	} else if (cod_origem >= 7 && cod_origem <= 9){
		printf("Sudeste");
	} else if (cod_origem >=  10 && cod_origem <= 20){
		printf("Centro-Oeste");
	} else if (cod_origem > 20 && cod_origem <=  30){
		printf("Nordeste");
	} else {
		printf("Valor invalido");
	}
	
	return 0;
}
