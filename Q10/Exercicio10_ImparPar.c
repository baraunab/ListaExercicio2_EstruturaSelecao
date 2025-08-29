/*10) Faça um programa que receba um número, verifique se este número é par ou ímpar e imprima a mensagem.*/

#include <stdio.h>
#include <locale.h>

int main (){
	//Função para usar caracteres da ling. portuguesa	
	setlocale(LC_ALL, "Portuguese");
	
	//Declaração de variáveis
	int num, op;
	
	//Entrada de dados - informa um número
	printf("Insira um número: ");
	scanf("%i", &num);
	
	//Processamento e saída de dados - verifica se o numero é impar ou par
	op = num % 2;

	if (op == 0){
		printf("%i é par", num);
	} else {
		printf("%i é impar", num);
	}
	
	return 0;
}
