/*5) Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo
com a seguinte regra:
	- salários até 300, reajuste de 50%;
	- salários maiores que 300, reajuste de 30%.*/

#include <stdio.h>

int main (){
	//Declaração de variáveis
	float salario;
	
	//Entrada de dados - informa o salário
	printf("Insira seu salario: ");
	scanf("%f", &salario);
	
	//Processamento/Saída de dados - confere se o salário será reajustado e calcula o acréscimo
	if (salario > 0 && salario <= 300){
		salario *= 1.5;
		printf("Salario com reajuste de 50%%: %.2f", salario);
	} else if (salario > 300){
		salario *= 1.3;
		printf("Salario com reajuste de 30%%: %.2f", salario);
	} else	{
		printf("Valor invalido!!!");
	}
	
	return 0;
}
