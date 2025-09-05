/*5) Fa�a um programa que calcule e imprima o sal�rio reajustado de um funcion�rio de acordo
com a seguinte regra:
	- sal�rios at� 300, reajuste de 50%;
	- sal�rios maiores que 300, reajuste de 30%.*/

#include <stdio.h>

int main (){
	//Declara��o de vari�veis
	float salario;
	
	//Entrada de dados - informa o sal�rio
	printf("Insira seu salario: ");
	scanf("%f", &salario);
	
	//Processamento/Sa�da de dados - confere se o sal�rio ser� reajustado e calcula o acr�scimo
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
