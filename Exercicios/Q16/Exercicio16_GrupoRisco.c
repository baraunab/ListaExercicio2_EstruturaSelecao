/*16) Uma companhia de seguros tem tr�s categorias de seguros baseadas na idade e na
ocupa��o do segurado. Somente pessoas com pelo menos 18 anos e n�o mais de 70 anos
podem adquirir ap�lices de seguros. Quanto �s classes de ocupa��es foram definidos tr�s
grupos de risco. A tabela a seguir fornece as categorias em fun��o da caixa de idade e do
grupo de risco:
Idade	Baixo 	M�dio 	Alto
18 a 24   7 	  8	 	 9
25 a 40   4 	  5 	 6
41 a 70   1 	  2 	 3

Fa�a um programa que receba a idade e o grupo de risco (b, m ou a) e
determine e imprima o c�digo do seguro.*/

#include <stdio.h>

int main (){
	//Declara��o de vari�veis
	int idade;
	char grupo;
	
	//Entrada de dados - informa idade e grupo de risco
	printf("Informe sua idade: ");
	scanf("%i", &idade);
	
	printf("Informe o grupo de risco (b, m ou a): ");
	scanf("%s", &grupo);
		
	//Processamento e sa�da - compara idade e grupo de risco
	printf("\n%i anos - ", idade);

	if (idade >= 18 && idade <= 24){
	
		if (grupo == 'b'){
			printf("Grupo de Risco Baixo: 7");
		} else if(grupo == 'm'){
			printf("Grupo de Risco Medio: 8");
		} else if(grupo == 'a'){
			printf("Grupo de Risco Alto: 9");
		}
			
	} else if (idade >= 25 && idade <= 40){
	
		if (grupo == 'b'){
			printf("Grupo de Risco Medio: 5");
		} else if (grupo == 'm'){
			printf("Grupo de Risco Medio: 5");
		} else if (grupo == 'a'){
			printf("Grupo de Risco Alto: 6");	
		}
			
	} else if (idade >= 41 && idade <= 70){
	
		if (grupo == 'b'){
			printf("Grupo de Risco Baixo: 1");
		} else if (grupo == 'm'){
			printf("Grupo de Risco Medio: 2");
		} else if (grupo == 'a'){
			printf("Grupo de Risco Alto: 3");
		}
	
	} else {
		printf("\nValores inv�lidos!");
	}
	
	return 0;
}
