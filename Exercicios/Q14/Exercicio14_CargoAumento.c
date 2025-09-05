/*14) Faça um programa que receba o código correspondente ao cargo de um funcionário e
imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito seguindo a tabela:

Código 		Cargo 		Percentual
1 		Escriturário 	50,00%
2 		Secretário 		35,00%
3 		Caixa 			20,00%
4 		Gerente 		10,00%
5 		Diretor 		Não tem aumento*/

#include <stdio.h>
#include <locale.h>

int main (){
	//Função para usar caracteres da ling. portuguesa	
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	int cod;
	
	//Entrada de dados - informa o codigo
	printf("Insira o código (1 à 5): ");
	scanf("%i", &cod);
	
	//Processamento e saída - informa o cargo e percentual de acordo com o codigo selecionado
	printf("---------------------------\n\n");
	switch(cod){
		case 1: 
			printf("Código 1 \nCargo: Escrituário \nPercentual de aumento: 50%%");
			break;
			
		case 2: 
			printf("Código 2 \nCargo: Secretário \nPercentual de aumento: 35%%");
			break;
		
		case 3: 
			printf("Código 3 \nCargo: Caixa \nPercentual de aumento: 20%%");
			break;
		
		case 4:
			printf("Código 4 \nCargo: Gerente \nPercentual de aumento: 10%%");
			break;
		
		case 5:
			printf("Código 5 \nCargo: Diretor \nPercentual de aumento: Não tem aumento");
			break;
	
		default: printf("Código inválido");
		
	}	
	
	return 0;
}
