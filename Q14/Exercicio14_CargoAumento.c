/*14) Fa�a um programa que receba o c�digo correspondente ao cargo de um funcion�rio e
imprima seu cargo e o percentual de aumento ao qual este funcion�rio tem direito seguindo a tabela:

C�digo 		Cargo 		Percentual
1 		Escritur�rio 	50,00%
2 		Secret�rio 		35,00%
3 		Caixa 			20,00%
4 		Gerente 		10,00%
5 		Diretor 		N�o tem aumento*/

#include <stdio.h>
#include <locale.h>

int main (){
	//Fun��o para usar caracteres da ling. portuguesa	
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	int cod;
	
	//Entrada de dados - informa o codigo
	printf("Insira o c�digo (1 � 5): ");
	scanf("%i", &cod);
	
	//Processamento e sa�da - informa o cargo e percentual de acordo com o codigo selecionado
	printf("---------------------------\n\n");
	switch(cod){
		case 1: 
			printf("C�digo 1 \nCargo: Escritu�rio \nPercentual de aumento: 50%%");
			break;
			
		case 2: 
			printf("C�digo 2 \nCargo: Secret�rio \nPercentual de aumento: 35%%");
			break;
		
		case 3: 
			printf("C�digo 3 \nCargo: Caixa \nPercentual de aumento: 20%%");
			break;
		
		case 4:
			printf("C�digo 4 \nCargo: Gerente \nPercentual de aumento: 10%%");
			break;
		
		case 5:
			printf("C�digo 5 \nCargo: Diretor \nPercentual de aumento: N�o tem aumento");
			break;
	
		default: printf("C�digo inv�lido");
		
	}	
	
	return 0;
}
