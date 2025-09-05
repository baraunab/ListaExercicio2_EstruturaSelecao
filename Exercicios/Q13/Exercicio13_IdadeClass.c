/*13) Fa�a um programa que receba a idade de uma pessoa e classifique-a seguindo o crit�rio a seguir:

	idade 		 Classifica��o
 0 a 2 anos 	 Rec�m-nascido
3 a 11 anos 	 crian�a
12 a 19 anos 	 adolescente
20 a 55 anos 	 adulto
Acima de 55 anos idoso*/

#include <stdio.h>
#include <locale.h>

int main (){
	//Fun��o para usar caracteres da ling. portuguesa	
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	int idade;
	
	//Entrada de dados - informa idade
	printf("Insira sua idade: ");
	scanf("%i", &idade);
	
	//Processamento e sa�da de dados - confere classifica��o da idade
	if(idade >= 0 && idade <= 2){
		printf("\n%i Anos - Rec�m-nascido", idade);
	} else if (idade >= 3 && idade <= 11){
		printf("\n%i Anos - Crian�a", idade);
	} else if (idade >= 12 && idade <= 19){
		printf("\n%i Anos - Adolescente", idade);
	} else if (idade >= 20 &&  idade <= 55){
		printf("\n%i Anos - Adulto", idade);
	} else if (idade > 50){
		printf("\n%i Anos - Idoso", idade);
	} else {
		printf("\nValor inv�lido!");
	}
	
	return 0;
}
