/*4) Fa�a um programa que receba a idade de uma pessoa e imprima mensagem de maioridade ou n�o.*/

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	int idade;
	
	//Entrada de dados - pede a idade
	printf ("Informe sua idade: ");
	scanf("%d", &idade);
	
	//Processamento/sa�da de dados - compara o valor e informa se � maior ou menor de idade
	if (idade > 0 && idade < 18 ){
		printf("Menor de idade");
	} else if(idade >= 18){
		printf("Maior de idade");
	} else {
		printf("Valor invalido");
	}
	
	return 0;
}
