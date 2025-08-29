/*13) Faça um programa que receba a idade de uma pessoa e classifique-a seguindo o critério a seguir:

	idade 		 Classificação
 0 a 2 anos 	 Recém-nascido
3 a 11 anos 	 criança
12 a 19 anos 	 adolescente
20 a 55 anos 	 adulto
Acima de 55 anos idoso*/

#include <stdio.h>
#include <locale.h>

int main (){
	//Função para usar caracteres da ling. portuguesa	
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	int idade;
	
	//Entrada de dados - informa idade
	printf("Insira sua idade: ");
	scanf("%i", &idade);
	
	//Processamento e saída de dados - confere classificação da idade
	if(idade >= 0 && idade <= 2){
		printf("\n%i Anos - Recém-nascido", idade);
	} else if (idade >= 3 && idade <= 11){
		printf("\n%i Anos - Criança", idade);
	} else if (idade >= 12 && idade <= 19){
		printf("\n%i Anos - Adolescente", idade);
	} else if (idade >= 20 &&  idade <= 55){
		printf("\n%i Anos - Adulto", idade);
	} else if (idade > 50){
		printf("\n%i Anos - Idoso", idade);
	} else {
		printf("\nValor inválido!");
	}
	
	return 0;
}
