/*4) Faça um programa que receba a idade de uma pessoa e imprima mensagem de maioridade ou não.*/

#include <stdio.h>

int main(){
	//Declaração de variáveis
	int idade;
	
	//Entrada de dados - pede a idade
	printf ("Informe sua idade: ");
	scanf("%d", &idade);
	
	//Processamento/saída de dados - compara o valor e informa se é maior ou menor de idade
	if (idade > 0 && idade < 18 ){
		printf("Menor de idade");
	} else if(idade >= 18){
		printf("Maior de idade");
	} else {
		printf("Valor invalido");
	}
	
	return 0;
}
