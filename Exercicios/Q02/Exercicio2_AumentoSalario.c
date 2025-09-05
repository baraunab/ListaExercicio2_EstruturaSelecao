/*2) Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferior a 500
reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do
salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento.*/

#include <stdio.h>

int main (){
	//Declaração de variáveis
	float salario, aumento_salario = 0;
	
	//Entrada de dados
	printf("INFORME O SALARIO: ");
	scanf("%f", &salario);
	
	if (salario < 500){
		//Processamento - calculo do aumento de salario
		aumento_salario = 1.3 * salario;
		
		//Saida de dados - informa o valor do salario reajustado		
		printf("\nSALARIO REAJUSTADO: R$%.2f", aumento_salario);
	} else 
		//Saida de dados - nao faz reajuste		
		printf("O funcionario nao tem direito a aumento");
	return 0;
}
