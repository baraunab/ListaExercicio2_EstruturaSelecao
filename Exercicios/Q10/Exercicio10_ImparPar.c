/*10) Fa�a um programa que receba um n�mero, verifique se este n�mero � par ou �mpar e imprima a mensagem.*/

#include <stdio.h>
#include <locale.h>

int main (){
	//Fun��o para usar caracteres da ling. portuguesa	
	setlocale(LC_ALL, "Portuguese");
	
	//Declara��o de vari�veis
	int num, op;
	
	//Entrada de dados - informa um n�mero
	printf("Insira um n�mero: ");
	scanf("%i", &num);
	
	//Processamento e sa�da de dados - verifica se o numero � impar ou par
	op = num % 2;

	if (op == 0){
		printf("%i � par", num);
	} else {
		printf("%i � impar", num);
	}
	
	return 0;
}
